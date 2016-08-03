package getapkinfo.example.com.getapkinfo;

/**
 * Created by acer on 2016/8/3.
 */
public class JNIUtils {
    /**
     * getSignature
     * @param o
     * @return
     */
    public static native String getSignature(Object o);

    /**
     * getPackname
     * @param o
     * @return
     */
    public static native String getPackname(Object o);

    /**
     * loadLibrary
     */
    static {
        System.loadLibrary("JNI_ANDROID");
    }
}
