//factorialul a n numere
void fact(int n, int &r){
    if(n == 0)
        r = 1;
    else{
        fact(n - 1 , r);
        r = r * n;
    }
}
int main(){
    int a;
    fact(4, a);
    cout << a;
    return 0;
}
