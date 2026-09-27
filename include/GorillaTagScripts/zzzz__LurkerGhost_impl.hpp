#pragma once
// IWYU pragma private; include "GorillaTagScripts/LurkerGhost.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_impl.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_LurkerGhostData_impl.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_ghostState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableSetDressing_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedObject_def.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_LurkerGhostData_def.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_def.hpp"
#include "GorillaTagScripts/zzzz__LurkerGhost_ghostState_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5bcc074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                    {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::Start)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5bcc12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                    {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::LateUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5bcca58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.PickNextWaypoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::PickNextWaypoint)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x5bcc1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"PickNextWaypoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.Patrol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::Patrol)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5bcd23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"Patrol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.PlaySound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)(::UnityEngine::AudioClip*, bool)>(&::GorillaTagScripts::LurkerGhost::PlaySound)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5bcd554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"PlaySound", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.PickPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::LurkerGhost::*)(float_t)>(&::GorillaTagScripts::LurkerGhost::PickPlayer)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x5bcd67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"PickPlayer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.PickPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::LurkerGhost::PickPlayer)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5bcdc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"PickPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.SeekPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::SeekPlayer)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x5bcdfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"SeekPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.ChargeAtPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::ChargeAtPlayer)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5bce3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"ChargeAtPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.UpdateGhostVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::UpdateGhostVisibility)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5bcd11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"UpdateGhostVisibility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.HauntObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::HauntObjects)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5bce650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"HauntObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.ChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)(::GlobalNamespace::LurkerGhost_ghostState)>(&::GorillaTagScripts::LurkerGhost::ChangeState)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x5bcc6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_ghostState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5bce7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::UpdateState)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0x5bcca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"UpdateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LurkerGhost_LurkerGhostData (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::get_Data)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bce8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)(::GlobalNamespace::LurkerGhost_LurkerGhostData)>(&::GorillaTagScripts::LurkerGhost::set_Data)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bce908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::WriteDataFusion)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5bce970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                    {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::ReadDataFusion)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bceaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                    {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::LurkerGhost::WriteDataPUN)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5bcee08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                    {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTagScripts::LurkerGhost::ReadDataPUN)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5bcef80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                    {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.ReadDataShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)(::GlobalNamespace::LurkerGhost_ghostState, int32_t, int32_t, ::UnityEngine::Vector3)>(&::GorillaTagScripts::LurkerGhost::ReadDataShared)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5bcebc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_ghostState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.OnOwnerChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&::GorillaTagScripts::LurkerGhost::OnOwnerChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5bcf118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                    {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5bcf1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)(bool)>(&::GorillaTagScripts::LurkerGhost::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bcf2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                    {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost::*)()>(&::GorillaTagScripts::LurkerGhost::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5bcf32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                    {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_patrolSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolSpeed;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_patrolSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolSpeed;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_patrolSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolSpeed = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_seekSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekSpeed;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_seekSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekSpeed;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_seekSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seekSpeed = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_chargeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSpeed;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_chargeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeSpeed;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_chargeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeSpeed = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_cooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_cooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownDuration;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_cooldownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownDuration = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_maxCooldownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCooldownDuration;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_maxCooldownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxCooldownDuration;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_maxCooldownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxCooldownDuration = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_PossessionDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PossessionDuration;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_PossessionDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PossessionDuration;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_PossessionDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PossessionDuration = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_sphereColliderRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereColliderRadius;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_sphereColliderRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sphereColliderRadius;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_sphereColliderRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sphereColliderRadius = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_maxHuntDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHuntDistance;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_maxHuntDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHuntDistance;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_maxHuntDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHuntDistance = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_minCatchDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCatchDistance;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_minCatchDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minCatchDistance;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_minCatchDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minCatchDistance = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_maxRepeatHuntDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRepeatHuntDistance;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_maxRepeatHuntDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRepeatHuntDistance;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_maxRepeatHuntDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRepeatHuntDistance = value;
}
constexpr int32_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_maxRepeatHuntTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRepeatHuntTimes;
}
constexpr int32_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_maxRepeatHuntTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRepeatHuntTimes;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_maxRepeatHuntTimes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRepeatHuntTimes = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_tagCoolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCoolDown;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_tagCoolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCoolDown;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_tagCoolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagCoolDown = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::LurkerGhost::__cordl_internal_get_SpookyMagicNumbers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpookyMagicNumbers;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_SpookyMagicNumbers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpookyMagicNumbers;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_SpookyMagicNumbers(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpookyMagicNumbers = value;
}
constexpr ::UnityEngine::Vector4& GorillaTagScripts::LurkerGhost::__cordl_internal_get_HauntedMagicNumbers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HauntedMagicNumbers;
}
constexpr ::UnityEngine::Vector4 const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_HauntedMagicNumbers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HauntedMagicNumbers;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_HauntedMagicNumbers(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HauntedMagicNumbers = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_waypointsContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointsContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_waypointsContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointsContainer;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_waypointsContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waypointsContainer = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_waypointRegions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointRegions;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_waypointRegions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypointRegions;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_waypointRegions(::ArrayW<::UnityW<::GlobalNamespace::ZoneBasedObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waypointRegions = value;
}
constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_lastWaypointRegion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaypointRegion;
}
constexpr ::UnityW<::GlobalNamespace::ZoneBasedObject> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_lastWaypointRegion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaypointRegion;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_lastWaypointRegion(::UnityW<::GlobalNamespace::ZoneBasedObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWaypointRegion = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GorillaTagScripts::LurkerGhost::__cordl_internal_get_waypoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_waypoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waypoints;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_waypoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waypoints = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_currentWaypoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWaypoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_currentWaypoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWaypoint;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_currentWaypoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentWaypoint = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_visibleMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_visibleMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleMaterial;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_visibleMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryableMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryableMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryableMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryableMaterial;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_scryableMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryableMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_visibleMaterialBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleMaterialBones;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_visibleMaterialBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleMaterialBones;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_visibleMaterialBones(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleMaterialBones = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryableMaterialBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryableMaterialBones;
}
constexpr ::UnityW<::UnityEngine::Material> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryableMaterialBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryableMaterialBones;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_scryableMaterialBones(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryableMaterialBones = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meshRenderer;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_bonesMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_bonesMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesMeshRenderer;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_bonesMeshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonesMeshRenderer = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_patrolAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_patrolAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolAudio;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_patrolAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_huntAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_huntAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntAudio;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_huntAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___huntAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_possessedAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possessedAudio;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_possessedAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possessedAudio;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_possessedAudio(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___possessedAudio = value;
}
constexpr ::UnityW<::GlobalNamespace::ThrowableSetDressing>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryingGlass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingGlass;
}
constexpr ::UnityW<::GlobalNamespace::ThrowableSetDressing> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryingGlass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingGlass;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_scryingGlass(::UnityW<::GlobalNamespace::ThrowableSetDressing>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryingGlass = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryingAngerAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingAngerAngle;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryingAngerAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingAngerAngle;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_scryingAngerAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryingAngerAngle = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryingAngerDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingAngerDelay;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryingAngerDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingAngerDelay;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_scryingAngerDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryingAngerDelay = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_seekAheadDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekAheadDistance;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_seekAheadDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekAheadDistance;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_seekAheadDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seekAheadDistance = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_seekCloseEnoughDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekCloseEnoughDistance;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_seekCloseEnoughDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seekCloseEnoughDistance;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_seekCloseEnoughDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seekCloseEnoughDistance = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryingAngerAfterTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingAngerAfterTimestamp;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_scryingAngerAfterTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scryingAngerAfterTimestamp;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_scryingAngerAfterTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scryingAngerAfterTimestamp = value;
}
constexpr int32_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_currentRepeatHuntTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRepeatHuntTimes;
}
constexpr int32_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_currentRepeatHuntTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentRepeatHuntTimes;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_currentRepeatHuntTimes(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentRepeatHuntTimes = value;
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::LurkerGhost::__cordl_internal_get_TriggerHauntedObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerHauntedObjects;
}
constexpr ::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_TriggerHauntedObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerHauntedObjects;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_TriggerHauntedObjects(::UnityEngine::Events::UnityAction_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggerHauntedObjects = value;
}
constexpr int32_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr ::GlobalNamespace::LurkerGhost_ghostState& GorillaTagScripts::LurkerGhost::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::LurkerGhost_ghostState const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_currentState(::GlobalNamespace::LurkerGhost_ghostState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_cooldownTimeRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTimeRemaining;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_cooldownTimeRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownTimeRemaining;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_cooldownTimeRemaining(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownTimeRemaining = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GorillaTagScripts::LurkerGhost::__cordl_internal_get_possibleTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleTargets;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_possibleTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleTargets;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_possibleTargets(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___possibleTargets = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetTransform;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_targetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetTransform = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_huntedPassedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntedPassedTime;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_huntedPassedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___huntedPassedTime;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_huntedPassedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___huntedPassedTime = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPosition = value;
}
constexpr ::UnityEngine::Quaternion& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotation;
}
constexpr ::UnityEngine::Quaternion const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRotation;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_targetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRotation = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_targetVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetVRRig;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_targetVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetVRRig = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GorillaTagScripts::LurkerGhost::__cordl_internal_get__BlackAndWhite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlackAndWhite;
}
constexpr ::GlobalNamespace::ShaderHashId const& GorillaTagScripts::LurkerGhost::__cordl_internal_get__BlackAndWhite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BlackAndWhite;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set__BlackAndWhite(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BlackAndWhite = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTagScripts::LurkerGhost::__cordl_internal_get_lastHauntedVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHauntedVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_lastHauntedVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHauntedVRRig;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_lastHauntedVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHauntedVRRig = value;
}
constexpr float_t& GorillaTagScripts::LurkerGhost::__cordl_internal_get_nextTagTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTagTime;
}
constexpr float_t const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_nextTagTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTagTime;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_nextTagTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextTagTime = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GorillaTagScripts::LurkerGhost::__cordl_internal_get_passingPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passingPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_passingPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passingPlayer;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_passingPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___passingPlayer = value;
}
constexpr bool& GorillaTagScripts::LurkerGhost::__cordl_internal_get_hauntNeighbors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hauntNeighbors;
}
constexpr bool const& GorillaTagScripts::LurkerGhost::__cordl_internal_get_hauntNeighbors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hauntNeighbors;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set_hauntNeighbors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hauntNeighbors = value;
}
constexpr ::GlobalNamespace::LurkerGhost_LurkerGhostData& GorillaTagScripts::LurkerGhost::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::LurkerGhost_LurkerGhostData const& GorillaTagScripts::LurkerGhost::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GorillaTagScripts::LurkerGhost::__cordl_internal_set__Data(::GlobalNamespace::LurkerGhost_LurkerGhostData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GorillaTagScripts::LurkerGhost::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::PickNextWaypoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"PickNextWaypoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::Patrol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"Patrol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::PlaySound(::UnityEngine::AudioClip*  clip, bool  loop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"PlaySound", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, loop);
}
inline bool GorillaTagScripts::LurkerGhost::PickPlayer(float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"PickPlayer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, maxDistance);
}
inline void GorillaTagScripts::LurkerGhost::PickPlayer(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"PickPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GorillaTagScripts::LurkerGhost::SeekPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"SeekPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::ChargeAtPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"ChargeAtPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::UpdateGhostVisibility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"UpdateGhostVisibility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::HauntObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"HauntObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::ChangeState(::GlobalNamespace::LurkerGhost_ghostState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_ghostState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTagScripts::LurkerGhost::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"UpdateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LurkerGhost_LurkerGhostData GorillaTagScripts::LurkerGhost::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LurkerGhost_LurkerGhostData>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::set_Data(::GlobalNamespace::LurkerGhost_LurkerGhostData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_LurkerGhostData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::LurkerGhost::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::LurkerGhost::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTagScripts::LurkerGhost::ReadDataShared(::GlobalNamespace::LurkerGhost_ghostState  state, int32_t  index, int32_t  targetActorNumber, ::UnityEngine::Vector3  targetPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {"ReadDataShared", {}, {::i2c::type_of<::GlobalNamespace::LurkerGhost_ghostState>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, index, targetActorNumber, targetPos);
}
inline void GorillaTagScripts::LurkerGhost::OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, previousOwner);
}
inline void GorillaTagScripts::LurkerGhost::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::LurkerGhost::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaTagScripts::LurkerGhost::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::LurkerGhost*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::LurkerGhost* GorillaTagScripts::LurkerGhost::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::LurkerGhost*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::LurkerGhost::LurkerGhost()   {
}
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::*)()>(&::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bcdfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0._PickPlayer_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::*)(::GlobalNamespace::RigContainer*)>(&::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::_PickPlayer_b__0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5bcf420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0*>(),
                        {"<PickPlayer>b__0", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetPlayer*& GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
inline void GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::_PickPlayer_b__0(::GlobalNamespace::RigContainer*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0*>(),
                        {"<PickPlayer>b__0", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0* GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::LurkerGhost___c__DisplayClass57_0::LurkerGhost___c__DisplayClass57_0()   {
}
