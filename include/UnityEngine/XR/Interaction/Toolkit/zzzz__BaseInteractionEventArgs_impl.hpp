#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/BaseInteractionEventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs.get_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* (::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactorObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs.set_interactorObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactorObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs.get_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* (::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs.set_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs.get_interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> (::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"get_interactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs.set_interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb407cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"set_interactor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs.get_interactable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> (::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"get_interactable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs.set_interactable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb407ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"set_interactable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb407ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::__cordl_internal_get__interactorObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorObject_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::__cordl_internal_get__interactorObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorObject_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::__cordl_internal_set__interactorObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactorObject_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::__cordl_internal_get__interactableObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableObject_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::__cordl_internal_get__interactableObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableObject_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::__cordl_internal_set__interactableObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactableObject_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactorObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"get_interactorObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"set_interactorObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"get_interactableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"get_interactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"set_interactor", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::get_interactable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"get_interactable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::set_interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {"set_interactable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs* UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs::BaseInteractionEventArgs()   {
}
