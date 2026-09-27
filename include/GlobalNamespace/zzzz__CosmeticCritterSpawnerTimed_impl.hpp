#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerTimed.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerIndependent_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerTimed_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerTimed.CreateCallLimiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CallLimiter* (::GlobalNamespace::CosmeticCritterSpawnerTimed::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerTimed::CreateCallLimiter)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5801050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerTimed.CanSpawnLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterSpawnerTimed::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerTimed::CanSpawnLocal)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58010c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerTimed.CanSpawnRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterSpawnerTimed::*)(double_t)>(&::GlobalNamespace::CosmeticCritterSpawnerTimed::CanSpawnRemote)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5801128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerTimed.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerTimed::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerTimed::OnEnable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x580112c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerTimed.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerTimed::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerTimed::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x580117c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterSpawnerTimed._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterSpawnerTimed::*)()>(&::GlobalNamespace::CosmeticCritterSpawnerTimed::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5801180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& GlobalNamespace::CosmeticCritterSpawnerTimed::__cordl_internal_get_spawnIntervalMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnIntervalMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::CosmeticCritterSpawnerTimed::__cordl_internal_get_spawnIntervalMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnIntervalMinMax;
}
constexpr void GlobalNamespace::CosmeticCritterSpawnerTimed::__cordl_internal_set_spawnIntervalMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnIntervalMinMax = value;
}
constexpr float_t& GlobalNamespace::CosmeticCritterSpawnerTimed::__cordl_internal_get_spawnChance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnChance;
}
constexpr float_t const& GlobalNamespace::CosmeticCritterSpawnerTimed::__cordl_internal_get_spawnChance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnChance;
}
constexpr void GlobalNamespace::CosmeticCritterSpawnerTimed::__cordl_internal_set_spawnChance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnChance = value;
}
inline ::GlobalNamespace::CallLimiter* GlobalNamespace::CosmeticCritterSpawnerTimed::CreateCallLimiter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CallLimiter*>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticCritterSpawnerTimed::CanSpawnLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticCritterSpawnerTimed::CanSpawnRemote(double_t  serverTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, serverTime);
}
inline void GlobalNamespace::CosmeticCritterSpawnerTimed::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterSpawnerTimed::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterSpawnerTimed::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterSpawnerTimed*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterSpawnerTimed* GlobalNamespace::CosmeticCritterSpawnerTimed::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterSpawnerTimed*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterSpawnerTimed::CosmeticCritterSpawnerTimed()   {
}
