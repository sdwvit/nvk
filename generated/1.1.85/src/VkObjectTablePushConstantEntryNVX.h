/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKOBJECTTABLEPUSHCONSTANTENTRYNVX_H__
#define __VK_VKOBJECTTABLEPUSHCONSTANTENTRYNVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkObjectTablePushConstantEntryNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Gettype);
    static NAN_SETTER(Settype);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pipelineLayout;
      static NAN_GETTER(GetpipelineLayout);
    static NAN_SETTER(SetpipelineLayout);
    
    static NAN_GETTER(GetstageFlags);
    static NAN_SETTER(SetstageFlags);
    

    // real instance
    VkObjectTablePushConstantEntryNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkObjectTablePushConstantEntryNVX();
    ~_VkObjectTablePushConstantEntryNVX();

};

#endif