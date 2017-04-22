package com.ndkdemo;

/**
 * Created by Administrator on 2017/3/28.
 */
public class JNI  {

    {
        System.loadLibrary("HelloC");
    }
    public native String getStr();
}
