    for(int i = 0; i <= 9; i++){
            cout << "Person " << (i+1) << endl;
        cout << "Enter your id: ";
        cin >> id[i];
        float gross_sales, comm;
        cout << "Please enter your gross sales: ";
        cin >> gross[i];

        gross_sales = gross[i];
        if(gross_sales < 1000.00){
            comm = 100.00;
        }
        else if(gross_sales >= 1000.00 && gross_sales <= 5000.00){
            comm = (gross_sales * 5) / 100.00;
        }
        else{
            comm = 200.00 + ((gross_sales*7)/100.00);
        }
        commission[i] = comm; 

        cout << "Person "<< (i+1) << endl
            << "ID: " << id[i] << endl
            << "Gross sales: " << gross[i] << endl
            <<"Commission " << commission[i] << endl;
    }