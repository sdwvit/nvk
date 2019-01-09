/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKEXTERNALBUFFERPROPERTIES_H__
#define __VK_VKEXTERNALBUFFERPROPERTIES_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkExternalBufferProperties: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> externalMemoryProperties;
      static NAN_GETTER(GetexternalMemoryProperties);

    // real instance
    VkExternalBufferProperties instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkExternalBufferProperties();
    ~_VkExternalBufferProperties();

};

#endif