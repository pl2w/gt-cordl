#pragma once
// IWYU pragma private; include "Voxels/VoxelSpawnHandler.hpp"
#include "GlobalNamespace/zzzz__GameEntity_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Voxels/zzzz__VoxelSpawnHandler_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Voxels/zzzz__VoxelMaterialSet_def.hpp"
#include "Voxels/zzzz__VoxelSpawnHandler_def.hpp"
#include "Voxels/zzzz__VoxelWorld_def.hpp"
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)()>(&::Voxels::VoxelSpawnHandler::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5dd04fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)()>(&::Voxels::VoxelSpawnHandler::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dd0554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)()>(&::Voxels::VoxelSpawnHandler::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dd0800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.RegisterSpawnables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)()>(&::Voxels::VoxelSpawnHandler::RegisterSpawnables)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5dd0558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"RegisterSpawnables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)()>(&::Voxels::VoxelSpawnHandler::OnEntityInit)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5dd08e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)()>(&::Voxels::VoxelSpawnHandler::OnEntityDestroy)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5dd0adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)(int64_t, int64_t)>(&::Voxels::VoxelSpawnHandler::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5dd0bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.OnAuthorityChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::Voxels::VoxelSpawnHandler::OnAuthorityChanged)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5dd0bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnAuthorityChanged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.OnZoneActiveChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)(bool)>(&::Voxels::VoxelSpawnHandler::OnZoneActiveChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dd0c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnZoneActiveChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.SetIsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)(bool)>(&::Voxels::VoxelSpawnHandler::SetIsAuthority)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dd0aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"SetIsAuthority", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.SetZoneActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)(bool)>(&::Voxels::VoxelSpawnHandler::SetZoneActive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dd0ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"SetZoneActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.UpdateListeningState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)()>(&::Voxels::VoxelSpawnHandler::UpdateListeningState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5dd0804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"UpdateListeningState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.OnResourcesMined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)(::Voxels::VoxelWorld*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::ArrayW<int32_t>)>(&::Voxels::VoxelSpawnHandler::OnResourcesMined)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5dd0c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnResourcesMined", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler.SpawnItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)(::Voxels::VoxelSpawnHandler_SpawnableSet*, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Voxels::VoxelSpawnHandler::SpawnItem)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5dd0e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"SpawnItem", {}, {::i2c::type_of<::Voxels::VoxelSpawnHandler_SpawnableSet*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler::*)()>(&::Voxels::VoxelSpawnHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd1154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& Voxels::VoxelSpawnHandler::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& Voxels::VoxelSpawnHandler::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void Voxels::VoxelSpawnHandler::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::Voxels::VoxelMaterialSet>& Voxels::VoxelSpawnHandler::__cordl_internal_get_materialSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialSet;
}
constexpr ::UnityW<::Voxels::VoxelMaterialSet> const& Voxels::VoxelSpawnHandler::__cordl_internal_get_materialSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialSet;
}
constexpr void Voxels::VoxelSpawnHandler::__cordl_internal_set_materialSet(::UnityW<::Voxels::VoxelMaterialSet>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialSet = value;
}
constexpr ::ArrayW<::Voxels::VoxelSpawnHandler_SpawnableSet*>& Voxels::VoxelSpawnHandler::__cordl_internal_get_spawnables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnables;
}
constexpr ::ArrayW<::Voxels::VoxelSpawnHandler_SpawnableSet*> const& Voxels::VoxelSpawnHandler::__cordl_internal_get_spawnables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnables;
}
constexpr void Voxels::VoxelSpawnHandler::__cordl_internal_set_spawnables(::ArrayW<::Voxels::VoxelSpawnHandler_SpawnableSet*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnables = value;
}
constexpr bool& Voxels::VoxelSpawnHandler::__cordl_internal_get__managerIsAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____managerIsAuthority;
}
constexpr bool const& Voxels::VoxelSpawnHandler::__cordl_internal_get__managerIsAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____managerIsAuthority;
}
constexpr void Voxels::VoxelSpawnHandler::__cordl_internal_set__managerIsAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____managerIsAuthority = value;
}
constexpr bool& Voxels::VoxelSpawnHandler::__cordl_internal_get__zoneIsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zoneIsActive;
}
constexpr bool const& Voxels::VoxelSpawnHandler::__cordl_internal_get__zoneIsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____zoneIsActive;
}
constexpr void Voxels::VoxelSpawnHandler::__cordl_internal_set__zoneIsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____zoneIsActive = value;
}
constexpr bool& Voxels::VoxelSpawnHandler::__cordl_internal_get__isListening()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isListening;
}
constexpr bool const& Voxels::VoxelSpawnHandler::__cordl_internal_get__isListening() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isListening;
}
constexpr void Voxels::VoxelSpawnHandler::__cordl_internal_set__isListening(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isListening = value;
}
constexpr ::ArrayW<int32_t>& Voxels::VoxelSpawnHandler::__cordl_internal_get__counts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counts;
}
constexpr ::ArrayW<int32_t> const& Voxels::VoxelSpawnHandler::__cordl_internal_get__counts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____counts;
}
constexpr void Voxels::VoxelSpawnHandler::__cordl_internal_set__counts(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____counts = value;
}
constexpr bool& Voxels::VoxelSpawnHandler::__cordl_internal_get__spawnablesRegistered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnablesRegistered;
}
constexpr bool const& Voxels::VoxelSpawnHandler::__cordl_internal_get__spawnablesRegistered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnablesRegistered;
}
constexpr void Voxels::VoxelSpawnHandler::__cordl_internal_set__spawnablesRegistered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnablesRegistered = value;
}
inline void Voxels::VoxelSpawnHandler::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelSpawnHandler::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelSpawnHandler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelSpawnHandler::RegisterSpawnables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"RegisterSpawnables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelSpawnHandler::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelSpawnHandler::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelSpawnHandler::OnEntityStateChange(int64_t  prevState, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, newState);
}
inline void Voxels::VoxelSpawnHandler::OnAuthorityChanged(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnAuthorityChanged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromPlayer, toPlayer);
}
inline void Voxels::VoxelSpawnHandler::OnZoneActiveChanged(bool  zoneActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnZoneActiveChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneActive);
}
inline void Voxels::VoxelSpawnHandler::SetIsAuthority(bool  newAuthority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"SetIsAuthority", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAuthority);
}
inline void Voxels::VoxelSpawnHandler::SetZoneActive(bool  newActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"SetZoneActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newActive);
}
inline void Voxels::VoxelSpawnHandler::UpdateListeningState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"UpdateListeningState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Voxels::VoxelSpawnHandler::OnResourcesMined(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::ArrayW<int32_t>  amounts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"OnResourcesMined", {}, {::i2c::type_of<::Voxels::VoxelWorld*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, world, hitPoint, hitNormal, amounts);
}
inline void Voxels::VoxelSpawnHandler::SpawnItem(::Voxels::VoxelSpawnHandler_SpawnableSet*  spawns, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {"SpawnItem", {}, {::i2c::type_of<::Voxels::VoxelSpawnHandler_SpawnableSet*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawns, hitPoint, hitNormal);
}
inline void Voxels::VoxelSpawnHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::VoxelSpawnHandler* Voxels::VoxelSpawnHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelSpawnHandler*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  Voxels::VoxelSpawnHandler::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* Voxels::VoxelSpawnHandler::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Voxels::VoxelSpawnHandler::VoxelSpawnHandler()   {
}
//  Writing Method size for method: ::Voxels::VoxelSpawnHandler_SpawnableSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Voxels::VoxelSpawnHandler_SpawnableSet::*)()>(&::Voxels::VoxelSpawnHandler_SpawnableSet::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dd115c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler_SpawnableSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Voxels::VoxelSpawnHandler_SpawnableSet::__cordl_internal_get_interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr int32_t const& Voxels::VoxelSpawnHandler_SpawnableSet::__cordl_internal_get_interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr void Voxels::VoxelSpawnHandler_SpawnableSet::__cordl_internal_set_interval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interval = value;
}
constexpr float_t& Voxels::VoxelSpawnHandler_SpawnableSet::__cordl_internal_get_chance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chance;
}
constexpr float_t const& Voxels::VoxelSpawnHandler_SpawnableSet::__cordl_internal_get_chance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chance;
}
constexpr void Voxels::VoxelSpawnHandler_SpawnableSet::__cordl_internal_set_chance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chance = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>& Voxels::VoxelSpawnHandler_SpawnableSet::__cordl_internal_get_prefabs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabs;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>> const& Voxels::VoxelSpawnHandler_SpawnableSet::__cordl_internal_get_prefabs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefabs;
}
constexpr void Voxels::VoxelSpawnHandler_SpawnableSet::__cordl_internal_set_prefabs(::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefabs = value;
}
inline void Voxels::VoxelSpawnHandler_SpawnableSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Voxels::VoxelSpawnHandler_SpawnableSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Voxels::VoxelSpawnHandler_SpawnableSet* Voxels::VoxelSpawnHandler_SpawnableSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Voxels::VoxelSpawnHandler_SpawnableSet*>());
}
// Ctor Parameters []
constexpr ::Voxels::VoxelSpawnHandler_SpawnableSet::VoxelSpawnHandler_SpawnableSet()   {
}
