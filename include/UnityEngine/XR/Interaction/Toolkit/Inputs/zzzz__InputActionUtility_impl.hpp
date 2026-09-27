#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/InputActionUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__InputActionUtility_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility.CreateValueAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)(::System::Type*, ::StringW)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility::CreateValueAction)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4b14d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*>(),
                        {"CreateValueAction", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility.CreateButtonAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)(::StringW, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility::CreateButtonAction)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb4b17a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*>(),
                        {"CreateButtonAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility.CreatePassThroughAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputAction* (*)(::System::Type*, ::StringW, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility::CreatePassThroughAction)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb4b183c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*>(),
                        {"CreatePassThroughAction", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility.GetExpectedControlType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility::GetExpectedControlType)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb4b1560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*>(),
                        {"GetExpectedControlType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility::CreateValueAction(::System::Type*  valueType, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*>(),
                        {"CreateValueAction", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method, valueType, name);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility::CreateButtonAction(::StringW  name, bool  wantsInitialStateCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*>(),
                        {"CreateButtonAction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method, name, wantsInitialStateCheck);
}
inline ::UnityEngine::InputSystem::InputAction* UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility::CreatePassThroughAction(::System::Type*  valueType, ::StringW  name, bool  wantsInitialStateCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*>(),
                        {"CreatePassThroughAction", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputAction*>(nullptr, ___internal_method, valueType, name, wantsInitialStateCheck);
}
inline ::StringW UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility::GetExpectedControlType(::System::Type*  valueType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility*>(),
                        {"GetExpectedControlType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, valueType);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionUtility::InputActionUtility()   {
}
