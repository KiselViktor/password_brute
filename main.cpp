#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    cout<<"##### This is a program for creating dictionaries. #####"<<endl;
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
                                if((a!=b||b!=c||c!=d)&&
                                   (b!=c||c!=d||d!=e)&&
                                   (c!=d||d!=e||e!=f)&&
                                   (d!=e||e!=f||f!=g)&&
                                   (b!=(a+1)||c!=(a+2)||d!=(a+3)||e!=(a+4))&&
                                   (f!=(g-1)||e!=(g-2)||d!=(g-3)||c!=(g-4))
                                   //2 пары по три
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
                            cout<<"Complitid: "<<i/100000<<" %"<<endl;
                        }
                    }
                }
            }
        }
    }
    password.close();
    return 0;
}
