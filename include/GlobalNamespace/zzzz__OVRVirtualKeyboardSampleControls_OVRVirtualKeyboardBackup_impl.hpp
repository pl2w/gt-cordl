#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup_def.hpp"
#include "GlobalNamespace/zzzz__OVRHand_def.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_def.hpp"
#include "UnityEngine/EventSystems/zzzz__OVRPhysicsRaycaster_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup::*)(::GlobalNamespace::OVRVirtualKeyboard*)>(&::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup::_ctor)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa655c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRVirtualKeyboard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup.RestoreTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup::*)(::GlobalNamespace::OVRVirtualKeyboard*)>(&::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup::RestoreTo)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa656358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup>(),
                        {"RestoreTo", {}, {::i2c::type_of<::GlobalNamespace::OVRVirtualKeyboard*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup::_ctor(::GlobalNamespace::OVRVirtualKeyboard*  keyboard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::OVRVirtualKeyboard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyboard);
}
inline void GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup::RestoreTo(::GlobalNamespace::OVRVirtualKeyboard*  keyboard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup>(),
                        {"RestoreTo", {}, {::i2c::type_of<::GlobalNamespace::OVRVirtualKeyboard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyboard);
}
// Ctor Parameters [CppParam { name: "_position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rightControllerDirectTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rightControllerRootTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_leftControllerDirectTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_leftControllerRootTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_controllerRayInteraction", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_controllerDirectInteraction", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_handLeft", ty: "::UnityW<::GlobalNamespace::OVRHand>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_handRight", ty: "::UnityW<::GlobalNamespace::OVRHand>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_handRayInteraction", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_handDirectInteraction", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_controllerRaycaster", ty: "::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_handRaycaster", ty: "::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_textHandlerField", ty: "::UnityW<::UnityEngine::UI::InputField>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup(::UnityEngine::Vector3  _position, ::UnityEngine::Quaternion  _rotation, ::UnityEngine::Vector3  _scale, ::UnityW<::UnityEngine::Transform>  _rightControllerDirectTransform, ::UnityW<::UnityEngine::Transform>  _rightControllerRootTransform, ::UnityW<::UnityEngine::Transform>  _leftControllerDirectTransform, ::UnityW<::UnityEngine::Transform>  _leftControllerRootTransform, bool  _controllerRayInteraction, bool  _controllerDirectInteraction, ::UnityW<::GlobalNamespace::OVRHand>  _handLeft, ::UnityW<::GlobalNamespace::OVRHand>  _handRight, bool  _handRayInteraction, bool  _handDirectInteraction, ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>  _controllerRaycaster, ::UnityW<::UnityEngine::EventSystems::OVRPhysicsRaycaster>  _handRaycaster, ::UnityW<::UnityEngine::UI::InputField>  _textHandlerField) noexcept  {
this->_position = _position;
this->_rotation = _rotation;
this->_scale = _scale;
this->_rightControllerDirectTransform = _rightControllerDirectTransform;
this->_rightControllerRootTransform = _rightControllerRootTransform;
this->_leftControllerDirectTransform = _leftControllerDirectTransform;
this->_leftControllerRootTransform = _leftControllerRootTransform;
this->_controllerRayInteraction = _controllerRayInteraction;
this->_controllerDirectInteraction = _controllerDirectInteraction;
this->_handLeft = _handLeft;
this->_handRight = _handRight;
this->_handRayInteraction = _handRayInteraction;
this->_handDirectInteraction = _handDirectInteraction;
this->_controllerRaycaster = _controllerRaycaster;
this->_handRaycaster = _handRaycaster;
this->_textHandlerField = _textHandlerField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup::OVRVirtualKeyboardSampleControls_OVRVirtualKeyboardBackup()   {
}
