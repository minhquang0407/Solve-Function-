#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int function;
    double delta;
    float a;float b;float c;float d;
    double pi = atan(1)*4;
    cout<<"Function: ";cin >> function;
    if (function == 1){
        cout << "Function: ax + b = 0 " << endl;
        cout << "a = ";cin >> a;cout << "b = ";cin >> b;
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
        cout << "a = ";cin >> a;cout << "b = ";cin >> b;cout << "c = ";cin >> c;
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
        cout << "a = ";cin >> a;cout << "b = ";cin >> b;cout << "c = ";cin >> c;cout << "d = ";cin >> d;
        if (a == 0){
            a = b; b = c; c = d;
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
            else{
                cout << "x = "<< (-b + cbrt(b*b*b-(27*a*a*d)))/(3*a)<<endl;
            }
        }
    }
    if (function == 4){
        double m;float n;float p;float q;float g;
        cout<< "Function: ax4 + bx3 + cx2 + dx + e = 0"<<endl;
        //mx4 + nx3 + px2 + qx + g = 0
        cout << "a = ";cin >> m; cout << "b = ";cin >> n; cout << "c = ";cin >> p; 
        cout << "d = ";cin >> q; cout << "e = ";cin >> g;
        if (m==0){
            a=n; b=p; c=q; d=g;
            if (a == 0){
            a = b; b = c; c = d;
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
            float delta; float k;
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
            else{
                cout << "x = "<< (-b + cbrt(b*b*b-(27*a*a*d)))/(3*a)<<endl;
            }
            }
        }
        if (m!=0){
            double t; double t1; double t2; double t3;float y;float u;float i;float o;float k;
            y = n/m; u = p/m; i = q/m; o = g/m;
            cout << "y="<<y<<"  "<<"u="<<u<<"  "<<"i="<<i<<"  "<<"o="<<o<<endl;
            //x^4 + yx^3 + ux^2 + ix + o = 0
            //t^3 - ut^2 + (yi - 3o)t - y^2o + 4uo = 0
            a = 1; b = (-u); c = ((y*i)-(3*o)); d = (-(y*y*o)+(4*u*o));
            cout <<"a="<<a<<"  "<<"b="<<b<<"  "<<"c="<<c<<"  "<<"d="<<d<<endl;
            delta = ((b*b) - (3*a*c));
            cout <<"delta = "<<delta<<endl;
            k = (9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(abs(delta*delta*delta)));
            cout << "|k| = "<<abs(k)<<endl;
            if (delta < 0){
                t = (sqrt(abs(delta))/(3*a))*(cbrt(k +sqrt(k*k+1))+cbrt(k -sqrt(k*k+1)));
                cout << "t = "<< t <<endl;
            }
            if (delta > 0){
                if (abs(k)<=1){
                    t1 = (2*sqrt(delta)*cos(acos(k)/3)-b)/(3*a);
                    t2 = (2*sqrt(delta)*cos(acos(k)/3-(2*pi)/3)-b)/(3*a);
                    t3 = (2*sqrt(delta)*cos(acos(k)/3+(2*pi)/3)-b)/(3*a);
                    if ((t1 + (y*y)/4) -u >0 && ((t1*t1)/4)-o >0){
                        t= t1;
                        cout << "t1 = "<<t1 <<endl;
                    }
                    if ((t2 + (y*y)/4) -u >0 && ((t2*t2)/4)-o >0){
                        t= t2;
                        cout << "t2 = "<<t2 <<endl;
                    }
                    if ((t3 + (y*y)/4) -u >0 && ((t3*t3)/4)-o >0){
                        t= t3;             
                        cout << "t3 = "<<t3 <<endl; 
                    }
                }
                else {
                    t = ((sqrt(delta)*abs(k))/(3*a*k))*(cbrt(abs(k)+sqrt(k*k-1))+cbrt(abs(k)-sqrt(k*k-1)))-b/(3*a);
                }
                cout << "t = "<<t<<endl;
            }
            else{
                t = (-b + cbrt((b*b*b)-(27*a*a*d)))/(3*a);
                cout << "t = "<<t<<endl;
            }
            double r;double f;
            r = sqrt(t + (y*y)/4 -u);
            f = sqrt((t*t)/4-o);
            cout << "r="<<r<<endl;
            cout <<"f="<<f<<endl;
            cout << "d = "<< o<<endl;
            cout << "t2/4 = " << (t*t)/4<<endl;
            //x2 + (y/2 - r)x + t/2 - f = 0
            a =1; b =(y/2)-r; c = (t/2)-f;
            delta = (b*b) - 4*a*c;
            if (delta < 0){
                cout << "NO" << endl;
            }
            else{
                cout << "x4 = "<< (-b+sqrt(delta))/(2*a) <<endl;
                cout << "x3 = "<< (-b-sqrt(delta))/(2*a) <<endl;
            }
            //x2 + (y/2 + r)x + t/2 + f = 0
            a =1; b =(y/2)+r; c = (t/2)+f;
            delta = (b*b) - 4*a*c;
            if (delta < 0){
                cout << "NO" << endl;
            }
            else{
                cout << "x1 = "<< (-b+sqrt(delta))/(2*a) <<endl;
                cout << "x2 = "<< (-b-sqrt(delta))/(2*a) <<endl;
            }
            
        }
    }
    
    return 0;
}