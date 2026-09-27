#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/StickObjectToPlayer.hpp"
#include "GorillaTag/Cosmetics/zzzz__StickObjectToPlayer_SpawnLocation_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__StickObjectToPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__StickObjectToPlayer_SpawnLocation_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::StickObjectToPlayer::*)()>(&::GorillaTag::Cosmetics::StickObjectToPlayer::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d77910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)(bool)>(&::GorillaTag::Cosmetics::StickObjectToPlayer::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d77918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)()>(&::GorillaTag::Cosmetics::StickObjectToPlayer::Tick)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d77920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)()>(&::GorillaTag::Cosmetics::StickObjectToPlayer::OnEnable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d77960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)()>(&::GorillaTag::Cosmetics::StickObjectToPlayer::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d779d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.SetOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTag::Cosmetics::StickObjectToPlayer::SetOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d77a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"SetOwner", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.MakeOrGetStickyContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaTag::Cosmetics::StickObjectToPlayer::*)(::UnityEngine::Transform*)>(&::GorillaTag::Cosmetics::StickObjectToPlayer::MakeOrGetStickyContainer)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5d77a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"MakeOrGetStickyContainer", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.Stick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)(bool, ::UnityEngine::Collider*)>(&::GorillaTag::Cosmetics::StickObjectToPlayer::Stick)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x5d77c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"Stick", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.StickFirstPersonView
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)()>(&::GorillaTag::Cosmetics::StickObjectToPlayer::StickFirstPersonView)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d78184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"StickFirstPersonView", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.StickTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GorillaTag::Cosmetics::StickObjectToPlayer::StickTo)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5d78278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"StickTo", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.GetSpawnPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaTag::Cosmetics::StickObjectToPlayer::*)(::GlobalNamespace::StickObjectToPlayer_SpawnLocation, ::GlobalNamespace::VRRig*)>(&::GorillaTag::Cosmetics::StickObjectToPlayer::GetSpawnPosition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d7811c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"GetSpawnPosition", {}, {::i2c::type_of<::GlobalNamespace::StickObjectToPlayer_SpawnLocation>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.Debug_StickToLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)()>(&::GorillaTag::Cosmetics::StickObjectToPlayer::Debug_StickToLocalPlayer)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5d78478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"Debug_StickToLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer.Debug_StickToLocalPlayerFPV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)()>(&::GorillaTag::Cosmetics::StickObjectToPlayer::Debug_StickToLocalPlayerFPV)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d785ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"Debug_StickToLocalPlayerFPV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::StickObjectToPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::StickObjectToPlayer::*)()>(&::GorillaTag::Cosmetics::StickObjectToPlayer::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d785b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_objectToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectToSpawn;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_objectToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectToSpawn;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_objectToSpawn(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectToSpawn = value;
}
constexpr int32_t& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_maxActiveStickies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxActiveStickies;
}
constexpr int32_t const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_maxActiveStickies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxActiveStickies;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_maxActiveStickies(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxActiveStickies = value;
}
constexpr ::GlobalNamespace::StickObjectToPlayer_SpawnLocation& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_spawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr ::GlobalNamespace::StickObjectToPlayer_SpawnLocation const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_spawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_spawnLocation(::GlobalNamespace::StickObjectToPlayer_SpawnLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnLocation = value;
}
constexpr float_t& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_stickRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickRadius;
}
constexpr float_t const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_stickRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickRadius;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_stickRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickRadius = value;
}
constexpr bool& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_alignToHitNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignToHitNormal;
}
constexpr bool const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_alignToHitNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignToHitNormal;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_alignToHitNormal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alignToHitNormal = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_spawnerRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnerRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_spawnerRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnerRigidbody;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_spawnerRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnerRigidbody = value;
}
constexpr ::StringW& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_parentTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTag;
}
constexpr ::StringW const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_parentTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTag;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_parentTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTag = value;
}
constexpr float_t& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr float_t const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldown = value;
}
constexpr bool& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_thirdPersonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonView;
}
constexpr bool const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_thirdPersonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thirdPersonView;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_thirdPersonView(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thirdPersonView = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_positionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_positionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionOffset;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_positionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionOffset = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_localEulerAngles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localEulerAngles;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_localEulerAngles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localEulerAngles;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_localEulerAngles(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localEulerAngles = value;
}
constexpr bool& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_firstPersonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonView;
}
constexpr bool const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_firstPersonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstPersonView;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_firstPersonView(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstPersonView = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_FPVOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FPVOffset;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_FPVOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FPVOffset;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_FPVOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FPVOffset = value;
}
constexpr ::UnityEngine::Vector3& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_FPVlocalEulerAngles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FPVlocalEulerAngles;
}
constexpr ::UnityEngine::Vector3 const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_FPVlocalEulerAngles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FPVlocalEulerAngles;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_FPVlocalEulerAngles(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FPVlocalEulerAngles = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_OnStickShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStickShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_OnStickShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStickShared;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_OnStickShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStickShared = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_stickyObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_stickyObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyObject;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_stickyObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyObject = value;
}
constexpr float_t& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_lastSpawnedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnedTime;
}
constexpr float_t const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_lastSpawnedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnedTime;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_lastSpawnedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSpawnedTime = value;
}
constexpr bool& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_canSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSpawn;
}
constexpr bool const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_canSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSpawn;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_canSpawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canSpawn = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_ownerPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get_ownerPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerPlayer;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set_ownerPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerPlayer = value;
}
constexpr bool& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTag::Cosmetics::StickObjectToPlayer::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline bool GorillaTag::Cosmetics::StickObjectToPlayer::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::SetOwner(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"SetOwner", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline ::UnityW<::UnityEngine::Transform> GorillaTag::Cosmetics::StickObjectToPlayer::MakeOrGetStickyContainer(::UnityEngine::Transform*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"MakeOrGetStickyContainer", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, parent);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::Stick(bool  leftHand, ::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"Stick", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand, other);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::StickFirstPersonView()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"StickFirstPersonView", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::StickTo(::UnityEngine::Transform*  parent, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  eulerAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"StickTo", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, position, eulerAngle);
}
inline ::UnityW<::UnityEngine::Transform> GorillaTag::Cosmetics::StickObjectToPlayer::GetSpawnPosition(::GlobalNamespace::StickObjectToPlayer_SpawnLocation  spawnType, ::GlobalNamespace::VRRig*  hitRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"GetSpawnPosition", {}, {::i2c::type_of<::GlobalNamespace::StickObjectToPlayer_SpawnLocation>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, spawnType, hitRig);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::Debug_StickToLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"Debug_StickToLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::Debug_StickToLocalPlayerFPV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {"Debug_StickToLocalPlayerFPV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::StickObjectToPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::StickObjectToPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::StickObjectToPlayer* GorillaTag::Cosmetics::StickObjectToPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::StickObjectToPlayer*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::Cosmetics::StickObjectToPlayer::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::Cosmetics::StickObjectToPlayer::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::StickObjectToPlayer::StickObjectToPlayer()   {
}
