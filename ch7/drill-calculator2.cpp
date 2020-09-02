#include "../std_lib_facilities.h"

const char number='8';      // t.kind == number means that t is a number Token
const char quit='q';        // t.kind == quit means that t is a quit Token
const char print=';';       // t.kind == print means that t is a print Token
const string prompt=">";    // used to indicate prompt for user input
const string result="=";    // used to indicate that what follow is a result

//------------------------------------------------------------------------------

class Token{ // 
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value 
    Token(char ch)    // make a Token from a char
        :kind(ch), value(0) { }
    Token(char ch, double val)     // make a Token from a char and a double
        :kind(ch), value(val) { }
};

//------------------------------------------------------------------------------

class Token_stream {
public:
    Token_stream();             // make a Token_stream that reads from cin
    Token get();                // get a Token 
    void putback(Token t);      // put a Token back
    void ignore(char c);        // discard characters up to and including a c
private:
    bool full;        // is there a Token in the buffer?
    Token buffer;     // here is where we keep a Token put back using putback()
};

//------------------------------------------------------------------------------

// The constructor just sets full to indicate that the buffer is empty:
Token_stream::Token_stream()

    :full(false), buffer(0)    // no Token in buffer
{
}

//------------------------------------------------------------------------------

// The putback() member function puts its argument back into the Token_stream's buffer:
void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}

//------------------------------------------------------------------------------

void Token_stream::ignore(char c)
    // c represents the kind of Token
{
    // first look in buffer:
    if (full && c==buffer.kind){
        full = false;
        return;
    } 
    full = false;

    // now search input:
    char ch=0;
    while (cin>>ch)
        if (ch==c) return;
}

//------------------------------------------------------------------------------

Token Token_stream::get() 
{
    if (full) {       // check if we have a Token ready
        full = false;
        return buffer;
    }

    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
    case print:    
    case quit:    
    case '(': 
    case ')': 
    case '+': 
    case '-': 
    case '*': 
    case '/': 
    case '%':
        return Token{ch};   // let each character represent itself
    case '.':               // a floating point literal can start with a dot
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9': // numeric literal
    {
        cin.putback(ch);         // put digit back into the input stream
        double val;
        cin >> val;              // read a floating-point number
        return Token{number, val};   
    }
    default:
        error("Bad token");
    }
}

//------------------------------------------------------------------------------

Token_stream ts;        // provides get() and putback() 

//------------------------------------------------------------------------------

double expression();    // declaration so that primary() can call expression()

//------------------------------------------------------------------------------

// deal with numbers and parentheses
double primary()
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':    // handle '(' expression ')'
    {
        double d = expression();
        t = ts.get();
        if (t.kind != ')') error("')' expected"); 
        return d;
    }
    case number:            
        return t.value;  // return the number's value
    case '-':           // For negative unary numbers  
        return - primary();   
    case '+':           // For positive unary numbers  
        return - primary();      
    default:
        error("primary expected");
    }
}

//------------------------------------------------------------------------------

// deal with *, /, and %
double term()
{
    double left = primary();
    Token t = ts.get();        // get the next token from token stream

    while (true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break; 
        case '/':
        {
            double d = primary();
            if (d == 0) error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        case '%':
        {
            double d = primary();
            if (d == 0) error("divide by zero");
            left = fmod(left,d);
            t = ts.get();
            break;
        }
        default:
            ts.putback(t);     // put t back into the token stream
            return left;
        }
    }
}

//------------------------------------------------------------------------------

// deal with + and -
double expression()
{
    double left = term();      // read and evaluate a Term 
    Token t = ts.get();        // get the next token from token stream

    while (true) {
        switch (t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract 
            t = ts.get();
            break;
        default:
            ts.putback(t);     // put t back into the token stream
            return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

void clean_up_mess()    
{               
    ts.ignore(print);
}

//------------------------------------------------------------------------------

void calculate()    // expression evaluation loop
{               
    while (cin)
    try {
        cout << prompt;    
        Token t = ts.get();
        while (t.kind == print) t=ts.get(); // first discard all "prints"      
        if (t.kind == quit) return;
        ts.putback(t);
        cout << result << expression() << '\n';
    }
    catch (exception& e) {
        cerr << e.what() << '\n';
        clean_up_mess();
    }
}

//------------------------------------------------------------------------------

void instructions()
{
    cout << "SIMPLE CALCULATOR\n\n";
    cout << "Please enter expressions using floating-point numbers and end with ;.\n";
    cout << "The following operators are available: + - * / %, and () as well.\n";
    cout << "To quit type q, expression example: 5+8*(3+3);\n";
}

//------------------------------------------------------------------------------

int main()
try
{   
    //instructions();
    calculate();
    keep_window_open();
    return 0;
}
catch (exception& e) {
    cerr << e.what() << '\n';
    keep_window_open("~~");
    return 1;
}
catch (...) {
    cerr << "exception!\n";
    keep_window_open("~~");
    return 2;
}

//------------------------------------------------------------------------------