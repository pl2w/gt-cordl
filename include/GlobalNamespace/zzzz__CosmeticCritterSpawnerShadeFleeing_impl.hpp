#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerShadeFleeing.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawner_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerShadeFleeing_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing.SetSpawnPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::SetSpawnPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57f3008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*>(),
                        {"SetSpawnPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::*)(::GlobalNamespace::CosmeticCritter*)>(&::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::OnSpawn)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x57f3014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57f3340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::__cordl_internal_get_spawnPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::__cordl_internal_get_spawnPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPosition;
}
constexpr void GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::__cordl_internal_set_spawnPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPosition = value;
}
inline void GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::SetSpawnPosition(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*>(),
                        {"SetSpawnPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::OnSpawn(::GlobalNamespace::CosmeticCritter*  critter)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}
inline void GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing* GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterSpawnerShadeFleeing::CosmeticCritterSpawnerShadeFleeing()   {
}
