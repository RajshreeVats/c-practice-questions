class base {
protected:
void myfun1() {cout<<"In Base myfun1(); “:}
void myfun2() {cout<"In Base myfun20; “;}
}:
class derived: protected base{
public:
void myfun2(){
base::myfun2(); }
}:
int main() {
derived d;
d.myfun2();
d.myfun1();
return 0;
}