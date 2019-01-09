/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.2
 */
#ifndef __VK_VKDEVICEGROUPDEVICECREATEINFO_H__
#define __VK_VKDEVICEGROUPDEVICECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDeviceGroupDeviceCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetphysicalDeviceCount);
    static NAN_SETTER(SetphysicalDeviceCount);
    
    std::vector<VkPhysicalDevice>* vpPhysicalDevices;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pPhysicalDevices;
    static NAN_GETTER(GetpPhysicalDevices);
    static NAN_SETTER(SetpPhysicalDevices);
    

    // real instance
    VkDeviceGroupDeviceCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDeviceGroupDeviceCreateInfo();
    ~_VkDeviceGroupDeviceCreateInfo();

};

#endif