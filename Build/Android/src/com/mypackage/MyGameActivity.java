package com.mypackage;

import android.content.Intent;
import android.os.Bundle;
import com.epicgames.unreal.GameActivity;

public class MyGameActivity extends GameActivity {
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        // Intent verarbeiten
        Intent intent = getIntent();
        String action = intent.getAction();
        String data = intent.getStringExtra(Intent.EXTRA_TEXT);  // Beispiel für empfangenen Text
        // Verarbeite den Intent-Daten, z. B. sende sie an Unreal oder speichere sie
    }
	@Keep
    public static String GetIntentAction() {
        // Get the current Intent (from the activity)
        android.content.Intent intent = com.epicgames.ue4.GameActivity.getIntent();
        // Extract the action from the Intent
        String action = intent.getAction();
        return action;
    }
}
