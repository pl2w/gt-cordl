#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/InputActionPropertyExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__InputActionPropertyExtensions_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions.EnableDirectAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions::EnableDirectAction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4b13a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions*>(),
                        {"EnableDirectAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions.DisableDirectAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionProperty)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions::DisableDirectAction)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4b143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions*>(),
                        {"DisableDirectAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions::EnableDirectAction(::UnityEngine::InputSystem::InputActionProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions*>(),
                        {"EnableDirectAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, property);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions::DisableDirectAction(::UnityEngine::InputSystem::InputActionProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions*>(),
                        {"DisableDirectAction", {}, {::i2c::type_of<::UnityEngine::InputSystem::InputActionProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, property);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::InputActionPropertyExtensions::InputActionPropertyExtensions()   {
}
