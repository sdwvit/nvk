/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKACQUIRENEXTIMAGEINFOKHR_H__
#define __VK_VKACQUIRENEXTIMAGEINFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkAcquireNextImageInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> swapchain;
      static NAN_GETTER(Getswapchain);
    static NAN_SETTER(Setswapchain);
    
    static NAN_GETTER(Gettimeout);
    static NAN_SETTER(Settimeout);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> semaphore;
      static NAN_GETTER(Getsemaphore);
    static NAN_SETTER(Setsemaphore);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> fence;
      static NAN_GETTER(Getfence);
    static NAN_SETTER(Setfence);
    
    static NAN_GETTER(GetdeviceMask);
    static NAN_SETTER(SetdeviceMask);
    

    // real instance
    VkAcquireNextImageInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkAcquireNextImageInfoKHR();
    ~_VkAcquireNextImageInfoKHR();

};

#endif