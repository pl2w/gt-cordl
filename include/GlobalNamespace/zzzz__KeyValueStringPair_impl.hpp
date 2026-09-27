#pragma once
// IWYU pragma private; include "GlobalNamespace/KeyValueStringPair.hpp"
#include "GlobalNamespace/zzzz__KeyValueStringPair_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KeyValueStringPair._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KeyValueStringPair::*)(::StringW, ::StringW)>(&::GlobalNamespace::KeyValueStringPair::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x57f00a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyValueStringPair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KeyValueStringPair::_ctor(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KeyValueStringPair>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "Key", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KeyValueStringPair::KeyValueStringPair(::StringW  Key, ::StringW  Value) noexcept  {
this->Key = Key;
this->Value = Value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyValueStringPair::KeyValueStringPair()   {
}
