/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKPHYSICALDEVICETRANSFORMFEEDBACKFEATURESEXT_H__
#define __VK_VKPHYSICALDEVICETRANSFORMFEEDBACKFEATURESEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceTransformFeedbackFeaturesEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GettransformFeedback);
    static NAN_SETTER(SettransformFeedback);
    
    static NAN_GETTER(GetgeometryStreams);
    static NAN_SETTER(SetgeometryStreams);
    

    // real instance
    VkPhysicalDeviceTransformFeedbackFeaturesEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceTransformFeedbackFeaturesEXT();
    ~_VkPhysicalDeviceTransformFeedbackFeaturesEXT();

};

#endif