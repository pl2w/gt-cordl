#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyTimeline.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyTimeline_TimelineEndBehavior_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyTimeline_def.hpp"
#include "GlobalNamespace/zzzz__FlagEvents_1_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyTimeline_TimelineEndBehavior_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyTimeline_TimelineEvent_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.get_IsBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_IsBackward)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d85450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_IsBackward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.set_IsBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(bool)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_IsBackward)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d85460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_IsBackward", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.get_IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_IsPaused)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d8546c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.set_IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(bool)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_IsPaused)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d8547c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_IsPaused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelinePlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlay)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d85488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelinePause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePause)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d854fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelineToggleDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineToggleDirection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d8556c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineToggleDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelineTogglePlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineTogglePlay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d8557c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineTogglePlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelinePlayForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlayForward)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d8558c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlayForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelinePlayBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlayBackward)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlayBackward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelinePlayFromBeginning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlayFromBeginning)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d855a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlayFromBeginning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelinePlayFromEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlayFromEnd)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d85738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlayFromEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelineScrubToTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(float_t)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineScrubToTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d858d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineScrubToTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelineScrubToFraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(float_t)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineScrubToFraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d858fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineScrubToFraction", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelineSetDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(float_t)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineSetDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d85908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineSetDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.TimelineSetBackwardDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(float_t)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineSetBackwardDuration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d85924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineSetBackwardDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d85940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnEnable)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5d8594c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnDisable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5d85ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.OnReachedEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnReachedEnd)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5d8575c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnReachedEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.OnReachedBeginning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnReachedBeginning)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5d855c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnReachedBeginning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.InBetween
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::InBetween)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d85bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"InBetween", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(bool)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::Tick)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d85c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(bool)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)(::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnSpawn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d85d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d85d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnDespawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::ContinuousPropertyTimeline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::ContinuousPropertyTimeline::*)()>(&::GorillaTag::Cosmetics::ContinuousPropertyTimeline::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d85d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_durationSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___durationSeconds;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_durationSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___durationSeconds;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_durationSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___durationSeconds = value;
}
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_backwardDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backwardDuration;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_backwardDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backwardDuration;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_backwardDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backwardDuration = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_separateBackwardDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___separateBackwardDuration;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_separateBackwardDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___separateBackwardDuration;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_separateBackwardDuration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___separateBackwardDuration = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_startPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPlaying;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_startPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPlaying;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_startPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPlaying = value;
}
constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_endBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endBehavior;
}
constexpr ::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_endBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endBehavior;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_endBehavior(::GlobalNamespace::ContinuousPropertyTimeline_TimelineEndBehavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endBehavior = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent>*& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent>* const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_events(::GlobalNamespace::FlagEvents_1<::GlobalNamespace::ContinuousPropertyTimeline_TimelineEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_inverseDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseDuration;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_inverseDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inverseDuration;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_inverseDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inverseDuration = value;
}
constexpr float_t& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_backwardDeltaMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backwardDeltaMult;
}
constexpr float_t const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_backwardDeltaMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backwardDeltaMult;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_backwardDeltaMult(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backwardDeltaMult = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_IsForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsForward;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_IsForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsForward;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_IsForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsForward = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_IsPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPlaying;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_IsPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPlaying;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_IsPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsPlaying = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr bool& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::ContinuousPropertyTimeline::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_IsBackward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_IsBackward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_IsBackward(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_IsBackward", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_IsPaused(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_IsPaused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineToggleDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineToggleDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineTogglePlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineTogglePlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlayForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlayForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlayBackward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlayBackward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlayFromBeginning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlayFromBeginning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelinePlayFromEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelinePlayFromEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineScrubToTime(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineScrubToTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineScrubToFraction(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineScrubToFraction", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineSetDuration(float_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineSetDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::TimelineSetBackwardDuration(float_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"TimelineSetBackwardDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, d);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnReachedEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnReachedEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnReachedBeginning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnReachedBeginning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::InBetween()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"InBetween", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag::Cosmetics::ContinuousPropertyTimeline::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnSpawn", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::OnDespawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {"OnDespawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::ContinuousPropertyTimeline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::ContinuousPropertyTimeline* GorillaTag::Cosmetics::ContinuousPropertyTimeline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::ContinuousPropertyTimeline*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::ContinuousPropertyTimeline::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::ContinuousPropertyTimeline::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GorillaTag::Cosmetics::ContinuousPropertyTimeline::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GorillaTag::Cosmetics::ContinuousPropertyTimeline::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyTimeline::ContinuousPropertyTimeline()   {
}
