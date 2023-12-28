//-------------------------------------------------
//-------------------------------------------------
//              FRIEND FUNCTIONS
//-------------------------------------------------
//-------------------------------------------------
//class A;
//
//class B{
//    int b;
//public:
//    void setb(int b){
//        this->b=b;
//    }
//    friend void swap(A,B);
//    int getb(void){
//        return b;
//    }
//};
//class A{
//    int a;
//public:
//    void seta(int a){
//        this->a=a;
//    }
//    friend class B;
//    friend void swap(A , B);
//    int geta(){
//        return a;
//    }
//};
//-------------------------------------------------
//-------------------------------------------------
//              Static data members
//-------------------------------------------------
//-------------------------------------------------
//class thing {
//    static int count;
//    int ok;
//public:
//    thing() {
//        ok=0;
//    }
//    void set(int i) {
//        ok=ok+i;
//        count=count+i;
//    }
//    int getok() {
//        return ok;
//    }
//    int getcount() {
//        return count;
//    }
//};
//int thing:: count = 0;
//
//int main()
//{
//    const int x=4;
//    thing a[x];
//    int b;
//
//    for(int i=0; i<x; i++) {
//        cin>>b;
//        a[i].set(b);
//    }
//
//    for(int i=0; i<x; i++) {
//        cout<<a[i].getok()<<endl;
//    }
//    cout<<a[x].getcount();
//    return 0;
//}
//-------------------------------------------------
//-------------------------------------------------
//          COMPOSITIONS AND DELEGATIONS
//-------------------------------------------------
//-------------------------------------------------
//-------------------------------------------------
//   Composition is not independent relationship
//-------------------------------------------------
//class A {
//public:
//    int a;
//    void seta(int a) {
//        this->a=a;
//    }
//    int geta() {
//        return a;
//    }
//    void asee() {
//        cout<<"A : "<<a<<endl;
//    }
//};
//
//class B {
//    int b;
//    //Composition
//    A a;
//public:
//    void setb(int b,int c) {
//        this->b=b;
//        a.seta(c);
//    }
//    int getb() {
//        return b;
//    }
//    void getab() {
//    //Delegation
//        a.asee();
//        cout<<"B : "<<b<<endl;
//    }
//};
//-------------------------------------------------
//-------------------------------------------------
//          ABSTRACT CLASS OR INTERFACE
//-------------------------------------------------
//-------------------------------------------------
//   Pure virtual function and override functions
//-------------------------------------------------
//class A {
//public:
//    void see() {
//        cout<<"--A--"<<endl;
//    }
//};
//class B : public A {
//public:
//    void see() {
//        cout<<"--B--"<<endl;
//    }
//};
//-------------------------------------------------
//        Important question on override
//-------------------------------------------------
//class A {
//public:
//    virtual void see() {
//    //if no virtual then it return this
//        cout<<"--A--"<<endl;
//    }
//};
//class B : public A {
//public:
//    void see() {
//    //if virtual then it return this
//        cout<<"--B--"<<endl;
//    }
//};
//
//int main()
//{
//    B b;
//    A*a=&b;
//    a->see();
//    return 0;
//}
//-------------------------------------------------
//        Simple pure virtual function
//-------------------------------------------------
//class A{
//public:
//    void funct(){
//        cout<<"A function "<<endl;
//    }
//    virtual int showA()=0;
//};
//
//class B : public A{
//public:
//    int showA()override{
//        return 1;
//    }
//};
//-------------------------------------------------
//-------------------------------------------------
//                 AGGREGATION
//-------------------------------------------------
//-------------------------------------------------
//-------------------------------------------------
// Reference to obj of one class in an other class
//-------------------------------------------------
//class address {
//public:
//    string street;
//    int houseno;
//    address(string str, int ho) {
//        street=str;
//        houseno=ho;
//    }
//};
//
//class name {
//public:
//    string name1;
//    string name2;
//    name(string n1, string n2) {
//        name1=n1;
//        name2=n2;
//    }
//};
//
//class bio {
//private:
//    name* na;
//    int id;
//    address* adr;
//public:
//    bio(name* n, int i, address* ad) {
//        na=n;
//        id=i;
//        adr=ad;
//    }
//    void getdata() {
//        cout<<"Name : "<<na->name1<<" "<<na->name2<<endl;
//        cout<<"id : "<<id<<endl;
//        cout<<"Address : "<<adr->street;
//        cout<<" "<<adr->houseno<<endl;
//    }
//};
//-------------------------------------------------
//-------------------------------------------------
//             OPERATOR OVERLOADING
//-------------------------------------------------
//-------------------------------------------------
//-------------------------------------------------
//          INSTEAD OF OBJ1.ADD(OBJ2)
//         You can obj1 = obj1 + obj2;
//-------------------------------------------------
//-------------------------------------------------
//       Ostream and istream operator overloading
//-------------------------------------------------
//class A {
//    int a, b;
//public:
//    friend ostream & operator << (ostream &output , A aa);
//    friend istream & operator >> (istream &input , A bb);
//};
//
//ostream & operator << (ostream &output, A aa) {
//    output<<"Value in A : "<<aa.a<<endl;
//    output<<"Value in B : "<<aa.b<<endl;
//    return output;
//}
//
//istream & operator >> (istream &input,A bb) {
//    cout<<"Enter value in A : "<<endl;
//    input>>bb.a;
//    cout<<"Enter value in B : "<<endl;
//    input>>bb.b;
//    return input;
//}
//-------------------------------------------------
//       Assignment operator overloading
//-------------------------------------------------
//class A {
//    int a;
//public:
//
//    void set(int a1) {
//        a=a1;
//    }
//    int get(void) {
//        return a;
//    }
//    A operator = (A &obj){
//        a=obj.a;
//        return obj;
//    }
//};
//-------------------------------------------------
//-------------------------------------------------
//                 ABSTRACTION
//-------------------------------------------------
//-------------------------------------------------
//      Only essentials or required detials
//    were provided rest of were remain hidden
//-------------------------------------------------
//-------------------------------------------------
//   POLYNOMIAL CLASS FOR ADDING polynomials etc
//-------------------------------------------------
//#include <iostream>
//using namespace std;
//
//class POLYNOMIAL{
//public:
//    int *arr1;
//    int *arr2;
//    int capacity1;
//    int capacity2;
//    POLYNOMIAL(int capacity1,int capacity2){
//        arr1 = new int[capacity1];
//        arr2 = new int[capacity2];
//        this -> capacity1 = capacity1;
//        this -> capacity2 = capacity2;
//    }
//    void setPOLY(){
//        cout << "Enter polynomial NO1 -- > " << endl;
//        for(int i = 0 ; i < capacity1 ; i++){
//            cin >> arr1[i];
//        }
//        cout << "Enter polynomial NO2 -- > " << endl;
//        for(int i = 0 ; i < capacity2 ; i++){
//            cin >> arr2[i];
//        }
//    }
//    int* addTWOPOLY(){
//        int size = max(capacity1,capacity2);
//        int *temp_arr;
//        temp_arr = new int[size];
//        if(capacity1 > capacity2){
//            for(int i = 0 ; i < capacity1 ; i++){
//                temp_arr[i] = arr1[i];
//            }
//            for(int i = 0 ; i < size ; i++){
//                temp_arr[i] += arr2[i];
//            }
//        }
//        else{
//            for(int i = 0 ; i < capacity2 ; i++){
//                temp_arr[i] = arr2[i];
//            }
//            for(int i = 0 ; i < size ; i++){
//                temp_arr[i] += arr1[i];
//            }
//        }
//        for(int i = 0 ; i < size ; i++){
//            cout << temp_arr[i] << " ";
//        }
//        cout << endl;
//        return temp_arr;
//    }
//    ~POLYNOMIAL(){
//        delete [] arr1;
//        delete [] arr2;
//    }
//};
//
//int main() {
//    int arr1[] = {5,6,7};
//    int arr2[] = {1,2,3,4};
//
//    int size1 = sizeof(arr1) / sizeof(arr1[0]);
//    int size2 = sizeof(arr2) / sizeof(arr2[0]);
//    int size = max(size1,size2);
//
//    POLYNOMIAL p1(size1,size2);
//    p1.setPOLY();
//
//    int *arr;
//    arr = new int[size];
//    arr = p1.addTWOPOLY();
//
//    for(int i = 0 ; i < size ; i++){
//        cout << arr[i] << " ";
//    }
//    return 0;
//}
//-------------------------------------------------
//                  SHAPE CLASS
//-------------------------------------------------
//class shape{
//    string name;
//    string color;
//public:
//    virtual int calculateArea()=0;
//};
//
//class rectangle : public shape {
//    double length;
//    double width;
//public:
//    rectangle(double length,double width){
//        this -> length = length;
//        this -> width = width;
//    }
//    int calculateArea(){
//        return length * width;
//    }
//};
//
//class circle : public shape {
//    double radius;
//    double PI = 3.14;
//public:
//    circle(double radius){
//        this -> radius = radius;
//    }
//    int calculateArea(){
//        return radius * radius * PI;
//    }
//};
//-------------------------------------------------
//-------------------------------------------------
//                 ENCAPSULATION
//-------------------------------------------------
//-------------------------------------------------
//       Binding data into one and accessing
//         it from accessors and mutators
//-------------------------------------------------
//-------------------------------------------------
//         RECTANGLE SET AND GET FUNCTIONS
//-------------------------------------------------
//class rectangle {
//    double width;
//    double length;
//public:
//    void setdata(double, double);
//    double getarea()const;
//    double getlen()const {
//        return length ;
//    }
//};
//
//void rectangle:: setdata(double wid,double len)
//{
//    if(wid>=0&&len>=0)
//    {
//        width = wid;
//        length = len;
//    }
//    else {
//        cout<<"Invalid input"<<endl;
//        exit(EXIT_FAILURE);
//    }
//}
//
//double rectangle::getarea()const
//{
//    return width*length;
//}
//-------------------------------------------------
//                 Date VALIDATION
//-------------------------------------------------
//class Date{
//private:
//    string day = "";
//    int date = 0;
//    int month = 0;
//    int year = 0;
//public:
//    Date(string day,int date,int month,int year){
//        if(isvalidDAY(day)){
//            this -> day = day;
//        }
//        if(isvalidDATE(date)){
//            this -> date = date;
//        }
//        if(isvalidMONTH(month)){
//            this -> month = month;
//        }
//           this -> year = year;
//    }
//
//    bool isvalidDAY(string day){
//        if(day == "monday") return 1;
//        else if(day == "tuesday") return 1;
//        else if(day == "wednesday") return 1;
//        else if(day == "thursday") return 1;
//        else if(day == "friday") return 1;
//        else if(day == "saturday") return 1;
//        else if(day == "sunday") return 1;
//        return 0;
//    }
//    bool isvalidDATE(int date){
//        if(date <= 31){
//            if(date > 0) return 1;
//            return 0;
//        }
//        return 0;
//    }
//    bool isvalidMONTH(int month){
//        if(month <= 12){
//            if(date > 0) return 1;
//            return 0;
//        }
//        return 0;
//    }
//
//    void getDATE(){
//        cout << day << " " << date << " " << month << " " << year ;
//    }
//};
//-------------------------------------------------
//        Employee Salary incrementation
//-------------------------------------------------
//class Employee{
//private:
//    string name;
//    int emp_id;
//    double salary;
//public:
//    Employee(string name,int emp_id){
//        this -> name = name;
//        this -> emp_id = emp_id;
//        salary = 10000;
//    }
//
//    void incrementSALARY(int performance_rate){
//        if(performance_rate == 3){
//            salary += 500;
//        }
//        if(performance_rate == 4){
//            salary += 1000;
//        }
//        if(performance_rate == 5){
//            salary += 2000;
//        }
//        else cout << "No increment !! " <<  endl;
//    }
//
//    void getEMPLOYEEdata(){
//        cout << "Name : " << name << endl;
//        cout << "Emp_id : " << emp_id << endl;
//        cout << "Salary : " << salary << endl;
//    }
//};
//-------------------------------------------------
//                  BANKACCOUNT
//-------------------------------------------------
//class BankAccount{
//private:
//    int account_number;
//    double balance;
//public:
//    BankAccount(int account_number){
//        this -> account_number = account_number;
//        balance = 0.00;
//    }
//
//    void depositBAL(int account_number,int balance){
//        if(this -> account_number == account_number ) this -> balance += balance;
//        return;
//    }
//
//    double checkBalance(int account_number){
//        if(this -> account_number == account_number ) return balance;
//        else{
//            cout << "Wrong account Number added !! " << endl;
//            return 0.00;
//        }
//    }
//
//    void widthdrawBAL(int account_number,int balance){
//        if(this -> account_number == account_number ){
//            if(this -> balance >= balance) this -> balance -= balance ;
//        }
//        else
//            cout << "Wrong account Number added !! " << endl;
//        return;
//    }
//};
//-------------------------------------------------
//                  PERSON CLASS
//-------------------------------------------------
//class Person {
//private:
//    string name;
//    int age;
//public:
//    void setValue(string name, int age) {
//        this -> name = name;
//        this -> age = age;
//    }
//    void getValue() {
//        cout << "The name of the person is " << name << " and the age is " << age << ".";
//    }
//};
//-------------------------------------------------
//                   CIRCLE AREA
//-------------------------------------------------
//class Circle{
//private:
//    int radius;
//    double PI = 3.14;
//public:
//    void setRadius(int radius){
//        this -> radius = radius ;
//    }
//    double calculateCIRCLEarea(){
//        return radius * 3.14 ;
//    }
//};
//-------------------------------------------------
//                   RECTANGLE AREA
//-------------------------------------------------
//class Rectangle {
//    public:
//    int length;
//    int breadth;
//    int getArea(){
//        return length * breadth ;
//    }
//};
//-------------------------------------------------
//-------------------------------------------------
//-------------------------------------------------
//             CONSTRUCTOR AND DESTRUCTOR
//-------------------------------------------------
//-------------------------------------------------
//class A {
//public:
//    A() {
//        cout<<"A(){}"<<endl;
//    }
//    ~A() {
//        cout<<"~A(){}"<<endl;
//    }
//};
//
//class B : public A {
//public:
//    B() {
//        cout<<"B(){}"<<endl;
//    }
//    ~B() {
//        cout<<"~B(){}"<<endl;
//    }
//};
//
//class C : public B {
//public:
//    C() {
//        cout<<"C(){}"<<endl;
//    }
//    ~C() {
//        cout<<"~C(){}"<<endl;
//    }
//};
//
//class D: public B {
//public:
//    D() {
//        cout<<"D(){}"<<endl;
//    }
//    ~D() {
//        cout<<"~D(){}"<<endl;
//    }
//};
//
//class E: public A {
//public:
//    E() {
//        cout<<"E(){}"<<endl;
//    }
//    ~E() {
//        cout<<"~E(){}"<<endl;
//    }
//};
//
//class F: public E {
//public:
//    F() {
//        cout<<"F(){}"<<endl;
//    }
//    ~F() {
//        cout<<"~F(){}"<<endl;
//    }
//};
