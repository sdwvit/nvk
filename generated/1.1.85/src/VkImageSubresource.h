/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKIMAGESUBRESOURCE_H__
#define __VK_VKIMAGESUBRESOURCE_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImageSubresource: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetaspectMask);
    static NAN_SETTER(SetaspectMask);
    
    static NAN_GETTER(GetmipLevel);
    static NAN_SETTER(SetmipLevel);
    
    static NAN_GETTER(GetarrayLayer);
    static NAN_SETTER(SetarrayLayer);
    

    // real instance
    VkImageSubresource instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkImageSubresource();
    ~_VkImageSubresource();

};

#endif