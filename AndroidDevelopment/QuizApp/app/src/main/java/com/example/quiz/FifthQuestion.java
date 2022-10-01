package com.example.quiz;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

public class FifthQuestion extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_fifth_question);
    }
    public void buttonQ51(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ52(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ53(View v){
        Toast.makeText(this, "WRONG", Toast.LENGTH_SHORT).show();
    }
    public void buttonQ54(View v){
        Toast.makeText(this, "RIGHT", Toast.LENGTH_SHORT).show();
        Intent nextFinal=new Intent(this,Final.class);
        startActivity(nextFinal);
    }
}