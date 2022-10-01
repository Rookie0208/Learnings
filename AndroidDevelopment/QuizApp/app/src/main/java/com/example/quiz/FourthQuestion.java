package com.example.quiz;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

public class FourthQuestion extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_fourth_question);
    }
    public void buttonQ41(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ42(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ43(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ44(View v){
        Toast.makeText(this, "RIGHT", Toast.LENGTH_SHORT).show();
        Intent nextQ5=new Intent(this,FifthQuestion.class);
        startActivity(nextQ5);
    }
}