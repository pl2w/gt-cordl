#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerUpdaterDummy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkRunnerUpdaterDummy_def.hpp"
#include "Fusion/zzzz__INetworkRunnerUpdater_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDummy.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerUpdaterDummy::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerUpdaterDummy::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd7664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDummy*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDummy.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerUpdaterDummy::*)(::Fusion::NetworkRunner*)>(&::Fusion::NetworkRunnerUpdaterDummy::Shutdown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fd7668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDummy*>(),
                        {"Shutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkRunnerUpdaterDummy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkRunnerUpdaterDummy::*)()>(&::Fusion::NetworkRunnerUpdaterDummy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fd766c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDummy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkRunnerUpdaterDummy::Initialize(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDummy*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkRunnerUpdaterDummy::Shutdown(::Fusion::NetworkRunner*  runner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDummy*>(),
                        {"Shutdown", {}, {::i2c::type_of<::Fusion::NetworkRunner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner);
}
inline void Fusion::NetworkRunnerUpdaterDummy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkRunnerUpdaterDummy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkRunnerUpdaterDummy* Fusion::NetworkRunnerUpdaterDummy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkRunnerUpdaterDummy*>());
}
/// @brief Convert operator to "::Fusion::INetworkRunnerUpdater"
constexpr  Fusion::NetworkRunnerUpdaterDummy::operator ::Fusion::INetworkRunnerUpdater*() noexcept {
return static_cast<::Fusion::INetworkRunnerUpdater*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkRunnerUpdater"
constexpr ::Fusion::INetworkRunnerUpdater* Fusion::NetworkRunnerUpdaterDummy::i___Fusion__INetworkRunnerUpdater() noexcept {
return static_cast<::Fusion::INetworkRunnerUpdater*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkRunnerUpdaterDummy::NetworkRunnerUpdaterDummy()   {
}
