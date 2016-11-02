#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    cout<<"\t\tThis is a program for creating dictionaries."<<endl;
    string file_name;
    int operator_code;
    cout<<endl<<"Name of file: ";
    cin>>file_name;
    cout<<"Operator code with 8: ";
    cin>>operator_code;
    ofstream password;
    password.open(file_name);
    int arr[7];
    int i=0;
    for(int a = 0; a < 10; a++)
    {
        arr[0] = a;
        for(int b = 0; b < 10; b++)
        {
            arr[1] = b;
            for(int c = 0; c < 10; c++)
            {
                arr[2] = c;
                for(int d = 0; d < 10; d++)
                {
                    arr[3] = d;
                    for(int e = 0; e < 10; e++)
                    {
                        arr[4] = e;
                        for(int f = 0; f < 10; f++)
                        {
                            arr[5] = f;
                            for(int g = 0; g < 10; g++)
                            {
                                arr[6] = g;
                                i++;
                                if((a!=b||b!=c||c!=d)&&                             //xxxx012
                                   (b!=c||c!=d||d!=e)&&                             //0xxxx12
                                   (c!=d||d!=e||e!=f)&&                             //01xxxx2
                                   (d!=e||e!=f||f!=g)&&                             //012xxxx
                                   (b!=(a+1)||c!=(a+2)||d!=(a+3)||e!=(a+4))&&       //x(x+1)(x+2)(x+3)(x+4)01
                                   (c!=(b+1)||d!=(b+2)||e!=(b+3)||f!=(b+4))&&       //0x(x+1)(x+2)(x+3)(x+4)1
                                   (d!=(c+1)||e!=(c+2)||f!=(c+3)||g!=(c+4))&&       //01x(x+1)(x+2)(x+3)(x+4)
                                   (f!=(g+1)||e!=(g+2)||d!=(g+3)||c!=(g+4))&&       //01(x+4)(x+3)(x+2)(x+1)x
                                   (e!=(f+1)||d!=(f+2)||c!=(f+3)||b!=(f+4))&&       //0(x+4)(x+3)(x+2)(x+1)x1
                                   (d!=(e+1)||c!=(e+2)||b!=(e+3)||a!=(e+4))&&       //(x+4)(x+3)(x+2)(x+1)x01
                                   (a!=b||b!=c||e!=f||f!=g)&&                       // xxx0yyy
                                   (b!=c||c!=d||e!=f||f!=g)&&                       // 0xxxyyy
                                   (a!=b||b!=c||d!=e||e!=f)                         // xxxyyy0
                                    //3 пары по 2
                                   )
                                {
                                    password<<operator_code;
                                    for(int h = 0; h < 7; h++)
                                    {
                                        password<<arr[h];
                                    }
                                    password<<endl;
                                }
                            }
                            printf("\033[2J\033[0;0f");
                            cout<<"Completed: "<<i/100000<<" %"<<endl;
                        }
                    }
                }
            }
        }
    }
    password.close();
    return 0;
}
