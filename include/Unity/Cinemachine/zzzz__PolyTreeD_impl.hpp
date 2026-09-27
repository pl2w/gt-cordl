#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyTreeD.hpp"
#include "Unity/Cinemachine/zzzz__PolyPathD_impl.hpp"
#include "Unity/Cinemachine/zzzz__PolyTreeD_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::PolyTreeD.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Cinemachine::PolyTreeD::*)()>(&::Unity::Cinemachine::PolyTreeD::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefbc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyTreeD*>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::PolyTreeD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::PolyTreeD::*)()>(&::Unity::Cinemachine::PolyTreeD::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaefbc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyTreeD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline double_t Unity::Cinemachine::PolyTreeD::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyTreeD*>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::PolyTreeD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::PolyTreeD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::PolyTreeD* Unity::Cinemachine::PolyTreeD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::PolyTreeD*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::PolyTreeD::PolyTreeD()   {
}
