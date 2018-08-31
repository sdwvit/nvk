#ifndef __VK_VKDEVICEQUEUECREATEINFO_H__
#define __VK_VKDEVICEQUEUECREATEINFO_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDeviceQueueCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetqueueFamilyIndex);
    static NAN_SETTER(SetqueueFamilyIndex);
    
    static NAN_GETTER(GetqueueCount);
    static NAN_SETTER(SetqueueCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pQueuePriorities;
    static NAN_GETTER(GetpQueuePriorities);
    static NAN_SETTER(SetpQueuePriorities);
    

    // real instance
    VkDeviceQueueCreateInfo *instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkDeviceQueueCreateInfo();
    ~_VkDeviceQueueCreateInfo();

};

#endif