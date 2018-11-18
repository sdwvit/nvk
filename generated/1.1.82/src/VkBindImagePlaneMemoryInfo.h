/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#ifndef __VK_VKBINDIMAGEPLANEMEMORYINFO_H__
#define __VK_VKBINDIMAGEPLANEMEMORYINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkBindImagePlaneMemoryInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
    static NAN_GETTER(GetplaneAspect);
    static NAN_SETTER(SetplaneAspect);
    

    // real instance
    VkBindImagePlaneMemoryInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkBindImagePlaneMemoryInfo();
    ~_VkBindImagePlaneMemoryInfo();

};

#endif