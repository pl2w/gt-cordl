#pragma once
// IWYU pragma private; include "Fusion/ErrorIfAttribute.hpp"
#include "Fusion/zzzz__DoIfAttributeBase_impl.hpp"
#include "Fusion/zzzz__ErrorIfAttribute_def.hpp"
#include "Fusion/zzzz__CompareOperator_def.hpp"
//  Writing Method size for method: ::Fusion::ErrorIfAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ErrorIfAttribute::*)(::StringW, int64_t, ::StringW, ::Fusion::CompareOperator)>(&::Fusion::ErrorIfAttribute::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f3d6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ErrorIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::ErrorIfAttribute::__cordl_internal_get_Message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr ::StringW const& Fusion::ErrorIfAttribute::__cordl_internal_get_Message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Message;
}
constexpr void Fusion::ErrorIfAttribute::__cordl_internal_set_Message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Message = value;
}
inline void Fusion::ErrorIfAttribute::_ctor(::StringW  conditionMember, int64_t  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ErrorIfAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::CompareOperator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditionMember, compareToValue, message, compare);
}
inline ::Fusion::ErrorIfAttribute* Fusion::ErrorIfAttribute::New_ctor(::StringW  conditionMember, int64_t  compareToValue, ::StringW  message, ::Fusion::CompareOperator  compare)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ErrorIfAttribute*>(conditionMember, compareToValue, message, compare));
}
// Ctor Parameters []
constexpr ::Fusion::ErrorIfAttribute::ErrorIfAttribute()   {
}
