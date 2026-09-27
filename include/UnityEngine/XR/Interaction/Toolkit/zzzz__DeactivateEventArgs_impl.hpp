#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/DeactivateEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRActivateInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs.get_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* (::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::get_interactorObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb408494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs.set_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::set_interactorObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4063ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs.get_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable* (::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::get_interactableObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb408500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs.set_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::set_interactableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4063f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::get_interactorObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable* UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::get_interactableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs::DeactivateEventArgs()   {
}
