# include<iostream>
using namespace std;
int main()


{
  struct profile
  {
    string  name;
    short    age;
    char grade;
   }
    std1;
  
  std1.name="Mohib";
  std1.age=22;
  std1.grade='A';
    

  cout<<"Name: "<<std1.name<<endl;
  cout<<"Age: "<<std1.age<<endl;
  cout<<"Grade: "<<std1.grade<<endl;
  
}


