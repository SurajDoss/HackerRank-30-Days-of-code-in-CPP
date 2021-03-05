int main(){
    string S;
    cin >> S;
    try {
        cout<<stoi(S)<<endl;
    }
    catch(...){
        cout<<"Bad String"<<endl;
    }
    return 0;
}
