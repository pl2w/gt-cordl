#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaHuntManager.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaHuntManager_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__GorillaHuntManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::GameModeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5910154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5910194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.AddFusionDataBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::GorillaHuntManager::AddFusionDataBehaviour)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x591026c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::StartPlaying)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x59102e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::StopPlaying)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59107f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.ResetGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::ResetGame)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x59108b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::UpdateState)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5910550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"UpdateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.CleanUpHunt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::CleanUpHunt)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x59109b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"CleanUpHunt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.StartHuntCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::StartHuntCountdown)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5910a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"StartHuntCountdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.StartHunt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::StartHunt)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5910d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"StartHunt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.RandomizePlayerList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>)>(&::GlobalNamespace::GorillaHuntManager::RandomizePlayerList)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5911000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"RandomizePlayerList", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.HuntEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::HuntEnd)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x591111c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"HuntEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.UpdateHuntState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::UpdateHuntState)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5910b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"UpdateHuntState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.EndHuntGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::EndHuntGame)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x59111b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"EndHuntGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.LocalCanTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaHuntManager::LocalCanTag)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59113ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.LocalIsTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaHuntManager::LocalIsTagged)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5911614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.ReportTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaHuntManager::ReportTag)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5911690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.IsTargetOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaHuntManager::IsTargetOf)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5911544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"IsTargetOf", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.GetTargetOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaHuntManager::GetTargetOf)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x590f920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"GetTargetOf", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.HitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaHuntManager::HitPlayer)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x59118c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.CanAffectPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::GorillaHuntManager::CanAffectPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5911a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaHuntManager::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5911af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.NewVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*, int32_t, bool)>(&::GlobalNamespace::GorillaHuntManager::NewVRRig)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5911b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaHuntManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5911c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.CopyHuntDataListToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::CopyHuntDataListToArray)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5911db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"CopyHuntDataListToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.CopyHuntDataArrayToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::CopyHuntDataArrayToList)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5911fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"CopyHuntDataArrayToList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GorillaHuntManager::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59122b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 98}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.CopyRoomDataToLocalData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::CopyRoomDataToLocalData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"CopyRoomDataToLocalData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::System::Object*)>(&::GlobalNamespace::GorillaHuntManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x591234c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59124f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaHuntManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x5912678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaHuntManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x5912b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaHuntManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaHuntManager::MyMatIndex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59131ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.LocalPlayerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::LocalPlayerSpeed)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5913278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager.InfrequentUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::InfrequentUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5913474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager::*)()>(&::GlobalNamespace::GorillaHuntManager::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5913478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tagCoolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCoolDown;
}
constexpr float_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tagCoolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCoolDown;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_tagCoolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagCoolDown = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_currentHuntedArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHuntedArray;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_currentHuntedArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHuntedArray;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_currentHuntedArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHuntedArray = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_currentHunted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHunted;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_currentHunted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentHunted;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_currentHunted(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentHunted = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_currentTargetArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTargetArray;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_currentTargetArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTargetArray;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_currentTargetArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTargetArray = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_currentTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTarget;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_currentTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTarget;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_currentTarget(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTarget = value;
}
constexpr bool& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_huntStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntStarted;
}
constexpr bool const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_huntStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntStarted;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_huntStarted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___huntStarted = value;
}
constexpr bool& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_waitingToStartNextHuntGame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingToStartNextHuntGame;
}
constexpr bool const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_waitingToStartNextHuntGame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingToStartNextHuntGame;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_waitingToStartNextHuntGame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingToStartNextHuntGame = value;
}
constexpr bool& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_inStartCountdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inStartCountdown;
}
constexpr bool const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_inStartCountdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inStartCountdown;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_inStartCountdown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inStartCountdown = value;
}
constexpr int32_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_countDownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countDownTime;
}
constexpr int32_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_countDownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countDownTime;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_countDownTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countDownTime = value;
}
constexpr double_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_timeHuntGameEnded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeHuntGameEnded;
}
constexpr double_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_timeHuntGameEnded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeHuntGameEnded;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_timeHuntGameEnded(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeHuntGameEnded = value;
}
constexpr float_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_timeLastSlowTagged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastSlowTagged;
}
constexpr float_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_timeLastSlowTagged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastSlowTagged;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_timeLastSlowTagged(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastSlowTagged = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_objRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objRef;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_objRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objRef;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_objRef(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objRef = value;
}
constexpr int32_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_iterator1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterator1;
}
constexpr int32_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_iterator1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iterator1;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_iterator1(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iterator1 = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tempRandPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRandPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tempRandPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRandPlayer;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_tempRandPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRandPlayer = value;
}
constexpr int32_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tempRandIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRandIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tempRandIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRandIndex;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_tempRandIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRandIndex = value;
}
constexpr int32_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_notHuntedCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notHuntedCount;
}
constexpr int32_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_notHuntedCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___notHuntedCount;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_notHuntedCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___notHuntedCount = value;
}
constexpr int32_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tempTargetIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempTargetIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tempTargetIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempTargetIndex;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_tempTargetIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempTargetIndex = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tempPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_tempPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempPlayer;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_tempPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempPlayer = value;
}
constexpr int32_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_copyListToArrayIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyListToArrayIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_copyListToArrayIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyListToArrayIndex;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_copyListToArrayIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyListToArrayIndex = value;
}
constexpr int32_t& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_copyArrayToListIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyArrayToListIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaHuntManager::__cordl_internal_get_copyArrayToListIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___copyArrayToListIndex;
}
constexpr void GlobalNamespace::GorillaHuntManager::__cordl_internal_set_copyArrayToListIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___copyArrayToListIndex = value;
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::GorillaHuntManager::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaHuntManager::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaHuntManager::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline void GlobalNamespace::GorillaHuntManager::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::ResetGame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"UpdateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::CleanUpHunt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"CleanUpHunt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaHuntManager::StartHuntCountdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"StartHuntCountdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::StartHunt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"StartHunt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::RandomizePlayerList(::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>  listToRandomize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"RandomizePlayerList", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listToRandomize);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaHuntManager::HuntEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"HuntEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::UpdateHuntState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"UpdateHuntState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::EndHuntGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"EndHuntGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaHuntManager::LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline bool GlobalNamespace::GorillaHuntManager::LocalIsTagged(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::GorillaHuntManager::ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline bool GlobalNamespace::GorillaHuntManager::IsTargetOf(::GlobalNamespace::NetPlayer*  huntingPlayer, ::GlobalNamespace::NetPlayer*  huntedPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"IsTargetOf", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, huntingPlayer, huntedPlayer);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::GorillaHuntManager::GetTargetOf(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"GetTargetOf", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, netPlayer);
}
inline void GlobalNamespace::GorillaHuntManager::HitPlayer(::GlobalNamespace::NetPlayer*  taggedPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer);
}
inline bool GlobalNamespace::GorillaHuntManager::CanAffectPlayer(::GlobalNamespace::NetPlayer*  player, bool  thisFrame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, thisFrame);
}
inline void GlobalNamespace::GorillaHuntManager::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::GorillaHuntManager::NewVRRig(::GlobalNamespace::NetPlayer*  player, int32_t  vrrigPhotonViewID, bool  didTutorial)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, vrrigPhotonViewID, didTutorial);
}
inline void GlobalNamespace::GorillaHuntManager::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::GorillaHuntManager::CopyHuntDataListToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"CopyHuntDataListToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::CopyHuntDataArrayToList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"CopyHuntDataArrayToList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 98}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::GorillaHuntManager::CopyRoomDataToLocalData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {"CopyRoomDataToLocalData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::OnSerializeRead(::System::Object*  newData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newData);
}
inline ::System::Object* GlobalNamespace::GorillaHuntManager::OnSerializeWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaHuntManager::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline int32_t GlobalNamespace::GorillaHuntManager::MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forPlayer);
}
inline ::ArrayW<float_t> GlobalNamespace::GorillaHuntManager::LocalPlayerSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::InfrequentUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaHuntManager* GlobalNamespace::GorillaHuntManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHuntManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHuntManager::GorillaHuntManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::*)(int32_t)>(&::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5910d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::*)()>(&::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5913798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::*)()>(&::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x591379c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::*)()>(&::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59138f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::*)()>(&::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5913900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::*)()>(&::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5913938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager>& GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager> const& GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaHuntManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29* GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHuntManager__StartHuntCountdown_d__29::GorillaHuntManager__StartHuntCountdown_d__29()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::*)(int32_t)>(&::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5911188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::*)()>(&::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59135b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::*)()>(&::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x59135bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::*)()>(&::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5913750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::*)()>(&::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5913758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::*)()>(&::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5913790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager>& GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaHuntManager> const& GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaHuntManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32* GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaHuntManager__HuntEnd_d__32::GorillaHuntManager__HuntEnd_d__32()   {
}
