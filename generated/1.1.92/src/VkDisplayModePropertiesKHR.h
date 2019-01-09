/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKDISPLAYMODEPROPERTIESKHR_H__
#define __VK_VKDISPLAYMODEPROPERTIESKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDisplayModePropertiesKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> displayMode;
      static NAN_GETTER(GetdisplayMode);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> parameters;
      static NAN_GETTER(Getparameters);

    // real instance
    VkDisplayModePropertiesKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDisplayModePropertiesKHR();
    ~_VkDisplayModePropertiesKHR();

};

#endif