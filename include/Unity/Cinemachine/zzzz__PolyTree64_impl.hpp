#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyTree64.hpp"
#include "Unity/Cinemachine/zzzz__PolyPath64_impl.hpp"
#include "Unity/Cinemachine/zzzz__PolyTree64_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PolyTree64._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyTree64::*)()>(&::Unity::Cinemachine::PolyTree64::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefbc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyTree64*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::PolyTree64::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyTree64*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::PolyTree64* Unity::Cinemachine::PolyTree64::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::PolyTree64*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PolyTree64::PolyTree64()   {
}
