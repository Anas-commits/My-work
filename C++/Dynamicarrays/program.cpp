#include "splashkit.h"
#include <vector>
using namespace std;

string read_string ( string prompt )
{
string result;
write(prompt);
result = read_line();
return result;
}
int read_integer ( string prompt )
{
string line;
int result;
line = read_string(prompt);
result = convert_to_integer(line);
return result;
}
void print_values(vector<double> Values)
{
    write_line("Values are:");
    for(int i = 0; i < Values.size(); i++ )
    {
        write_line( Values[i] );
    }
}

void read_values(vector<double> &Values, int count)
{
    int i, data;
    for(i = 0; i < count; i++)
    {
        data = read_integer("Enter temperature value: ");
        Values.push_back(data);
    }
}

int sum(vector<double> Values)
{
    int result = 0;
    for(int i = 0; i< Values.size(); i++)
    {
        result += Values[i];
    }
    return result;
}

vector<int> double_all(const vector<double> &input)

{
    vector<int> result;
    for(int i = 0; i < input.size(); i++)
    {
        result.push_back( input[i] * 2 );
    }
    return result;
}

int count_negative(vector<double> Values)
{
    int result = 0;
    for(int i = 0; i< Values.size(); i++)
    {
        if(Values[i]<0)
        result++;
    }
    return result;
}

int maximum(vector<double> Values)
{
    int result = Values[0];
    for(int i = 0; i< Values.size(); i++)
    {
        if(Values[i]>result)
        result=Values[i];
    }
    return result;
}
int main()
{
int count;
vector<double> temp;
count = read_integer("How many values: ");
read_values(temp, count);
print_values(temp);
write_line("Sum is:");
write_line( sum(temp) );
write_line("The number of negative values is:");
write_line( count_negative( temp ) );
write_line("The largest value is:");
write_line( maximum( temp ) );
return 0;
}
