#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSummonedEntity.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRSummonedEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGRSummoningEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSummonedEntity.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonedEntity::*)()>(&::GlobalNamespace::GRSummonedEntity::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58b7730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonedEntity.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonedEntity::*)()>(&::GlobalNamespace::GRSummonedEntity::OnEntityInit)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58b7788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonedEntity.GetSummonerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GRSummonedEntity::*)()>(&::GlobalNamespace::GRSummonedEntity::GetSummonerID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"GetSummonerID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonedEntity.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonedEntity::*)()>(&::GlobalNamespace::GRSummonedEntity::OnEntityDestroy)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58b79c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonedEntity.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonedEntity::*)(int64_t, int64_t)>(&::GlobalNamespace::GRSummonedEntity::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b7a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonedEntity.FindSummoner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IGRSummoningEntity* (::GlobalNamespace::GRSummonedEntity::*)()>(&::GlobalNamespace::GRSummonedEntity::FindSummoner)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58b78a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"FindSummoner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSummonedEntity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSummonedEntity::*)()>(&::GlobalNamespace::GRSummonedEntity::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58b7a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameEntityId& GlobalNamespace::GRSummonedEntity::__cordl_internal_get_summonerEntityId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonerEntityId;
}
constexpr ::GlobalNamespace::GameEntityId const& GlobalNamespace::GRSummonedEntity::__cordl_internal_get_summonerEntityId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonerEntityId;
}
constexpr void GlobalNamespace::GRSummonedEntity::__cordl_internal_set_summonerEntityId(::GlobalNamespace::GameEntityId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonerEntityId = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GRSummonedEntity::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GRSummonedEntity::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GRSummonedEntity::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::GlobalNamespace::IGRSummoningEntity*& GlobalNamespace::GRSummonedEntity::__cordl_internal_get_summoner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoner;
}
constexpr ::GlobalNamespace::IGRSummoningEntity* const& GlobalNamespace::GRSummonedEntity::__cordl_internal_get_summoner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoner;
}
constexpr void GlobalNamespace::GRSummonedEntity::__cordl_internal_set_summoner(::GlobalNamespace::IGRSummoningEntity*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoner = value;
}
inline void GlobalNamespace::GRSummonedEntity::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSummonedEntity::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GRSummonedEntity::GetSummonerID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"GetSummonerID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method);
}
inline void GlobalNamespace::GRSummonedEntity::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRSummonedEntity::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline ::GlobalNamespace::IGRSummoningEntity* GlobalNamespace::GRSummonedEntity::FindSummoner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {"FindSummoner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IGRSummoningEntity*>(this, ___internal_method);
}
inline void GlobalNamespace::GRSummonedEntity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSummonedEntity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSummonedEntity* GlobalNamespace::GRSummonedEntity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSummonedEntity*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GRSummonedEntity::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GRSummonedEntity::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSummonedEntity::GRSummonedEntity()   {
}
