/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKPHYSICALDEVICESPARSEIMAGEFORMATINFO2_H__
#define __VK_VKPHYSICALDEVICESPARSEIMAGEFORMATINFO2_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceSparseImageFormatInfo2: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getformat);
    static NAN_SETTER(Setformat);
    
    static NAN_GETTER(Gettype);
    static NAN_SETTER(Settype);
    
    static NAN_GETTER(Getsamples);
    static NAN_SETTER(Setsamples);
    
    static NAN_GETTER(Getusage);
    static NAN_SETTER(Setusage);
    
    static NAN_GETTER(Gettiling);
    static NAN_SETTER(Settiling);
    

    // real instance
    VkPhysicalDeviceSparseImageFormatInfo2 instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceSparseImageFormatInfo2();
    ~_VkPhysicalDeviceSparseImageFormatInfo2();

};

#endif