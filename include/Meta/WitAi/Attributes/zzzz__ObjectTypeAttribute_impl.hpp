#pragma once
// IWYU pragma private; include "Meta/WitAi/Attributes/ObjectTypeAttribute.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "Meta/WitAi/Attributes/zzzz__ObjectTypeAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Attributes::ObjectTypeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Attributes::ObjectTypeAttribute::*)(::System::Type*, ::ArrayW<::System::Type*>)>(&::Meta::WitAi::Attributes::ObjectTypeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e9ec4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::ObjectTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Attributes::ObjectTypeAttribute.VerifyTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::Meta::WitAi::Attributes::ObjectTypeAttribute::*)(::System::Type*, ::ArrayW<::System::Type*>)>(&::Meta::WitAi::Attributes::ObjectTypeAttribute::VerifyTypes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9e9ec94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::ObjectTypeAttribute*>(),
                        {"VerifyTypes", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Attributes::ObjectTypeAttribute.VerifyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Attributes::ObjectTypeAttribute::*)(::System::Type*)>(&::Meta::WitAi::Attributes::ObjectTypeAttribute::VerifyType)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e9ee74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::ObjectTypeAttribute*>(),
                        {"VerifyType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Type*>& Meta::WitAi::Attributes::ObjectTypeAttribute::__cordl_internal_get__TargetTypes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetTypes_k__BackingField;
}
constexpr ::ArrayW<::System::Type*> const& Meta::WitAi::Attributes::ObjectTypeAttribute::__cordl_internal_get__TargetTypes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TargetTypes_k__BackingField;
}
constexpr void Meta::WitAi::Attributes::ObjectTypeAttribute::__cordl_internal_set__TargetTypes_k__BackingField(::ArrayW<::System::Type*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TargetTypes_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Attributes::ObjectTypeAttribute::__cordl_internal_get__RequiresAllTypes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresAllTypes_k__BackingField;
}
constexpr bool const& Meta::WitAi::Attributes::ObjectTypeAttribute::__cordl_internal_get__RequiresAllTypes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresAllTypes_k__BackingField;
}
constexpr void Meta::WitAi::Attributes::ObjectTypeAttribute::__cordl_internal_set__RequiresAllTypes_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequiresAllTypes_k__BackingField = value;
}
inline void Meta::WitAi::Attributes::ObjectTypeAttribute::_ctor(::System::Type*  targetType, /* [ParamArray] */ ::ArrayW<::System::Type*>  additionalTargetTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::ObjectTypeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetType, additionalTargetTypes);
}
inline ::ArrayW<::System::Type*> Meta::WitAi::Attributes::ObjectTypeAttribute::VerifyTypes(::System::Type*  targetType, ::ArrayW<::System::Type*>  additionalTargetTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::ObjectTypeAttribute*>(),
                        {"VerifyTypes", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, targetType, additionalTargetTypes);
}
inline bool Meta::WitAi::Attributes::ObjectTypeAttribute::VerifyType(::System::Type*  targetType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Attributes::ObjectTypeAttribute*>(),
                        {"VerifyType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetType);
}
inline ::Meta::WitAi::Attributes::ObjectTypeAttribute* Meta::WitAi::Attributes::ObjectTypeAttribute::New_ctor(::System::Type*  targetType, /* [ParamArray] */ ::ArrayW<::System::Type*>  additionalTargetTypes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Attributes::ObjectTypeAttribute*>(targetType, additionalTargetTypes));
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Attributes::ObjectTypeAttribute::ObjectTypeAttribute()   {
}
