#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceRegion.hpp"
#include "GlobalNamespace/zzzz__SpawnRegion_2_impl.hpp"
#include "GlobalNamespace/zzzz__SIResourceRegion_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIResourceRegion.get_LastSpawnTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SIResourceRegion::*)()>(&::GlobalNamespace::SIResourceRegion::get_LastSpawnTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceRegion*>(),
                        {"get_LastSpawnTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceRegion.set_LastSpawnTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceRegion::*)(float_t)>(&::GlobalNamespace::SIResourceRegion::set_LastSpawnTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceRegion*>(),
                        {"set_LastSpawnTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceRegion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceRegion::*)()>(&::GlobalNamespace::SIResourceRegion::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5aed1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceRegion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIResource>& GlobalNamespace::SIResourceRegion::__cordl_internal_get_resourcePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePrefab;
}
constexpr ::UnityW<::GlobalNamespace::SIResource> const& GlobalNamespace::SIResourceRegion::__cordl_internal_get_resourcePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourcePrefab;
}
constexpr void GlobalNamespace::SIResourceRegion::__cordl_internal_set_resourcePrefab(::UnityW<::GlobalNamespace::SIResource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourcePrefab = value;
}
constexpr float_t& GlobalNamespace::SIResourceRegion::__cordl_internal_get__LastSpawnTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSpawnTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::SIResourceRegion::__cordl_internal_get__LastSpawnTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastSpawnTime_k__BackingField;
}
constexpr void GlobalNamespace::SIResourceRegion::__cordl_internal_set__LastSpawnTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastSpawnTime_k__BackingField = value;
}
inline float_t GlobalNamespace::SIResourceRegion::get_LastSpawnTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceRegion*>(),
                        {"get_LastSpawnTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceRegion::set_LastSpawnTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceRegion*>(),
                        {"set_LastSpawnTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SIResourceRegion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceRegion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIResourceRegion* GlobalNamespace::SIResourceRegion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIResourceRegion*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceRegion::SIResourceRegion()   {
}
