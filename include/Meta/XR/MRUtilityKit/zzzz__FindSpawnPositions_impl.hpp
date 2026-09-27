#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/FindSpawnPositions.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__FindSpawnPositions_SpawnLocation_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_RoomFilter_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__FindSpawnPositions_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__FindSpawnPositions_SpawnLocation_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::FindSpawnPositions.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::FindSpawnPositions::*)()>(&::Meta::XR::MRUtilityKit::FindSpawnPositions::Start)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9f0fb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::FindSpawnPositions.StartSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::FindSpawnPositions::*)()>(&::Meta::XR::MRUtilityKit::FindSpawnPositions::StartSpawn)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9f0fd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {"StartSpawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::FindSpawnPositions.StartSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::FindSpawnPositions::*)(::Meta::XR::MRUtilityKit::MRUKRoom*)>(&::Meta::XR::MRUtilityKit::FindSpawnPositions::StartSpawn)> {
  constexpr static std::size_t size = 0x918;
  constexpr static std::size_t addrs = 0x9f0ff0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {"StartSpawn", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::FindSpawnPositions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::FindSpawnPositions::*)()>(&::Meta::XR::MRUtilityKit::FindSpawnPositions::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f10824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::FindSpawnPositions._Start_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MRUtilityKit::FindSpawnPositions::*)()>(&::Meta::XR::MRUtilityKit::FindSpawnPositions::_Start_b__11_0)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9f1087c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {"<Start>b__11_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MRUK_RoomFilter& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SpawnOnStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnOnStart;
}
constexpr ::GlobalNamespace::MRUK_RoomFilter const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SpawnOnStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnOnStart;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_SpawnOnStart(::GlobalNamespace::MRUK_RoomFilter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnOnStart = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SpawnObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SpawnObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnObject;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_SpawnObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnObject = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SpawnAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnAmount;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SpawnAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnAmount;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_SpawnAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnAmount = value;
}
constexpr int32_t& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_MaxIterations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxIterations;
}
constexpr int32_t const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_MaxIterations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxIterations;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_MaxIterations(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxIterations = value;
}
constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SpawnLocations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnLocations;
}
constexpr ::GlobalNamespace::FindSpawnPositions_SpawnLocation const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SpawnLocations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnLocations;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_SpawnLocations(::GlobalNamespace::FindSpawnPositions_SpawnLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnLocations = value;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_Labels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Labels;
}
constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_Labels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Labels;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_Labels(::GlobalNamespace::MRUKAnchor_SceneLabels  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Labels = value;
}
constexpr bool& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_CheckOverlaps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckOverlaps;
}
constexpr bool const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_CheckOverlaps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CheckOverlaps;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_CheckOverlaps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CheckOverlaps = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_OverrideBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideBounds;
}
constexpr float_t const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_OverrideBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideBounds;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_OverrideBounds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideBounds = value;
}
constexpr ::UnityEngine::LayerMask& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_LayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMask;
}
constexpr ::UnityEngine::LayerMask const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_LayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMask;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_LayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LayerMask = value;
}
constexpr float_t& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SurfaceClearanceDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfaceClearanceDistance;
}
constexpr float_t const& Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_get_SurfaceClearanceDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SurfaceClearanceDistance;
}
constexpr void Meta::XR::MRUtilityKit::FindSpawnPositions::__cordl_internal_set_SurfaceClearanceDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SurfaceClearanceDistance = value;
}
inline void Meta::XR::MRUtilityKit::FindSpawnPositions::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::FindSpawnPositions::StartSpawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {"StartSpawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::FindSpawnPositions::StartSpawn(::Meta::XR::MRUtilityKit::MRUKRoom*  room)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {"StartSpawn", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKRoom*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, room);
}
inline void Meta::XR::MRUtilityKit::FindSpawnPositions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::MRUtilityKit::FindSpawnPositions::_Start_b__11_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::FindSpawnPositions*>(),
                        {"<Start>b__11_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MRUtilityKit::FindSpawnPositions* Meta::XR::MRUtilityKit::FindSpawnPositions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::FindSpawnPositions*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::FindSpawnPositions::FindSpawnPositions()   {
}
