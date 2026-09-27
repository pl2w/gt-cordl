#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumber_HebrewValue.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HebrewToken_impl.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HebrewValue_def.hpp"
#include "System/Globalization/zzzz__HebrewNumber_HebrewToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HebrewNumber_HebrewValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HebrewNumber_HebrewValue::*)(::GlobalNamespace::HebrewNumber_HebrewToken, int16_t)>(&::GlobalNamespace::HebrewNumber_HebrewValue::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2362c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HebrewNumber_HebrewValue>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HebrewNumber_HebrewToken>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HebrewNumber_HebrewValue::_ctor(::GlobalNamespace::HebrewNumber_HebrewToken  token, int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HebrewNumber_HebrewValue>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::HebrewNumber_HebrewToken>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, token, value);
}
// Ctor Parameters [CppParam { name: "token", ty: "::GlobalNamespace::HebrewNumber_HebrewToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "value", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HebrewNumber_HebrewValue::HebrewNumber_HebrewValue(::GlobalNamespace::HebrewNumber_HebrewToken  token, int16_t  value) noexcept  {
this->token = token;
this->value = value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HebrewNumber_HebrewValue::HebrewNumber_HebrewValue()   {
}
