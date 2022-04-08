using namespace std;

int main()
{    string n1;
     string n;
     int i=0;

    cout << "ingrese palabra" << endl;
    cin >>n;

    /*while(i<n.length()){
        cout<<n[i]<<endl;

        i++;
    }*/
    i=n.length();
    while(i>=0){
        cout<<n[i]<<endl;
        i--;
        n1=n1+n[i];
    }

    cout<<n<<endl;
    cout<<n1<<endl;
    if(n == n1){
        cout<<"es palindroma"<<endl;
    }
    return 0;
    }