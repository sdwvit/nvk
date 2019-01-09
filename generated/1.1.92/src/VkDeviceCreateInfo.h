/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKDEVICECREATEINFO_H__
#define __VK_VKDEVICECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDeviceCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetqueueCreateInfoCount);
    static NAN_SETTER(SetqueueCreateInfoCount);
    
    std::vector<VkDeviceQueueCreateInfo>* vpQueueCreateInfos;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pQueueCreateInfos;
    static NAN_GETTER(GetpQueueCreateInfos);
    static NAN_SETTER(SetpQueueCreateInfos);
    
    static NAN_GETTER(GetenabledLayerCount);
    static NAN_SETTER(SetenabledLayerCount);
    
    std::vector<char *>* vppEnabledLayerNames;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> ppEnabledLayerNames;
    static NAN_GETTER(GetppEnabledLayerNames);
    static NAN_SETTER(SetppEnabledLayerNames);
    
    static NAN_GETTER(GetenabledExtensionCount);
    static NAN_SETTER(SetenabledExtensionCount);
    
    std::vector<char *>* vppEnabledExtensionNames;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> ppEnabledExtensionNames;
    static NAN_GETTER(GetppEnabledExtensionNames);
    static NAN_SETTER(SetppEnabledExtensionNames);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pEnabledFeatures;
      static NAN_GETTER(GetpEnabledFeatures);
    static NAN_SETTER(SetpEnabledFeatures);
    

    // real instance
    VkDeviceCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDeviceCreateInfo();
    ~_VkDeviceCreateInfo();

};

#endif