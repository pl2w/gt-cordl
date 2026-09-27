#pragma once
// IWYU pragma private; include "GorillaTag/GTStripGameObjectFromBuildAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GorillaTag/zzzz__GTStripGameObjectFromBuildAttribute_def.hpp"
//  Writing Method size for method: ::GorillaTag::GTStripGameObjectFromBuildAttribute.get_Condition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::GTStripGameObjectFromBuildAttribute::*)()>(&::GorillaTag::GTStripGameObjectFromBuildAttribute::get_Condition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1f758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTStripGameObjectFromBuildAttribute*>(),
                        {"get_Condition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTStripGameObjectFromBuildAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GTStripGameObjectFromBuildAttribute::*)(::StringW)>(&::GorillaTag::GTStripGameObjectFromBuildAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5d1f760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTStripGameObjectFromBuildAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTag::GTStripGameObjectFromBuildAttribute::__cordl_internal_get__Condition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Condition_k__BackingField;
}
constexpr ::StringW const& GorillaTag::GTStripGameObjectFromBuildAttribute::__cordl_internal_get__Condition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Condition_k__BackingField;
}
constexpr void GorillaTag::GTStripGameObjectFromBuildAttribute::__cordl_internal_set__Condition_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Condition_k__BackingField = value;
}
inline ::StringW GorillaTag::GTStripGameObjectFromBuildAttribute::get_Condition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTStripGameObjectFromBuildAttribute*>(),
                        {"get_Condition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTag::GTStripGameObjectFromBuildAttribute::_ctor(::StringW  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTStripGameObjectFromBuildAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, condition);
}
inline ::GorillaTag::GTStripGameObjectFromBuildAttribute* GorillaTag::GTStripGameObjectFromBuildAttribute::New_ctor(::StringW  condition)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GTStripGameObjectFromBuildAttribute*>(condition));
}
// Ctor Parameters []
constexpr ::GorillaTag::GTStripGameObjectFromBuildAttribute::GTStripGameObjectFromBuildAttribute()   {
}
