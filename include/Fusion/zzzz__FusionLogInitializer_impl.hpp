#pragma once
// IWYU pragma private; include "Fusion/FusionLogInitializer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionLogInitializer_def.hpp"
#include "Fusion/zzzz__FusionUnityLogger_def.hpp"
//  Writing Method size for method: ::Fusion::FusionLogInitializer.CreateLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::FusionUnityLogger* (*)(bool)>(&::Fusion::FusionLogInitializer::CreateLogger)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60e0fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionLogInitializer*>(),
                        {"CreateLogger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FusionLogInitializer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::FusionLogInitializer::Initialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x60e103c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionLogInitializer*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::FusionUnityLogger* Fusion::FusionLogInitializer::CreateLogger(bool  isDarkMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionLogInitializer*>(),
                        {"CreateLogger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::FusionUnityLogger*>(nullptr, ___internal_method, isDarkMode);
}
inline void Fusion::FusionLogInitializer::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionLogInitializer*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Fusion::FusionLogInitializer::FusionLogInitializer()   {
}
