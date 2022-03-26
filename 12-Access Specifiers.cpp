Access Specifiers in Inheritance
C++ support three types of Access Specifiers

1- public
2- protected
3- Private


protected Access Specifier

- Within one class Protected behaves just like a private 

- subclass can access public and protected members of its ancester/super class with in class

class A {
protected :
 int b;

};
void main() {
A ob;
ob.b=10; //error can't access here


}

- subclass can access public and protected members of its ancester/super class with in class
- with object reference only public members can be accessed
example

class A {
private:
  int priv;
protected:
   int prot;
public :
  int pub;
};
class B: public A {
public :
 void m() {
  priv=10; //error
  prot=10; //ok
  pub =10; //ok
}
};
void main ( ) {
B ob;
ob.pub=20;//ok
ob.m();//ok
ob.priv=10;//error
ob.prot=30;//error

}

....................................................

Inheritance Types 
- three type of inheritance in c++ due to access specifier

1- public 
class A{ }
Class B:public A { }

public and  protected memebers of parent will become public and protected members of its child


2- protected
  class A{ }
Class B:protected A { }

public and  protected memebers of parent will become  protected members of its child


3- private
  class A{ }
Class B:private A { }

public and  protected memebers of parent will become private members of its child
..................................................
Major use in Industory

1-Adaptor class(adaptor design pattern)

Adaptor class change the interface of its adaptee

public methods in class are called interface
basic objective is to enhance reusability
.................................................
Example 
Suppose SpellChecker is already developed by a team of experts in 2010.
class SpellChecker{
public :
  bool checkSpell(char s[]){
      // if found in dictionary
       return true;
   }
char * getSuggestions(char s[]){
       char suggestions[30];
       // it will return sugggestions
        return suggestions;
}
};

.................................................
In 2012 a new requirement from PM  is to implement a  Dictionary class which will get a string and return suggestions if not found in dictionary

Dictionary ( suggestions(char s[]) )

class Dictionary: private SpellChecker{
public:
char * suggestions(char s[]){
  if (checkSpell(s))
      return NULL;
   return getSuggestions(s);
}
};

viod main(){
Dictionary ob;
ob.suggestions("apple);
ob.checkSpell();//error

}
.................................................
Example               Class Quiz
 Creating Stack from already List Class
 Stack is an adaptor and  list is adaptee

class List {
private:
 int size;
 int *a;
public :
 List (int S) {size=s; a=new int[size];}
 void addOnFront(int p) {  }
 void addonEnd(int p) { }
 int removeFront()  {}
 int removeEnd() { }

};
class Stack :private List{
public:
   void push(int p ){ addonFront(p);}
   int pop() { return removeFront();}
};

..................................................
Example: 
Swap two integers through Stack

void  main () {
Stack s(2);
int a=2;
int b=3;
s.push(a);
s.push(b);
a=s.pop();
b=s.pop();

};
........................................
 Adaptor pattern through composition
.........................................

Example               Class Quiz
 Creating Stack from already List Class
 Stack is an adaptor and  list is adaptee

class List {
private:
 int size;
 int *a;
public :
 List (int S) {size=s; a=new int[size];}
 void addOnFront(int p) {  }
 void addonEnd(int p) { }
 int removeFront()  {}
 int removeEnd() { }

};
class Stack {
private :
List list;
public:
   void push(int p ){ list.addonFront(p);}
   int pop() { return list.removeFront();}
};
void  main () {
Stack s(2);
int a=2;
int b=3;
s.push(a);
s.push(b);
a=s.pop();
b=s.pop();

};
..................................................













