#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/OnScreen/OnScreenControl_OnScreenDeviceInfo.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_OnScreenDeviceInfo_def.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo.AddControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo (::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::*)(::UnityEngine::InputSystem::OnScreen::OnScreenControl*)>(&::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::AddControl)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xafdc7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>(),
                        {"AddControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo.RemoveControl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo (::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::*)(::UnityEngine::InputSystem::OnScreen::OnScreenControl*)>(&::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::RemoveControl)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xafdce74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>(),
                        {"RemoveControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::*)()>(&::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::Destroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xafdc734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>(),
                        {"AddControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>(*this, ___internal_method, control);
}
inline ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl*  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>(),
                        {"RemoveControl", {}, {::i2c::type_of<::UnityEngine::InputSystem::OnScreen::OnScreenControl*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>(*this, ___internal_method, control);
}
inline void GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "eventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buffer", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstControl", ty: "::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::OnScreenControl_OnScreenDeviceInfo(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::Unity::Collections::NativeArray_1<uint8_t>  buffer, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityW<::UnityEngine::InputSystem::OnScreen::OnScreenControl>  firstControl) noexcept  {
this->eventPtr = eventPtr;
this->buffer = buffer;
this->device = device;
this->firstControl = firstControl;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnScreenControl_OnScreenDeviceInfo::OnScreenControl_OnScreenDeviceInfo()   {
}
