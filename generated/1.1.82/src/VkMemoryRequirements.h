/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.4
 */
#ifndef __VK_VKMEMORYREQUIREMENTS_H__
#define __VK_VKMEMORYREQUIREMENTS_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkMemoryRequirements: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getsize);
    static NAN_GETTER(Getalignment);
    static NAN_GETTER(GetmemoryTypeBits);

    // real instance
    VkMemoryRequirements instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkMemoryRequirements();
    ~_VkMemoryRequirements();

};

#endif