int fact(int n){
    int r;
    if(n == 0)
        return 1;
    else
        r = n * fact(n - 1);
    return r;
}
int main(){
    int a;
    a = fact(4);
    cout << a;
    return 0;
}
