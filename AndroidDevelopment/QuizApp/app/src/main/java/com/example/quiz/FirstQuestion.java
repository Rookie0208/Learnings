package com.example.quiz;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

public class FirstQuestion extends AppCompatActivity {


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_first_question);



    }
    public void button1(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void button2(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void button3(View v){
        Toast.makeText(this, "RIGHT", Toast.LENGTH_SHORT).show();
        Intent nextQ2=new Intent(this,SecondQuestion.class);
        startActivity(nextQ2);
    }
    public void button4(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
}