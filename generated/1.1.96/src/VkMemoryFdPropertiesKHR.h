/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKMEMORYFDPROPERTIESKHR_H__
#define __VK_VKMEMORYFDPROPERTIESKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkMemoryFdPropertiesKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_GETTER(GetmemoryTypeBits);

    // real instance
    VkMemoryFdPropertiesKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkMemoryFdPropertiesKHR();
    ~_VkMemoryFdPropertiesKHR();

};

#endif