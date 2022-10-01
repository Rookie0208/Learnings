package com.example.multiplicationtables;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.widget.ArrayAdapter;
import android.widget.ListView;

public class tables extends AppCompatActivity {
    ListView listview;
    String arr[]=new String[10];
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_tables);
        listview=findViewById(R.id.listview);
        Intent intent=getIntent();
        String IntentT=intent.getStringExtra(MainActivity.My_String);
        int num=Integer.parseInt(IntentT);
        String result;
        for(int i=1;i<=10;i++){
            result="";
            result=String.valueOf(i*num);
            arr[i-1]=String.valueOf(num+" X "+i+" = "+result);
        }
        ArrayAdapter ad= new ArrayAdapter(this, android.R.layout.simple_list_item_1,arr);
        listview.setAdapter(ad);
    }
}