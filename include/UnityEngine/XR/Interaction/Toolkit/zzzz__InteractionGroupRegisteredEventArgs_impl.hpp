#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InteractionGroupRegisteredEventArgs.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionGroupRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractionGroup_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs.get_interactionGroupObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::get_interactionGroupObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {"get_interactionGroupObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs.set_interactionGroupObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::set_interactionGroupObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40858c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {"set_interactionGroupObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs.get_containingGroupObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* (::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::get_containingGroupObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {"get_containingGroupObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs.set_containingGroupObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::set_containingGroupObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {"set_containingGroupObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4085a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::__cordl_internal_get__interactionGroupObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionGroupObject_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::__cordl_internal_get__interactionGroupObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactionGroupObject_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::__cordl_internal_set__interactionGroupObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactionGroupObject_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::__cordl_internal_get__containingGroupObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containingGroupObject_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::__cordl_internal_get__containingGroupObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____containingGroupObject_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::__cordl_internal_set__containingGroupObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____containingGroupObject_k__BackingField = value;
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::get_interactionGroupObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {"get_interactionGroupObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::set_interactionGroupObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {"set_interactionGroupObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::get_containingGroupObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {"get_containingGroupObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::set_containingGroupObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {"set_containingGroupObject", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs::InteractionGroupRegisteredEventArgs()   {
}
