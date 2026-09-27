#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InputHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_ButtonInfo_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_Axis2D_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_ButtonInfo_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_ButtonReadType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_Button_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InputHelpers.IsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::InputDevice, ::GlobalNamespace::InputHelpers_Button, ::by_ref<bool>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::InputHelpers::IsPressed)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xb41b248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>(),
                        {"IsPressed", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::GlobalNamespace::InputHelpers_Button>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InputHelpers.TryReadSingleValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::InputDevice, ::GlobalNamespace::InputHelpers_Button, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::InputHelpers::TryReadSingleValue)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xb41b59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>(),
                        {"TryReadSingleValue", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::GlobalNamespace::InputHelpers_Button>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InputHelpers.TryReadAxis2DValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::InputDevice, ::GlobalNamespace::InputHelpers_Axis2D, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::XR::Interaction::Toolkit::InputHelpers::TryReadAxis2DValue)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb41b8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>(),
                        {"TryReadAxis2DValue", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::GlobalNamespace::InputHelpers_Axis2D>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::InputHelpers::setStaticF_s_ButtonData(::ArrayW<::GlobalNamespace::InputHelpers_ButtonInfo>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::InputHelpers_ButtonInfo>, "s_ButtonData", ::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>(std::forward<::ArrayW<::GlobalNamespace::InputHelpers_ButtonInfo>>(value));
}
inline ::ArrayW<::GlobalNamespace::InputHelpers_ButtonInfo> UnityEngine::XR::Interaction::Toolkit::InputHelpers::getStaticF_s_ButtonData()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::InputHelpers_ButtonInfo>, "s_ButtonData", ::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::InputHelpers::setStaticF_s_Axis2DNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_Axis2DNames", ::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> UnityEngine::XR::Interaction::Toolkit::InputHelpers::getStaticF_s_Axis2DNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_Axis2DNames", ::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::InputHelpers::IsPressed(::UnityEngine::XR::InputDevice  device, ::GlobalNamespace::InputHelpers_Button  button, ::by_ref<bool>  isPressed, float_t  pressThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>(),
                        {"IsPressed", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::GlobalNamespace::InputHelpers_Button>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device, button, isPressed, pressThreshold);
}
inline bool UnityEngine::XR::Interaction::Toolkit::InputHelpers::TryReadSingleValue(::UnityEngine::XR::InputDevice  device, ::GlobalNamespace::InputHelpers_Button  button, ::by_ref<float_t>  singleValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>(),
                        {"TryReadSingleValue", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::GlobalNamespace::InputHelpers_Button>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device, button, singleValue);
}
inline bool UnityEngine::XR::Interaction::Toolkit::InputHelpers::TryReadAxis2DValue(::UnityEngine::XR::InputDevice  device, ::GlobalNamespace::InputHelpers_Axis2D  axis2D, ::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InputHelpers*>(),
                        {"TryReadAxis2DValue", {}, {::i2c::type_of<::UnityEngine::XR::InputDevice>(), ::i2c::type_of<::GlobalNamespace::InputHelpers_Axis2D>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device, axis2D, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::InputHelpers::InputHelpers()   {
}
