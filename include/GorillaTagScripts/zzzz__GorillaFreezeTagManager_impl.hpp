#pragma once
// IWYU pragma private; include "GorillaTagScripts/GorillaFreezeTagManager.hpp"
#include "GlobalNamespace/zzzz__GorillaTagManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTagScripts/zzzz__GorillaFreezeTagManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaTagScripts/zzzz__GorillaFreezeTagManager_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc6384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::GameModeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bc638c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bc63cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5bc64a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::UpdateState)> {
  constexpr static std::size_t size = 0x7a0;
  constexpr static std::size_t addrs = 0x5bc64c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::Tick)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bc6e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::StartPlaying)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5bc6f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.ReportTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::GorillaFreezeTagManager::ReportTag)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5bc7100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.LocalCanTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::GorillaFreezeTagManager::LocalCanTag)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5bc7874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.LocalIsTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::GorillaFreezeTagManager::LocalIsTagged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5bc79b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.NewVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*, int32_t, bool)>(&::GorillaTagScripts::GorillaFreezeTagManager::NewVRRig)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5bc7a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.InfectionRoundEndingCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::InfectionRoundEndingCoroutine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bc7bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 105}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.ResetGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::ResetGame)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5bc7c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.AddInfectedPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*, bool)>(&::GorillaTagScripts::GorillaFreezeTagManager::AddInfectedPlayer)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5bc6c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"AddInfectedPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.TryAddNewInfectedPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::TryAddNewInfectedPlayer)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5bc7d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"TryAddNewInfectedPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::GorillaFreezeTagManager::MyMatIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bc7f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.UpdatePlayerAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::VRRig*)>(&::GorillaTagScripts::GorillaFreezeTagManager::UpdatePlayerAppearance)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5bc7fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.UnfreezePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::GorillaFreezeTagManager::UnfreezePlayer)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5bc774c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"UnfreezePlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.AddFrozenPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::GorillaFreezeTagManager::AddFrozenPlayer)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5bc75fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"AddFrozenPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.IsFrozen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::GorillaFreezeTagManager::IsFrozen)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bc6de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"IsFrozen", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.LocalPlayerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::LocalPlayerSpeed)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5bc806c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.GetFrozenHandTapAudioIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::GetFrozenHandTapAudioIndex)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bc8318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"GetFrozenHandTapAudioIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::GorillaFreezeTagManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5bc8364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::StopPlaying)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5bc8654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::GorillaFreezeTagManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5bc8960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::GorillaFreezeTagManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5bc8b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                    {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5bc8d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,float_t>*& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_currentFrozen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFrozen;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,float_t>* const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_currentFrozen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentFrozen;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_currentFrozen(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentFrozen = value;
}
constexpr float_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_freezeDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freezeDuration;
}
constexpr float_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_freezeDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___freezeDuration;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_freezeDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___freezeDuration = value;
}
constexpr int32_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_infectMorePlayerLowerThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectMorePlayerLowerThreshold;
}
constexpr int32_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_infectMorePlayerLowerThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectMorePlayerLowerThreshold;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_infectMorePlayerLowerThreshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infectMorePlayerLowerThreshold = value;
}
constexpr int32_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_infectMorePlayerUpperThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectMorePlayerUpperThreshold;
}
constexpr int32_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_infectMorePlayerUpperThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infectMorePlayerUpperThreshold;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_infectMorePlayerUpperThreshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infectMorePlayerUpperThreshold = value;
}
constexpr float_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenPlayerFastJumpLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenPlayerFastJumpLimit;
}
constexpr float_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenPlayerFastJumpLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenPlayerFastJumpLimit;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_frozenPlayerFastJumpLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frozenPlayerFastJumpLimit = value;
}
constexpr float_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenPlayerFastJumpMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenPlayerFastJumpMultiplier;
}
constexpr float_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenPlayerFastJumpMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenPlayerFastJumpMultiplier;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_frozenPlayerFastJumpMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frozenPlayerFastJumpMultiplier = value;
}
constexpr float_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenPlayerSlowJumpLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenPlayerSlowJumpLimit;
}
constexpr float_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenPlayerSlowJumpLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenPlayerSlowJumpLimit;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_frozenPlayerSlowJumpLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frozenPlayerSlowJumpLimit = value;
}
constexpr float_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenPlayerSlowJumpMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenPlayerSlowJumpMultiplier;
}
constexpr float_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenPlayerSlowJumpMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenPlayerSlowJumpMultiplier;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_frozenPlayerSlowJumpMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frozenPlayerSlowJumpMultiplier = value;
}
constexpr ::ArrayW<int32_t>& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenHandTapIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenHandTapIndices;
}
constexpr ::ArrayW<int32_t> const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_frozenHandTapIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frozenHandTapIndices;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_frozenHandTapIndices(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frozenHandTapIndices = value;
}
constexpr float_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_fastJumpLimitCached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastJumpLimitCached;
}
constexpr float_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_fastJumpLimitCached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastJumpLimitCached;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_fastJumpLimitCached(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastJumpLimitCached = value;
}
constexpr float_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_fastJumpMultiplierCached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastJumpMultiplierCached;
}
constexpr float_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_fastJumpMultiplierCached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastJumpMultiplierCached;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_fastJumpMultiplierCached(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastJumpMultiplierCached = value;
}
constexpr float_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_slowJumpLimitCached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowJumpLimitCached;
}
constexpr float_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_slowJumpLimitCached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowJumpLimitCached;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_slowJumpLimitCached(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowJumpLimitCached = value;
}
constexpr float_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_slowJumpMultiplierCached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowJumpMultiplierCached;
}
constexpr float_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_slowJumpMultiplierCached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowJumpMultiplierCached;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_slowJumpMultiplierCached(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowJumpMultiplierCached = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_localVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_localVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localVRRig;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_localVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localVRRig = value;
}
constexpr int32_t& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr int32_t const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_hapticStrength(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_currentRoundInfectedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRoundInfectedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_currentRoundInfectedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRoundInfectedPlayers;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_currentRoundInfectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRoundInfectedPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_lastRoundInfectedPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRoundInfectedPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_get_lastRoundInfectedPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRoundInfectedPlayers;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager::__cordl_internal_set_lastRoundInfectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRoundInfectedPlayers = value;
}
inline ::GorillaGameModes::GameModeType GorillaTagScripts::GorillaFreezeTagManager::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::GorillaFreezeTagManager::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::GorillaFreezeTagManager::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::UpdateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline bool GorillaTagScripts::GorillaFreezeTagManager::LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline bool GorillaTagScripts::GorillaFreezeTagManager::LocalIsTagged(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::NewVRRig(::GlobalNamespace::NetPlayer*  player, int32_t  vrrigPhotonViewID, bool  didTutorial)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, vrrigPhotonViewID, didTutorial);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::GorillaFreezeTagManager::InfectionRoundEndingCoroutine()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 105}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::ResetGame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::AddInfectedPlayer(::GlobalNamespace::NetPlayer*  infectedPlayer, bool  withTagStop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"AddInfectedPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infectedPlayer, withTagStop);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::TryAddNewInfectedPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"TryAddNewInfectedPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::GorillaFreezeTagManager::MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forPlayer);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::UnfreezePlayer(::GlobalNamespace::NetPlayer*  taggedPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"UnfreezePlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::AddFrozenPlayer(::GlobalNamespace::NetPlayer*  taggedPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"AddFrozenPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer);
}
inline bool GorillaTagScripts::GorillaFreezeTagManager::IsFrozen(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"IsFrozen", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::ArrayW<float_t> GorillaTagScripts::GorillaFreezeTagManager::LocalPlayerSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline int32_t GorillaTagScripts::GorillaFreezeTagManager::GetFrozenHandTapAudioIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {"GetFrozenHandTapAudioIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::GorillaFreezeTagManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::GorillaFreezeTagManager* GorillaTagScripts::GorillaFreezeTagManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaFreezeTagManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaFreezeTagManager::GorillaFreezeTagManager()   {
}
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::*)(int32_t)>(&::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bc7c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bc8e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5bc8e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc910c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5bc9114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::*)()>(&::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bc914c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::GorillaFreezeTagManager>& GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::GorillaFreezeTagManager> const& GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::GorillaFreezeTagManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28* GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28::GorillaFreezeTagManager__InfectionRoundEndingCoroutine_d__28()   {
}
