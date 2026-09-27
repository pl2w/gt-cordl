#pragma once
// IWYU pragma private; include "UnityEngine/SpookyHash_U.hpp"
#include "UnityEngine/zzzz__SpookyHash_U_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpookyHash_U._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpookyHash_U::*)(uint16_t*)>(&::GlobalNamespace::SpookyHash_U::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5c4938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpookyHash_U>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t*& GlobalNamespace::SpookyHash_U::__cordl_internal_get_p8()  {
return this->___p8;
}
constexpr uint8_t* const& GlobalNamespace::SpookyHash_U::__cordl_internal_get_p8() const {
return this->___p8;
}
constexpr void GlobalNamespace::SpookyHash_U::__cordl_internal_set_p8(uint8_t*  value)  {
this->___p8 = value;
}
constexpr uint32_t*& GlobalNamespace::SpookyHash_U::__cordl_internal_get_p32()  {
return this->___p32;
}
constexpr uint32_t* const& GlobalNamespace::SpookyHash_U::__cordl_internal_get_p32() const {
return this->___p32;
}
constexpr void GlobalNamespace::SpookyHash_U::__cordl_internal_set_p32(uint32_t*  value)  {
this->___p32 = value;
}
constexpr uint64_t*& GlobalNamespace::SpookyHash_U::__cordl_internal_get_p64()  {
return this->___p64;
}
constexpr uint64_t* const& GlobalNamespace::SpookyHash_U::__cordl_internal_get_p64() const {
return this->___p64;
}
constexpr void GlobalNamespace::SpookyHash_U::__cordl_internal_set_p64(uint64_t*  value)  {
this->___p64 = value;
}
constexpr uint64_t& GlobalNamespace::SpookyHash_U::__cordl_internal_get_i()  {
return this->___i;
}
constexpr uint64_t const& GlobalNamespace::SpookyHash_U::__cordl_internal_get_i() const {
return this->___i;
}
constexpr void GlobalNamespace::SpookyHash_U::__cordl_internal_set_i(uint64_t  value)  {
this->___i = value;
}
inline void GlobalNamespace::SpookyHash_U::_ctor(uint16_t*  p8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpookyHash_U>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p8);
}
// Ctor Parameters [CppParam { name: "p8", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "p32", ty: "uint32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "p64", ty: "uint64_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "i", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SpookyHash_U::SpookyHash_U(uint8_t*  p8, uint32_t*  p32, uint64_t*  p64, uint64_t  i) noexcept  {
this->p8 = p8;
this->p32 = p32;
this->p64 = p64;
this->i = i;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpookyHash_U::SpookyHash_U()   {
}
