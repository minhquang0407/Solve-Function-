#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int function;
    float a;
    float b;
    float c;
    float d;
    float e;
    double pi = atan(1)*4;
    cout<<"Function: ";
    cin >> function;
    if (function == 1){
        cout << "Function: ax + b = 0 " << endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        if (a == 0){
            if (b==0) {
                cout << "Unlimited"<<endl;
            }
            else{
            cout << "NO" << endl;
            }
        }
        else {
            if (b==0) {
                cout <<"x = 0"<<endl;
            }
            else {
            cout << "x = " << -b/a << endl;
            }
        }
    }
    if (function == 2){
        cout << "Function: ax2 + bx + c = 0 " << endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
        if (a == 0){
            if (b == 0){
                if (c==0) {
                    cout << "Unlimited"<<endl;
                }
                else{
                cout << "NO" << endl;
                }
            }
            if (b!=0) {
                if (c==0) {
                    cout <<"x = 0"<<endl;
                }
                else {
                cout << "x = " << -c/b << endl;
                }
            }
        }
        if (a !=0){
            float delta;
            delta = (b*b) - 4*a*c;
            if (delta < 0){
                cout << "NO" << endl;
            }
            else{
                cout << "x = "<< (-b+sqrt(delta))/(2*a) <<endl;
                cout << "x = "<< (-b-sqrt(delta))/(2*a) <<endl;
            }
        }
    }
    if (function == 3){
        cout << "Function: ax3 + bx2 + cx + d = 0 "<<endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        cout << "c = ";
        cin >> c;
        cout << "d = ";
        cin >> d;
        if (a == 0){
            a = b;
            b = c;
            c = d;
            if (a == 0){
                if (b == 0){
                    if (c==0) {
                        cout << "Unlimited"<<endl;
                    }
                    else{
                    cout << "NO" << endl;
                    }
                }
                if (b!=0) {
                    if (c==0) {
                        cout <<"x = 0"<<endl;
                    }
                    else {
                        cout << "x = " << -c/b << endl;
                    }
                }
            }
            if (a !=0){
                float delta;
                delta = (b*b) - 4*a*c;
                if (delta < 0){
                    cout << "NO" << endl;
                }
                else{
                    cout << "x = "<< (-b+sqrt(delta))/(2*a) <<endl;
                    cout << "x = "<< (-b-sqrt(delta))/(2*a) <<endl;
                }
            }
            
        }
        if (a !=0) {
            float delta;
            float k;
            delta = (b*b) - (3*a*c);
            k = (9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(abs(delta*delta*delta)));
            if (delta <0){
                cout << "x = "<< (sqrt(abs(delta))/(3*a))*(cbrt(k +sqrt(k*k+1))+cbrt(k -sqrt(k*k+1)))<<endl;
            }
            if (delta >0){
                if (abs(k)<=1){
                    cout << "x1 = "<< (2*sqrt(delta)*cos(acos(k)/3)-b)/(3*a)<<endl;
                    cout << "x2 = "<< (2*sqrt(delta)*cos(acos(k)/3-(2*pi)/3)-b)/(3*a)<<endl;
                    cout << "x3 = "<< (2*sqrt(delta)*cos(acos(k)/3+(2*pi)/3)-b)/(3*a)<<endl;
                }
                else {
                    cout << "x = " << ((sqrt(delta)*abs(k))/(3*a*k))*(cbrt(abs(k)+sqrt(k*k-1))+cbrt(abs(k)-sqrt(k*k-1)))-b/(3*a)<<endl;
                }
            }
  
        }
    }
    if (function == 4){
        float m;
        float n;
        float p;
        float q;
        float g;
        cout<< "Function: ax4 + bx3 + cx2 + dx + e = 0"
        cout << "a = ";
        cin >> m;
        cout << "b = ";
        cin >> n;
        cout << "c = ";
        cin >> p;
        cout >> "d = ";
        cin >> q;
        cout << "e = ";
        cin >> g;
        if (m==0){
            a=n;
            b=p;
            c=q;
            d=g;
            if (a == 0){
            a = b;
            b = c;
            c = d;
            if (a == 0){
                if (b == 0){
                    if (c==0) {
                        cout << "Unlimited"<<endl;
                    }
                    else{
                    cout << "NO" << endl;
                    }
                }
                if (b!=0) {
                    if (c==0) {
                        cout <<"x = 0"<<endl;
                    }
                    else {
                        cout << "x = " << -c/b << endl;
                    }
                }
            }
            if (a !=0){
                float delta;
                delta = (b*b) - 4*a*c;
                if (delta < 0){
                    cout << "NO" << endl;
                }
                else{
                    cout << "x = "<< (-b+sqrt(delta))/(2*a) <<endl;
                    cout << "x = "<< (-b-sqrt(delta))/(2*a) <<endl;
                }
            }
            
        }
            if (a !=0) {
            float delta;
            float k;
            delta = (b*b) - (3*a*c);
            k = (9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(abs(delta*delta*delta)));
            if (delta <0){
                cout << "x = "<< (sqrt(abs(delta))/(3*a))*(cbrt(k +sqrt(k*k+1))+cbrt(k -sqrt(k*k+1)))<<endl;
            }
            if (delta >0){
                if (abs(k)<=1){
                    cout << "x1 = "<< (2*sqrt(delta)*cos(acos(k)/3)-b)/(3*a)<<endl;
                    cout << "x2 = "<< (2*sqrt(delta)*cos(acos(k)/3-(2*pi)/3)-b)/(3*a)<<endl;
                    cout << "x3 = "<< (2*sqrt(delta)*cos(acos(k)/3+(2*pi)/3)-b)/(3*a)<<endl;
                }
                else {
                    cout << "x = " << ((sqrt(delta)*abs(k))/(3*a*k))*(cbrt(abs(k)+sqrt(k*k-1))+cbrt(abs(k)-sqrt(k*k-1)))-b/(3*a)<<endl;
                }
            }
  
        }
        }
        if (m!=0){
            float m; //x4 + ax3 + bx2 + cx + d
            a = n/m;
            b = p/m;
            c = q/m;
            d = g/m;
            //-8xm3 + 4xm2b + (-2ac + 8d)xm +c2 +a2xd-4bd
        }
    }
    return 0;
}