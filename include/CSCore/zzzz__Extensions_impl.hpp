#pragma once
// IWYU pragma private; include "CSCore/Extensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "CSCore/zzzz__Extensions_def.hpp"
#include "CSCore/zzzz__WaveFormat_def.hpp"
//  Writing Method size for method: ::CSCore::Extensions.IsPCM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::CSCore::WaveFormat*)>(&::CSCore::Extensions::IsPCM)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa76349c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Extensions*>(),
                        {"IsPCM", {}, {::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::CSCore::Extensions.IsIeeeFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::CSCore::WaveFormat*)>(&::CSCore::Extensions::IsIeeeFloat)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa7635bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Extensions*>(),
                        {"IsIeeeFloat", {}, {::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool CSCore::Extensions::IsPCM(::CSCore::WaveFormat*  waveFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Extensions*>(),
                        {"IsPCM", {}, {::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, waveFormat);
}
inline bool CSCore::Extensions::IsIeeeFloat(::CSCore::WaveFormat*  waveFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::CSCore::Extensions*>(),
                        {"IsIeeeFloat", {}, {::i2c::type_of<::CSCore::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, waveFormat);
}
// Ctor Parameters []
constexpr ::CSCore::Extensions::Extensions()   {
}
