#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferableObjectSpawner.hpp"
#include "GlobalNamespace/zzzz__TransferableObjectSpawner_SpawnMode_impl.hpp"
#include "GlobalNamespace/zzzz__TransferableObjectSpawner_SpawnTrigger_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TransferableObjectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__TransferableObjectSpawner_SpawnMode_def.hpp"
#include "GlobalNamespace/zzzz__TransferableObjectSpawner_SpawnTrigger_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferableObjectSpawner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferableObjectSpawner::*)()>(&::GlobalNamespace::TransferableObjectSpawner::Awake)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x59614c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferableObjectSpawner.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferableObjectSpawner::*)()>(&::GlobalNamespace::TransferableObjectSpawner::OnValidate)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x59616c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferableObjectSpawner.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferableObjectSpawner::*)()>(&::GlobalNamespace::TransferableObjectSpawner::Update)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5961adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferableObjectSpawner.SpawnOnGround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferableObjectSpawner::*)()>(&::GlobalNamespace::TransferableObjectSpawner::SpawnOnGround)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5961ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"SpawnOnGround", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferableObjectSpawner.SpawnAtCurrentLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferableObjectSpawner::*)()>(&::GlobalNamespace::TransferableObjectSpawner::SpawnAtCurrentLocation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5962188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"SpawnAtCurrentLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferableObjectSpawner.SpawnTransferrableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferableObjectSpawner::*)()>(&::GlobalNamespace::TransferableObjectSpawner::SpawnTransferrableObject)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5961ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"SpawnTransferrableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferableObjectSpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferableObjectSpawner::*)()>(&::GlobalNamespace::TransferableObjectSpawner::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x59621d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPosition;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_spawnPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRotation;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_spawnRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnRotation = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_TransferrableObjectsToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransferrableObjectsToSpawn;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_TransferrableObjectsToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TransferrableObjectsToSpawn;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_TransferrableObjectsToSpawn(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TransferrableObjectsToSpawn = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_objectsToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToSpawn;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>* const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_objectsToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectsToSpawn;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_objectsToSpawn(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectsToSpawn = value;
}
constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnMode& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnMode;
}
constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnMode const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnMode;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_spawnMode(::GlobalNamespace::TransferableObjectSpawner_SpawnMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnMode = value;
}
constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTrigger;
}
constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTrigger;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_spawnTrigger(::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnTrigger = value;
}
constexpr double_t& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_SpawnDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnDelay;
}
constexpr double_t const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_SpawnDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnDelay;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_SpawnDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnDelay = value;
}
constexpr double_t& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_lastSpawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnTime;
}
constexpr double_t const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_lastSpawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpawnTime;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_lastSpawnTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSpawnTime = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_groundRaycastMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundRaycastMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_groundRaycastMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundRaycastMask;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_groundRaycastMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundRaycastMask = value;
}
constexpr float_t& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRadius;
}
constexpr float_t const& GlobalNamespace::TransferableObjectSpawner::__cordl_internal_get_spawnRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnRadius;
}
constexpr void GlobalNamespace::TransferableObjectSpawner::__cordl_internal_set_spawnRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnRadius = value;
}
inline void GlobalNamespace::TransferableObjectSpawner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferableObjectSpawner::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferableObjectSpawner::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferableObjectSpawner::SpawnOnGround()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"SpawnOnGround", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferableObjectSpawner::SpawnAtCurrentLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"SpawnAtCurrentLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferableObjectSpawner::SpawnTransferrableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {"SpawnTransferrableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferableObjectSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferableObjectSpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferableObjectSpawner* GlobalNamespace::TransferableObjectSpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferableObjectSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferableObjectSpawner::TransferableObjectSpawner()   {
}
