#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/HoverExitEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs.get_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* (::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_interactorObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb407e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs.set_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_interactorObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs.get_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* (::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_interactableObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb407178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs.set_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_interactableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs.get_manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"get_manager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs.set_manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"set_manager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs.get_isCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_isCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"get_isCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs.set_isCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_isCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"set_isCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::__cordl_internal_get__manager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::__cordl_internal_get__manager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::__cordl_internal_set__manager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manager_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::__cordl_internal_get__isCanceled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCanceled_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::__cordl_internal_get__isCanceled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCanceled_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::__cordl_internal_set__isCanceled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCanceled_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_interactorObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_interactableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_manager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"get_manager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"set_manager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::get_isCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"get_isCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::set_isCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {"set_isCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs::HoverExitEventArgs()   {
}
