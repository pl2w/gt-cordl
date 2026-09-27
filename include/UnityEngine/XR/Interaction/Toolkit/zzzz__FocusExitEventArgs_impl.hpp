#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/FocusExitEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__FocusExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRFocusInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs.get_interactionGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::get_interactionGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"get_interactionGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs.set_interactionGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::set_interactionGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"set_interactionGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs.get_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* (::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::get_interactableObject)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb408290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs.set_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::set_interactableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4082fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs.get_manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::get_manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"get_manager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs.set_manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::set_manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40830c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"set_manager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs.get_isCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::get_isCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"get_isCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs.set_isCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::set_isCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40831c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"set_isCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::__cordl_internal_get__interactionGroup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionGroup_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::__cordl_internal_get__interactionGroup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionGroup_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::__cordl_internal_set__interactionGroup_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactionGroup_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::__cordl_internal_get__manager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::__cordl_internal_get__manager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::__cordl_internal_set__manager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manager_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::__cordl_internal_get__isCanceled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCanceled_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::__cordl_internal_get__isCanceled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isCanceled_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::__cordl_internal_set__isCanceled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isCanceled_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::get_interactionGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"get_interactionGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::set_interactionGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"set_interactionGroup", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::get_interactableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::get_manager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"get_manager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"set_manager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::get_isCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"get_isCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::set_isCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {"set_isCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs* UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs::FocusExitEventArgs()   {
}
