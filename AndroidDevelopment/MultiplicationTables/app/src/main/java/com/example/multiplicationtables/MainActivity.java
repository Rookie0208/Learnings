package com.example.multiplicationtables;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ArrayAdapter;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ListView;

public class MainActivity extends AppCompatActivity {
    EditText editText;
    public static final String My_String="com.example.multiplicationtables.extra.NAME";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }
    public void clickClick(View v){
        Intent myIntent=new Intent(this,tables.class);
        editText=findViewById(R.id.editTextNumber);
        String nameText=editText.getText().toString();
        myIntent.putExtra(My_String,nameText);
        startActivity(myIntent);
    }
}