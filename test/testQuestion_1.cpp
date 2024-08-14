// create a class country with the data members name area and population .Find the country with the largest population

#include<iostream>
#define max 100
 using namespace std;

 class country{
    private:
    char name[50];
    double area,population;
    public:
    void input_data()
    {
        cout<<"\nCountry Details:\n ";
        cout<<"Name: ";
        cin>>name;
        cout<<"Area: ";
        cin>>area;
        cout<<"Population: ";
        cin>>population;
    }
    double get_population()const
    {
        return population;
    }
    void output()
    {
        cout<<"\n The details of the country with the largest population is: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Area: "<<area<<endl;
        cout<<"Population: "<<population<<endl;
    }
    
 };

country find_largest_country(country countries[], int N){
    country max_country=countries[0];
    for(int i=1;i<=N;i++)
    {
        if(countries[i].get_population()>max_country.get_population())
        {
            max_country=countries[i];
        }
    }
    return max_country;
    }
 int main()
 {
    int N,i;
    country c[max];
    cout<<"Enter the number of country you want to input: ";
    cin>>N;
    for(i=1;i<=N;i++)
    {
        c[i].input_data();
    }
    country largest_population_country=find_largest_country(c,N);
    largest_population_country.output();
    return 0;
 }