/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKPHYSICALDEVICECORNERSAMPLEDIMAGEFEATURESNV_H__
#define __VK_VKPHYSICALDEVICECORNERSAMPLEDIMAGEFEATURESNV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceCornerSampledImageFeaturesNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetcornerSampledImage);
    static NAN_SETTER(SetcornerSampledImage);
    

    // real instance
    VkPhysicalDeviceCornerSampledImageFeaturesNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceCornerSampledImageFeaturesNV();
    ~_VkPhysicalDeviceCornerSampledImageFeaturesNV();

};

#endif