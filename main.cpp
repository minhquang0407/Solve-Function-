#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int function;
    float delta;
    float a;float b;float c;float d;
    double pi = atan(1)*4;
    cout<<"Function: ";cin >> function;
    if (function == 1){
        cout << "f(x) = ax + b" << endl;
        cout << "a = ";cin >> a;cout << "b = ";cin >> b;
        system("cls");
        cout << "f(x) = " << a <<"x + "<<b<<" = 0"<<endl;
        if (a == 0){
            if (b==0) {
                cout << "=> Unlimited"<<endl;
            }
            else{
            cout << "=> NO" << endl;
            }
        }
        else {
            if (b==0) {
                cout <<"=> x = 0"<<endl;
            }
            else {
            cout << "=> x = " << -b/a << endl;
            }
        }
    }
    if (function == 2){
        cout << "f(x) = ax2 + bx + c" << endl;
        cout << "a = ";cin >> a;cout << "b = ";cin >> b;cout << "c = ";cin >> c;
        system("cls");
        cout <<"f(x) = "<<a<<"x2 + "<<b<<"x + "<<c<<" = 0"<<endl;
        if (a == 0){
            if (b == 0){
                if (c==0) {
                    cout << "=> Unlimited"<<endl;
                }
                else{
                cout << "=> NO" << endl;
                }
            }
            if (b!=0) {
                if (c==0) {
                    cout <<"=> x = 0"<<endl;
                }
                else {
                cout << "=> x = " << -c/b << endl;
                }
            }
        }
        if (a !=0){
            delta = (b*b) - 4*a*c;
            if (delta < 0){
                cout << "=> NO" << endl;
            }
            else{
                cout << "=> x = "<< (-b+sqrt(delta))/(2*a) <<endl;
                cout << "   x = "<< (-b-sqrt(delta))/(2*a) <<endl;
            }
        }
    }
    if (function == 3){
        cout << "f(x) = ax3 + bx2 + cx + d"<<endl;
        cout << "a = ";cin >> a;cout << "b = ";cin >> b;cout << "c = ";cin >> c;cout << "d = ";cin >> d;
        system("cls");
        cout << "f(x) = "<< a << "x3 + "<<b<<"x2 + "<<c<<"x + "<<d<<" = 0 "<<endl;
        if (a == 0){
            a = b; b = c; c = d;
            if (a == 0){
                if (b == 0){
                    if (c==0) {
                        cout << "=> Unlimited"<<endl;
                    }
                    else{
                    cout << "=> NO" << endl;
                    }
                }
                if (b!=0) {
                    if (c==0) {
                        cout <<"=> x = 0"<<endl;
                    }
                    else {
                        cout << "=> x = " << -c/b << endl;
                    }
                }
            }
            if (a !=0){
                delta = (b*b) - 4*a*c;
                if (delta < 0){
                    cout << "=> NO" << endl;
                }
                else{
                    cout << "=> x = "<< (-b+sqrt(delta))/(2*a) <<endl;
                    cout << "   x = "<< (-b-sqrt(delta))/(2*a) <<endl;
                }
            }
            
        }
        if (a !=0) {
            float k;
            delta = (b*b) - (3*a*c);
            k = (9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(abs(delta*delta*delta)));
            if (delta < 0){
                cout << "=> x = "<< (sqrt(abs(delta))/(3*a))*(cbrt(k +sqrt(k*k+1))+cbrt(k -sqrt(k*k+1)))-(b/(3*a))<<endl;
            }
            if (delta > 0){
                if (abs(k)<=1){
                    cout << "=> x = "<< (2*sqrt(delta)*cos(acos(k)/3)-b)/(3*a)<<endl;
                    cout << "   x = "<< (2*sqrt(delta)*cos(acos(k)/3-(2*pi)/3)-b)/(3*a)<<endl;
                    cout << "   x = "<< (2*sqrt(delta)*cos(acos(k)/3+(2*pi)/3)-b)/(3*a)<<endl;
                }
                else {
                    cout << "=> x = " << ((sqrt(delta)*abs(k))/(3*a*k))*(cbrt(abs(k)+sqrt(k*k-1))+cbrt(abs(k)-sqrt(k*k-1)))-b/(3*a)<<endl;
                }
            }
            if (delta ==0){
                cout << "=> x = "<< (-b + cbrt(b*b*b-(27*a*a*d)))/(3*a)<<endl;
            }
        }
    }
    if (function == 4){
        double m;float n;float p;float q;float g;
        cout<< "f(x) = ax4 + bx3 + cx2 + dx + e"<<endl;
        cout << "a = ";cin >> m; cout << "b = ";cin >> n; cout << "c = ";cin >> p; 
        cout << "d = ";cin >> q; cout << "e = ";cin >> g;
        system("cls");
        cout << "f(x) = "<<m<<"x4 + "<<n<<"x3 + "<<p<<"x2 + "<<q<<"x + "<<g<<" = 0"<<endl;
        if (m==0){
            a=n; b=p; c=q; d=g;
            if (a == 0){
            a = b; b = c; c = d;
            if (a == 0){
                if (b == 0){
                    if (c==0) {
                        cout << "=> Unlimited"<<endl;
                    }
                    else{
                    cout << "=> NO" << endl;
                    }
                }
                if (b!=0) {
                    if (c==0) {
                        cout <<"=> x = 0"<<endl;
                    }
                    else {
                        cout <<"=> x = "<< -c/b << endl;
                    }
                }
            }
            if (a !=0){
                float delta;
                delta = (b*b) - 4*a*c;
                if (delta < 0){
                    cout << "=> NO" << endl;
                }
                else{
                    cout << "=> x = "<< (-b+sqrt(delta))/(2*a) <<endl;
                    cout << "   x = "<< (-b-sqrt(delta))/(2*a) <<endl;
                }
            }
            
        }
            if (a !=0) {
            float delta; float k;
            delta = (b*b) - (3*a*c);
            k = (9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(abs(delta*delta*delta)));
            if (delta < 0){
                cout << "=> x = "<< (sqrt(abs(delta))/(3*a))*(cbrt(k +sqrt(k*k+1))+cbrt(k -sqrt(k*k+1)))<<endl;
            }
            if (delta > 0){
                if (abs(k)<=1){
                    cout << "=> x = "<< (2*sqrt(delta)*cos(acos(k)/3)-b)/(3*a)<<endl;
                    cout << "   x = "<< (2*sqrt(delta)*cos(acos(k)/3-(2*pi)/3)-b)/(3*a)<<endl;
                    cout << "   x = "<< (2*sqrt(delta)*cos(acos(k)/3+(2*pi)/3)-b)/(3*a)<<endl;
                }
                else {
                    cout << "=> x = " << ((sqrt(delta)*abs(k))/(3*a*k))*(cbrt(abs(k)+sqrt(k*k-1))+cbrt(abs(k)-sqrt(k*k-1)))-b/(3*a)<<endl;
                }
            }
            if (delta ==0){
                cout << "=> x = "<< (-b + cbrt(b*b*b-(27*a*a*d)))/(3*a)<<endl;
            }
            }
        }
        if (m!=0){
            float t;float y;float u;float i;float o;float k;
            y = n/m; u = p/m; i = q/m; o = g/m;
            //x^4 + yx^3 + ux^2 + ix + o = 0
            //-8t^3 + 4ut^2 - (2yi-8o)t + i^2 - 4uo + y^2o = 0
            a = -8; b = 4*u; c = -((2*y*i)-(8*o)); d = (i*i) - (4*u*o) + (y*y*o);
            delta = ((b*b) - (3*a*c));
            k = (9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(abs(delta*delta*delta)));
            if (delta < 0){
                t = (sqrt(abs(delta))/(3*a))*(cbrt(k +sqrt(k*k+1))+cbrt(k -sqrt(k*k+1)))-(b/(3*a));

            }
            if (delta > 0){
                if (abs(k)<=1){
                    //t = (2*sqrt(delta)*cos(acos(k)/3)-b)/(3*a);
                    //t = (2*sqrt(delta)*cos(acos(k)/3-(2*pi)/3)-b)/(3*a);
                    t = (2*sqrt(delta)*cos(acos(k)/3+(2*pi)/3)-b)/(3*a);
                }
                else {
                    t = ((sqrt(delta)*abs(k))/(3*a*k))*(cbrt(abs(k)+sqrt(k*k-1))+cbrt(abs(k)-sqrt(k*k-1)))-b/(3*a);
                }
            }
            if (delta ==0){
                t = (-b + cbrt((b*b*b)-(27*a*a*d)))/(3*a);
            }
            float r;float f;float delta1;float delta2;
            r = sqrt(abs((y*y)/4+(-u)+2*t));
            if ((t*y - i) >= 0){
                f = sqrt(t*t-o);
            }
            if ((t*y - i) < 0){
                f = -sqrt(t*t-o);
            }
            //x2 + (y/2 - r)x + t - f = 0
            if ((abs((y*y)/4-u+(2*t)) >= 0 || (y*y)/4-u+(2*t) == -0) && ((t*t-o) >=0 || (t*t-o) ==-0)){  
                a =1; b =(y/2)-r; c = t-f;
                delta1 = (b*b) - (4*a*c);
                if (delta1 >= 0){
                    cout << "=> x = "<< (-b+sqrt(delta1))/(2*a) <<endl;
                    cout << "   x = "<< (-b-sqrt(delta1))/(2*a) <<endl;
                    
                }
                //x2 + (y/2 + r)x + t + f = 0
                a =1; b =(y/2)+r; c = t+f;
                delta2 = (b*b) - (4*a*c);
                if (delta2 >=0){
                    cout << "   x = "<< (-b+sqrt(delta2))/(2*a) <<endl;
                    cout << "   x = "<< (-b-sqrt(delta2))/(2*a) <<endl;
                }
                if (delta1 < 0 && delta2 < 0){
                    cout<<"=> NO"<<endl;
                }
            }
            else{
                cout << "=> NO1"<<endl;
            }
        }
    }
    return 0;
}