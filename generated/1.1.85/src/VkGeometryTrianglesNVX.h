/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKGEOMETRYTRIANGLESNVX_H__
#define __VK_VKGEOMETRYTRIANGLESNVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkGeometryTrianglesNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> vertexData;
      static NAN_GETTER(GetvertexData);
    static NAN_SETTER(SetvertexData);
    
    static NAN_GETTER(GetvertexOffset);
    static NAN_SETTER(SetvertexOffset);
    
    static NAN_GETTER(GetvertexCount);
    static NAN_SETTER(SetvertexCount);
    
    static NAN_GETTER(GetvertexStride);
    static NAN_SETTER(SetvertexStride);
    
    static NAN_GETTER(GetvertexFormat);
    static NAN_SETTER(SetvertexFormat);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> indexData;
      static NAN_GETTER(GetindexData);
    static NAN_SETTER(SetindexData);
    
    static NAN_GETTER(GetindexOffset);
    static NAN_SETTER(SetindexOffset);
    
    static NAN_GETTER(GetindexCount);
    static NAN_SETTER(SetindexCount);
    
    static NAN_GETTER(GetindexType);
    static NAN_SETTER(SetindexType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> transformData;
      static NAN_GETTER(GettransformData);
    static NAN_SETTER(SettransformData);
    
    static NAN_GETTER(GettransformOffset);
    static NAN_SETTER(SettransformOffset);
    

    // real instance
    VkGeometryTrianglesNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkGeometryTrianglesNVX();
    ~_VkGeometryTrianglesNVX();

};

#endif