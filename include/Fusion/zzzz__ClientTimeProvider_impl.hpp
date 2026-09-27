#pragma once
// IWYU pragma private; include "Fusion/ClientTimeProvider.hpp"
#include "Fusion/zzzz__ClientTimeProviderSettings_impl.hpp"
#include "Fusion/zzzz__Simulation_TimeFeedback_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__Timer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ClientTimeProvider_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/zzzz__ClientTimeProviderSettings_def.hpp"
#include "Fusion/zzzz__ClientTimeTrace_def.hpp"
#include "Fusion/zzzz__Clock_def.hpp"
#include "Fusion/zzzz__ExponentialDecay_def.hpp"
#include "Fusion/zzzz__Histogram_def.hpp"
#include "Fusion/zzzz__IFeedbackController_def.hpp"
#include "Fusion/zzzz__ITimeProvider_def.hpp"
#include "Fusion/zzzz__Instant_def.hpp"
#include "Fusion/zzzz__RingBuffer_1_def.hpp"
#include "Fusion/zzzz__SimulationRuntimeConfig_def.hpp"
#include "Fusion/zzzz__Simulation_TimeFeedback_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "Fusion/zzzz__TimeAdjustment_def.hpp"
#include "Fusion/zzzz__TimeProviderCallback_def.hpp"
#include "Fusion/zzzz__TimeSeries_def.hpp"
#include "Fusion/zzzz__TimeSyncConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Fusion::ClientTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6006950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::Fusion::ClientTimeProviderSettings)>(&::Fusion::ClientTimeProvider::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x600697c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ClientTimeProviderSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.OnReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::Fusion::Clock, ::Fusion::TimeProviderCallback*)>(&::Fusion::ClientTimeProvider::OnReset)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6006de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"OnReset", {}, {::i2c::type_of<::Fusion::Clock>(), ::i2c::type_of<::Fusion::TimeProviderCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::Fusion::TimeSyncConfiguration*)>(&::Fusion::ClientTimeProvider::Configure)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6006ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Configure", {}, {::i2c::type_of<::Fusion::TimeSyncConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::Fusion::SimulationRuntimeConfig)>(&::Fusion::ClientTimeProvider::Configure)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6006f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Configure", {}, {::i2c::type_of<::Fusion::SimulationRuntimeConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::Initialize)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x6006a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(double_t, ::Fusion::Tick, double_t, double_t)>(&::Fusion::ClientTimeProvider::Reset)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x600714c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Reset", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Snap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::Snap)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6007e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Snap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.ResetInputTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::ResetInputTime)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x6007e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"ResetInputTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.ResetSimulationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::ResetSimulationTime)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x600809c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"ResetSimulationTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.ResetInterpolationTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(bool)>(&::Fusion::ClientTimeProvider::ResetInterpolationTime)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x6008398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"ResetInterpolationTime", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.GetInputOffsetLegacy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::GetInputOffsetLegacy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6008adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"GetInputOffsetLegacy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.GetInputOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::GetInputOffset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6008afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"GetInputOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.AddInputOffsetAdjustment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(double_t)>(&::Fusion::ClientTimeProvider::AddInputOffsetAdjustment)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x6008b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"AddInputOffsetAdjustment", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.RemoveInputOffsetAdjustmentsOlderThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::Fusion::Tick)>(&::Fusion::ClientTimeProvider::RemoveInputOffsetAdjustmentsOlderThan)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6008d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"RemoveInputOffsetAdjustmentsOlderThan", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.GetServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::GetServerTime)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6008904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"GetServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.GetSnapshotTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::GetSnapshotTime)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x60089fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"GetSnapshotTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.UpdateServerStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(double_t, double_t, double_t)>(&::Fusion::ClientTimeProvider::UpdateServerStats)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6007a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"UpdateServerStats", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.FrameTimeDeltaCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(double_t)>(&::Fusion::ClientTimeProvider::FrameTimeDeltaCheck)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6008f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"FrameTimeDeltaCheck", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.FrameTimeDeltaCheckReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::FrameTimeDeltaCheckReset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6009098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"FrameTimeDeltaCheckReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.FrameTimeDeltaSeemsLikeAnExtremeOutlier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ClientTimeProvider::*)(double_t)>(&::Fusion::ClientTimeProvider::FrameTimeDeltaSeemsLikeAnExtremeOutlier)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6009020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"FrameTimeDeltaSeemsLikeAnExtremeOutlier", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.UpdateSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::Fusion::Tick)>(&::Fusion::ClientTimeProvider::UpdateSnapshot)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x6007590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"UpdateSnapshot", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.SaveInterpDelaySample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(double_t)>(&::Fusion::ClientTimeProvider::SaveInterpDelaySample)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x60090a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"SaveInterpDelaySample", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.RoundToNearestMultiple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Fusion::ClientTimeProvider::*)(double_t, double_t, bool)>(&::Fusion::ClientTimeProvider::RoundToNearestMultiple)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60091ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"RoundToNearestMultiple", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.UpdateOutgoingTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(bool)>(&::Fusion::ClientTimeProvider::UpdateOutgoingTargets)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6007c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"UpdateOutgoingTargets", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.UpdateIncomingTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(bool)>(&::Fusion::ClientTimeProvider::UpdateIncomingTargets)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6007bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"UpdateIncomingTargets", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(double_t)>(&::Fusion::ClientTimeProvider::Update)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0x60092d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Update", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_IsRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6009cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::Fusion::SimulationRuntimeConfig)>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_Configure)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6009cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Configure", {}, {::i2c::type_of<::Fusion::SimulationRuntimeConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_Configure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::Fusion::TimeSyncConfiguration*)>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_Configure)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6009d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Configure", {}, {::i2c::type_of<::Fusion::TimeSyncConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(double_t, ::Fusion::Tick)>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6009d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Reset", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_Snap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_Snap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6009d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Snap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(double_t)>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6009d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Update", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_OnSnapshotReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(double_t, ::Fusion::Tick)>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_OnSnapshotReceived)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6009d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.OnSnapshotReceived", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_OnFeedbackReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::GlobalNamespace::Simulation_TimeFeedback)>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_OnFeedbackReceived)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6009e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.OnFeedbackReceived", {}, {::i2c::type_of<::GlobalNamespace::Simulation_TimeFeedback>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_ResetFeedback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_ResetFeedback)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6009f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.ResetFeedback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_Now
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Instant (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_Now)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6009fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Now", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(::Fusion::Statistics::FusionStatisticsManager*)>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_Log)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6009fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Log", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_SetPlayerIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)(int32_t)>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_SetPlayerIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600a1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.SetPlayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_StartTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_StartTrace)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x600a1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.StartTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ClientTimeProvider.Fusion_ITimeProvider_StopTrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::ClientTimeProvider::*)()>(&::Fusion::ClientTimeProvider::Fusion_ITimeProvider_StopTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x600a378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.StopTrace", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::ClientTimeProviderSettings& Fusion::ClientTimeProvider::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::Fusion::ClientTimeProviderSettings const& Fusion::ClientTimeProvider::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__settings(::Fusion::ClientTimeProviderSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::Fusion::IFeedbackController*& Fusion::ClientTimeProvider::__cordl_internal_get__clockFeedback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clockFeedback;
}
constexpr ::Fusion::IFeedbackController* const& Fusion::ClientTimeProvider::__cordl_internal_get__clockFeedback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clockFeedback;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__clockFeedback(::Fusion::IFeedbackController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clockFeedback = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__latestInputOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestInputOffset;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__latestInputOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestInputOffset;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__latestInputOffset(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestInputOffset = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__targetInputOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetInputOffset;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__targetInputOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetInputOffset;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__targetInputOffset(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetInputOffset = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__clockTimeScaleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clockTimeScaleOffset;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__clockTimeScaleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clockTimeScaleOffset;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__clockTimeScaleOffset(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clockTimeScaleOffset = value;
}
constexpr ::Fusion::IFeedbackController*& Fusion::ClientTimeProvider::__cordl_internal_get__delayFeedback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayFeedback;
}
constexpr ::Fusion::IFeedbackController* const& Fusion::ClientTimeProvider::__cordl_internal_get__delayFeedback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayFeedback;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__delayFeedback(::Fusion::IFeedbackController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayFeedback = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__latestInputDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestInputDelay;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__latestInputDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestInputDelay;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__latestInputDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestInputDelay = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__targetInputDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetInputDelay;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__targetInputDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetInputDelay;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__targetInputDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetInputDelay = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__delayTimeScaleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayTimeScaleOffset;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__delayTimeScaleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____delayTimeScaleOffset;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__delayTimeScaleOffset(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____delayTimeScaleOffset = value;
}
constexpr ::Fusion::IFeedbackController*& Fusion::ClientTimeProvider::__cordl_internal_get__interpFeedback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpFeedback;
}
constexpr ::Fusion::IFeedbackController* const& Fusion::ClientTimeProvider::__cordl_internal_get__interpFeedback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpFeedback;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__interpFeedback(::Fusion::IFeedbackController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpFeedback = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__latestInterpDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestInterpDelay;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__latestInterpDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestInterpDelay;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__latestInterpDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestInterpDelay = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__targetInterpDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetInterpDelay;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__targetInterpDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetInterpDelay;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__targetInterpDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetInterpDelay = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__interpTimeScaleOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTimeScaleOffset;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__interpTimeScaleOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTimeScaleOffset;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__interpTimeScaleOffset(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpTimeScaleOffset = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__inputTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputTime;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__inputTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputTime;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__inputTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputTime = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__simulationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationTime;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__simulationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationTime;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__simulationTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulationTime = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__interpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTime;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__interpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTime;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__interpTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpTime = value;
}
constexpr ::Fusion::TimeSeries*& Fusion::ClientTimeProvider::__cordl_internal_get__roundTripTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roundTripTime;
}
constexpr ::Fusion::TimeSeries* const& Fusion::ClientTimeProvider::__cordl_internal_get__roundTripTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roundTripTime;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__roundTripTime(::Fusion::TimeSeries*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roundTripTime = value;
}
constexpr ::Fusion::TimeSeries*& Fusion::ClientTimeProvider::__cordl_internal_get__inputOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputOffset;
}
constexpr ::Fusion::TimeSeries* const& Fusion::ClientTimeProvider::__cordl_internal_get__inputOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputOffset;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__inputOffset(::Fusion::TimeSeries*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputOffset = value;
}
constexpr ::Fusion::TimeSeries*& Fusion::ClientTimeProvider::__cordl_internal_get__interpDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpDelay;
}
constexpr ::Fusion::TimeSeries* const& Fusion::ClientTimeProvider::__cordl_internal_get__interpDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpDelay;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__interpDelay(::Fusion::TimeSeries*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpDelay = value;
}
constexpr ::Fusion::Histogram*& Fusion::ClientTimeProvider::__cordl_internal_get__frameTimeDeltaHist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameTimeDeltaHist;
}
constexpr ::Fusion::Histogram* const& Fusion::ClientTimeProvider::__cordl_internal_get__frameTimeDeltaHist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameTimeDeltaHist;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__frameTimeDeltaHist(::Fusion::Histogram*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameTimeDeltaHist = value;
}
constexpr ::Fusion::ExponentialDecay*& Fusion::ClientTimeProvider::__cordl_internal_get__frameTimeDeltaHistDecay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameTimeDeltaHistDecay;
}
constexpr ::Fusion::ExponentialDecay* const& Fusion::ClientTimeProvider::__cordl_internal_get__frameTimeDeltaHistDecay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameTimeDeltaHistDecay;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__frameTimeDeltaHistDecay(::Fusion::ExponentialDecay*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameTimeDeltaHistDecay = value;
}
constexpr bool& Fusion::ClientTimeProvider::__cordl_internal_get__frameTimeDeltaChecked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameTimeDeltaChecked;
}
constexpr bool const& Fusion::ClientTimeProvider::__cordl_internal_get__frameTimeDeltaChecked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameTimeDeltaChecked;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__frameTimeDeltaChecked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameTimeDeltaChecked = value;
}
constexpr bool& Fusion::ClientTimeProvider::__cordl_internal_get__frameTimeDeltaOutliersSeen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameTimeDeltaOutliersSeen;
}
constexpr bool const& Fusion::ClientTimeProvider::__cordl_internal_get__frameTimeDeltaOutliersSeen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameTimeDeltaOutliersSeen;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__frameTimeDeltaOutliersSeen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameTimeDeltaOutliersSeen = value;
}
constexpr bool& Fusion::ClientTimeProvider::__cordl_internal_get__latestSnapshotIsOutlier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestSnapshotIsOutlier;
}
constexpr bool const& Fusion::ClientTimeProvider::__cordl_internal_get__latestSnapshotIsOutlier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____latestSnapshotIsOutlier;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__latestSnapshotIsOutlier(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____latestSnapshotIsOutlier = value;
}
constexpr ::Fusion::Histogram*& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotTimeDeltaHist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotTimeDeltaHist;
}
constexpr ::Fusion::Histogram* const& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotTimeDeltaHist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotTimeDeltaHist;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__snapshotTimeDeltaHist(::Fusion::Histogram*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshotTimeDeltaHist = value;
}
constexpr ::Fusion::ExponentialDecay*& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotTimeDeltaHistDecay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotTimeDeltaHistDecay;
}
constexpr ::Fusion::ExponentialDecay* const& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotTimeDeltaHistDecay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotTimeDeltaHistDecay;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__snapshotTimeDeltaHistDecay(::Fusion::ExponentialDecay*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshotTimeDeltaHistDecay = value;
}
constexpr ::Fusion::Timer& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotTimer;
}
constexpr ::Fusion::Timer const& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotTimer;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__snapshotTimer(::Fusion::Timer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshotTimer = value;
}
constexpr ::Fusion::TimeSeries*& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotTimeDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotTimeDelta;
}
constexpr ::Fusion::TimeSeries* const& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotTimeDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotTimeDelta;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__snapshotTimeDelta(::Fusion::TimeSeries*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshotTimeDelta = value;
}
constexpr ::Fusion::Tick& Fusion::ClientTimeProvider::__cordl_internal_get__snapshot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshot;
}
constexpr ::Fusion::Tick const& Fusion::ClientTimeProvider::__cordl_internal_get__snapshot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshot;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__snapshot(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshot = value;
}
constexpr ::Fusion::Timer& Fusion::ClientTimeProvider::__cordl_internal_get__clockSyncTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clockSyncTimer;
}
constexpr ::Fusion::Timer const& Fusion::ClientTimeProvider::__cordl_internal_get__clockSyncTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clockSyncTimer;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__clockSyncTimer(::Fusion::Timer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clockSyncTimer = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__lastSeenServerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSeenServerTime;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__lastSeenServerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSeenServerTime;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__lastSeenServerTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSeenServerTime = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__lastSeenServerTimeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSeenServerTimeScale;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__lastSeenServerTimeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastSeenServerTimeScale;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__lastSeenServerTimeScale(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastSeenServerTimeScale = value;
}
constexpr ::Fusion::Timer& Fusion::ClientTimeProvider::__cordl_internal_get__sampleTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleTimer;
}
constexpr ::Fusion::Timer const& Fusion::ClientTimeProvider::__cordl_internal_get__sampleTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sampleTimer;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__sampleTimer(::Fusion::Timer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sampleTimer = value;
}
constexpr ::Fusion::Timer& Fusion::ClientTimeProvider::__cordl_internal_get__resetInputTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetInputTimer;
}
constexpr ::Fusion::Timer const& Fusion::ClientTimeProvider::__cordl_internal_get__resetInputTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetInputTimer;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__resetInputTimer(::Fusion::Timer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetInputTimer = value;
}
constexpr ::Fusion::Timer& Fusion::ClientTimeProvider::__cordl_internal_get__resetSimulationTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetSimulationTimer;
}
constexpr ::Fusion::Timer const& Fusion::ClientTimeProvider::__cordl_internal_get__resetSimulationTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetSimulationTimer;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__resetSimulationTimer(::Fusion::Timer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetSimulationTimer = value;
}
constexpr ::Fusion::Timer& Fusion::ClientTimeProvider::__cordl_internal_get__resetInterpTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetInterpTimer;
}
constexpr ::Fusion::Timer const& Fusion::ClientTimeProvider::__cordl_internal_get__resetInterpTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetInterpTimer;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__resetInterpTimer(::Fusion::Timer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetInterpTimer = value;
}
constexpr int32_t& Fusion::ClientTimeProvider::__cordl_internal_get__inputTimeResetCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputTimeResetCount;
}
constexpr int32_t const& Fusion::ClientTimeProvider::__cordl_internal_get__inputTimeResetCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputTimeResetCount;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__inputTimeResetCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputTimeResetCount = value;
}
constexpr int32_t& Fusion::ClientTimeProvider::__cordl_internal_get__simulationTimeResetCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationTimeResetCount;
}
constexpr int32_t const& Fusion::ClientTimeProvider::__cordl_internal_get__simulationTimeResetCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationTimeResetCount;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__simulationTimeResetCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulationTimeResetCount = value;
}
constexpr int32_t& Fusion::ClientTimeProvider::__cordl_internal_get__interpTimeResetCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTimeResetCount;
}
constexpr int32_t const& Fusion::ClientTimeProvider::__cordl_internal_get__interpTimeResetCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTimeResetCount;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__interpTimeResetCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpTimeResetCount = value;
}
constexpr bool& Fusion::ClientTimeProvider::__cordl_internal_get__inputTimeReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputTimeReset;
}
constexpr bool const& Fusion::ClientTimeProvider::__cordl_internal_get__inputTimeReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputTimeReset;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__inputTimeReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputTimeReset = value;
}
constexpr bool& Fusion::ClientTimeProvider::__cordl_internal_get__simulationTimeReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationTimeReset;
}
constexpr bool const& Fusion::ClientTimeProvider::__cordl_internal_get__simulationTimeReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulationTimeReset;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__simulationTimeReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulationTimeReset = value;
}
constexpr bool& Fusion::ClientTimeProvider::__cordl_internal_get__interpTimeReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTimeReset;
}
constexpr bool const& Fusion::ClientTimeProvider::__cordl_internal_get__interpTimeReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interpTimeReset;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__interpTimeReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interpTimeReset = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*& Fusion::ClientTimeProvider::__cordl_internal_get__resetInputTimeCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetInputTimeCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>* const& Fusion::ClientTimeProvider::__cordl_internal_get__resetInputTimeCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetInputTimeCallbacks;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__resetInputTimeCallbacks(::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetInputTimeCallbacks = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*& Fusion::ClientTimeProvider::__cordl_internal_get__resetSimulationTimeCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetSimulationTimeCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>* const& Fusion::ClientTimeProvider::__cordl_internal_get__resetSimulationTimeCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetSimulationTimeCallbacks;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__resetSimulationTimeCallbacks(::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetSimulationTimeCallbacks = value;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*& Fusion::ClientTimeProvider::__cordl_internal_get__resetInterpTimeCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetInterpTimeCallbacks;
}
constexpr ::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>* const& Fusion::ClientTimeProvider::__cordl_internal_get__resetInterpTimeCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetInterpTimeCallbacks;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__resetInterpTimeCallbacks(::System::Collections::Generic::List_1<::Fusion::TimeProviderCallback*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetInterpTimeCallbacks = value;
}
constexpr bool& Fusion::ClientTimeProvider::__cordl_internal_get__isRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr bool const& Fusion::ClientTimeProvider::__cordl_internal_get__isRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__isRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRunning = value;
}
constexpr int32_t& Fusion::ClientTimeProvider::__cordl_internal_get__playerIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerIndex;
}
constexpr int32_t const& Fusion::ClientTimeProvider::__cordl_internal_get__playerIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____playerIndex;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__playerIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____playerIndex = value;
}
constexpr int32_t& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotExceededFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotExceededFrames;
}
constexpr int32_t const& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotExceededFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotExceededFrames;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__snapshotExceededFrames(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshotExceededFrames = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotExceededTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotExceededTime;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__snapshotExceededTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapshotExceededTime;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__snapshotExceededTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapshotExceededTime = value;
}
constexpr ::GlobalNamespace::Simulation_TimeFeedback& Fusion::ClientTimeProvider::__cordl_internal_get__serverFeedback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverFeedback;
}
constexpr ::GlobalNamespace::Simulation_TimeFeedback const& Fusion::ClientTimeProvider::__cordl_internal_get__serverFeedback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverFeedback;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__serverFeedback(::GlobalNamespace::Simulation_TimeFeedback  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serverFeedback = value;
}
constexpr ::Fusion::RingBuffer_1<::Fusion::TimeAdjustment>*& Fusion::ClientTimeProvider::__cordl_internal_get__inputOffsetAdjust()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputOffsetAdjust;
}
constexpr ::Fusion::RingBuffer_1<::Fusion::TimeAdjustment>* const& Fusion::ClientTimeProvider::__cordl_internal_get__inputOffsetAdjust() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputOffsetAdjust;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__inputOffsetAdjust(::Fusion::RingBuffer_1<::Fusion::TimeAdjustment>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputOffsetAdjust = value;
}
constexpr ::Fusion::Tick& Fusion::ClientTimeProvider::__cordl_internal_get__lastInputOffsetAdjustTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastInputOffsetAdjustTick;
}
constexpr ::Fusion::Tick const& Fusion::ClientTimeProvider::__cordl_internal_get__lastInputOffsetAdjustTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastInputOffsetAdjustTick;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__lastInputOffsetAdjustTick(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastInputOffsetAdjustTick = value;
}
constexpr double_t& Fusion::ClientTimeProvider::__cordl_internal_get__totalInputOffsetAdjust()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalInputOffsetAdjust;
}
constexpr double_t const& Fusion::ClientTimeProvider::__cordl_internal_get__totalInputOffsetAdjust() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalInputOffsetAdjust;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__totalInputOffsetAdjust(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalInputOffsetAdjust = value;
}
constexpr bool& Fusion::ClientTimeProvider::__cordl_internal_get__trace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trace;
}
constexpr bool const& Fusion::ClientTimeProvider::__cordl_internal_get__trace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trace;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__trace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trace = value;
}
constexpr ::Fusion::ClientTimeTrace*& Fusion::ClientTimeProvider::__cordl_internal_get__timeTrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeTrace;
}
constexpr ::Fusion::ClientTimeTrace* const& Fusion::ClientTimeProvider::__cordl_internal_get__timeTrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeTrace;
}
constexpr void Fusion::ClientTimeProvider::__cordl_internal_set__timeTrace(::Fusion::ClientTimeTrace*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeTrace = value;
}
inline void Fusion::ClientTimeProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::_ctor(::Fusion::ClientTimeProviderSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::ClientTimeProviderSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void Fusion::ClientTimeProvider::OnReset(::Fusion::Clock  clock, ::Fusion::TimeProviderCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"OnReset", {}, {::i2c::type_of<::Fusion::Clock>(), ::i2c::type_of<::Fusion::TimeProviderCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clock, callback);
}
inline void Fusion::ClientTimeProvider::Configure(::Fusion::TimeSyncConfiguration*  tsc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Configure", {}, {::i2c::type_of<::Fusion::TimeSyncConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tsc);
}
inline void Fusion::ClientTimeProvider::Configure(::Fusion::SimulationRuntimeConfig  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Configure", {}, {::i2c::type_of<::Fusion::SimulationRuntimeConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void Fusion::ClientTimeProvider::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::Reset(double_t  roundTripTime, ::Fusion::Tick  snapshot, double_t  time, double_t  timeScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Reset", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundTripTime, snapshot, time, timeScale);
}
inline void Fusion::ClientTimeProvider::Snap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Snap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::ResetInputTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"ResetInputTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::ResetSimulationTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"ResetSimulationTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::ResetInterpolationTime(bool  resetMayBeCausedByFalseOutlier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"ResetInterpolationTime", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resetMayBeCausedByFalseOutlier);
}
inline double_t Fusion::ClientTimeProvider::GetInputOffsetLegacy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"GetInputOffsetLegacy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::ClientTimeProvider::GetInputOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"GetInputOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::AddInputOffsetAdjustment(double_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"AddInputOffsetAdjustment", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount);
}
inline void Fusion::ClientTimeProvider::RemoveInputOffsetAdjustmentsOlderThan(::Fusion::Tick  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"RemoveInputOffsetAdjustmentsOlderThan", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline double_t Fusion::ClientTimeProvider::GetServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"GetServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t Fusion::ClientTimeProvider::GetSnapshotTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"GetSnapshotTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::UpdateServerStats(double_t  roundTripTime, double_t  time, double_t  timeScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"UpdateServerStats", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundTripTime, time, timeScale);
}
inline void Fusion::ClientTimeProvider::FrameTimeDeltaCheck(double_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"FrameTimeDeltaCheck", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void Fusion::ClientTimeProvider::FrameTimeDeltaCheckReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"FrameTimeDeltaCheckReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::ClientTimeProvider::FrameTimeDeltaSeemsLikeAnExtremeOutlier(double_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"FrameTimeDeltaSeemsLikeAnExtremeOutlier", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, dt);
}
inline void Fusion::ClientTimeProvider::UpdateSnapshot(::Fusion::Tick  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"UpdateSnapshot", {}, {::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot);
}
inline void Fusion::ClientTimeProvider::SaveInterpDelaySample(double_t  interpDelay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"SaveInterpDelaySample", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interpDelay);
}
inline double_t Fusion::ClientTimeProvider::RoundToNearestMultiple(double_t  x, double_t  round, bool  minimumOne)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"RoundToNearestMultiple", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, x, round, minimumOne);
}
inline void Fusion::ClientTimeProvider::UpdateOutgoingTargets(bool  snap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"UpdateOutgoingTargets", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snap);
}
inline void Fusion::ClientTimeProvider::UpdateIncomingTargets(bool  snap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"UpdateIncomingTargets", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snap);
}
inline void Fusion::ClientTimeProvider::Update(double_t  unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Update", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
inline bool Fusion::ClientTimeProvider::Fusion_ITimeProvider_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_Configure(::Fusion::SimulationRuntimeConfig  src)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Configure", {}, {::i2c::type_of<::Fusion::SimulationRuntimeConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_Configure(::Fusion::TimeSyncConfiguration*  tsc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Configure", {}, {::i2c::type_of<::Fusion::TimeSyncConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tsc);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_Reset(double_t  roundTripTime, ::Fusion::Tick  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Reset", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundTripTime, snapshot);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_Snap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Snap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_Update(double_t  unscaledDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Update", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unscaledDeltaTime);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_OnSnapshotReceived(double_t  roundTripTime, ::Fusion::Tick  snapshot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.OnSnapshotReceived", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::Fusion::Tick>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundTripTime, snapshot);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_OnFeedbackReceived(::GlobalNamespace::Simulation_TimeFeedback  feedback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.OnFeedbackReceived", {}, {::i2c::type_of<::GlobalNamespace::Simulation_TimeFeedback>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feedback);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_ResetFeedback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.ResetFeedback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Instant Fusion::ClientTimeProvider::Fusion_ITimeProvider_Now()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Now", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Instant>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_Log(::Fusion::Statistics::FusionStatisticsManager*  stats)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.Log", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatisticsManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stats);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_SetPlayerIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.SetPlayerIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_StartTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.StartTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::ClientTimeProvider::Fusion_ITimeProvider_StopTrace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ClientTimeProvider*>(),
                        {"Fusion.ITimeProvider.StopTrace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::ClientTimeProvider* Fusion::ClientTimeProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ClientTimeProvider*>());
}
inline ::Fusion::ClientTimeProvider* Fusion::ClientTimeProvider::New_ctor(::Fusion::ClientTimeProviderSettings  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::ClientTimeProvider*>(settings));
}
/// @brief Convert operator to "::Fusion::ITimeProvider"
constexpr  Fusion::ClientTimeProvider::operator ::Fusion::ITimeProvider*() noexcept {
return static_cast<::Fusion::ITimeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::ITimeProvider"
constexpr ::Fusion::ITimeProvider* Fusion::ClientTimeProvider::i___Fusion__ITimeProvider() noexcept {
return static_cast<::Fusion::ITimeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::ClientTimeProvider::ClientTimeProvider()   {
}
