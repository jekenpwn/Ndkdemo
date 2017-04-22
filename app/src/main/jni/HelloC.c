//
// Created by Administrator on 2017/3/28.
//

#include<jni.h>
#include<stdio.h>
#include<stdlib.h>

jstring Java_com_ndkdemo_JNI_getStr(JNIEnv *env,jobject *obz){
    return (*env)->NewStringUTF(env,"I am form c!!");
}