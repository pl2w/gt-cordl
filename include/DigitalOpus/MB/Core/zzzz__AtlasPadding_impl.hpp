#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/AtlasPadding.hpp"
#include "DigitalOpus/MB/Core/zzzz__AtlasPadding_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::AtlasPadding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::AtlasPadding::*)(int32_t)>(&::DigitalOpus::MB::Core::AtlasPadding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc0994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::AtlasPadding>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::AtlasPadding._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::AtlasPadding::*)(int32_t, int32_t)>(&::DigitalOpus::MB::Core::AtlasPadding::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dc099c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::AtlasPadding>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::AtlasPadding::_ctor(int32_t  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::AtlasPadding>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p);
}
inline void DigitalOpus::MB::Core::AtlasPadding::_ctor(int32_t  px, int32_t  py)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::AtlasPadding>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, px, py);
}
// Ctor Parameters [CppParam { name: "topBottom", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "leftRight", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::AtlasPadding::AtlasPadding(int32_t  topBottom, int32_t  leftRight) noexcept  {
this->topBottom = topBottom;
this->leftRight = leftRight;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::AtlasPadding::AtlasPadding()   {
}
