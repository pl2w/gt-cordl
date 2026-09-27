#pragma once
// IWYU pragma private; include "GlobalNamespace/CopySpawnerData.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CopySpawnerData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CopySpawnerData.CopySpawnerDataInPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopySpawnerData::*)()>(&::GlobalNamespace::CopySpawnerData::CopySpawnerDataInPrefab)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x55ef500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopySpawnerData*>(),
                        {"CopySpawnerDataInPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopySpawnerData.CopyCageDeposits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopySpawnerData::*)()>(&::GlobalNamespace::CopySpawnerData::CopyCageDeposits)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x55efd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopySpawnerData*>(),
                        {"CopyCageDeposits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopySpawnerData.CopyEquipmentSpawner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopySpawnerData::*)()>(&::GlobalNamespace::CopySpawnerData::CopyEquipmentSpawner)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x55ef6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopySpawnerData*>(),
                        {"CopyEquipmentSpawner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CopySpawnerData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CopySpawnerData::*)()>(&::GlobalNamespace::CopySpawnerData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55f04b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopySpawnerData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CopySpawnerData::__cordl_internal_get_spawnerDataParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnerDataParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CopySpawnerData::__cordl_internal_get_spawnerDataParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnerDataParent;
}
constexpr void GlobalNamespace::CopySpawnerData::__cordl_internal_set_spawnerDataParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnerDataParent = value;
}
inline void GlobalNamespace::CopySpawnerData::CopySpawnerDataInPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopySpawnerData*>(),
                        {"CopySpawnerDataInPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CopySpawnerData::CopyCageDeposits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopySpawnerData*>(),
                        {"CopyCageDeposits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CopySpawnerData::CopyEquipmentSpawner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopySpawnerData*>(),
                        {"CopyEquipmentSpawner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CopySpawnerData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CopySpawnerData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CopySpawnerData* GlobalNamespace::CopySpawnerData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CopySpawnerData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CopySpawnerData::CopySpawnerData()   {
}
