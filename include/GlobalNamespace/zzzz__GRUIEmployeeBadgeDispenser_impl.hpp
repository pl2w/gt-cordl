#pragma once
// IWYU pragma private; include "GlobalNamespace/GRUIEmployeeBadgeDispenser.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRUIEmployeeBadgeDispenser_def.hpp"
#include "GlobalNamespace/zzzz__GRBadge_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)(::GlobalNamespace::GhostReactor*, int32_t)>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d1674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)()>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::Refresh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x58d167c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser.CreateBadge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::CreateBadge)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58d17d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"CreateBadge", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser.GetSpawnMarker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)()>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::GetSpawnMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d1904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser.IsDispenserForBadge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)(::GlobalNamespace::GRBadge*)>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::IsDispenserForBadge)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58d190c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"IsDispenserForBadge", {}, {::i2c::type_of<::GlobalNamespace::GRBadge*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser.GetSpawnPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)()>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::GetSpawnPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58d1978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"GetSpawnPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser.GetSpawnRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)()>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::GetSpawnRotation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58d1990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"GetSpawnRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser.ClearBadge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)()>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::ClearBadge)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58d19a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"ClearBadge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser.AttachIDBadge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)(::GlobalNamespace::GRBadge*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::AttachIDBadge)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58d19bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"AttachIDBadge", {}, {::i2c::type_of<::GlobalNamespace::GRBadge*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRUIEmployeeBadgeDispenser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRUIEmployeeBadgeDispenser::*)()>(&::GlobalNamespace::GRUIEmployeeBadgeDispenser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d1a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_msg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___msg;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_msg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___msg;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_msg(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___msg = value;
}
constexpr ::UnityW<::TMPro::TMP_Text>& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_playerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr ::UnityW<::TMPro::TMP_Text> const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_playerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerName;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_playerName(::UnityW<::TMPro::TMP_Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerName = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_spawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_spawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnLocation;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_spawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnLocation = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_idBadgePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idBadgePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_idBadgePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idBadgePrefab;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_idBadgePrefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idBadgePrefab = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_badgeLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_badgeLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___badgeLayerMask;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_badgeLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___badgeLayerMask = value;
}
constexpr int32_t& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr int32_t& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_actorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNr;
}
constexpr int32_t const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_actorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorNr;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_actorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorNr = value;
}
constexpr ::UnityW<::GlobalNamespace::GRBadge>& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_idBadge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idBadge;
}
constexpr ::UnityW<::GlobalNamespace::GRBadge> const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_idBadge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idBadge;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_idBadge(::UnityW<::GlobalNamespace::GRBadge>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idBadge = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_getSpawnedBadgeCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getSpawnedBadgeCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_getSpawnedBadgeCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getSpawnedBadgeCoroutine;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_getSpawnedBadgeCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getSpawnedBadgeCoroutine = value;
}
constexpr bool& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_isEmployee()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEmployee;
}
constexpr bool const& GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_get_isEmployee() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isEmployee;
}
constexpr void GlobalNamespace::GRUIEmployeeBadgeDispenser::__cordl_internal_set_isEmployee(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isEmployee = value;
}
inline void GlobalNamespace::GRUIEmployeeBadgeDispenser::setStaticF_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "overlapColliders", ::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> GlobalNamespace::GRUIEmployeeBadgeDispenser::getStaticF_overlapColliders()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "overlapColliders", ::GlobalNamespace::GRUIEmployeeBadgeDispenser*>();
}
inline void GlobalNamespace::GRUIEmployeeBadgeDispenser::Setup(::GlobalNamespace::GhostReactor*  reactor, int32_t  employeeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor, employeeIndex);
}
inline void GlobalNamespace::GRUIEmployeeBadgeDispenser::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIEmployeeBadgeDispenser::CreateBadge(::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::GameEntityManager*  entityManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"CreateBadge", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, entityManager);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GRUIEmployeeBadgeDispenser::GetSpawnMarker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"GetSpawnMarker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool GlobalNamespace::GRUIEmployeeBadgeDispenser::IsDispenserForBadge(::GlobalNamespace::GRBadge*  badge)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"IsDispenserForBadge", {}, {::i2c::type_of<::GlobalNamespace::GRBadge*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, badge);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GRUIEmployeeBadgeDispenser::GetSpawnPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"GetSpawnPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::GRUIEmployeeBadgeDispenser::GetSpawnRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"GetSpawnRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIEmployeeBadgeDispenser::ClearBadge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"ClearBadge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRUIEmployeeBadgeDispenser::AttachIDBadge(::GlobalNamespace::GRBadge*  linkedBadge, ::GlobalNamespace::NetPlayer*  _player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {"AttachIDBadge", {}, {::i2c::type_of<::GlobalNamespace::GRBadge*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkedBadge, _player);
}
inline void GlobalNamespace::GRUIEmployeeBadgeDispenser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRUIEmployeeBadgeDispenser* GlobalNamespace::GRUIEmployeeBadgeDispenser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRUIEmployeeBadgeDispenser::GRUIEmployeeBadgeDispenser()   {
}
