#ifndef __VK_VKPIPELINECACHE_H__
#define __VK_VKPIPELINECACHE_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineCache: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkPipelineCache *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkPipelineCache();
    ~_VkPipelineCache();

};

#endif