/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKGEOMETRYDATANVX_H__
#define __VK_VKGEOMETRYDATANVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkGeometryDataNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> triangles;
      static NAN_GETTER(Gettriangles);
    static NAN_SETTER(Settriangles);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> aabbs;
      static NAN_GETTER(Getaabbs);
    static NAN_SETTER(Setaabbs);
    

    // real instance
    VkGeometryDataNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkGeometryDataNVX();
    ~_VkGeometryDataNVX();

};

#endif