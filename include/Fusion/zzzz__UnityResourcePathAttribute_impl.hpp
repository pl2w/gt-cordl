#pragma once
// IWYU pragma private; include "Fusion/UnityResourcePathAttribute.hpp"
#include "Fusion/zzzz__DrawerPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__UnityResourcePathAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::UnityResourcePathAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::UnityResourcePathAttribute::*)(::System::Type*)>(&::Fusion::UnityResourcePathAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f3d874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityResourcePathAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Fusion::UnityResourcePathAttribute::__cordl_internal_get__ResourceType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResourceType_k__BackingField;
}
constexpr ::System::Type* const& Fusion::UnityResourcePathAttribute::__cordl_internal_get__ResourceType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResourceType_k__BackingField;
}
constexpr void Fusion::UnityResourcePathAttribute::__cordl_internal_set__ResourceType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResourceType_k__BackingField = value;
}
inline void Fusion::UnityResourcePathAttribute::_ctor(::System::Type*  resourceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::UnityResourcePathAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resourceType);
}
inline ::Fusion::UnityResourcePathAttribute* Fusion::UnityResourcePathAttribute::New_ctor(::System::Type*  resourceType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::UnityResourcePathAttribute*>(resourceType));
}
// Ctor Parameters []
constexpr ::Fusion::UnityResourcePathAttribute::UnityResourcePathAttribute()   {
}
