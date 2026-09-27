#pragma once
// IWYU pragma private; include "Fusion/ServerTimeProvider.hpp"
#include "Fusion/zzzz__ServerTimeProviderSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ServerTimeProvider_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/zzzz__ITimeProvider_def.hpp"
#include "Fusion/zzzz__Instant_def.hpp"
#include "Fusion/zzzz__ServerTimeProviderSettings_def.hpp"
#include "Fusion/zzzz__SimulationRuntimeConfig_def.hpp"
#include "Fusion/zzzz__Simulation_TimeFeedback_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__TimeSyncConfiguration_def.hpp"
//  Writing Method size for method: ::Fusion::ServerTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)()>(&::Fusion::ServerTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x600b11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(::Fusion::ServerTimeProviderSettings)>(&::Fusion::ServerTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x600b13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ServerTimeProviderSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(::Fusion::Tick)>(&::Fusion::ServerTimeProvider::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x600b164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Reset", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(double_t)>(&::Fusion::ServerTimeProvider::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x600b178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Update", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ServerTimeProvider::*)()>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_IsRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600b188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(::Fusion::SimulationRuntimeConfig)>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_Configure)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x600b190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Configure", {}, {::i2c::type_of<::Fusion::SimulationRuntimeConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(::Fusion::TimeSyncConfiguration*)>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_Configure)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600b1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Configure", {}, {::i2c::type_of<::Fusion::TimeSyncConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(double_t, ::Fusion::Tick)>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x600b1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Reset", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_Snap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)()>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_Snap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600b1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Snap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(double_t)>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x600b1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Update", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_OnSnapshotReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(double_t, ::Fusion::Tick)>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_OnSnapshotReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600b1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.OnSnapshotReceived", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_OnFeedbackReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(::GlobalNamespace::Simulation_TimeFeedback)>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_OnFeedbackReceived)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600b1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.OnFeedbackReceived", {}, {::i2c::type_of<::GlobalNamespace::Simulation_TimeFeedback>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_ResetFeedback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)()>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_ResetFeedback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600b1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.ResetFeedback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_Now
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Instant (::Fusion::ServerTimeProvider::*)()>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_Now)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x600b1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Now", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(::Fusion::Statistics::FusionStatisticsManager*)>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_Log)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600b1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Log", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_SetPlayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)(int32_t)>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_SetPlayerIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600b1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.SetPlayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_StartTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)()>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_StartTrace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600b200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.StartTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ServerTimeProvider.Fusion_ITimeProvider_StopTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ServerTimeProvider::*)()>(&::Fusion::ServerTimeProvider::Fusion_ITimeProvider_StopTrace)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x600b204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.StopTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::ServerTimeProviderSettings& Fusion::ServerTimeProvider::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::Fusion::ServerTimeProviderSettings const& Fusion::ServerTimeProvider::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Fusion::ServerTimeProvider::__cordl_internal_set__settings(::Fusion::ServerTimeProviderSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr double_t& Fusion::ServerTimeProvider::__cordl_internal_get__time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr double_t const& Fusion::ServerTimeProvider::__cordl_internal_get__time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time;
}
constexpr void Fusion::ServerTimeProvider::__cordl_internal_set__time(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time = value;
}
inline void Fusion::ServerTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ServerTimeProvider::_ctor(::Fusion::ServerTimeProviderSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ServerTimeProviderSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void Fusion::ServerTimeProvider::Reset(::Fusion::Tick  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Reset", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline void Fusion::ServerTimeProvider::Update(double_t  unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Update", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
inline bool Fusion::ServerTimeProvider::Fusion_ITimeProvider_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_Configure(::Fusion::SimulationRuntimeConfig  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Configure", {}, {::i2c::type_of<::Fusion::SimulationRuntimeConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_Configure(::Fusion::TimeSyncConfiguration*  tsc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Configure", {}, {::i2c::type_of<::Fusion::TimeSyncConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tsc);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_Reset(double_t  roundTripTime, ::Fusion::Tick  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Reset", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundTripTime, snapshot);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_Snap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Snap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_Update(double_t  unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Update", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_OnSnapshotReceived(double_t  roundTripTime, ::Fusion::Tick  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.OnSnapshotReceived", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundTripTime, snapshot);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_OnFeedbackReceived(::GlobalNamespace::Simulation_TimeFeedback  feedback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.OnFeedbackReceived", {}, {::i2c::type_of<::GlobalNamespace::Simulation_TimeFeedback>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feedback);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_ResetFeedback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.ResetFeedback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Instant Fusion::ServerTimeProvider::Fusion_ITimeProvider_Now()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Now", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Instant>(this, ___internal_method);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_Log(::Fusion::Statistics::FusionStatisticsManager*  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.Log", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stats);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_SetPlayerIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.SetPlayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_StartTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.StartTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ServerTimeProvider::Fusion_ITimeProvider_StopTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProvider*>(),
                        {"Fusion.ITimeProvider.StopTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::ServerTimeProvider* Fusion::ServerTimeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ServerTimeProvider*>());
}
inline ::Fusion::ServerTimeProvider* Fusion::ServerTimeProvider::New_ctor(::Fusion::ServerTimeProviderSettings  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ServerTimeProvider*>(settings));
}
/// @brief Convert operator to "::Fusion::ITimeProvider"
constexpr  Fusion::ServerTimeProvider::operator ::Fusion::ITimeProvider*() noexcept {
return static_cast<::Fusion::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ITimeProvider"
constexpr ::Fusion::ITimeProvider* Fusion::ServerTimeProvider::i___Fusion__ITimeProvider() noexcept {
return static_cast<::Fusion::ITimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::ServerTimeProvider::ServerTimeProvider()   {
}
