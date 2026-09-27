#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawner_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.get_Seed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::get_Seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"get_Seed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.set_Seed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritter::*)(int32_t)>(&::GlobalNamespace::CosmeticCritter::set_Seed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"set_Seed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.get_Spawner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CosmeticCritterSpawner> (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::get_Spawner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"get_Spawner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.set_Spawner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritter::*)(::GlobalNamespace::CosmeticCritterSpawner*)>(&::GlobalNamespace::CosmeticCritter::set_Spawner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"set_Spawner", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.get_CachedType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::get_CachedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"get_CachedType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.set_CachedType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritter::*)(::System::Type*)>(&::GlobalNamespace::CosmeticCritter::set_CachedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"set_CachedType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.GetGlobalMaxCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::GetGlobalMaxCritters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e7f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"GetGlobalMaxCritters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.SetSeedSpawnerTypeAndTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritter::*)(int32_t, ::GlobalNamespace::CosmeticCritterSpawner*, ::System::Type*, double_t)>(&::GlobalNamespace::CosmeticCritter::SetSeedSpawnerTypeAndTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x57e7f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"SetSeedSpawnerTypeAndTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawner*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::OnSpawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e7f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::OnDespawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e7fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.SetRandomVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::SetRandomVariables)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57e7fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.GetAliveTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::GetAliveTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57e7fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"GetAliveTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter.Expired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::Expired)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57e8030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                    {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritter::*)()>(&::GlobalNamespace::CosmeticCritter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e806c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::CosmeticCritter::__cordl_internal_get_lifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetime;
}
constexpr float_t const& GlobalNamespace::CosmeticCritter::__cordl_internal_get_lifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifetime;
}
constexpr void GlobalNamespace::CosmeticCritter::__cordl_internal_set_lifetime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifetime = value;
}
constexpr int32_t& GlobalNamespace::CosmeticCritter::__cordl_internal_get_globalMaxCritters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalMaxCritters;
}
constexpr int32_t const& GlobalNamespace::CosmeticCritter::__cordl_internal_get_globalMaxCritters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___globalMaxCritters;
}
constexpr void GlobalNamespace::CosmeticCritter::__cordl_internal_set_globalMaxCritters(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___globalMaxCritters = value;
}
constexpr int32_t& GlobalNamespace::CosmeticCritter::__cordl_internal_get__Seed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Seed_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::CosmeticCritter::__cordl_internal_get__Seed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Seed_k__BackingField;
}
constexpr void GlobalNamespace::CosmeticCritter::__cordl_internal_set__Seed_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Seed_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticCritterSpawner>& GlobalNamespace::CosmeticCritter::__cordl_internal_get__Spawner_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Spawner_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::CosmeticCritterSpawner> const& GlobalNamespace::CosmeticCritter::__cordl_internal_get__Spawner_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Spawner_k__BackingField;
}
constexpr void GlobalNamespace::CosmeticCritter::__cordl_internal_set__Spawner_k__BackingField(::UnityW<::GlobalNamespace::CosmeticCritterSpawner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Spawner_k__BackingField = value;
}
constexpr ::System::Type*& GlobalNamespace::CosmeticCritter::__cordl_internal_get__CachedType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedType_k__BackingField;
}
constexpr ::System::Type* const& GlobalNamespace::CosmeticCritter::__cordl_internal_get__CachedType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachedType_k__BackingField;
}
constexpr void GlobalNamespace::CosmeticCritter::__cordl_internal_set__CachedType_k__BackingField(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachedType_k__BackingField = value;
}
constexpr double_t& GlobalNamespace::CosmeticCritter::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr double_t const& GlobalNamespace::CosmeticCritter::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::CosmeticCritter::__cordl_internal_set_startTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
inline int32_t GlobalNamespace::CosmeticCritter::get_Seed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"get_Seed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritter::set_Seed(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"set_Seed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::CosmeticCritterSpawner> GlobalNamespace::CosmeticCritter::get_Spawner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"get_Spawner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CosmeticCritterSpawner>>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritter::set_Spawner(::GlobalNamespace::CosmeticCritterSpawner*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"set_Spawner", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* GlobalNamespace::CosmeticCritter::get_CachedType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"get_CachedType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritter::set_CachedType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"set_CachedType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::CosmeticCritter::GetGlobalMaxCritters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"GetGlobalMaxCritters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritter::SetSeedSpawnerTypeAndTime(int32_t  seed, ::GlobalNamespace::CosmeticCritterSpawner*  spawner, ::System::Type*  type, double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"SetSeedSpawnerTypeAndTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawner*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed, spawner, type, time);
}
inline void GlobalNamespace::CosmeticCritter::OnSpawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritter::OnDespawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritter::SetRandomVariables()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritter::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline double_t GlobalNamespace::CosmeticCritter::GetAliveTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {"GetAliveTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticCritter::Expired()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritter* GlobalNamespace::CosmeticCritter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritter::CosmeticCritter()   {
}
