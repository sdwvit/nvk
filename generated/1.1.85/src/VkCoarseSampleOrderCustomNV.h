/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKCOARSESAMPLEORDERCUSTOMNV_H__
#define __VK_VKCOARSESAMPLEORDERCUSTOMNV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkCoarseSampleOrderCustomNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetshadingRate);
    static NAN_SETTER(SetshadingRate);
    
    static NAN_GETTER(GetsampleCount);
    static NAN_SETTER(SetsampleCount);
    
    static NAN_GETTER(GetsampleLocationCount);
    static NAN_SETTER(SetsampleLocationCount);
    
    std::vector<VkCoarseSampleLocationNV>* vpSampleLocations;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pSampleLocations;
    static NAN_GETTER(GetpSampleLocations);
    static NAN_SETTER(SetpSampleLocations);
    

    // real instance
    VkCoarseSampleOrderCustomNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkCoarseSampleOrderCustomNV();
    ~_VkCoarseSampleOrderCustomNV();

};

#endif