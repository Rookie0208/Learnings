package com.example.quiz;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

public class SecondQuestion extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_second_question);
    }
    public void buttonQ21(View v){
        Toast.makeText(this, "RIGHT", Toast.LENGTH_SHORT).show();
        Intent nextQ3=new Intent(this,ThirdQuestion.class);
        startActivity(nextQ3);
    }
    public void buttonQ22(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ23(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ24(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
}