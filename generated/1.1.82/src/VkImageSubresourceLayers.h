/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#ifndef __VK_VKIMAGESUBRESOURCELAYERS_H__
#define __VK_VKIMAGESUBRESOURCELAYERS_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImageSubresourceLayers: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetaspectMask);
    static NAN_SETTER(SetaspectMask);
    
    static NAN_GETTER(GetmipLevel);
    static NAN_SETTER(SetmipLevel);
    
    static NAN_GETTER(GetbaseArrayLayer);
    static NAN_SETTER(SetbaseArrayLayer);
    
    static NAN_GETTER(GetlayerCount);
    static NAN_SETTER(SetlayerCount);
    

    // real instance
    VkImageSubresourceLayers instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkImageSubresourceLayers();
    ~_VkImageSubresourceLayers();

};

#endif