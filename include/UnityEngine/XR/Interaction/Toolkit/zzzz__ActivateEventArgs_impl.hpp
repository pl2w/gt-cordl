#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ActivateEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRActivateInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs.get_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* (::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::get_interactorObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb408374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs.set_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::set_interactorObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4063dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs.get_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable* (::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::get_interactableObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4083e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs.set_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::set_interactableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4063e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::get_interactorObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable* UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::get_interactableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs::ActivateEventArgs()   {
}
