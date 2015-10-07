#include<fstream>
#include<string>
#include<vector>

std::vector<std::string> v(10);

int main()
{
    v = {"One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
    std::ofstream fileWriter ("numbers.txt");

    if(fileWriter.is_open())
    {
        for(int i = 0; i < v.size(); i++)
        {
            fileWriter << v[i] << '\t';
        }

        fileWriter.close();
    }

    return 0;
}
