package getapkinfo.example.com.getapkinfo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.Toast;

public class GetApkInfoActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_get_apk_info);
        String s = JNIUtils.getPackname(null);
        Toast.makeText(GetApkInfoActivity.this, s, Toast.LENGTH_SHORT).show();
    }
}
