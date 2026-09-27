#pragma once
// IWYU pragma private; include "GlobalNamespace/BasicFireSpawner.hpp"
#include "GorillaTag/zzzz__HashWrapper_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__BasicFireSpawner_def.hpp"
#include "GlobalNamespace/zzzz__SinglePool_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BasicFireSpawner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicFireSpawner::*)()>(&::GlobalNamespace::BasicFireSpawner::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5693ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicFireSpawner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicFireSpawner.InterpolateScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicFireSpawner::*)(float_t)>(&::GlobalNamespace::BasicFireSpawner::InterpolateScale)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5693cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicFireSpawner*>(),
                        {"InterpolateScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicFireSpawner.Spawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicFireSpawner::*)()>(&::GlobalNamespace::BasicFireSpawner::Spawn)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5693d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicFireSpawner*>(),
                        {"Spawn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BasicFireSpawner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BasicFireSpawner::*)()>(&::GlobalNamespace::BasicFireSpawner::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5693ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicFireSpawner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTag::HashWrapper& GlobalNamespace::BasicFireSpawner::__cordl_internal_get_firePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firePrefab;
}
constexpr ::GorillaTag::HashWrapper const& GlobalNamespace::BasicFireSpawner::__cordl_internal_get_firePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firePrefab;
}
constexpr void GlobalNamespace::BasicFireSpawner::__cordl_internal_set_firePrefab(::GorillaTag::HashWrapper  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firePrefab = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::BasicFireSpawner::__cordl_internal_get_fireScaleMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireScaleMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::BasicFireSpawner::__cordl_internal_get_fireScaleMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireScaleMinMax;
}
constexpr void GlobalNamespace::BasicFireSpawner::__cordl_internal_set_fireScaleMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireScaleMinMax = value;
}
constexpr ::GlobalNamespace::SinglePool*& GlobalNamespace::BasicFireSpawner::__cordl_internal_get_firePool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firePool;
}
constexpr ::GlobalNamespace::SinglePool* const& GlobalNamespace::BasicFireSpawner::__cordl_internal_get_firePool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firePool;
}
constexpr void GlobalNamespace::BasicFireSpawner::__cordl_internal_set_firePool(::GlobalNamespace::SinglePool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firePool = value;
}
constexpr float_t& GlobalNamespace::BasicFireSpawner::__cordl_internal_get_scale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr float_t const& GlobalNamespace::BasicFireSpawner::__cordl_internal_get_scale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scale;
}
constexpr void GlobalNamespace::BasicFireSpawner::__cordl_internal_set_scale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scale = value;
}
inline void GlobalNamespace::BasicFireSpawner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicFireSpawner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicFireSpawner::InterpolateScale(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicFireSpawner*>(),
                        {"InterpolateScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void GlobalNamespace::BasicFireSpawner::Spawn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicFireSpawner*>(),
                        {"Spawn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BasicFireSpawner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BasicFireSpawner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BasicFireSpawner* GlobalNamespace::BasicFireSpawner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BasicFireSpawner*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BasicFireSpawner::BasicFireSpawner()   {
}
