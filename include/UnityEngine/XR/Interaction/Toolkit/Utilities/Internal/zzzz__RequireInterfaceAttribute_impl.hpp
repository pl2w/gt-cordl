#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Internal/RequireInterfaceAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Internal/zzzz__RequireInterfaceAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute.get_interfaceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::get_interfaceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb42be90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>(),
                        {"get_interfaceType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::*)(::System::Type*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb42be98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::__cordl_internal_get__interfaceType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interfaceType_k__BackingField;
}
constexpr ::System::Type* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::__cordl_internal_get__interfaceType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interfaceType_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::__cordl_internal_set__interfaceType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interfaceType_k__BackingField = value;
}
inline ::System::Type* UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::get_interfaceType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>(),
                        {"get_interfaceType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::_ctor(::System::Type*  interfaceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interfaceType);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute* UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::New_ctor(::System::Type*  interfaceType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute*>(interfaceType));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Internal::RequireInterfaceAttribute::RequireInterfaceAttribute()   {
}
