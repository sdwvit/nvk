/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKPHYSICALDEVICEFRAGMENTSHADERBARYCENTRICFEATURESNV_H__
#define __VK_VKPHYSICALDEVICEFRAGMENTSHADERBARYCENTRICFEATURESNV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetfragmentShaderBarycentric);
    static NAN_SETTER(SetfragmentShaderBarycentric);
    

    // real instance
    VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV();
    ~_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV();

};

#endif