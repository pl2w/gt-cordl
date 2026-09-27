#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnPooledObject.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SpawnPooledObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpawnPooledObject.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnPooledObject::*)()>(&::GlobalNamespace::SpawnPooledObject::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x59861e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnPooledObject.SpawnObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnPooledObject::*)()>(&::GlobalNamespace::SpawnPooledObject::SpawnObject)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5986258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"SpawnObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnPooledObject.SpawnLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::SpawnPooledObject::*)()>(&::GlobalNamespace::SpawnPooledObject::SpawnLocation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x598640c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"SpawnLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnPooledObject.SpawnRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::SpawnPooledObject::*)()>(&::GlobalNamespace::SpawnPooledObject::SpawnRotation)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5986450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"SpawnRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnPooledObject.ShouldSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SpawnPooledObject::*)()>(&::GlobalNamespace::SpawnPooledObject::ShouldSpawn)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59863e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"ShouldSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpawnPooledObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpawnPooledObject::*)()>(&::GlobalNamespace::SpawnPooledObject::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59865b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SpawnPooledObject::__cordl_internal_get__spawnLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SpawnPooledObject::__cordl_internal_get__spawnLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnLocation;
}
constexpr void GlobalNamespace::SpawnPooledObject::__cordl_internal_set__spawnLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnLocation = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SpawnPooledObject::__cordl_internal_get__pooledObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pooledObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SpawnPooledObject::__cordl_internal_get__pooledObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pooledObject;
}
constexpr void GlobalNamespace::SpawnPooledObject::__cordl_internal_set__pooledObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pooledObject = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SpawnPooledObject::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SpawnPooledObject::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void GlobalNamespace::SpawnPooledObject::__cordl_internal_set_offset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr bool& GlobalNamespace::SpawnPooledObject::__cordl_internal_get_upright()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upright;
}
constexpr bool const& GlobalNamespace::SpawnPooledObject::__cordl_internal_get_upright() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upright;
}
constexpr void GlobalNamespace::SpawnPooledObject::__cordl_internal_set_upright(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upright = value;
}
constexpr bool& GlobalNamespace::SpawnPooledObject::__cordl_internal_get_facePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___facePlayer;
}
constexpr bool const& GlobalNamespace::SpawnPooledObject::__cordl_internal_get_facePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___facePlayer;
}
constexpr void GlobalNamespace::SpawnPooledObject::__cordl_internal_set_facePlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___facePlayer = value;
}
constexpr int32_t& GlobalNamespace::SpawnPooledObject::__cordl_internal_get_chanceToSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chanceToSpawn;
}
constexpr int32_t const& GlobalNamespace::SpawnPooledObject::__cordl_internal_get_chanceToSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chanceToSpawn;
}
constexpr void GlobalNamespace::SpawnPooledObject::__cordl_internal_set_chanceToSpawn(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chanceToSpawn = value;
}
constexpr int32_t& GlobalNamespace::SpawnPooledObject::__cordl_internal_get__pooledObjectHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pooledObjectHash;
}
constexpr int32_t const& GlobalNamespace::SpawnPooledObject::__cordl_internal_get__pooledObjectHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pooledObjectHash;
}
constexpr void GlobalNamespace::SpawnPooledObject::__cordl_internal_set__pooledObjectHash(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pooledObjectHash = value;
}
inline void GlobalNamespace::SpawnPooledObject::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnPooledObject::SpawnObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"SpawnObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::SpawnPooledObject::SpawnLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"SpawnLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::SpawnPooledObject::SpawnRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"SpawnRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline bool GlobalNamespace::SpawnPooledObject::ShouldSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {"ShouldSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SpawnPooledObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpawnPooledObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SpawnPooledObject* GlobalNamespace::SpawnPooledObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SpawnPooledObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpawnPooledObject::SpawnPooledObject()   {
}
