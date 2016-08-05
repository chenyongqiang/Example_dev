package getapkinfo.example.com.getapkinfo;

/**
 * Created by acer on 2016/8/3.
 */
public class JNIUtils {
    /**
     * getPackname
     * @param
     * @return
     * load from JNI_SRC
     */
    public static native String getPacknameSrc();
    /**
     * getPackname
     * @param
     * @return
     * load from JNI_ANDROID
     * if build by jni, it must be fit to Java_getapkinfo_example_com_getapkinfo_JNIUtils_getPackname
     */
    public static native String getPackname();

    /**
     * loadLibrary
     */
    static {
        System.loadLibrary("JNI_SRC");
        System.loadLibrary("JNI_ANDROID");
    }
}
