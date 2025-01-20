#include <iostream>
#include <string>

int main()
{
int a=0;
int z=0;
int l=0;
std::string x = "";
std::string y = "";
std::string c = "FLAMES";
int sum=0;
std::cout << "ENTER THE FIRST NAME:";
std::cin >> x;
std::cout << "ENTER THE SECOND NAME:";
std::cin >> y;
if (x.length()>y.length())
{
for(int i=0 ; i<=y.length(); i++)
{for(int j=0 ; j<= x.length(); j++)
{
if(y[i] == x[j])
{
y[i] = ' ';
x[j] = ' ';
}
}
}
}
else
{
for(int i=0 ; i<=x.length(); i++)
{for(int j=0 ; j<= y.length(); j++)
{
if(x[i] == y[j])
{
x[i] = ' ';
y[j] = ' ';
}
}
}
}
for(int i=0 ; i<=y.length(); i++)
{
if(y[i] != ' ')
{
sum++;
}
}
for(int j=0 ; j<=x.length(); j++)
{
if(x[j] != ' ')
{
sum++;
}
}
int f= c.length();
int index = 0;
while(f>1)
{
index = (index+sum)%f;
f--;
c.erase(index, 1);
}
std::cout << c;
}


