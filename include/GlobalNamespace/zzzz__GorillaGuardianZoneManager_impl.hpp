#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGuardianZoneManager.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaGuardianZoneManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGuardianZoneManager_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SizeChanger_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TappableGuardianIdol_def.hpp"
#include "Photon/Pun/zzzz__IPunObservable_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.get_CurrentGuardian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::get_CurrentGuardian)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590b0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"get_CurrentGuardian", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::Awake)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x590b0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x590b3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::OnDestroy)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x590b4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::OnEnable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x590b5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x590b610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::SliceUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x590b634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::OnLeftRoom)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x590b6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GorillaGuardianZoneManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x590b6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.OnZoneChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::OnZoneChanged)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x590b750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::StartPlaying)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x590859c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"StartPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::StopPlaying)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5908810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"StopPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.SetScaleCenterPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GorillaGuardianZoneManager::SetScaleCenterPoint)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x590bb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SetScaleCenterPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.IdolWasTapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianZoneManager::IdolWasTapped)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x590bb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"IdolWasTapped", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.IsZoneValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::IsZoneValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x590b91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"IsZoneValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.UpdateTapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianZoneManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianZoneManager::UpdateTapCount)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x590bca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"UpdateTapCount", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.IdolActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianZoneManager::IdolActivated)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x590bd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"IdolActivated", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.SetGuardian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianZoneManager::SetGuardian)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5908c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SetGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.IsPlayerGuardian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaGuardianZoneManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaGuardianZoneManager::IsPlayerGuardian)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5908afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"IsPlayerGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.SelectNextIdol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::SelectNextIdol)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x590b9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SelectNextIdol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.SelectRandomIdol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::SelectRandomIdol)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x590beb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SelectRandomIdol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.SelectFarthestFromGuardian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::SelectFarthestFromGuardian)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x590bf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SelectFarthestFromGuardian", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.SelectFarFromNearestPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::SelectFarFromNearestPlayer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x590c140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SelectFarFromNearestPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.SortByDistanceToNearestPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::SortByDistanceToNearestPlayer)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x590c244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SortByDistanceToNearestPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.TriggerIdolKnockback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::TriggerIdolKnockback)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x590c8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"TriggerIdolKnockback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.SetIdolPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)(int32_t)>(&::GlobalNamespace::GorillaGuardianZoneManager::SetIdolPosition)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x590ba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SetIdolPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.MoveIdolPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)(int32_t)>(&::GlobalNamespace::GorillaGuardianZoneManager::MoveIdolPosition)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x590bd6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"MoveIdolPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager.OnPhotonSerializeView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaGuardianZoneManager::OnPhotonSerializeView)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x590cd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590d0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::UnityW<::GlobalNamespace::SizeChanger>& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_guardianSizeChanger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guardianSizeChanger;
}
constexpr ::UnityW<::GlobalNamespace::SizeChanger> const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_guardianSizeChanger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guardianSizeChanger;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_guardianSizeChanger(::UnityW<::GlobalNamespace::SizeChanger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guardianSizeChanger = value;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol>& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idol;
}
constexpr ::UnityW<::GlobalNamespace::TappableGuardianIdol> const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idol;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_idol(::UnityW<::GlobalNamespace::TappableGuardianIdol>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idol = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolPositions;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_idolPositions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idolPositions = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_requiredActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredActivationTime;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_requiredActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiredActivationTime;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_requiredActivationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiredActivationTime = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_activationTimePerTap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTimePerTap;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_activationTimePerTap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activationTimePerTap;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_activationTimePerTap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activationTimePerTap = value;
}
constexpr bool& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_knockbackIncludesGuardian()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackIncludesGuardian;
}
constexpr bool const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_knockbackIncludesGuardian() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackIncludesGuardian;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_knockbackIncludesGuardian(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackIncludesGuardian = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolKnockbackRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolKnockbackRadius;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolKnockbackRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolKnockbackRadius;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_idolKnockbackRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idolKnockbackRadius = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolKnockbackStrengthVert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolKnockbackStrengthVert;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolKnockbackStrengthVert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolKnockbackStrengthVert;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_idolKnockbackStrengthVert(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idolKnockbackStrengthVert = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolKnockbackStrengthHoriz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolKnockbackStrengthHoriz;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolKnockbackStrengthHoriz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolKnockbackStrengthHoriz;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_idolKnockbackStrengthHoriz(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idolKnockbackStrengthHoriz = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_PlayerGainGuardianSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerGainGuardianSFX;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_PlayerGainGuardianSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerGainGuardianSFX;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_PlayerGainGuardianSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerGainGuardianSFX = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_PlayerLostGuardianSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerLostGuardianSFX;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_PlayerLostGuardianSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerLostGuardianSFX;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_PlayerLostGuardianSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerLostGuardianSFX = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_ObserverGainGuardianSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObserverGainGuardianSFX;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_ObserverGainGuardianSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ObserverGainGuardianSFX;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_ObserverGainGuardianSFX(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ObserverGainGuardianSFX = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_guardianPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guardianPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_guardianPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___guardianPlayer;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_guardianPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___guardianPlayer = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__previousGuardian()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousGuardian;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__previousGuardian() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousGuardian;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set__previousGuardian(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousGuardian = value;
}
constexpr int32_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_currentIdol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIdol;
}
constexpr int32_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_currentIdol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIdol;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_currentIdol(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIdol = value;
}
constexpr int32_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolMoveCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolMoveCount;
}
constexpr int32_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get_idolMoveCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idolMoveCount;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set_idolMoveCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idolMoveCount = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__sortedIdolPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortedIdolPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__sortedIdolPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sortedIdolPositions;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set__sortedIdolPositions(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sortedIdolPositions = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__currentActivationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentActivationTime;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__currentActivationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentActivationTime;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set__currentActivationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentActivationTime = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__lastTappedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTappedTime;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__lastTappedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastTappedTime;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set__lastTappedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastTappedTime = value;
}
constexpr bool& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__progressing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressing;
}
constexpr bool const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__progressing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressing;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set__progressing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressing = value;
}
constexpr float_t& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__idolActivationDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idolActivationDisplay;
}
constexpr float_t const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__idolActivationDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____idolActivationDisplay;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set__idolActivationDisplay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____idolActivationDisplay = value;
}
constexpr bool& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__zoneIsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zoneIsActive;
}
constexpr bool const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__zoneIsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zoneIsActive;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set__zoneIsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zoneIsActive = value;
}
constexpr bool& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__zoneStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zoneStateChanged;
}
constexpr bool const& GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_get__zoneStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zoneStateChanged;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager::__cordl_internal_set__zoneStateChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zoneStateChanged = value;
}
inline void GlobalNamespace::GorillaGuardianZoneManager::setStaticF_zoneManagers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>>*, "zoneManagers", ::GlobalNamespace::GorillaGuardianZoneManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>>* GlobalNamespace::GorillaGuardianZoneManager::getStaticF_zoneManagers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGuardianZoneManager>>*, "zoneManagers", ::GlobalNamespace::GorillaGuardianZoneManager*>();
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::GorillaGuardianZoneManager::get_CurrentGuardian()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"get_CurrentGuardian", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::OnLeftRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::OnZoneChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"OnZoneChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::StartPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"StartPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::StopPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"StopPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::SetScaleCenterPoint(::UnityEngine::Transform*  scaleCenterPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SetScaleCenterPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaleCenterPoint);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::IdolWasTapped(::GlobalNamespace::NetPlayer*  tapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"IdolWasTapped", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tapper);
}
inline bool GlobalNamespace::GorillaGuardianZoneManager::IsZoneValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"IsZoneValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaGuardianZoneManager::UpdateTapCount(::GlobalNamespace::NetPlayer*  tapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"UpdateTapCount", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tapper);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::IdolActivated(::GlobalNamespace::NetPlayer*  activater)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"IdolActivated", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activater);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::SetGuardian(::GlobalNamespace::NetPlayer*  newGuardian)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SetGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGuardian);
}
inline bool GlobalNamespace::GorillaGuardianZoneManager::IsPlayerGuardian(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"IsPlayerGuardian", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline int32_t GlobalNamespace::GorillaGuardianZoneManager::SelectNextIdol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SelectNextIdol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaGuardianZoneManager::SelectRandomIdol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SelectRandomIdol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaGuardianZoneManager::SelectFarthestFromGuardian()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SelectFarthestFromGuardian", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaGuardianZoneManager::SelectFarFromNearestPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SelectFarFromNearestPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* GlobalNamespace::GorillaGuardianZoneManager::SortByDistanceToNearestPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SortByDistanceToNearestPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::TriggerIdolKnockback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"TriggerIdolKnockback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::SetIdolPosition(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"SetIdolPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::MoveIdolPosition(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"MoveIdolPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {"OnPhotonSerializeView", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaGuardianZoneManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaGuardianZoneManager* GlobalNamespace::GorillaGuardianZoneManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaGuardianZoneManager*>());
}
/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr  GlobalNamespace::GorillaGuardianZoneManager::operator ::Photon::Pun::IPunObservable*() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* GlobalNamespace::GorillaGuardianZoneManager::i___Photon__Pun__IPunObservable() noexcept {
return static_cast<::Photon::Pun::IPunObservable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GorillaGuardianZoneManager::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GorillaGuardianZoneManager::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaGuardianZoneManager::GorillaGuardianZoneManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::*)()>(&::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590c8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0._SortByDistanceToNearestPlayer_g__CompareNearestPlayerDistance_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::_SortByDistanceToNearestPlayer_g__CompareNearestPlayerDistance_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x590d24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0*>(),
                        {"<SortByDistanceToNearestPlayer>g__CompareNearestPlayerDistance|0", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0._SortByDistanceToNearestPlayer_g__GetClosestPlayerSqrDistance_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::_SortByDistanceToNearestPlayer_g__GetClosestPlayerSqrDistance_1)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x590d2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0*>(),
                        {"<SortByDistanceToNearestPlayer>g__GetClosestPlayerSqrDistance|1", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::__cordl_internal_get_playerPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPositions;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::__cordl_internal_get_playerPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerPositions;
}
constexpr void GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::__cordl_internal_set_playerPositions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerPositions = value;
}
inline void GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::_SortByDistanceToNearestPlayer_g__CompareNearestPlayerDistance_0(::UnityEngine::Transform*  idol1, ::UnityEngine::Transform*  idol2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0*>(),
                        {"<SortByDistanceToNearestPlayer>g__CompareNearestPlayerDistance|0", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, idol1, idol2);
}
inline float_t GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::_SortByDistanceToNearestPlayer_g__GetClosestPlayerSqrDistance_1(::UnityEngine::Vector3  idolPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0*>(),
                        {"<SortByDistanceToNearestPlayer>g__GetClosestPlayerSqrDistance|1", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idolPosition);
}
inline ::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0* GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaGuardianZoneManager___c__DisplayClass49_0::GorillaGuardianZoneManager___c__DisplayClass49_0()   {
}
