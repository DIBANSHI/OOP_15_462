class complex
{
    int real, imag;
public:
    void input();
    void display();
};
void complex::input() 
{
    cout << "Enter real and imaginary parts: ";
    cin >> real >> imag;
}
void complex::display()
{
    cout << "Complex number: " << real << " + " << imag << "i" << endl;
}