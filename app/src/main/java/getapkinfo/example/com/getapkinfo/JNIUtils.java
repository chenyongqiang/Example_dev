package getapkinfo.example.com.getapkinfo;

/**
 * Created by acer on 2016/8/3.
 */
public class JNIUtils {
    /**
     * getPackname
     * @param
     * @return
     */
    public static native String getPackname();

    /**
     * loadLibrary
     */
    static {
        System.loadLibrary("JNI_ANDROID");
    }
}
