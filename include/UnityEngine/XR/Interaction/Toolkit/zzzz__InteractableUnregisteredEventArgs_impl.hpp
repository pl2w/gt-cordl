#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InteractableUnregisteredEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs.get_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* (::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::get_interactableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs.set_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::set_interactableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs.get_interactable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> (::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::get_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {"get_interactable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs.set_interactable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::set_interactable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb408658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {"set_interactable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40865c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::__cordl_internal_get__interactableObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableObject_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::__cordl_internal_get__interactableObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableObject_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::__cordl_internal_set__interactableObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactableObject_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::get_interactableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::get_interactable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {"get_interactable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::set_interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {"set_interactable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs::InteractableUnregisteredEventArgs()   {
}
