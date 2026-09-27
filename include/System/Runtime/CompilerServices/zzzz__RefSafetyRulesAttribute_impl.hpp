#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RefSafetyRulesAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__RefSafetyRulesAttribute_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::RefSafetyRulesAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::CompilerServices::RefSafetyRulesAttribute::*)(int32_t)>(&::System::Runtime::CompilerServices::RefSafetyRulesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9caed24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::RefSafetyRulesAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Runtime::CompilerServices::RefSafetyRulesAttribute::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr int32_t const& System::Runtime::CompilerServices::RefSafetyRulesAttribute::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void System::Runtime::CompilerServices::RefSafetyRulesAttribute::__cordl_internal_set_Version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
inline void System::Runtime::CompilerServices::RefSafetyRulesAttribute::_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::RefSafetyRulesAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::Runtime::CompilerServices::RefSafetyRulesAttribute* System::Runtime::CompilerServices::RefSafetyRulesAttribute::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::RefSafetyRulesAttribute*>(_cordl_fixed_empty_name_whitespace));
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::RefSafetyRulesAttribute::RefSafetyRulesAttribute()   {
}
