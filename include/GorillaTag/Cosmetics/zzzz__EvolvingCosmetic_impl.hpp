#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EvolvingCosmetic.hpp"
#include "GorillaTag/Cosmetics/zzzz__EvolvingCosmetic_EvolutionStage_EventAtTime_Type_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__EvolvingCosmetic_EvolutionStage_ProgressionFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__EvolvingCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__ThermalReceiver_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousPropertyArray_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EvolvingCosmetic_EvolutionStage_EventAtTime_Type_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EvolvingCosmetic_EvolutionStage_ProgressionFlags_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EvolvingCosmetic_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.get_LoopMaxValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::get_LoopMaxValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5d9415c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"get_LoopMaxValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5d94174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::OnEnable)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5d94310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::OnDisable)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5d9461c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)(bool, bool)>(&::GorillaTag::Cosmetics::EvolvingCosmetic::Log)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d94840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"Log", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.FirstStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::FirstStage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d94594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"FirstStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.HandleStages
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::HandleStages)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5d94878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"HandleStages", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d94b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)(bool)>(&::GorillaTag::Cosmetics::EvolvingCosmetic::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d94b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::Tick)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d94b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.CompleteManualStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::CompleteManualStage)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d94c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"CompleteManualStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.ForceNextStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::ForceNextStage)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d94c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"ForceNextStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.SendElapsedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTag::Cosmetics::EvolvingCosmetic::SendElapsedTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d94c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"SendElapsedTime", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.SendElapsedTimeDelayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::SendElapsedTimeDelayed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d94cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"SendElapsedTimeDelayed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.ReceiveElapsedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTag::Cosmetics::EvolvingCosmetic::ReceiveElapsedTime)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5d94d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"ReceiveElapsedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.SetStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)(int32_t)>(&::GorillaTag::Cosmetics::EvolvingCosmetic::SetStage)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5d94ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"SetStage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.RestartStageInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::RestartStageInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9514c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"RestartStageInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.IncrementStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::IncrementStage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d95154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"IncrementStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.DecrementStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::DecrementStage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d95160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"DecrementStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.JumpToFirstStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::JumpToFirstStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9516c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"JumpToFirstStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.JumpToLastStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::JumpToLastStage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d95174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"JumpToLastStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.RestartCurrentStage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::RestartCurrentStage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d95190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"RestartCurrentStage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic.JumpToStageIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)(int32_t)>(&::GorillaTag::Cosmetics::EvolvingCosmetic::JumpToStageIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d95198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"JumpToStageIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d9519c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_enableLooping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableLooping;
}
constexpr bool const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_enableLooping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableLooping;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_enableLooping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableLooping = value;
}
constexpr int32_t& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_loopToStageOnComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopToStageOnComplete;
}
constexpr int32_t const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_loopToStageOnComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopToStageOnComplete;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_loopToStageOnComplete(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopToStageOnComplete = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_stages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stages;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*> const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_stages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stages;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_stages(::ArrayW<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stages = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_networkEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkEvents;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_networkEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkEvents;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_networkEvents(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkEvents = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
constexpr int32_t& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_activeStageIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeStageIndex;
}
constexpr int32_t const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_activeStageIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeStageIndex;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_activeStageIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeStageIndex = value;
}
constexpr ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_activeStage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeStage;
}
constexpr ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage* const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_activeStage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeStage;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_activeStage(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeStage = value;
}
constexpr int32_t& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_nextEventIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextEventIndex;
}
constexpr int32_t const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_nextEventIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextEventIndex;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_nextEventIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextEventIndex = value;
}
constexpr ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_nextEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextEvent;
}
constexpr ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime* const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_nextEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextEvent;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_nextEvent(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextEvent = value;
}
constexpr float_t& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_totalElapsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalElapsedTime;
}
constexpr float_t const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_totalElapsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalElapsedTime;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_totalElapsedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalElapsedTime = value;
}
constexpr float_t& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_totalTimeOfPreviousStages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTimeOfPreviousStages;
}
constexpr float_t const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_totalTimeOfPreviousStages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTimeOfPreviousStages;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_totalTimeOfPreviousStages(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalTimeOfPreviousStages = value;
}
constexpr float_t& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_totalDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDuration;
}
constexpr float_t const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_totalDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDuration;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_totalDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalDuration = value;
}
constexpr float_t& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_timeAtLoopStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLoopStart;
}
constexpr float_t const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_timeAtLoopStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeAtLoopStart;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_timeAtLoopStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeAtLoopStart = value;
}
constexpr float_t& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_loopDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopDuration;
}
constexpr float_t const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_loopDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopDuration;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_loopDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopDuration = value;
}
constexpr ::UnityEngine::Coroutine*& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_sendProgressDelayCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendProgressDelayCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get_sendProgressDelayCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendProgressDelayCoroutine;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set_sendProgressDelayCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendProgressDelayCoroutine = value;
}
constexpr bool& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline int32_t GorillaTag::Cosmetics::EvolvingCosmetic::get_LoopMaxValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"get_LoopMaxValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::Log(bool  isComplete, bool  isEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"Log", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isComplete, isEvent);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::FirstStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"FirstStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::HandleStages()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"HandleStages", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::EvolvingCosmetic::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::CompleteManualStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"CompleteManualStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::ForceNextStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"ForceNextStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::SendElapsedTime(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"SendElapsedTime", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::System::Collections::IEnumerator* GorillaTag::Cosmetics::EvolvingCosmetic::SendElapsedTimeDelayed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"SendElapsedTimeDelayed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::ReceiveElapsedTime(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"ReceiveElapsedTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::SetStage(int32_t  targetIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"SetStage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetIndex);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::RestartStageInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"RestartStageInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::IncrementStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"IncrementStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::DecrementStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"DecrementStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::JumpToFirstStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"JumpToFirstStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::JumpToLastStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"JumpToLastStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::RestartCurrentStage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"RestartCurrentStage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::JumpToStageIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {"JumpToStageIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::EvolvingCosmetic* GorillaTag::Cosmetics::EvolvingCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::EvolvingCosmetic*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::EvolvingCosmetic::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::EvolvingCosmetic::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::EvolvingCosmetic::EvolvingCosmetic()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::*)(int32_t)>(&::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d94d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d95324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::MoveNext)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5d95328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d95494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d9549c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d954d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::EvolvingCosmetic>& GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTag::Cosmetics::EvolvingCosmetic> const& GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::__cordl_internal_set___4__this(::UnityW<::GorillaTag::Cosmetics::EvolvingCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33* GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33::EvolvingCosmetic__SendElapsedTimeDelayed_d__33()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage.HasAnyFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::*)(::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags)>(&::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::HasAnyFlag)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d9521c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"HasAnyFlag", {}, {::i2c::type_of<::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage.get_HasDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::get_HasDuration)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d94b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"get_HasDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage.get_HasTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::get_HasTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d9522c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"get_HasTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage.get_HasTemperature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::get_HasTemperature)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d95238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"get_HasTemperature", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage.get_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::get_Duration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d942f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"get_Duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage.DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::*)(float_t)>(&::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::DeltaTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d94bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"DeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage.GetEventOrNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime* (::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::*)(int32_t)>(&::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::GetEventOrNull)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d94844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"GetEventOrNull", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::*)()>(&::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d95244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_debugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugName;
}
constexpr ::StringW const& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_debugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugName;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_set_debugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugName = value;
}
constexpr ::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_progressionFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionFlags;
}
constexpr ::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags const& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_progressionFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionFlags;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_set_progressionFlags(::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressionFlags = value;
}
constexpr float_t& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_durationSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___durationSeconds;
}
constexpr float_t const& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_durationSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___durationSeconds;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_set_durationSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___durationSeconds = value;
}
constexpr ::UnityW<::GlobalNamespace::ThermalReceiver>& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_thermalReceiver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalReceiver;
}
constexpr ::UnityW<::GlobalNamespace::ThermalReceiver> const& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_thermalReceiver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalReceiver;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_set_thermalReceiver(::UnityW<::GlobalNamespace::ThermalReceiver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thermalReceiver = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_celsiusSpeedupMult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___celsiusSpeedupMult;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_celsiusSpeedupMult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___celsiusSpeedupMult;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_set_celsiusSpeedupMult(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___celsiusSpeedupMult = value;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_continuousProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_continuousProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuousProperties;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuousProperties = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*> const& GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_get_events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___events;
}
constexpr void GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::__cordl_internal_set_events(::ArrayW<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___events = value;
}
inline bool GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::HasAnyFlag(::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"HasAnyFlag", {}, {::i2c::type_of<::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flag);
}
inline bool GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::get_HasDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"get_HasDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::get_HasTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"get_HasTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::get_HasTemperature()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"get_HasTemperature", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"get_Duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::DeltaTime(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"DeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, deltaTime);
}
inline ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime* GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::GetEventOrNull(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {"GetEventOrNull", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>(this, ___internal_method, index);
}
inline void GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage* GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage::EvolvingCosmetic_EvolutionStage()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime.get_DynamicTimeLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::*)()>(&::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::get_DynamicTimeLabel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d95294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>(),
                        {"get_DynamicTimeLabel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::*)(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*)>(&::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::CompareTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d95300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>(),
                        {"CompareTo", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::*)()>(&::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d9531c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_debugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugName;
}
constexpr ::StringW const& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_debugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugName;
}
constexpr void GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_set_debugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugName = value;
}
constexpr float_t& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_time()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr float_t const& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_time() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___time;
}
constexpr void GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_set_time(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___time = value;
}
constexpr ::GlobalNamespace::EventAtTime_EvolutionStage_EvolvingCosmetic_Type& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::EventAtTime_EvolutionStage_EvolvingCosmetic_Type const& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_set_type(::GlobalNamespace::EventAtTime_EvolutionStage_EvolvingCosmetic_Type  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr float_t& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_absoluteTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteTime;
}
constexpr float_t const& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_absoluteTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___absoluteTime;
}
constexpr void GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_set_absoluteTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___absoluteTime = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_onTimeReached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimeReached;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_get_onTimeReached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimeReached;
}
constexpr void GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::__cordl_internal_set_onTimeReached(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimeReached = value;
}
inline ::StringW GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::get_DynamicTimeLabel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>(),
                        {"get_DynamicTimeLabel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::CompareTo(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>(),
                        {"CompareTo", {}, {::i2c::type_of<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, other);
}
inline void GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime* GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>());
}
/// @brief Convert operator to "::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>"
constexpr  GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::operator ::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>*() noexcept {
return static_cast<::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>"
constexpr ::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>* GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::i___System__IComparable_1___GorillaTag__Cosmetics__EvolutionStage_EvolvingCosmetic_EventAtTime__() noexcept {
return static_cast<::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime::EvolutionStage_EvolvingCosmetic_EventAtTime()   {
}
