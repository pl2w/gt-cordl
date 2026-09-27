#pragma once
// IWYU pragma private; include "Fusion/WarnIfAttribute.hpp"
#include "Fusion/zzzz__DoIfAttributeBase_impl.hpp"
#include "Fusion/zzzz__WarnIfAttribute_def.hpp"
#include "Fusion/zzzz__CompareOperator_def.hpp"
//  Writing Method size for method: ::Fusion::WarnIfAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::WarnIfAttribute::*)(::StringW, bool, ::StringW, ::Fusion::CompareOperator)>(&::Fusion::WarnIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f3d8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::WarnIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::WarnIfAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::WarnIfAttribute::*)(::StringW, int64_t, ::StringW, ::Fusion::CompareOperator)>(&::Fusion::WarnIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f3d924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::WarnIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::WarnIfAttribute::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& Fusion::WarnIfAttribute::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void Fusion::WarnIfAttribute::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
inline void Fusion::WarnIfAttribute::_ctor(::StringW  conditionMember, bool  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::WarnIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionMember, compareToValue, message, compare);
}
inline void Fusion::WarnIfAttribute::_ctor(::StringW  conditionMember, int64_t  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::WarnIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionMember, compareToValue, message, compare);
}
inline ::Fusion::WarnIfAttribute* Fusion::WarnIfAttribute::New_ctor(::StringW  conditionMember, bool  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::WarnIfAttribute*>(conditionMember, compareToValue, message, compare));
}
inline ::Fusion::WarnIfAttribute* Fusion::WarnIfAttribute::New_ctor(::StringW  conditionMember, int64_t  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::WarnIfAttribute*>(conditionMember, compareToValue, message, compare));
}
// Ctor Parameters []
constexpr ::Fusion::WarnIfAttribute::WarnIfAttribute()   {
}
