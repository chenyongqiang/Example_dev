package getapkinfo.example.com.getapkinfo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;
import android.widget.Toast;

public class GetApkInfoActivity extends AppCompatActivity {

    private TextView text,text_so;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_get_apk_info);
        String s = JNIUtils.getPacknameSrc();
        text = (TextView)findViewById(R.id.text);
        text.setText(s);

        String s1 = JNIUtils.getPackname();
        text_so = (TextView)findViewById(R.id.text_so);
        text_so.setText(s1);
    }
}
