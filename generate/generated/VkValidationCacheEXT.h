#ifndef __VK_VKVALIDATIONCACHEEXT_H__
#define __VK_VKVALIDATIONCACHEEXT_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkValidationCacheEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkValidationCacheEXT *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkValidationCacheEXT();
    ~_VkValidationCacheEXT();

};

#endif