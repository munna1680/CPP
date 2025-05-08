#include <iostream>

using namespace std;

int main()
{
    double sales;
    cin >> sales;
    cout <<"Sales : " << sales <<"$" << endl;

    double stateTaxRate;
    cin >> stateTaxRate;
    double st = sales * stateTaxRate;
    cout <<"State Tax : " << st <<"$" << endl;

    double countyTaxRate;
    cin >> countyTaxRate;
    double ct = sales * countyTaxRate;
    cout <<"County Tax : " << ct <<"$" << endl;

    double tt = st + ct;
    cout <<"Total Tax : " << tt << "$";
    return 0;
}