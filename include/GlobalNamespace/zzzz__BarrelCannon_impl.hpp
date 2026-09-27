#pragma once
// IWYU pragma private; include "GlobalNamespace/BarrelCannon.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonState_impl.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonSyncedStateData_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_def.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonState_def.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_BarrelCannonSyncedStateData_def.hpp"
#include "GlobalNamespace/zzzz__BarrelCannon_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5bffe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.AuthorityUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::AuthorityUpdate)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x5bffe58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"AuthorityUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.ClientUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::ClientUpdate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5c00440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"ClientUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.SharedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::SharedUpdate)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5c00474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"SharedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.FireBarrelCannonRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::BarrelCannon::FireBarrelCannonRPC)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c00808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"FireBarrelCannonRPC", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.FireBarrelCannonLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::BarrelCannon::FireBarrelCannonLocal)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c00640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"FireBarrelCannonLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BarrelCannon::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5c0080c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BarrelCannon::OnTriggerExit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c00a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.LocalPlayerTriggerFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BarrelCannon::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::Rigidbody*>)>(&::GlobalNamespace::BarrelCannon::LocalPlayerTriggerFilter)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5c0084c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"LocalPlayerTriggerFilter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.IsLocalPlayerInCannon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::IsLocalPlayerInCannon)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c00a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"IsLocalPlayerInCannon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.GetCapsulePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(::UnityEngine::CapsuleCollider*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::BarrelCannon::GetCapsulePoints)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c00b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"GetCapsulePoints", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::get_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c00ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData)>(&::GlobalNamespace::BarrelCannon::set_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5c00d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::WriteDataFusion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c00d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                    {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::ReadDataFusion)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c00dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                    {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::BarrelCannon::WriteDataPUN)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c00f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                    {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::BarrelCannon::ReadDataPUN)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c00fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                    {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::BarrelCannon::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c01098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                    {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c010c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)(bool)>(&::GlobalNamespace::BarrelCannon::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c0122c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                    {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon::*)()>(&::GlobalNamespace::BarrelCannon::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c01250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                    {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::BarrelCannon::__cordl_internal_get_firingSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingSpeed;
}
constexpr float_t const& GlobalNamespace::BarrelCannon::__cordl_internal_get_firingSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingSpeed;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_firingSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingSpeed = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BarrelCannon::__cordl_internal_get_firingPositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BarrelCannon::__cordl_internal_get_firingPositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingPositionOffset;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_firingPositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingPositionOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BarrelCannon::__cordl_internal_get_firingRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BarrelCannon::__cordl_internal_get_firingRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingRotationOffset;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_firingRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingRotationOffset = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::BarrelCannon::__cordl_internal_get_firePositionAnimationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firePositionAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::BarrelCannon::__cordl_internal_get_firePositionAnimationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firePositionAnimationCurve;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_firePositionAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firePositionAnimationCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::BarrelCannon::__cordl_internal_get_fireRotationAnimationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireRotationAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::BarrelCannon::__cordl_internal_get_fireRotationAnimationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireRotationAnimationCurve;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_fireRotationAnimationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireRotationAnimationCurve = value;
}
constexpr float_t& GlobalNamespace::BarrelCannon::__cordl_internal_get_moveToFiringPositionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveToFiringPositionTime;
}
constexpr float_t const& GlobalNamespace::BarrelCannon::__cordl_internal_get_moveToFiringPositionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveToFiringPositionTime;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_moveToFiringPositionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveToFiringPositionTime = value;
}
constexpr float_t& GlobalNamespace::BarrelCannon::__cordl_internal_get_cannonEntryDelayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannonEntryDelayTime;
}
constexpr float_t const& GlobalNamespace::BarrelCannon::__cordl_internal_get_cannonEntryDelayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cannonEntryDelayTime;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_cannonEntryDelayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cannonEntryDelayTime = value;
}
constexpr float_t& GlobalNamespace::BarrelCannon::__cordl_internal_get_preFiringDelayTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preFiringDelayTime;
}
constexpr float_t const& GlobalNamespace::BarrelCannon::__cordl_internal_get_preFiringDelayTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preFiringDelayTime;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_preFiringDelayTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preFiringDelayTime = value;
}
constexpr float_t& GlobalNamespace::BarrelCannon::__cordl_internal_get_postFiringCooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postFiringCooldownTime;
}
constexpr float_t const& GlobalNamespace::BarrelCannon::__cordl_internal_get_postFiringCooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postFiringCooldownTime;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_postFiringCooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postFiringCooldownTime = value;
}
constexpr float_t& GlobalNamespace::BarrelCannon::__cordl_internal_get_returnToIdlePositionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToIdlePositionTime;
}
constexpr float_t const& GlobalNamespace::BarrelCannon::__cordl_internal_get_returnToIdlePositionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___returnToIdlePositionTime;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_returnToIdlePositionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___returnToIdlePositionTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BarrelCannon::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BarrelCannon::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& GlobalNamespace::BarrelCannon::__cordl_internal_get_triggerCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCollider;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& GlobalNamespace::BarrelCannon::__cordl_internal_get_triggerCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCollider;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_triggerCollider(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerCollider = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::BarrelCannon::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::BarrelCannon::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*& GlobalNamespace::BarrelCannon::__cordl_internal_get_syncedState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedState;
}
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState* const& GlobalNamespace::BarrelCannon::__cordl_internal_get_syncedState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedState;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_syncedState(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedState = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::BarrelCannon::__cordl_internal_get_triggerOverlapResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOverlapResults;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::BarrelCannon::__cordl_internal_get_triggerOverlapResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOverlapResults;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_triggerOverlapResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerOverlapResults = value;
}
constexpr bool& GlobalNamespace::BarrelCannon::__cordl_internal_get_localPlayerInside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerInside;
}
constexpr bool const& GlobalNamespace::BarrelCannon::__cordl_internal_get_localPlayerInside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerInside;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_localPlayerInside(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerInside = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::BarrelCannon::__cordl_internal_get_localPlayerRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::BarrelCannon::__cordl_internal_get_localPlayerRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localPlayerRigidbody;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_localPlayerRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localPlayerRigidbody = value;
}
constexpr float_t& GlobalNamespace::BarrelCannon::__cordl_internal_get_stateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr float_t const& GlobalNamespace::BarrelCannon::__cordl_internal_get_stateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_stateStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStartTime = value;
}
constexpr float_t& GlobalNamespace::BarrelCannon::__cordl_internal_get_localFiringPositionLerpValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localFiringPositionLerpValue;
}
constexpr float_t const& GlobalNamespace::BarrelCannon::__cordl_internal_get_localFiringPositionLerpValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localFiringPositionLerpValue;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set_localFiringPositionLerpValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localFiringPositionLerpValue = value;
}
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData& GlobalNamespace::BarrelCannon::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData const& GlobalNamespace::BarrelCannon::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::BarrelCannon::__cordl_internal_set__Data(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::BarrelCannon::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon::AuthorityUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"AuthorityUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon::ClientUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"ClientUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon::SharedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"SharedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon::FireBarrelCannonRPC(::UnityEngine::Vector3  cannonCenter, ::UnityEngine::Vector3  firingDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"FireBarrelCannonRPC", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cannonCenter, firingDirection);
}
inline void GlobalNamespace::BarrelCannon::FireBarrelCannonLocal(::UnityEngine::Vector3  cannonCenter, ::UnityEngine::Vector3  firingDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"FireBarrelCannonLocal", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cannonCenter, firingDirection);
}
inline void GlobalNamespace::BarrelCannon::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::BarrelCannon::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool GlobalNamespace::BarrelCannon::LocalPlayerTriggerFilter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Rigidbody*>  rb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"LocalPlayerTriggerFilter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, rb);
}
inline bool GlobalNamespace::BarrelCannon::IsLocalPlayerInCannon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"IsLocalPlayerInCannon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon::GetCapsulePoints(::UnityEngine::CapsuleCollider*  capsule, ::by_ref<::UnityEngine::Vector3>  pointA, ::by_ref<::UnityEngine::Vector3>  pointB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"GetCapsulePoints", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capsule, pointA, pointB);
}
inline ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData GlobalNamespace::BarrelCannon::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>(this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon::set_Data(::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedStateData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BarrelCannon::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::BarrelCannon::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::BarrelCannon::OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, requestingPlayer);
}
inline void GlobalNamespace::BarrelCannon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BarrelCannon::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::BarrelCannon::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::BarrelCannon*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BarrelCannon* GlobalNamespace::BarrelCannon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BarrelCannon*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BarrelCannon::BarrelCannon()   {
}
//  Writing Method size for method: ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::*)()>(&::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c01224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState& GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonState const& GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::__cordl_internal_set_currentState(::GlobalNamespace::BarrelCannon_BarrelCannonState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr bool& GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::__cordl_internal_get_hasAuthorityPassenger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasAuthorityPassenger;
}
constexpr bool const& GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::__cordl_internal_get_hasAuthorityPassenger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasAuthorityPassenger;
}
constexpr void GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::__cordl_internal_set_hasAuthorityPassenger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasAuthorityPassenger = value;
}
constexpr float_t& GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::__cordl_internal_get_firingPositionLerpValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingPositionLerpValue;
}
constexpr float_t const& GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::__cordl_internal_get_firingPositionLerpValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingPositionLerpValue;
}
constexpr void GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::__cordl_internal_set_firingPositionLerpValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingPositionLerpValue = value;
}
inline void GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState* GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BarrelCannon_BarrelCannonSyncedState::BarrelCannon_BarrelCannonSyncedState()   {
}
