/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKOBJECTTABLEPIPELINEENTRYNVX_H__
#define __VK_VKOBJECTTABLEPIPELINEENTRYNVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkObjectTablePipelineEntryNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Gettype);
    static NAN_SETTER(Settype);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pipeline;
      static NAN_GETTER(Getpipeline);
    static NAN_SETTER(Setpipeline);
    

    // real instance
    VkObjectTablePipelineEntryNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkObjectTablePipelineEntryNVX();
    ~_VkObjectTablePipelineEntryNVX();

};

#endif