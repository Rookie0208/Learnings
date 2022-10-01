package com.example.quiz;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

public class ThirdQuestion extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_third_question);
    }
    public void buttonQ31(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ32(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ33(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ34(View v){
        Toast.makeText(this, "RIGHT", Toast.LENGTH_SHORT).show();
        Intent nextQ4=new Intent(this,FourthQuestion.class);
        startActivity(nextQ4);
    }
}