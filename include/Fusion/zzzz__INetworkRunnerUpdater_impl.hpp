#pragma once
// IWYU pragma private; include "Fusion/INetworkRunnerUpdater.hpp"
#include "Fusion/zzzz__INetworkRunnerUpdater_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
//  Writing Method size for method: ::Fusion::INetworkRunnerUpdater.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerUpdater::*)(::Fusion::NetworkRunner*)>(&::Fusion::INetworkRunnerUpdater::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerUpdater*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerUpdater*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::INetworkRunnerUpdater.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::INetworkRunnerUpdater::*)(::Fusion::NetworkRunner*)>(&::Fusion::INetworkRunnerUpdater::Shutdown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::INetworkRunnerUpdater*>(),
                    {::i2c::class_of<::Fusion::INetworkRunnerUpdater*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Fusion::INetworkRunnerUpdater::Initialize(::Fusion::NetworkRunner*  runner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerUpdater*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::INetworkRunnerUpdater::Shutdown(::Fusion::NetworkRunner*  runner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::INetworkRunnerUpdater*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
