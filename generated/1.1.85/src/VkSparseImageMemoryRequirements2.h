/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKSPARSEIMAGEMEMORYREQUIREMENTS2_H__
#define __VK_VKSPARSEIMAGEMEMORYREQUIREMENTS2_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSparseImageMemoryRequirements2: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> memoryRequirements;
      static NAN_GETTER(GetmemoryRequirements);

    // real instance
    VkSparseImageMemoryRequirements2 instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSparseImageMemoryRequirements2();
    ~_VkSparseImageMemoryRequirements2();

};

#endif