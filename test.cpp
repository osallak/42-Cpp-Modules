#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;


bool  createHppFile(std::string className)
{
    fstream HppFile;
    string filename = className + ".hpp";

    cout << "-------------------CREATING HPP FILE-------------------" << endl;
    HppFile.open(filename, ios::out | ios::trunc);
    if (!HppFile.is_open()){
        cerr << "Permission denied" << endl;
        return false;
    }
    HppFile.write("#pragma once\n#include <iostream>\n\n", 34);
    HppFile.write("class ", 6);
    HppFile.write(&className[0], className.length());
    cout << "You wanna inherit from another class ? Y[es]/N[o]" << endl;
    string flag;
    getline(cin, flag);
    if (flag == "Y" || flag == "y")
    {
        cout << "Enter parent class visibility : 1 for public and 0 for private" << endl;
        cin >> flag;cin.ignore();
        HppFile.write("\t:\t", 3);
        flag == "1" ? HppFile.write("public", 6) : HppFile.write("private", 7);
        cout << "Enter base Class Name" << endl;
        getline(cin, flag);
        HppFile.write("\t", 1);
        HppFile.write(&flag[0], flag.length());
    }
    HppFile.write("{\n\t", 3);
    cout << "Please enter 1 for private attributes and 2 for protected" << endl;
    getline(cin, flag);
    flag == "2" ? HppFile.write("protected:\n\t\t", 13) : HppFile.write("private:\n\t\t", 11);
    flag = "0";
    cout << "Please enter private/protected attributes count" << endl;
    int _flag;
    cin >> _flag; cin.ignore();
    string attribute;
    bool ___typeOrName = false;
    while (_flag)
    {
        if (___typeOrName == false)
            cout << "enter  attribute type " << endl;
        else
            cout << "enter  attribute name" << endl;
        getline(cin, attribute);;
        if (!cin.good())
        {
            remove(&filename[0]);
            return false;
        }
        HppFile.write(&attribute[0], attribute.length());
        if (___typeOrName == false){
            HppFile.write("\t", 1);
            ___typeOrName = true;
        }else{
            HppFile.write(";\n\t\t", 4);
            _flag--;
            ___typeOrName = false;
        }
    }
    HppFile.write("public:\n\t\t", 10);
    HppFile.write(&className[0], className.length());
    HppFile.write("( void );\n\t\t~", 13);
    HppFile.write(&className[0], className.length());
    HppFile.write("( void );\n\t\t", 12);
    HppFile.write(&className[0], className.length());
    string overload = "const " + className + "& operator= ( const " + className + "& other );\n\t\t";
    HppFile.write(&overload[0], overload.length());
    string  copyconstructor = "(const " + className + "& other);\n\t\t";
    HppFile.write(&copyconstructor[0], copyconstructor.length());
    cout << "Wanna add a constructor with parameters? Y[es]/N[o]"<< endl;
    getline(cin, flag);
    if (flag == "y" || flag == "Y"){
        HppFile.write("\t\t", 2);
        string par_constr = className + "(";
        HppFile.write(&par_constr[0], par_constr.length());
        cout << "Please enter parameters count"<< endl;
        int count;
        cin >> count;cin.ignore();
        bool __flag = true;
        while (count > 0){
            __flag == true ? cout << "Enter parameter type" : cout << "Enter parameter name";
            cout << endl;
            getline(cin, par_constr);
            HppFile.write(&par_constr[0], par_constr.length());
            if (__flag == false)
            {
                if (count > 1){
                    HppFile.write(", ", 2);
                }else{
                    HppFile.write(");\n", 2);
                }
                __flag = true;
                count--;
            }else{
                __flag = false;
                HppFile.write(" ", 1);
            }
        }
    }
    HppFile.write("\n};\n", 4);
    return true;
}

bool createCppFile(std::string ClassName)
{ 
    return true;
}

int main(int ac, char** av)
{
    createHppFile(av[1]);
    return 0;
}