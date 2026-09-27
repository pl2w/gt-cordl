#pragma once
// IWYU pragma private; include "Fusion/DoIfAttributeBase.hpp"
#include "Fusion/zzzz__CompareOperator_impl.hpp"
#include "Fusion/zzzz__DecoratingPropertyAttribute_impl.hpp"
#include "Fusion/zzzz__DoIfAttributeBase_def.hpp"
#include "Fusion/zzzz__CompareOperator_def.hpp"
//  Writing Method size for method: ::Fusion::DoIfAttributeBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DoIfAttributeBase::*)(::StringW, int64_t, ::Fusion::CompareOperator)>(&::Fusion::DoIfAttributeBase::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f3d410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DoIfAttributeBase*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DoIfAttributeBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DoIfAttributeBase::*)(::StringW, bool, ::Fusion::CompareOperator)>(&::Fusion::DoIfAttributeBase::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5f3d470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DoIfAttributeBase*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Fusion::DoIfAttributeBase::__cordl_internal_get__isDouble()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDouble;
}
constexpr bool const& Fusion::DoIfAttributeBase::__cordl_internal_get__isDouble() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDouble;
}
constexpr void Fusion::DoIfAttributeBase::__cordl_internal_set__isDouble(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDouble = value;
}
constexpr int64_t& Fusion::DoIfAttributeBase::__cordl_internal_get__longValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____longValue;
}
constexpr int64_t const& Fusion::DoIfAttributeBase::__cordl_internal_get__longValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____longValue;
}
constexpr void Fusion::DoIfAttributeBase::__cordl_internal_set__longValue(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____longValue = value;
}
constexpr ::Fusion::CompareOperator& Fusion::DoIfAttributeBase::__cordl_internal_get_Compare()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Compare;
}
constexpr ::Fusion::CompareOperator const& Fusion::DoIfAttributeBase::__cordl_internal_get_Compare() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Compare;
}
constexpr void Fusion::DoIfAttributeBase::__cordl_internal_set_Compare(::Fusion::CompareOperator  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Compare = value;
}
constexpr ::StringW& Fusion::DoIfAttributeBase::__cordl_internal_get_ConditionMember()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConditionMember;
}
constexpr ::StringW const& Fusion::DoIfAttributeBase::__cordl_internal_get_ConditionMember() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConditionMember;
}
constexpr void Fusion::DoIfAttributeBase::__cordl_internal_set_ConditionMember(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConditionMember = value;
}
constexpr bool& Fusion::DoIfAttributeBase::__cordl_internal_get_ErrorOnConditionMemberNotFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorOnConditionMemberNotFound;
}
constexpr bool const& Fusion::DoIfAttributeBase::__cordl_internal_get_ErrorOnConditionMemberNotFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorOnConditionMemberNotFound;
}
constexpr void Fusion::DoIfAttributeBase::__cordl_internal_set_ErrorOnConditionMemberNotFound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorOnConditionMemberNotFound = value;
}
inline void Fusion::DoIfAttributeBase::_ctor(::StringW  conditionMember, int64_t  compareToValue, ::Fusion::CompareOperator  compare)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DoIfAttributeBase*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionMember, compareToValue, compare);
}
inline void Fusion::DoIfAttributeBase::_ctor(::StringW  conditionMember, bool  compareToValue, ::Fusion::CompareOperator  compare)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DoIfAttributeBase*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionMember, compareToValue, compare);
}
inline ::Fusion::DoIfAttributeBase* Fusion::DoIfAttributeBase::New_ctor(::StringW  conditionMember, int64_t  compareToValue, ::Fusion::CompareOperator  compare)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DoIfAttributeBase*>(conditionMember, compareToValue, compare));
}
inline ::Fusion::DoIfAttributeBase* Fusion::DoIfAttributeBase::New_ctor(::StringW  conditionMember, bool  compareToValue, ::Fusion::CompareOperator  compare)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DoIfAttributeBase*>(conditionMember, compareToValue, compare));
}
// Ctor Parameters []
constexpr ::Fusion::DoIfAttributeBase::DoIfAttributeBase()   {
}
