#pragma once
// IWYU pragma private; include "Liv/Lck/LCKPluginIntegration.hpp"
#include "Liv/Lck/zzzz__ILCKPlugin_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LCKPluginIntegration_def.hpp"
#include "Liv/Lck/zzzz__LckService_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LCKPluginIntegration.InitializePlugins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::LckService*)>(&::Liv::Lck::LCKPluginIntegration::InitializePlugins)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9cf1190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginIntegration*>(),
                        {"InitializePlugins", {}, {::i2c::type_of<::Liv::Lck::LckService*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginIntegration.ShutdownPlugins
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::LCKPluginIntegration::ShutdownPlugins)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x9cf17d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginIntegration*>(),
                        {"ShutdownPlugins", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LCKPluginIntegration.LogPluginInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Liv::Lck::LCKPluginIntegration::LogPluginInfo)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x9cf1d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginIntegration*>(),
                        {"LogPluginInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LCKPluginIntegration::InitializePlugins(::Liv::Lck::LckService*  lckService)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginIntegration*>(),
                        {"InitializePlugins", {}, {::i2c::type_of<::Liv::Lck::LckService*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, lckService);
}
inline void Liv::Lck::LCKPluginIntegration::ShutdownPlugins()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginIntegration*>(),
                        {"ShutdownPlugins", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline T Liv::Lck::LCKPluginIntegration::GetPlugin()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPluginIntegration*>(),
                    {"GetPlugin", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Liv::Lck::ILCKPlugin*> && ::cordl_internals::reference_type_constraint<T>)
inline bool Liv::Lck::LCKPluginIntegration::HasPlugin()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LCKPluginIntegration*>(),
                    {"HasPlugin", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Liv::Lck::LCKPluginIntegration::LogPluginInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LCKPluginIntegration*>(),
                        {"LogPluginInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Liv::Lck::LCKPluginIntegration::LCKPluginIntegration()   {
}
