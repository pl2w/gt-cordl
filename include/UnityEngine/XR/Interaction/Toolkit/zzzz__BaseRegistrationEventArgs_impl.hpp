#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/BaseRegistrationEventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs.get_manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::get_manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40856c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs*>(),
                        {"get_manager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs.set_manager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::set_manager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb408574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs*>(),
                        {"set_manager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::__cordl_internal_get__manager_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::__cordl_internal_get__manager_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____manager_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::__cordl_internal_set__manager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____manager_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::get_manager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs*>(),
                        {"get_manager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs*>(),
                        {"set_manager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs* UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs::BaseRegistrationEventArgs()   {
}
