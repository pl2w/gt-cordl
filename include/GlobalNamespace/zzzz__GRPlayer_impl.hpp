#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_GRPlayerState_impl.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ProgressionData_impl.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ShuttleState_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__GRBadge_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayerDamageEffects_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_DamageOverlayValues_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_GRPlayerShieldFlags_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_GRPlayerState_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ProgressionData_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ProgressionLevels_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ShuttleState_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_SynchronizedSessionStat_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttle_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSoak_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipUserData_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SetUserDataResponse_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__ZoneClearReason_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRPlayer_GRPlayerState (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_Juice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_Juice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a0364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_Juice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_ShiftCreditCapIncreases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_ShiftCreditCapIncreases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShiftCreditCapIncreases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.set_ShiftCreditCapIncreases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::set_ShiftCreditCapIncreases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a0374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_ShiftCreditCapIncreases", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_ShiftCreditCapIncreasesMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_ShiftCreditCapIncreasesMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShiftCreditCapIncreasesMax", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.set_ShiftCreditCapIncreasesMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::set_ShiftCreditCapIncreasesMax)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a0384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_ShiftCreditCapIncreasesMax", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_ShiftCredits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_ShiftCredits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a038c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShiftCredits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.HasXRayVision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::HasXRayVision)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a0394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"HasXRayVision", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_MaxHp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_MaxHp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_MaxHp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_MaxShieldHp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_MaxShieldHp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_MaxShieldHp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_Hp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_Hp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_Hp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_ShieldHp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_ShieldHp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShieldHp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_ShieldFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_ShieldFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShieldFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_InStealthMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_InStealthMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_InStealthMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_MyRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_MyRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_MyRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_ShiftPlayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_ShiftPlayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShiftPlayTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.set_ShiftPlayTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(float_t)>(&::GlobalNamespace::GRPlayer::set_ShiftPlayTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_ShiftPlayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_LastShiftCut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_LastShiftCut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_LastShiftCut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.set_LastShiftCut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::set_LastShiftCut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_LastShiftCut", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.get_CurrentProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRPlayer_ProgressionData (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::get_CurrentProgression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a03fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_CurrentProgression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.set_CurrentProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::GRPlayer_ProgressionData)>(&::GlobalNamespace::GRPlayer::set_CurrentProgression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a0404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_CurrentProgression", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer_ProgressionData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::Awake)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x58a040c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::Start)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x58a09d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a0d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::Reset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58a0d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SetHp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::SetHp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58a08d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetHp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SetShieldHp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::SetShieldHp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58a08e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetShieldHp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnShiftCreditCapChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW, int32_t, int32_t)>(&::GlobalNamespace::GRPlayer::OnShiftCreditCapChanged)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58a15cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnShiftCreditCapChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnShiftCreditChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW, int32_t)>(&::GlobalNamespace::GRPlayer::OnShiftCreditChanged)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x58a16f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnShiftCreditChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnShiftCreditCapData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW, int32_t, int32_t)>(&::GlobalNamespace::GRPlayer::OnShiftCreditCapData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a1994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnShiftCreditCapData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SubtractShiftCredit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::SubtractShiftCredit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58a19b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SubtractShiftCredit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnPlayerHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::GlobalNamespace::GhostReactorManager*, ::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GRPlayer::OnPlayerHit)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x58a1a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnPlayerHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager*>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnPlayerRevive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::GhostReactorManager*)>(&::GlobalNamespace::GRPlayer::OnPlayerRevive)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58a2bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnPlayerRevive", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.ChangePlayerState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::GRPlayer_GRPlayerState, ::GlobalNamespace::GhostReactorManager*)>(&::GlobalNamespace::GRPlayer::ChangePlayerState)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x58a2864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ChangePlayerState", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer_GRPlayerState>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.RefreshPlayerVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::RefreshPlayerVisuals)> {
  constexpr static std::size_t size = 0x808;
  constexpr static std::size_t addrs = 0x58a0dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RefreshPlayerVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPlayer> (*)(int32_t)>(&::GlobalNamespace::GRPlayer::Get)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x589e674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPlayer> (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRPlayer::Get)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58a2c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPlayer> (*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GRPlayer::Get)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x589c748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.GetLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPlayer> (*)()>(&::GlobalNamespace::GRPlayer::GetLocal)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58a2ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GetLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.AttachBadge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::GRBadge*)>(&::GlobalNamespace::GRPlayer::AttachBadge)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58a2d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"AttachBadge", {}, {::i2c::type_of<::GlobalNamespace::GRBadge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.CanActivateShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::CanActivateShield)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58a2dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"CanActivateShield", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.TryActivateShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRPlayer::*)(int32_t, int32_t)>(&::GlobalNamespace::GRPlayer::TryActivateShield)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x58a2e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"TryActivateShield", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.ClearStealthMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::ClearStealthMode)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58a2f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ClearStealthMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SerializeNetworkState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::System::IO::BinaryWriter*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRPlayer::SerializeNetworkState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58a301c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SerializeNetworkState", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.DeserializeNetworkStateAndBurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::BinaryReader*, ::GlobalNamespace::GRPlayer*, ::GlobalNamespace::GhostReactorManager*)>(&::GlobalNamespace::GRPlayer::DeserializeNetworkStateAndBurn)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x58a3154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"DeserializeNetworkStateAndBurn", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.PlayHitFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GRPlayer::PlayHitFx)> {
  constexpr static std::size_t size = 0x834;
  constexpr static std::size_t addrs = 0x58a2030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"PlayHitFx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendGameStartedTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(float_t, bool, int32_t)>(&::GlobalNamespace::GRPlayer::SendGameStartedTelemetry)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x58a34ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendGameStartedTelemetry", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendGameEndedTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(bool, ::GlobalNamespace::ZoneClearReason)>(&::GlobalNamespace::GRPlayer::SendGameEndedTelemetry)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58a37dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendGameEndedTelemetry", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendFloorStartedTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(float_t, bool, int32_t, ::StringW, ::StringW)>(&::GlobalNamespace::GRPlayer::SendFloorStartedTelemetry)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x58a3a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendFloorStartedTelemetry", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendFloorEndedTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(bool, float_t, ::GlobalNamespace::ZoneClearReason, int32_t, ::StringW, ::StringW, bool, ::StringW, int32_t)>(&::GlobalNamespace::GRPlayer::SendFloorEndedTelemetry)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x58a3bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendFloorEndedTelemetry", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendToolPurchasedTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GRPlayer::SendToolPurchasedTelemetry)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x58a3e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendToolPurchasedTelemetry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendRankUpTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW)>(&::GlobalNamespace::GRPlayer::SendRankUpTelemetry)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x58a3fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendRankUpTelemetry", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendToolUpgradeTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW, ::StringW, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GRPlayer::SendToolUpgradeTelemetry)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58a4104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendToolUpgradeTelemetry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendSeedDepositedTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW, int32_t)>(&::GlobalNamespace::GRPlayer::SendSeedDepositedTelemetry)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x58a4280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendSeedDepositedTelemetry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendJuiceCollectedTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t, int32_t)>(&::GlobalNamespace::GRPlayer::SendJuiceCollectedTelemetry)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58a43c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendJuiceCollectedTelemetry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendOverdrivePurchasedTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t, int32_t)>(&::GlobalNamespace::GRPlayer::SendOverdrivePurchasedTelemetry)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x58a4438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendOverdrivePurchasedTelemetry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendPodUpgradeTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW, int32_t, int32_t, int32_t)>(&::GlobalNamespace::GRPlayer::SendPodUpgradeTelemetry)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58a457c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendPodUpgradeTelemetry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SendCreditsRefilledTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t, int32_t)>(&::GlobalNamespace::GRPlayer::SendCreditsRefilledTelemetry)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x58a4608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendCreditsRefilledTelemetry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.ResetTelemetryTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW, float_t)>(&::GlobalNamespace::GRPlayer::ResetTelemetryTracking)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x58a474c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ResetTelemetryTracking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.ResetGameTelemetryTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::ResetGameTelemetryTracking)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x58a3634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ResetGameTelemetryTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementCoresCollectedPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::IncrementCoresCollectedPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a4938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementCoresCollectedPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementCoresCollectedGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::IncrementCoresCollectedGroup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a4954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementCoresCollectedGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementCoresSpentPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::IncrementCoresSpentPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x589e6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementCoresSpentPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementCoresSpentGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::IncrementCoresSpentGroup)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a4970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementCoresSpentGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementChaosSeedsCollected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::IncrementChaosSeedsCollected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a498c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementChaosSeedsCollected", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementGatesUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::IncrementGatesUnlocked)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x589e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementGatesUnlocked", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementDeaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::IncrementDeaths)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a2bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementDeaths", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementRevives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::IncrementRevives)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a2c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementRevives", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementShiftsPlayed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t)>(&::GlobalNamespace::GRPlayer::IncrementShiftsPlayed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a499c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementShiftsPlayed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.AddItemPurchased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW)>(&::GlobalNamespace::GRPlayer::AddItemPurchased)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58a49ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"AddItemPurchased", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.GrabbedItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::GameEntityId, ::StringW)>(&::GlobalNamespace::GRPlayer::GrabbedItem)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x58a4abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GrabbedItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.GetAssignedShuttle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRShuttle> (::GlobalNamespace::GRPlayer::*)(bool)>(&::GlobalNamespace::GRPlayer::GetAssignedShuttle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58a4c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GetAssignedShuttle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.RefreshShuttles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::RefreshShuttles)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58a4d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RefreshShuttles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.GetFromUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPlayer> (*)(::StringW)>(&::GlobalNamespace::GRPlayer::GetFromUserId)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x58a4e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GetFromUserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.RefreshDamageVignetteVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::RefreshDamageVignetteVisual)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58a08ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RefreshDamageVignetteVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.LowHeathVisualCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::LowHeathVisualCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58a5180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"LowHeathVisualCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SetGooParticleSystemEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(bool, bool)>(&::GlobalNamespace::GRPlayer::SetGooParticleSystemEnabled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58a5214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetGooParticleSystemEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SetAsFrozen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(float_t)>(&::GlobalNamespace::GRPlayer::SetAsFrozen)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x58a52b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetAsFrozen", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.RemoveFrozen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::RemoveFrozen)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58a56bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RemoveFrozen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::Tick)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x58a5780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                    {::i2c::class_of<::GlobalNamespace::GRPlayer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SetSynchronizedSessionStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::GRPlayer_SynchronizedSessionStat, float_t)>(&::GlobalNamespace::GRPlayer::SetSynchronizedSessionStat)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58a59f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetSynchronizedSessionStat", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer_SynchronizedSessionStat>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IncrementSynchronizedSessionStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::GRPlayer_SynchronizedSessionStat, float_t)>(&::GlobalNamespace::GRPlayer::IncrementSynchronizedSessionStat)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58a59b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementSynchronizedSessionStat", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer_SynchronizedSessionStat>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.ResetSynchronizedSessionStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::ResetSynchronizedSessionStats)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58a5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ResetSynchronizedSessionStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.RequestSetMothershipUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW, ::StringW)>(&::GlobalNamespace::GRPlayer::RequestSetMothershipUserData)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x58a5a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RequestSetMothershipUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnSetMothershipUserDataSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::SetUserDataResponse*)>(&::GlobalNamespace::GRPlayer::OnSetMothershipUserDataSuccess)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x58a5d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnSetMothershipUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnSetMothershipUserDataFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::GRPlayer::OnSetMothershipUserDataFail)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58a5dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnSetMothershipUserDataFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnSetMothershipDataComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(bool)>(&::GlobalNamespace::GRPlayer::OnSetMothershipDataComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a5cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnSetMothershipDataComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.RequestFetchMothershipUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::StringW)>(&::GlobalNamespace::GRPlayer::RequestFetchMothershipUserData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x58a5e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RequestFetchMothershipUserData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnGetMothershipFetchUserDataSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::MothershipUserData*)>(&::GlobalNamespace::GRPlayer::OnGetMothershipFetchUserDataSuccess)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58a60dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnGetMothershipFetchUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::MothershipUserData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.OnGetMothershipFetchUserDataFail
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GlobalNamespace::GRPlayer::OnGetMothershipFetchUserDataFail)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58a61a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnGetMothershipFetchUserDataFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.IsDropPodUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::IsDropPodUnlocked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IsDropPodUnlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.GetMaxDropFloor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::GetMaxDropFloor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a628c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GetMaxDropFloor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.CollectShiftCut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::CollectShiftCut)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58a62b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"CollectShiftCut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.AttemptPromotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::AttemptPromotion)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58a62d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"AttemptPromotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SetProgressionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)(int32_t, int32_t, bool)>(&::GlobalNamespace::GRPlayer::SetProgressionData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58a3450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetProgressionData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.LoadMyProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::LoadMyProgression)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58a0cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"LoadMyProgression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer.SaveMyProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::SaveMyProgression)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58a632c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SaveMyProgression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer::*)()>(&::GlobalNamespace::GRPlayer::_ctor)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x58a638c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GamePlayer>& GlobalNamespace::GRPlayer::__cordl_internal_get_gamePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& GlobalNamespace::GRPlayer::__cordl_internal_get_gamePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GamePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamePlayer = value;
}
constexpr ::GlobalNamespace::GRPlayer_GRPlayerState& GlobalNamespace::GRPlayer::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRPlayer_GRPlayerState const& GlobalNamespace::GRPlayer::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_state(::GlobalNamespace::GRPlayer_GRPlayerState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shiftCreditCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftCreditCache;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shiftCreditCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftCreditCache;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shiftCreditCache(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftCreditCache = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_startingShiftCreditCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingShiftCreditCache;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_startingShiftCreditCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingShiftCreditCache;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_startingShiftCreditCache(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingShiftCreditCache = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_playerJuice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerJuice;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerJuice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerJuice;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerJuice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerJuice = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get__ShiftCreditCapIncreases_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShiftCreditCapIncreases_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get__ShiftCreditCapIncreases_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShiftCreditCapIncreases_k__BackingField;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set__ShiftCreditCapIncreases_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShiftCreditCapIncreases_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get__ShiftCreditCapIncreasesMax_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShiftCreditCapIncreasesMax_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get__ShiftCreditCapIncreasesMax_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShiftCreditCapIncreasesMax_k__BackingField;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set__ShiftCreditCapIncreasesMax_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShiftCreditCapIncreasesMax_k__BackingField = value;
}
constexpr double_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shiftJoinTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftJoinTime;
}
constexpr double_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shiftJoinTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftJoinTime;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shiftJoinTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftJoinTime = value;
}
constexpr bool& GlobalNamespace::GRPlayer::__cordl_internal_get_isEmployee()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEmployee;
}
constexpr bool const& GlobalNamespace::GRPlayer::__cordl_internal_get_isEmployee() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEmployee;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_isEmployee(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEmployee = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRPlayer::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRPlayer::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRPlayer::__cordl_internal_get_playerTurnedGhostEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTurnedGhostEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerTurnedGhostEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTurnedGhostEffect;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerTurnedGhostEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTurnedGhostEffect = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GRPlayer::__cordl_internal_get_playerTurnedGhostSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTurnedGhostSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerTurnedGhostSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTurnedGhostSoundBank;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerTurnedGhostSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTurnedGhostSoundBank = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRPlayer::__cordl_internal_get_playerRevivedEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRevivedEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerRevivedEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRevivedEffect;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerRevivedEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRevivedEffect = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRPlayer::__cordl_internal_get_playerRevivedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRevivedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerRevivedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRevivedSound;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerRevivedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRevivedSound = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_playerRevivedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRevivedVolume;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerRevivedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerRevivedVolume;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerRevivedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerRevivedVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageAudioSource;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerDamageAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerDamageAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRPlayer::__cordl_internal_get_bodyCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRPlayer::__cordl_internal_get_bodyCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCenter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_bodyCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCenter = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageEffect;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerDamageEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerDamageEffect = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageVolume;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageVolume;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerDamageVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerDamageVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageSound;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerDamageSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerDamageSound = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageOffsetDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageOffsetDist;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerDamageOffsetDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerDamageOffsetDist;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerDamageOffsetDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerDamageOffsetDist = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRPlayer::__cordl_internal_get_deathTintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deathTintColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRPlayer::__cordl_internal_get_deathTintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deathTintColor;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_deathTintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deathTintColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRPlayer::__cordl_internal_get_deathAmbientLightColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deathAmbientLightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRPlayer::__cordl_internal_get_deathAmbientLightColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deathAmbientLightColor;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_deathAmbientLightColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deathAmbientLightColor = value;
}
constexpr ::UnityW<::GlobalNamespace::GameLight>& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldGameLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldGameLight;
}
constexpr ::UnityW<::GlobalNamespace::GameLight> const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldGameLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldGameLight;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldGameLight(::UnityW<::GlobalNamespace::GameLight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldGameLight = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRPlayer::__cordl_internal_get_attachEnemy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachEnemy;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRPlayer::__cordl_internal_get_attachEnemy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachEnemy;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_attachEnemy(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachEnemy = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldHeadVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldHeadVisual;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldHeadVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldHeadVisual;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldHeadVisual(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldHeadVisual = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldBodyVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldBodyVisual;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldBodyVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldBodyVisual;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldBodyVisual(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldBodyVisual = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldActivatedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldActivatedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldActivatedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldActivatedSound;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldActivatedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldActivatedSound = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldActivatedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldActivatedVolume;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldActivatedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldActivatedVolume;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldActivatedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldActivatedVolume = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDamagedEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDamagedEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDamagedEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDamagedEffect;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldDamagedEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldDamagedEffect = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDamagedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDamagedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDamagedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDamagedSound;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldDamagedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldDamagedSound = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDamagedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDamagedVolume;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDamagedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDamagedVolume;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldDamagedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldDamagedVolume = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDestroyedEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDestroyedEffect;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDestroyedEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDestroyedEffect;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldDestroyedEffect(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldDestroyedEffect = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDestroyedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDestroyedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDestroyedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDestroyedSound;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldDestroyedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldDestroyedSound = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDestroyedVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDestroyedVolume;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldDestroyedVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldDestroyedVolume;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldDestroyedVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldDestroyedVolume = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldStealthModeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldStealthModeDuration;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldStealthModeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldStealthModeDuration;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldStealthModeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldStealthModeDuration = value;
}
constexpr double_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldStealthModeEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldStealthModeEndTime;
}
constexpr double_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldStealthModeEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldStealthModeEndTime;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldStealthModeEndTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldStealthModeEndTime = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldColorNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldColorNormal;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldColorNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldColorNormal;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldColorNormal(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldColorNormal = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldColorLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldColorLight;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldColorLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldColorLight;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldColorLight(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldColorLight = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldColorStealth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldColorStealth;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldColorStealth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldColorStealth;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldColorStealth(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldColorStealth = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldColorHeal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldColorHeal;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldColorHeal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldColorHeal;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldColorHeal(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldColorHeal = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_xRayVisionRefCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xRayVisionRefCount;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_xRayVisionRefCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xRayVisionRefCount;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_xRayVisionRefCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xRayVisionRefCount = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRPlayer::__cordl_internal_get_badgeBodyAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeBodyAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRPlayer::__cordl_internal_get_badgeBodyAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeBodyAnchor;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_badgeBodyAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeBodyAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRPlayer::__cordl_internal_get_badgeBodyStringAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeBodyStringAttach;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRPlayer::__cordl_internal_get_badgeBodyStringAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeBodyStringAttach;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_badgeBodyStringAttach(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeBodyStringAttach = value;
}
constexpr double_t& GlobalNamespace::GRPlayer::__cordl_internal_get_lastLeftWithBadgeAttachedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftWithBadgeAttachedTime;
}
constexpr double_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_lastLeftWithBadgeAttachedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftWithBadgeAttachedTime;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_lastLeftWithBadgeAttachedTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLeftWithBadgeAttachedTime = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_maxHp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHp;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_maxHp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHp;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_maxHp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHp = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_maxShieldHp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxShieldHp;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_maxShieldHp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxShieldHp;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_maxShieldHp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxShieldHp = value;
}
constexpr ::StringW& GlobalNamespace::GRPlayer::__cordl_internal_get_mothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr ::StringW const& GlobalNamespace::GRPlayer::__cordl_internal_get_mothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mothershipId;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_mothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mothershipId = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_hp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_hp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_hp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hp = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldHp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldHp;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldHp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldHp;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldHp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldHp = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldFlags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldFlags;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shieldFlags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shieldFlags;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shieldFlags(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shieldFlags = value;
}
constexpr bool& GlobalNamespace::GRPlayer::__cordl_internal_get_inStealthMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inStealthMode;
}
constexpr bool const& GlobalNamespace::GRPlayer::__cordl_internal_get_inStealthMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inStealthMode;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_inStealthMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inStealthMode = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_DamageOverlayValues>*& GlobalNamespace::GRPlayer::__cordl_internal_get_damageOverlayValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageOverlayValues;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_DamageOverlayValues>* const& GlobalNamespace::GRPlayer::__cordl_internal_get_damageOverlayValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageOverlayValues;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_damageOverlayValues(::System::Collections::Generic::List_1<::GlobalNamespace::GRPlayer_DamageOverlayValues>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageOverlayValues = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_damageOverlayMaxHp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageOverlayMaxHp;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_damageOverlayMaxHp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageOverlayMaxHp;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_damageOverlayMaxHp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageOverlayMaxHp = value;
}
constexpr ::UnityW<::GlobalNamespace::GRBadge>& GlobalNamespace::GRPlayer::__cordl_internal_get_badge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badge;
}
constexpr ::UnityW<::GlobalNamespace::GRBadge> const& GlobalNamespace::GRPlayer::__cordl_internal_get_badge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badge;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_badge(::UnityW<::GlobalNamespace::GRBadge>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badge = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_requestCollectItemLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestCollectItemLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_requestCollectItemLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestCollectItemLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_requestCollectItemLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestCollectItemLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_requestChargeToolLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestChargeToolLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_requestChargeToolLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestChargeToolLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_requestChargeToolLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestChargeToolLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_requestDepositCurrencyLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestDepositCurrencyLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_requestDepositCurrencyLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestDepositCurrencyLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_requestDepositCurrencyLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestDepositCurrencyLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_requestShiftStartLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestShiftStartLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_requestShiftStartLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestShiftStartLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_requestShiftStartLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestShiftStartLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_requestToolPurchaseStationLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestToolPurchaseStationLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_requestToolPurchaseStationLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestToolPurchaseStationLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_requestToolPurchaseStationLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestToolPurchaseStationLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_applyEnemyHitLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyEnemyHitLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_applyEnemyHitLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyEnemyHitLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_applyEnemyHitLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyEnemyHitLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_reportLocalHitLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportLocalHitLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_reportLocalHitLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportLocalHitLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_reportLocalHitLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportLocalHitLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_reportBreakableBrokenLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportBreakableBrokenLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_reportBreakableBrokenLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reportBreakableBrokenLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_reportBreakableBrokenLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reportBreakableBrokenLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_playerStateChangeLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerStateChangeLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerStateChangeLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerStateChangeLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerStateChangeLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerStateChangeLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_promotionBotLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionBotLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_promotionBotLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionBotLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_promotionBotLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promotionBotLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_progressionBroadcastLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionBroadcastLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_progressionBroadcastLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressionBroadcastLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_progressionBroadcastLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressionBroadcastLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_scoreboardPageLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreboardPageLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_scoreboardPageLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreboardPageLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_scoreboardPageLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreboardPageLimiter = value;
}
constexpr ::GlobalNamespace::CallLimiter*& GlobalNamespace::GRPlayer::__cordl_internal_get_fireShieldLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireShieldLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& GlobalNamespace::GRPlayer::__cordl_internal_get_fireShieldLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireShieldLimiter;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_fireShieldLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireShieldLimiter = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GRPlayer::__cordl_internal_get_vrRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GRPlayer::__cordl_internal_get_vrRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRig;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_vrRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrRig = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GRPlayer::__cordl_internal_get_vrRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GRPlayer::__cordl_internal_get_vrRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRigs;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_vrRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrRigs = value;
}
constexpr ::StringW& GlobalNamespace::GRPlayer::__cordl_internal_get_gameId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameId;
}
constexpr ::StringW const& GlobalNamespace::GRPlayer::__cordl_internal_get_gameId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameId;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_gameId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameId = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_coresCollectedByPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresCollectedByPlayer;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_coresCollectedByPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresCollectedByPlayer;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_coresCollectedByPlayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coresCollectedByPlayer = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_coresCollectedByGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresCollectedByGroup;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_coresCollectedByGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresCollectedByGroup;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_coresCollectedByGroup(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coresCollectedByGroup = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_coresSpentByPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresSpentByPlayer;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_coresSpentByPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresSpentByPlayer;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_coresSpentByPlayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coresSpentByPlayer = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_coresSpentByGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresSpentByGroup;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_coresSpentByGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresSpentByGroup;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_coresSpentByGroup(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coresSpentByGroup = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_gatesUnlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gatesUnlocked;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_gatesUnlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gatesUnlocked;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_gatesUnlocked(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gatesUnlocked = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_deaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deaths;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_deaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deaths;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_deaths(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deaths = value;
}
constexpr bool& GlobalNamespace::GRPlayer::__cordl_internal_get_caughtByAnomaly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caughtByAnomaly;
}
constexpr bool const& GlobalNamespace::GRPlayer::__cordl_internal_get_caughtByAnomaly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caughtByAnomaly;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_caughtByAnomaly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___caughtByAnomaly = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GRPlayer::__cordl_internal_get_itemsPurchased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemsPurchased;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GRPlayer::__cordl_internal_get_itemsPurchased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemsPurchased;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_itemsPurchased(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemsPurchased = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GRPlayer::__cordl_internal_get_levelsUnlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelsUnlocked;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GRPlayer::__cordl_internal_get_levelsUnlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelsUnlocked;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_levelsUnlocked(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelsUnlocked = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_timeIntoShiftAtJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeIntoShiftAtJoin;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_timeIntoShiftAtJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeIntoShiftAtJoin;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_timeIntoShiftAtJoin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeIntoShiftAtJoin = value;
}
constexpr bool& GlobalNamespace::GRPlayer::__cordl_internal_get_wasPlayerInAtShiftStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasPlayerInAtShiftStart;
}
constexpr bool const& GlobalNamespace::GRPlayer::__cordl_internal_get_wasPlayerInAtShiftStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasPlayerInAtShiftStart;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_wasPlayerInAtShiftStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasPlayerInAtShiftStart = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_sentientCoresCollected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentientCoresCollected;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_sentientCoresCollected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentientCoresCollected;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_sentientCoresCollected(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sentientCoresCollected = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_maxNumberOfPlayersInShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNumberOfPlayersInShift;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_maxNumberOfPlayersInShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNumberOfPlayersInShift;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_maxNumberOfPlayersInShift(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNumberOfPlayersInShift = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_revives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revives;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_revives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___revives;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_revives(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___revives = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GRPlayer::__cordl_internal_get_synchronizedSessionStats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchronizedSessionStats;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GRPlayer::__cordl_internal_get_synchronizedSessionStats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchronizedSessionStats;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_synchronizedSessionStats(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synchronizedSessionStats = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*& GlobalNamespace::GRPlayer::__cordl_internal_get_itemsHeldThisShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemsHeldThisShift;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>* const& GlobalNamespace::GRPlayer::__cordl_internal_get_itemsHeldThisShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemsHeldThisShift;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_itemsHeldThisShift(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemsHeldThisShift = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& GlobalNamespace::GRPlayer::__cordl_internal_get_itemTypesHeldThisShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemTypesHeldThisShift;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& GlobalNamespace::GRPlayer::__cordl_internal_get_itemTypesHeldThisShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemTypesHeldThisShift;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_itemTypesHeldThisShift(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemTypesHeldThisShift = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_totalCoresCollectedByPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCoresCollectedByPlayer;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalCoresCollectedByPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCoresCollectedByPlayer;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalCoresCollectedByPlayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalCoresCollectedByPlayer = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_totalCoresCollectedByGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCoresCollectedByGroup;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalCoresCollectedByGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCoresCollectedByGroup;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalCoresCollectedByGroup(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalCoresCollectedByGroup = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_totalCoresSpentByPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCoresSpentByPlayer;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalCoresSpentByPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCoresSpentByPlayer;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalCoresSpentByPlayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalCoresSpentByPlayer = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_totalCoresSpentByGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCoresSpentByGroup;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalCoresSpentByGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalCoresSpentByGroup;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalCoresSpentByGroup(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalCoresSpentByGroup = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_totalGatesUnlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalGatesUnlocked;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalGatesUnlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalGatesUnlocked;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalGatesUnlocked(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalGatesUnlocked = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_totalDeaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDeaths;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalDeaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalDeaths;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalDeaths(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalDeaths = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::GRPlayer::__cordl_internal_get_totalItemsPurchased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalItemsPurchased;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalItemsPurchased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalItemsPurchased;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalItemsPurchased(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalItemsPurchased = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_timeIntoGameAtJoin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeIntoGameAtJoin;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_timeIntoGameAtJoin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeIntoGameAtJoin;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_timeIntoGameAtJoin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeIntoGameAtJoin = value;
}
constexpr bool& GlobalNamespace::GRPlayer::__cordl_internal_get_wasPlayerInAtGameStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasPlayerInAtGameStart;
}
constexpr bool const& GlobalNamespace::GRPlayer::__cordl_internal_get_wasPlayerInAtGameStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasPlayerInAtGameStart;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_wasPlayerInAtGameStart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasPlayerInAtGameStart = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_maxNumberOfPlayersIngame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNumberOfPlayersIngame;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_maxNumberOfPlayersIngame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNumberOfPlayersIngame;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_maxNumberOfPlayersIngame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNumberOfPlayersIngame = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_totalRevives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalRevives;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalRevives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalRevives;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalRevives(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalRevives = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_numShiftsPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numShiftsPlayed;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_numShiftsPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numShiftsPlayed;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_numShiftsPlayed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numShiftsPlayed = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_gameStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartTime;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_gameStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartTime;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_gameStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameStartTime = value;
}
constexpr bool& GlobalNamespace::GRPlayer::__cordl_internal_get_isFirstShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFirstShift;
}
constexpr bool const& GlobalNamespace::GRPlayer::__cordl_internal_get_isFirstShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isFirstShift;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_isFirstShift(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isFirstShift = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*& GlobalNamespace::GRPlayer::__cordl_internal_get_totalItemsHeldThisShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalItemsHeldThisShift;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>* const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalItemsHeldThisShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalItemsHeldThisShift;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalItemsHeldThisShift(::System::Collections::Generic::HashSet_1<::GlobalNamespace::GameEntityId>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalItemsHeldThisShift = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*& GlobalNamespace::GRPlayer::__cordl_internal_get_totalItemTypesHeldThisShift()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalItemTypesHeldThisShift;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* const& GlobalNamespace::GRPlayer::__cordl_internal_get_totalItemTypesHeldThisShift() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalItemTypesHeldThisShift;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_totalItemTypesHeldThisShift(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalItemTypesHeldThisShift = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayerDamageEffects>& GlobalNamespace::GRPlayer::__cordl_internal_get_damageEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageEffects;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayerDamageEffects> const& GlobalNamespace::GRPlayer::__cordl_internal_get_damageEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damageEffects;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_damageEffects(::UnityW<::GlobalNamespace::GRPlayerDamageEffects>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damageEffects = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::GRPlayer::__cordl_internal_get_lowHealthVisualPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowHealthVisualPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::GRPlayer::__cordl_internal_get_lowHealthVisualPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowHealthVisualPropertyBlock;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_lowHealthVisualPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowHealthVisualPropertyBlock = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_lowHealthTintPropertyId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowHealthTintPropertyId;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_lowHealthTintPropertyId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowHealthTintPropertyId;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_lowHealthTintPropertyId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowHealthTintPropertyId = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_currentHealthVisualValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHealthVisualValue;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_currentHealthVisualValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHealthVisualValue;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_currentHealthVisualValue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHealthVisualValue = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GRPlayer::__cordl_internal_get_lowHeathVisualCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowHeathVisualCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GRPlayer::__cordl_internal_get_lowHeathVisualCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowHeathVisualCoroutine;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_lowHeathVisualCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowHeathVisualCoroutine = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GRPlayer::__cordl_internal_get_playerFrozenSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerFrozenSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GRPlayer::__cordl_internal_get_playerFrozenSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerFrozenSound;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_playerFrozenSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerFrozenSound = value;
}
constexpr ::GlobalNamespace::GRPlayer_ShuttleData*& GlobalNamespace::GRPlayer::__cordl_internal_get_shuttleData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleData;
}
constexpr ::GlobalNamespace::GRPlayer_ShuttleData* const& GlobalNamespace::GRPlayer::__cordl_internal_get_shuttleData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleData;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shuttleData(::GlobalNamespace::GRPlayer_ShuttleData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuttleData = value;
}
constexpr ::GlobalNamespace::GRPlayer_ProgressionData& GlobalNamespace::GRPlayer::__cordl_internal_get_currentProgression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentProgression;
}
constexpr ::GlobalNamespace::GRPlayer_ProgressionData const& GlobalNamespace::GRPlayer::__cordl_internal_get_currentProgression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentProgression;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_currentProgression(::GlobalNamespace::GRPlayer_ProgressionData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentProgression = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_shiftPlayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftPlayTime;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_shiftPlayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftPlayTime;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_shiftPlayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftPlayTime = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_lastShiftCut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastShiftCut;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_lastShiftCut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastShiftCut;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_lastShiftCut(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastShiftCut = value;
}
constexpr ::GlobalNamespace::GhostReactorSoak*& GlobalNamespace::GRPlayer::__cordl_internal_get_soak()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soak;
}
constexpr ::GlobalNamespace::GhostReactorSoak* const& GlobalNamespace::GRPlayer::__cordl_internal_get_soak() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soak;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_soak(::GlobalNamespace::GhostReactorSoak*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soak = value;
}
constexpr float_t& GlobalNamespace::GRPlayer::__cordl_internal_get_freezeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freezeDuration;
}
constexpr float_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_freezeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freezeDuration;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_freezeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freezeDuration = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GRPlayer::__cordl_internal_get_lastPlayerPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayerPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GRPlayer::__cordl_internal_get_lastPlayerPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayerPosition;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_lastPlayerPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlayerPosition = value;
}
constexpr bool& GlobalNamespace::GRPlayer::__cordl_internal_get_saveEquipmentInProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveEquipmentInProgress;
}
constexpr bool const& GlobalNamespace::GRPlayer::__cordl_internal_get_saveEquipmentInProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saveEquipmentInProgress;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_saveEquipmentInProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saveEquipmentInProgress = value;
}
constexpr bool& GlobalNamespace::GRPlayer::__cordl_internal_get_hasPulledEquipment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPulledEquipment;
}
constexpr bool const& GlobalNamespace::GRPlayer::__cordl_internal_get_hasPulledEquipment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPulledEquipment;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_hasPulledEquipment(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPulledEquipment = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_dropPodLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPodLevel;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_dropPodLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPodLevel;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_dropPodLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropPodLevel = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer::__cordl_internal_get_dropPodChasisLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPodChasisLevel;
}
constexpr int32_t const& GlobalNamespace::GRPlayer::__cordl_internal_get_dropPodChasisLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPodChasisLevel;
}
constexpr void GlobalNamespace::GRPlayer::__cordl_internal_set_dropPodChasisLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropPodChasisLevel = value;
}
inline void GlobalNamespace::GRPlayer::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GRPlayer*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GRPlayer::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GRPlayer*>();
}
inline ::GlobalNamespace::GRPlayer_GRPlayerState GlobalNamespace::GRPlayer::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRPlayer_GRPlayerState>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRPlayer::get_Juice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_Juice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRPlayer::get_ShiftCreditCapIncreases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShiftCreditCapIncreases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::set_ShiftCreditCapIncreases(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_ShiftCreditCapIncreases", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GRPlayer::get_ShiftCreditCapIncreasesMax()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShiftCreditCapIncreasesMax", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::set_ShiftCreditCapIncreasesMax(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_ShiftCreditCapIncreasesMax", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GRPlayer::get_ShiftCredits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShiftCredits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GRPlayer::HasXRayVision()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"HasXRayVision", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRPlayer::get_MaxHp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_MaxHp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRPlayer::get_MaxShieldHp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_MaxShieldHp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRPlayer::get_Hp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_Hp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRPlayer::get_ShieldHp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShieldHp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRPlayer::get_ShieldFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShieldFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GRPlayer::get_InStealthMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_InStealthMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::GRPlayer::get_MyRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_MyRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline float_t GlobalNamespace::GRPlayer::get_ShiftPlayTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_ShiftPlayTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::set_ShiftPlayTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_ShiftPlayTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GRPlayer::get_LastShiftCut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_LastShiftCut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::set_LastShiftCut(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_LastShiftCut", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GRPlayer_ProgressionData GlobalNamespace::GRPlayer::get_CurrentProgression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"get_CurrentProgression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRPlayer_ProgressionData>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::set_CurrentProgression(::GlobalNamespace::GRPlayer_ProgressionData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"set_CurrentProgression", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer_ProgressionData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::SetHp(int32_t  newHp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetHp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newHp);
}
inline void GlobalNamespace::GRPlayer::SetShieldHp(int32_t  newShieldHp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetShieldHp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newShieldHp);
}
inline void GlobalNamespace::GRPlayer::OnShiftCreditCapChanged(::StringW  targetMothershipId, int32_t  newCap, int32_t  newCapMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnShiftCreditCapChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetMothershipId, newCap, newCapMax);
}
inline void GlobalNamespace::GRPlayer::OnShiftCreditChanged(::StringW  targetMothershipId, int32_t  newShiftCredits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnShiftCreditChanged", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetMothershipId, newShiftCredits);
}
inline void GlobalNamespace::GRPlayer::OnShiftCreditCapData(::StringW  targetMothershipId, int32_t  shiftCreditCapNumberOfIncreases, int32_t  shiftCreditMaxNumberOfIncreases)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnShiftCreditCapData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetMothershipId, shiftCreditCapNumberOfIncreases, shiftCreditMaxNumberOfIncreases);
}
inline void GlobalNamespace::GRPlayer::SubtractShiftCredit(int32_t  shiftCreditDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SubtractShiftCredit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shiftCreditDelta);
}
inline void GlobalNamespace::GRPlayer::OnPlayerHit(::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, ::GlobalNamespace::GhostReactorManager*  manager, ::GlobalNamespace::GameEntityId  hitByEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnPlayerHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager*>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitPosition, hitImpulse, manager, hitByEntityId);
}
inline void GlobalNamespace::GRPlayer::OnPlayerRevive(::GlobalNamespace::GhostReactorManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnPlayerRevive", {}, {::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager);
}
inline void GlobalNamespace::GRPlayer::ChangePlayerState(::GlobalNamespace::GRPlayer_GRPlayerState  newState, ::GlobalNamespace::GhostReactorManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ChangePlayerState", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer_GRPlayerState>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, manager);
}
inline void GlobalNamespace::GRPlayer::RefreshPlayerVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RefreshPlayerVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GRPlayer> GlobalNamespace::GRPlayer::Get(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPlayer>>(nullptr, ___internal_method, actorNumber);
}
inline ::UnityW<::GlobalNamespace::GRPlayer> GlobalNamespace::GRPlayer::Get(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPlayer>>(nullptr, ___internal_method, player);
}
inline ::UnityW<::GlobalNamespace::GRPlayer> GlobalNamespace::GRPlayer::Get(::GlobalNamespace::VRRig*  vrRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPlayer>>(nullptr, ___internal_method, vrRig);
}
inline ::UnityW<::GlobalNamespace::GRPlayer> GlobalNamespace::GRPlayer::GetLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GetLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPlayer>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::AttachBadge(::GlobalNamespace::GRBadge*  grBadge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"AttachBadge", {}, {::i2c::type_of<::GlobalNamespace::GRBadge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grBadge);
}
inline bool GlobalNamespace::GRPlayer::CanActivateShield(int32_t  shieldHitPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"CanActivateShield", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shieldHitPoints);
}
inline bool GlobalNamespace::GRPlayer::TryActivateShield(int32_t  shieldHitpoints, int32_t  shieldFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"TryActivateShield", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, shieldHitpoints, shieldFlags);
}
inline void GlobalNamespace::GRPlayer::ClearStealthMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ClearStealthMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::SerializeNetworkState(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SerializeNetworkState", {}, {::i2c::type_of<::System::IO::BinaryWriter*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, player);
}
inline void GlobalNamespace::GRPlayer::DeserializeNetworkStateAndBurn(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GRPlayer*  player, ::GlobalNamespace::GhostReactorManager*  grManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"DeserializeNetworkStateAndBurn", {}, {::i2c::type_of<::System::IO::BinaryReader*>(), ::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::GlobalNamespace::GhostReactorManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, reader, player, grManager);
}
inline void GlobalNamespace::GRPlayer::PlayHitFx(::UnityEngine::Vector3  attackLocation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"PlayHitFx", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attackLocation);
}
inline void GlobalNamespace::GRPlayer::SendGameStartedTelemetry(float_t  timeIntoShift, bool  wasPlayerInAtStart, int32_t  currentFloor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendGameStartedTelemetry", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeIntoShift, wasPlayerInAtStart, currentFloor);
}
inline void GlobalNamespace::GRPlayer::SendGameEndedTelemetry(bool  isShiftActuallyEnding, ::GlobalNamespace::ZoneClearReason  zoneClearReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendGameEndedTelemetry", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isShiftActuallyEnding, zoneClearReason);
}
inline void GlobalNamespace::GRPlayer::SendFloorStartedTelemetry(float_t  timeIntoShift, bool  wasPlayerInAtStart, int32_t  currentFloor, ::StringW  floorPreset, ::StringW  floorModifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendFloorStartedTelemetry", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeIntoShift, wasPlayerInAtStart, currentFloor, floorPreset, floorModifier);
}
inline void GlobalNamespace::GRPlayer::SendFloorEndedTelemetry(bool  isShiftActuallyEnding, float_t  shiftStartTime, ::GlobalNamespace::ZoneClearReason  zoneClearReason, int32_t  currentFloor, ::StringW  floorPreset, ::StringW  floorModifier, bool  objectivesCompleted, ::StringW  section, int32_t  xpGained)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendFloorEndedTelemetry", {}, {::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ZoneClearReason>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isShiftActuallyEnding, shiftStartTime, zoneClearReason, currentFloor, floorPreset, floorModifier, objectivesCompleted, section, xpGained);
}
inline void GlobalNamespace::GRPlayer::SendToolPurchasedTelemetry(::StringW  toolName, int32_t  toolLevel, int32_t  coresSpent, int32_t  shinyRocksSpent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendToolPurchasedTelemetry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toolName, toolLevel, coresSpent, shinyRocksSpent);
}
inline void GlobalNamespace::GRPlayer::SendRankUpTelemetry(::StringW  newRank)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendRankUpTelemetry", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newRank);
}
inline void GlobalNamespace::GRPlayer::SendToolUpgradeTelemetry(::StringW  upgradeType, ::StringW  toolName, int32_t  newLevel, int32_t  juiceSpent, int32_t  griftSpent, int32_t  coresSpent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendToolUpgradeTelemetry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upgradeType, toolName, newLevel, juiceSpent, griftSpent, coresSpent);
}
inline void GlobalNamespace::GRPlayer::SendSeedDepositedTelemetry(::StringW  unlockTime, int32_t  seedsInQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendSeedDepositedTelemetry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unlockTime, seedsInQueue);
}
inline void GlobalNamespace::GRPlayer::SendJuiceCollectedTelemetry(int32_t  juiceCollected, int32_t  coresProcessedByOverdrive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendJuiceCollectedTelemetry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, juiceCollected, coresProcessedByOverdrive);
}
inline void GlobalNamespace::GRPlayer::SendOverdrivePurchasedTelemetry(int32_t  shinyRocksUsed, int32_t  seedsInQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendOverdrivePurchasedTelemetry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shinyRocksUsed, seedsInQueue);
}
inline void GlobalNamespace::GRPlayer::SendPodUpgradeTelemetry(::StringW  toolName, int32_t  level, int32_t  shinyRocksSpent, int32_t  juiceSpent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendPodUpgradeTelemetry", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toolName, level, shinyRocksSpent, juiceSpent);
}
inline void GlobalNamespace::GRPlayer::SendCreditsRefilledTelemetry(int32_t  shinyRocksSpent, int32_t  finalCredits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SendCreditsRefilledTelemetry", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shinyRocksSpent, finalCredits);
}
inline void GlobalNamespace::GRPlayer::ResetTelemetryTracking(::StringW  newGameId, float_t  timeSinceShiftStart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ResetTelemetryTracking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameId, timeSinceShiftStart);
}
inline void GlobalNamespace::GRPlayer::ResetGameTelemetryTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ResetGameTelemetryTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::IncrementCoresCollectedPlayer(int32_t  coreValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementCoresCollectedPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coreValue);
}
inline void GlobalNamespace::GRPlayer::IncrementCoresCollectedGroup(int32_t  coreValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementCoresCollectedGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coreValue);
}
inline void GlobalNamespace::GRPlayer::IncrementCoresSpentPlayer(int32_t  coreValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementCoresSpentPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coreValue);
}
inline void GlobalNamespace::GRPlayer::IncrementCoresSpentGroup(int32_t  coreValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementCoresSpentGroup", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coreValue);
}
inline void GlobalNamespace::GRPlayer::IncrementChaosSeedsCollected(int32_t  numSeeds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementChaosSeedsCollected", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numSeeds);
}
inline void GlobalNamespace::GRPlayer::IncrementGatesUnlocked(int32_t  numGatesUnlocked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementGatesUnlocked", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numGatesUnlocked);
}
inline void GlobalNamespace::GRPlayer::IncrementDeaths(int32_t  numDeaths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementDeaths", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numDeaths);
}
inline void GlobalNamespace::GRPlayer::IncrementRevives(int32_t  numRevives)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementRevives", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numRevives);
}
inline void GlobalNamespace::GRPlayer::IncrementShiftsPlayed(int32_t  numShifts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementShiftsPlayed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numShifts);
}
inline void GlobalNamespace::GRPlayer::AddItemPurchased(::StringW  newItemPurchased)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"AddItemPurchased", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newItemPurchased);
}
inline void GlobalNamespace::GRPlayer::GrabbedItem(::GlobalNamespace::GameEntityId  id, ::StringW  itemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GrabbedItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, itemName);
}
inline ::UnityW<::GlobalNamespace::GRShuttle> GlobalNamespace::GRPlayer::GetAssignedShuttle(bool  isOnDrillovator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GetAssignedShuttle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRShuttle>>(this, ___internal_method, isOnDrillovator);
}
inline void GlobalNamespace::GRPlayer::RefreshShuttles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RefreshShuttles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GRPlayer> GlobalNamespace::GRPlayer::GetFromUserId(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GetFromUserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPlayer>>(nullptr, ___internal_method, userId);
}
inline void GlobalNamespace::GRPlayer::RefreshDamageVignetteVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RefreshDamageVignetteVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GRPlayer::LowHeathVisualCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"LowHeathVisualCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::SetGooParticleSystemEnabled(bool  bIsLeftHand, bool  newEnableState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetGooParticleSystemEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bIsLeftHand, newEnableState);
}
inline void GlobalNamespace::GRPlayer::SetAsFrozen(float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetAsFrozen", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, duration);
}
inline void GlobalNamespace::GRPlayer::RemoveFrozen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RemoveFrozen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRPlayer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::SetSynchronizedSessionStat(::GlobalNamespace::GRPlayer_SynchronizedSessionStat  stat, float_t  amt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetSynchronizedSessionStat", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer_SynchronizedSessionStat>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat, amt);
}
inline void GlobalNamespace::GRPlayer::IncrementSynchronizedSessionStat(::GlobalNamespace::GRPlayer_SynchronizedSessionStat  stat, float_t  amt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IncrementSynchronizedSessionStat", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer_SynchronizedSessionStat>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stat, amt);
}
inline void GlobalNamespace::GRPlayer::ResetSynchronizedSessionStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"ResetSynchronizedSessionStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::RequestSetMothershipUserData(::StringW  keyName, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RequestSetMothershipUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyName, value);
}
inline void GlobalNamespace::GRPlayer::OnSetMothershipUserDataSuccess(::GlobalNamespace::SetUserDataResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnSetMothershipUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::GRPlayer::OnSetMothershipUserDataFail(::GlobalNamespace::MothershipError*  error, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnSetMothershipUserDataFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, status);
}
inline void GlobalNamespace::GRPlayer::OnSetMothershipDataComplete(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnSetMothershipDataComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline void GlobalNamespace::GRPlayer::RequestFetchMothershipUserData(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"RequestFetchMothershipUserData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void GlobalNamespace::GRPlayer::OnGetMothershipFetchUserDataSuccess(::GlobalNamespace::MothershipUserData*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnGetMothershipFetchUserDataSuccess", {}, {::i2c::type_of<::GlobalNamespace::MothershipUserData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, response);
}
inline void GlobalNamespace::GRPlayer::OnGetMothershipFetchUserDataFail(::GlobalNamespace::MothershipError*  error, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"OnGetMothershipFetchUserDataFail", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error, status);
}
inline bool GlobalNamespace::GRPlayer::IsDropPodUnlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"IsDropPodUnlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRPlayer::GetMaxDropFloor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"GetMaxDropFloor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::CollectShiftCut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"CollectShiftCut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRPlayer::AttemptPromotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"AttemptPromotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::SetProgressionData(int32_t  _points, int32_t  _redeemedPoints, bool  saveProgression)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SetProgressionData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _points, _redeemedPoints, saveProgression);
}
inline void GlobalNamespace::GRPlayer::LoadMyProgression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"LoadMyProgression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::SaveMyProgression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {"SaveMyProgression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRPlayer* GlobalNamespace::GRPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPlayer::GRPlayer()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::*)(int32_t)>(&::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58a51ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::*)()>(&::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a66cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::*)()>(&::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::MoveNext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x58a66d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::*)()>(&::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a68f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::*)()>(&::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58a6900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::*)()>(&::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a6938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get__index_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index_5__2;
}
constexpr int32_t const& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get__index_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____index_5__2;
}
constexpr void GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_set__index_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____index_5__2 = value;
}
constexpr float_t& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get__startTime_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr float_t const& GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_get__startTime_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr void GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::__cordl_internal_set__startTime_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__3 = value;
}
inline void GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215* GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPlayer__LowHeathVisualCoroutine_d__215::GRPlayer__LowHeathVisualCoroutine_d__215()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRPlayer_ShuttleData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPlayer_ShuttleData::*)()>(&::GlobalNamespace::GRPlayer_ShuttleData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a09d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer_ShuttleData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_ownerUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerUserId;
}
constexpr ::StringW const& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_ownerUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerUserId;
}
constexpr void GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_set_ownerUserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerUserId = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_currShuttleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currShuttleId;
}
constexpr int32_t const& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_currShuttleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currShuttleId;
}
constexpr void GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_set_currShuttleId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currShuttleId = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_targetShuttleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetShuttleId;
}
constexpr int32_t const& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_targetShuttleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetShuttleId;
}
constexpr void GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_set_targetShuttleId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetShuttleId = value;
}
constexpr int32_t& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_targetLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLevel;
}
constexpr int32_t const& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_targetLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLevel;
}
constexpr void GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_set_targetLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetLevel = value;
}
constexpr ::GlobalNamespace::GRPlayer_ShuttleState& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRPlayer_ShuttleState const& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_set_state(::GlobalNamespace::GRPlayer_ShuttleState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr double_t& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_stateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr double_t const& GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_get_stateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr void GlobalNamespace::GRPlayer_ShuttleData::__cordl_internal_set_stateStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStartTime = value;
}
inline void GlobalNamespace::GRPlayer_ShuttleData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPlayer_ShuttleData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRPlayer_ShuttleData* GlobalNamespace::GRPlayer_ShuttleData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRPlayer_ShuttleData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPlayer_ShuttleData::GRPlayer_ShuttleData()   {
}
