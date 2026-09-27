#pragma once
// IWYU pragma private; include "Fusion/ITimeProvider.hpp"
#include "Fusion/zzzz__ITimeProvider_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/zzzz__Instant_def.hpp"
#include "Fusion/zzzz__SimulationRuntimeConfig_def.hpp"
#include "Fusion/zzzz__Simulation_TimeFeedback_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__TimeSyncConfiguration_def.hpp"
//  Writing Method size for method: ::Fusion::ITimeProvider.IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ITimeProvider::*)()>(&::Fusion::ITimeProvider::IsRunning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)(::Fusion::SimulationRuntimeConfig)>(&::Fusion::ITimeProvider::Configure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)(::Fusion::TimeSyncConfiguration*)>(&::Fusion::ITimeProvider::Configure)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)(double_t, ::Fusion::Tick)>(&::Fusion::ITimeProvider::Reset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.Snap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)()>(&::Fusion::ITimeProvider::Snap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)(double_t)>(&::Fusion::ITimeProvider::Update)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.OnSnapshotReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)(double_t, ::Fusion::Tick)>(&::Fusion::ITimeProvider::OnSnapshotReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.OnFeedbackReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)(::GlobalNamespace::Simulation_TimeFeedback)>(&::Fusion::ITimeProvider::OnFeedbackReceived)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.ResetFeedback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)()>(&::Fusion::ITimeProvider::ResetFeedback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.Now
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Instant (::Fusion::ITimeProvider::*)()>(&::Fusion::ITimeProvider::Now)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)(::Fusion::Statistics::FusionStatisticsManager*)>(&::Fusion::ITimeProvider::Log)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.SetPlayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)(int32_t)>(&::Fusion::ITimeProvider::SetPlayerIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.StartTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)()>(&::Fusion::ITimeProvider::StartTrace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ITimeProvider.StopTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ITimeProvider::*)()>(&::Fusion::ITimeProvider::StopTrace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::ITimeProvider*>(),
                    {::i2c::class_of<::Fusion::ITimeProvider*>(), 13}
                ));
    return ___internal_method;
  }
};
inline bool Fusion::ITimeProvider::IsRunning()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::ITimeProvider::Configure(::Fusion::SimulationRuntimeConfig  src)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void Fusion::ITimeProvider::Configure(::Fusion::TimeSyncConfiguration*  tsc)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tsc);
}
inline void Fusion::ITimeProvider::Reset(double_t  roundTripTime, ::Fusion::Tick  snapshot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundTripTime, snapshot);
}
inline void Fusion::ITimeProvider::Snap()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ITimeProvider::Update(double_t  unscaledDeltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
inline void Fusion::ITimeProvider::OnSnapshotReceived(double_t  roundTripTime, ::Fusion::Tick  snapshot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundTripTime, snapshot);
}
inline void Fusion::ITimeProvider::OnFeedbackReceived(::GlobalNamespace::Simulation_TimeFeedback  feedback)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feedback);
}
inline void Fusion::ITimeProvider::ResetFeedback()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Instant Fusion::ITimeProvider::Now()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Instant>(this, ___internal_method);
}
inline void Fusion::ITimeProvider::Log(::Fusion::Statistics::FusionStatisticsManager*  stats)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stats);
}
inline void Fusion::ITimeProvider::SetPlayerIndex(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Fusion::ITimeProvider::StartTrace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ITimeProvider::StopTrace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::ITimeProvider*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
