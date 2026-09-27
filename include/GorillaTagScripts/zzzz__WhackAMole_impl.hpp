#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMole.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_impl.hpp"
#include "GorillaTagScripts/zzzz__WhackAMoleLevelSO_impl.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameResult_impl.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameState_impl.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_WhackAMoleData_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MeshRenderer_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaTimer_def.hpp"
#include "GorillaTagScripts/zzzz__MoleTypes_def.hpp"
#include "GorillaTagScripts/zzzz__Mole_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMoleLevelSO_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameResult_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_GameState_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_WhackAMoleData_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole___c__DisplayClass85_0_def.hpp"
#include "GorillaTagScripts/zzzz__WhackAMole_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.UpdateMeshRendererList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::UpdateMeshRendererList)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5b7c7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateMeshRendererList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::Awake)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x5b7c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::Start)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5b7cecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::OnDestroy)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5b7d77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.InvokeUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::InvokeUpdate)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b7da98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.SwitchState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::GlobalNamespace::WhackAMole_GameState)>(&::GorillaTagScripts::WhackAMole::SwitchState)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x5b7cf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.UpdateScreenData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::UpdateScreenData)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5b7e214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateScreenData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.CreateNewGameID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GorillaTagScripts::WhackAMole::CreateNewGameID)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5b7e3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"CreateNewGameID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.OnMoleTapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::GorillaTagScripts::MoleTypes*, ::UnityEngine::Vector3, bool, bool)>(&::GorillaTagScripts::WhackAMole::OnMoleTapped)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5b7e534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"OnMoleTapped", {}, {::i2c::type_of<::GorillaTagScripts::MoleTypes*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.HandleOnTimerStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::HandleOnTimerStopped)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b7e6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"HandleOnTimerStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.PlayHazardAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::WhackAMole::*)(::UnityEngine::AudioClip*)>(&::GorillaTagScripts::WhackAMole::PlayHazardAudio)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b7e6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"PlayHazardAudio", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.PickMoles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::PickMoles)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b7e784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"PickMoles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.LoadNextLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::LoadNextLevel)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5b7e018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"LoadNextLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.PickSingleMole
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::WhackAMole::*)(int32_t, float_t)>(&::GorillaTagScripts::WhackAMole::PickSingleMole)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5b7ed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"PickSingleMole", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.ResetGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::ResetGame)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5b7dc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"ResetGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.UpdateScoreUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(int32_t, int32_t, int32_t)>(&::GorillaTagScripts::WhackAMole::UpdateScoreUI)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b7dd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateScoreUI", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.UpdateLevelUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(int32_t)>(&::GorillaTagScripts::WhackAMole::UpdateLevelUI)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b7dd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateLevelUI", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.UpdateArrowRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::UpdateArrowRotation)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5b7ee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateArrowRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.UpdateTimerUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(int32_t)>(&::GorillaTagScripts::WhackAMole::UpdateTimerUI)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b7efc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateTimerUI", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.UpdateResultUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::GlobalNamespace::WhackAMole_GameResult)>(&::GorillaTagScripts::WhackAMole::UpdateResultUI)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b7df48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateResultUI", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.OnStartButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::OnStartButtonPressed)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b7f068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"OnStartButtonPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.WhackAMoleButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::WhackAMole::WhackAMoleButtonPressed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b7f14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"WhackAMoleButtonPressed", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.RPC_WhackAMoleButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::Fusion::RpcInfo)>(&::GorillaTagScripts::WhackAMole::RPC_WhackAMoleButtonPressed)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5b7f36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"RPC_WhackAMoleButtonPressed", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.WhackAMoleButtonPressedShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GorillaTagScripts::WhackAMole::WhackAMoleButtonPressedShared)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b7f1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"WhackAMoleButtonPressedShared", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.GetGameResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WhackAMole_GameResult (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::GetGameResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b7def0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"GetGameResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.GetCurrentLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::GetCurrentLevel)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b7f54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"GetCurrentLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.GetTotalLevelNumbers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::GetTotalLevelNumbers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b7f5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"GetTotalLevelNumbers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::WhackAMole_WhackAMoleData (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::get_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b7f5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::GlobalNamespace::WhackAMole_WhackAMoleData)>(&::GorillaTagScripts::WhackAMole::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5b7f644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_WhackAMoleData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::WriteDataFusion)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5b7f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::ReadDataFusion)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5b7fabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::WhackAMole::WriteDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8029c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::WhackAMole::ReadDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b802a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.ReadDataShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::GlobalNamespace::WhackAMole_GameState, int32_t, int32_t, int32_t, int32_t, int32_t, ::StringW, float_t, float_t, int32_t)>(&::GorillaTagScripts::WhackAMole::ReadDataShared)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5b7fe5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.OnOwnerSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::WhackAMole::OnOwnerSwitched)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b802a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b803a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole._PickMoles_g__PickMolesFrom_85_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*, ::by_ref<::GlobalNamespace::WhackAMole___c__DisplayClass85_0>)>(&::GorillaTagScripts::WhackAMole::_PickMoles_g__PickMolesFrom_85_0)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x5b7e8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"<PickMoles>g__PickMolesFrom|85_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::WhackAMole___c__DisplayClass85_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)(bool)>(&::GorillaTagScripts::WhackAMole::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b80588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole::*)()>(&::GorillaTagScripts::WhackAMole::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b805ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole.RPC_WhackAMoleButtonPressed@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GorillaTagScripts::WhackAMole::RPC_WhackAMoleButtonPressed@Invoker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b80650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"RPC_WhackAMoleButtonPressed@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::WhackAMole::__cordl_internal_get_machineId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___machineId;
}
constexpr ::StringW const& GorillaTagScripts::WhackAMole::__cordl_internal_get_machineId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___machineId;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_machineId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___machineId = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::WhackAMole::__cordl_internal_get_molesContainerRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___molesContainerRight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_molesContainerRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___molesContainerRight;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_molesContainerRight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___molesContainerRight = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::WhackAMole::__cordl_internal_get_molesContainerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___molesContainerLeft;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_molesContainerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___molesContainerLeft;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_molesContainerLeft(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___molesContainerLeft = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_betweenLevelPauseDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betweenLevelPauseDuration;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_betweenLevelPauseDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___betweenLevelPauseDuration;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_betweenLevelPauseDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___betweenLevelPauseDuration = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_countdownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownDuration;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_countdownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownDuration;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_countdownDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countdownDuration = value;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>>& GorillaTagScripts::WhackAMole::__cordl_internal_get_allLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allLevels;
}
constexpr ::ArrayW<::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_allLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allLevels;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_allLevels(::ArrayW<::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allLevels = value;
}
constexpr ::UnityW<::GorillaTagScripts::GorillaTimer>& GorillaTagScripts::WhackAMole::__cordl_internal_get_timer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr ::UnityW<::GorillaTagScripts::GorillaTimer> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_timer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timer;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_timer(::UnityW<::GorillaTagScripts::GorillaTimer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timer = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::WhackAMole::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelArrow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelArrow;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelArrow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelArrow;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelArrow(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelArrow = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::WhackAMole::__cordl_internal_get_victoryFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___victoryFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_victoryFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___victoryFX;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_victoryFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___victoryFX = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>& GorillaTagScripts::WhackAMole::__cordl_internal_get_zoneBasedVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneBasedVisuals;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_zoneBasedVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneBasedVisuals;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_zoneBasedVisuals(::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneBasedVisuals = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& GorillaTagScripts::WhackAMole::__cordl_internal_get_zoneBasedMeshRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneBasedMeshRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_zoneBasedMeshRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneBasedMeshRenderers;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_zoneBasedMeshRenderers(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneBasedMeshRenderers = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::WhackAMole::__cordl_internal_get_backgroundLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundLoop;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_backgroundLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundLoop;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_backgroundLoop(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backgroundLoop = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::WhackAMole::__cordl_internal_get_errorClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_errorClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___errorClip;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_errorClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___errorClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::WhackAMole::__cordl_internal_get_counterClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_counterClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterClip;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_counterClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___counterClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelCompleteClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelCompleteClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelCompleteClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelCompleteClip;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelCompleteClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelCompleteClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::WhackAMole::__cordl_internal_get_winClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_winClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winClip;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_winClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___winClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::WhackAMole::__cordl_internal_get_gameOverClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameOverClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_gameOverClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameOverClip;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_gameOverClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameOverClip = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GorillaTagScripts::WhackAMole::__cordl_internal_get_whackHazardClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whackHazardClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_whackHazardClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whackHazardClips;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_whackHazardClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whackHazardClips = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GorillaTagScripts::WhackAMole::__cordl_internal_get_whackMonkeClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whackMonkeClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_whackMonkeClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whackMonkeClips;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_whackMonkeClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whackMonkeClips = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::WhackAMole::__cordl_internal_get_welcomeUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___welcomeUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_welcomeUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___welcomeUI;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_welcomeUI(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___welcomeUI = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::WhackAMole::__cordl_internal_get_ongoingGameUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ongoingGameUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_ongoingGameUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ongoingGameUI;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_ongoingGameUI(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ongoingGameUI = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedUI;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelEndedUI(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelEndedUI = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::WhackAMole::__cordl_internal_get_ContinuePressedUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContinuePressedUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_ContinuePressedUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContinuePressedUI;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_ContinuePressedUI(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContinuePressedUI = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::WhackAMole::__cordl_internal_get_multiplyareScoresUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplyareScoresUI;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_multiplyareScoresUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___multiplyareScoresUI;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_multiplyareScoresUI(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___multiplyareScoresUI = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_scoreText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_scoreText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_scoreText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_bestScoreText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestScoreText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_bestScoreText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestScoreText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_bestScoreText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestScoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_rightPlayerScoreText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPlayerScoreText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_rightPlayerScoreText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPlayerScoreText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_rightPlayerScoreText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightPlayerScoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_leftPlayerScoreText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPlayerScoreText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_leftPlayerScoreText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPlayerScoreText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_leftPlayerScoreText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftPlayerScoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_timeText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_timeText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_timeText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_counterText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_counterText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_counterText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___counterText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_resultText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_resultText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_resultText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedOptionsText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedOptionsText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedOptionsText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedOptionsText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelEndedOptionsText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelEndedOptionsText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedCountdownText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedCountdownText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedCountdownText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedCountdownText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelEndedCountdownText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelEndedCountdownText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedTotalScoreText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedTotalScoreText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedTotalScoreText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedTotalScoreText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelEndedTotalScoreText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelEndedTotalScoreText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedCurrentScoreText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedCurrentScoreText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelEndedCurrentScoreText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelEndedCurrentScoreText;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelEndedCurrentScoreText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelEndedCurrentScoreText = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*& GorillaTagScripts::WhackAMole::__cordl_internal_get_rightMolesList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightMolesList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>* const& GorillaTagScripts::WhackAMole::__cordl_internal_get_rightMolesList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightMolesList;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_rightMolesList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightMolesList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*& GorillaTagScripts::WhackAMole::__cordl_internal_get_leftMolesList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftMolesList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>* const& GorillaTagScripts::WhackAMole::__cordl_internal_get_leftMolesList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftMolesList;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_leftMolesList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftMolesList = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*& GorillaTagScripts::WhackAMole::__cordl_internal_get_molesList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___molesList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>* const& GorillaTagScripts::WhackAMole::__cordl_internal_get_molesList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___molesList;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_molesList(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___molesList = value;
}
constexpr ::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>& GorillaTagScripts::WhackAMole::__cordl_internal_get_currentLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLevel;
}
constexpr ::UnityW<::GorillaTagScripts::WhackAMoleLevelSO> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_currentLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLevel;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_currentLevel(::UnityW<::GorillaTagScripts::WhackAMoleLevelSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLevel = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_currentScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScore;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_currentScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentScore;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_currentScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentScore = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_totalScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalScore;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_totalScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalScore;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_totalScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalScore = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_leftPlayerScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPlayerScore;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_leftPlayerScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftPlayerScore;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_leftPlayerScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftPlayerScore = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_rightPlayerScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPlayerScore;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_rightPlayerScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightPlayerScore;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_rightPlayerScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightPlayerScore = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_bestScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestScore;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_bestScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestScore;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_bestScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestScore = value;
}
constexpr float_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_curentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curentTime;
}
constexpr float_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_curentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curentTime;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_curentTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curentTime = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_currentLevelIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLevelIndex;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_currentLevelIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLevelIndex;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_currentLevelIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLevelIndex = value;
}
constexpr float_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_continuePressedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuePressedTime;
}
constexpr float_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_continuePressedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuePressedTime;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_continuePressedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuePressedTime = value;
}
constexpr bool& GorillaTagScripts::WhackAMole::__cordl_internal_get_resetToFirstLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetToFirstLevel;
}
constexpr bool const& GorillaTagScripts::WhackAMole::__cordl_internal_get_resetToFirstLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetToFirstLevel;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_resetToFirstLevel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetToFirstLevel = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTagScripts::WhackAMole::__cordl_internal_get_arrowTargetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrowTargetRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTagScripts::WhackAMole::__cordl_internal_get_arrowTargetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrowTargetRotation;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_arrowTargetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arrowTargetRotation = value;
}
constexpr bool& GorillaTagScripts::WhackAMole::__cordl_internal_get_arrowRotationNeedsUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrowRotationNeedsUpdate;
}
constexpr bool const& GorillaTagScripts::WhackAMole::__cordl_internal_get_arrowRotationNeedsUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arrowRotationNeedsUpdate;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_arrowRotationNeedsUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arrowRotationNeedsUpdate = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*& GorillaTagScripts::WhackAMole::__cordl_internal_get_potentialMoles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialMoles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>* const& GorillaTagScripts::WhackAMole::__cordl_internal_get_potentialMoles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialMoles;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_potentialMoles(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialMoles = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaTagScripts::WhackAMole::__cordl_internal_get_pickedMolesIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickedMolesIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaTagScripts::WhackAMole::__cordl_internal_get_pickedMolesIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickedMolesIndex;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_pickedMolesIndex(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickedMolesIndex = value;
}
constexpr ::GlobalNamespace::WhackAMole_GameState& GorillaTagScripts::WhackAMole::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::WhackAMole_GameState const& GorillaTagScripts::WhackAMole::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_currentState(::GlobalNamespace::WhackAMole_GameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::WhackAMole_GameState& GorillaTagScripts::WhackAMole::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::WhackAMole_GameState const& GorillaTagScripts::WhackAMole::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_lastState(::GlobalNamespace::WhackAMole_GameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr float_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_remainingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingTime;
}
constexpr float_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_remainingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingTime;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_remainingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingTime = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_previousTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousTime;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_previousTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousTime;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_previousTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousTime = value;
}
constexpr bool& GorillaTagScripts::WhackAMole::__cordl_internal_get_isMultiplayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMultiplayer;
}
constexpr bool const& GorillaTagScripts::WhackAMole::__cordl_internal_get_isMultiplayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isMultiplayer;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_isMultiplayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isMultiplayer = value;
}
constexpr float_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_gameEndedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEndedTime;
}
constexpr float_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_gameEndedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEndedTime;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_gameEndedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEndedTime = value;
}
constexpr ::GlobalNamespace::WhackAMole_GameResult& GorillaTagScripts::WhackAMole::__cordl_internal_get_curentGameResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curentGameResult;
}
constexpr ::GlobalNamespace::WhackAMole_GameResult const& GorillaTagScripts::WhackAMole::__cordl_internal_get_curentGameResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curentGameResult;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_curentGameResult(::GlobalNamespace::WhackAMole_GameResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curentGameResult = value;
}
constexpr ::StringW& GorillaTagScripts::WhackAMole::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::StringW const& GorillaTagScripts::WhackAMole::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_playerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
constexpr ::StringW& GorillaTagScripts::WhackAMole::__cordl_internal_get_highScorePlayerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highScorePlayerName;
}
constexpr ::StringW const& GorillaTagScripts::WhackAMole::__cordl_internal_get_highScorePlayerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___highScorePlayerName;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_highScorePlayerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___highScorePlayerName = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GorillaTagScripts::WhackAMole::__cordl_internal_get_victoryParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___victoryParticles;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GorillaTagScripts::WhackAMole::__cordl_internal_get_victoryParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___victoryParticles;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_victoryParticles(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___victoryParticles = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelHazardMolesPicked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelHazardMolesPicked;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelHazardMolesPicked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelHazardMolesPicked;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelHazardMolesPicked(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelHazardMolesPicked = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelGoodMolesPicked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelGoodMolesPicked;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelGoodMolesPicked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelGoodMolesPicked;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelGoodMolesPicked(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelGoodMolesPicked = value;
}
constexpr ::StringW& GorillaTagScripts::WhackAMole::__cordl_internal_get_playerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr ::StringW const& GorillaTagScripts::WhackAMole::__cordl_internal_get_playerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerId;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_playerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerId = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_gameId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameId;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_gameId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameId;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_gameId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameId = value;
}
constexpr int32_t& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelHazardMolesHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelHazardMolesHit;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole::__cordl_internal_get_levelHazardMolesHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelHazardMolesHit;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_levelHazardMolesHit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelHazardMolesHit = value;
}
constexpr bool& GorillaTagScripts::WhackAMole::__cordl_internal_get_wasMasterClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasMasterClient;
}
constexpr bool const& GorillaTagScripts::WhackAMole::__cordl_internal_get_wasMasterClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasMasterClient;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_wasMasterClient(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasMasterClient = value;
}
constexpr bool& GorillaTagScripts::WhackAMole::__cordl_internal_get_wasLocalPlayerInZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLocalPlayerInZone;
}
constexpr bool const& GorillaTagScripts::WhackAMole::__cordl_internal_get_wasLocalPlayerInZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasLocalPlayerInZone;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set_wasLocalPlayerInZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasLocalPlayerInZone = value;
}
constexpr ::GlobalNamespace::WhackAMole_WhackAMoleData& GorillaTagScripts::WhackAMole::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::WhackAMole_WhackAMoleData const& GorillaTagScripts::WhackAMole::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GorillaTagScripts::WhackAMole::__cordl_internal_set__Data(::GlobalNamespace::WhackAMole_WhackAMoleData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GorillaTagScripts::WhackAMole::setStaticF_epoch(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "epoch", ::GorillaTagScripts::WhackAMole*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime GorillaTagScripts::WhackAMole::getStaticF_epoch()  {
return ::cordl_internals::getStaticField<::System::DateTime, "epoch", ::GorillaTagScripts::WhackAMole*>();
}
inline void GorillaTagScripts::WhackAMole::setStaticF_lastAssignedID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lastAssignedID", ::GorillaTagScripts::WhackAMole*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::WhackAMole::getStaticF_lastAssignedID()  {
return ::cordl_internals::getStaticField<int32_t, "lastAssignedID", ::GorillaTagScripts::WhackAMole*>();
}
inline void GorillaTagScripts::WhackAMole::UpdateMeshRendererList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateMeshRendererList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::InvokeUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"InvokeUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::SwitchState(::GlobalNamespace::WhackAMole_GameState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"SwitchState", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaTagScripts::WhackAMole::UpdateScreenData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateScreenData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::WhackAMole::CreateNewGameID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"CreateNewGameID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::OnMoleTapped(::GorillaTagScripts::MoleTypes*  moleType, ::UnityEngine::Vector3  position, bool  isLocalTap, bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"OnMoleTapped", {}, {::i2c::type_of<::GorillaTagScripts::MoleTypes*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moleType, position, isLocalTap, isLeftHand);
}
inline void GorillaTagScripts::WhackAMole::HandleOnTimerStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"HandleOnTimerStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::WhackAMole::PlayHazardAudio(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"PlayHazardAudio", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, clip);
}
inline bool GorillaTagScripts::WhackAMole::PickMoles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"PickMoles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::LoadNextLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"LoadNextLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::WhackAMole::PickSingleMole(int32_t  randomMoleIndex, float_t  hazardMoleChance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"PickSingleMole", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, randomMoleIndex, hazardMoleChance);
}
inline void GorillaTagScripts::WhackAMole::ResetGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"ResetGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::UpdateScoreUI(int32_t  totalScore, int32_t  _leftPlayerScore, int32_t  _rightPlayerScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateScoreUI", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, totalScore, _leftPlayerScore, _rightPlayerScore);
}
inline void GorillaTagScripts::WhackAMole::UpdateLevelUI(int32_t  levelNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateLevelUI", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelNumber);
}
inline void GorillaTagScripts::WhackAMole::UpdateArrowRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateArrowRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::UpdateTimerUI(int32_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateTimerUI", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void GorillaTagScripts::WhackAMole::UpdateResultUI(::GlobalNamespace::WhackAMole_GameResult  gameResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"UpdateResultUI", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameResult);
}
inline void GorillaTagScripts::WhackAMole::OnStartButtonPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"OnStartButtonPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::WhackAMoleButtonPressed(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"WhackAMoleButtonPressed", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTagScripts::WhackAMole::RPC_WhackAMoleButtonPressed(::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"RPC_WhackAMoleButtonPressed", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTagScripts::WhackAMole::WhackAMoleButtonPressedShared(::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"WhackAMoleButtonPressedShared", {}, {::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline ::GlobalNamespace::WhackAMole_GameResult GorillaTagScripts::WhackAMole::GetGameResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"GetGameResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WhackAMole_GameResult>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::WhackAMole::GetCurrentLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"GetCurrentLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::WhackAMole::GetTotalLevelNumbers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"GetTotalLevelNumbers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::WhackAMole_WhackAMoleData GorillaTagScripts::WhackAMole::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WhackAMole_WhackAMoleData>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::set_Data(::GlobalNamespace::WhackAMole_WhackAMoleData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_WhackAMoleData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::WhackAMole::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::WhackAMole::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::WhackAMole::ReadDataShared(::GlobalNamespace::WhackAMole_GameState  _currentState, int32_t  _currentLevelIndex, int32_t  cScore, int32_t  tScore, int32_t  bScore, int32_t  rPScore, ::StringW  hScorePName, float_t  _remainingTime, float_t  endedTime, int32_t  _gameId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<::GlobalNamespace::WhackAMole_GameState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _currentState, _currentLevelIndex, cScore, tScore, bScore, rPScore, hScorePName, _remainingTime, endedTime, _gameId);
}
inline void GorillaTagScripts::WhackAMole::OnOwnerSwitched(::GlobalNamespace::NetPlayer*  newOwningPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwningPlayer);
}
inline void GorillaTagScripts::WhackAMole::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::_PickMoles_g__PickMolesFrom_85_0(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*  moles, ::by_ref<::GlobalNamespace::WhackAMole___c__DisplayClass85_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"<PickMoles>g__PickMolesFrom|85_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Mole>>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::WhackAMole___c__DisplayClass85_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, moles, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaTagScripts::WhackAMole::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaTagScripts::WhackAMole::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMole*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole::RPC_WhackAMoleButtonPressed@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole*>(),
                        {"RPC_WhackAMoleButtonPressed@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::GorillaTagScripts::WhackAMole* GorillaTagScripts::WhackAMole::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::WhackAMole*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::WhackAMole::WhackAMole()   {
}
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::*)(int32_t)>(&::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b7e75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::*)()>(&::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b807e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::*)()>(&::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::MoveNext)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b807ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::*)()>(&::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::*)()>(&::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b80910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::*)()>(&::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::WhackAMole>& GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::WhackAMole> const& GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::WhackAMole>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_get_clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_get_clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr void GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::__cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clip = value;
}
inline void GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84* GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::WhackAMole__PlayHazardAudio_d__84::WhackAMole__PlayHazardAudio_d__84()   {
}
