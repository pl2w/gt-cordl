#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBreakableItemSpawnConfig.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GRBreakableItemSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GRBreakableItemSpawnConfig_ItemProbability_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRBreakableItemSpawnConfig.TryForRandomItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRBreakableItemSpawnConfig::*)(::GlobalNamespace::GameEntity*, ::by_ref<::GlobalNamespace::GameEntity*>, int32_t)>(&::GlobalNamespace::GRBreakableItemSpawnConfig::TryForRandomItem)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5869e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"TryForRandomItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntity*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakableItemSpawnConfig.TryForRandomItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRBreakableItemSpawnConfig::*)(::GlobalNamespace::GhostReactor*, ::by_ref<::GlobalNamespace::SRand>, ::by_ref<::GlobalNamespace::GameEntity*>, int32_t)>(&::GlobalNamespace::GRBreakableItemSpawnConfig::TryForRandomItem)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5874400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"TryForRandomItem", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntity*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakableItemSpawnConfig.GetOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> (::GlobalNamespace::GRBreakableItemSpawnConfig::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GRBreakableItemSpawnConfig::GetOverride)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5874334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"GetOverride", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakableItemSpawnConfig.GetOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> (::GlobalNamespace::GRBreakableItemSpawnConfig::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRBreakableItemSpawnConfig::GetOverride)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x58745f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"GetOverride", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakableItemSpawnConfig.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBreakableItemSpawnConfig::*)()>(&::GlobalNamespace::GRBreakableItemSpawnConfig::OnValidate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58746f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRBreakableItemSpawnConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRBreakableItemSpawnConfig::*)()>(&::GlobalNamespace::GRBreakableItemSpawnConfig::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5874794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRBreakableItemSpawnConfig::__cordl_internal_get_spawnAnythingProbability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAnythingProbability;
}
constexpr float_t const& GlobalNamespace::GRBreakableItemSpawnConfig::__cordl_internal_get_spawnAnythingProbability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnAnythingProbability;
}
constexpr void GlobalNamespace::GRBreakableItemSpawnConfig::__cordl_internal_set_spawnAnythingProbability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnAnythingProbability = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>*& GlobalNamespace::GRBreakableItemSpawnConfig::__cordl_internal_get_perItemProbabilities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perItemProbabilities;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>* const& GlobalNamespace::GRBreakableItemSpawnConfig::__cordl_internal_get_perItemProbabilities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___perItemProbabilities;
}
constexpr void GlobalNamespace::GRBreakableItemSpawnConfig::__cordl_internal_set_perItemProbabilities(::System::Collections::Generic::List_1<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___perItemProbabilities = value;
}
constexpr float_t& GlobalNamespace::GRBreakableItemSpawnConfig::__cordl_internal_get_precomputedItemTotalWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___precomputedItemTotalWeight;
}
constexpr float_t const& GlobalNamespace::GRBreakableItemSpawnConfig::__cordl_internal_get_precomputedItemTotalWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___precomputedItemTotalWeight;
}
constexpr void GlobalNamespace::GRBreakableItemSpawnConfig::__cordl_internal_set_precomputedItemTotalWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___precomputedItemTotalWeight = value;
}
inline bool GlobalNamespace::GRBreakableItemSpawnConfig::TryForRandomItem(::GlobalNamespace::GameEntity*  spawnFromEntity, ::by_ref<::GlobalNamespace::GameEntity*>  entity, int32_t  sanity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"TryForRandomItem", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntity*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, spawnFromEntity, entity, sanity);
}
inline bool GlobalNamespace::GRBreakableItemSpawnConfig::TryForRandomItem(::GlobalNamespace::GhostReactor*  reactor, ::by_ref<::GlobalNamespace::SRand>  srand, ::by_ref<::GlobalNamespace::GameEntity*>  entity, int32_t  sanity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"TryForRandomItem", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::GameEntity*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reactor, srand, entity, sanity);
}
inline ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> GlobalNamespace::GRBreakableItemSpawnConfig::GetOverride(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"GetOverride", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>>(this, ___internal_method, entity);
}
inline ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> GlobalNamespace::GRBreakableItemSpawnConfig::GetOverride(::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"GetOverride", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>>(this, ___internal_method, reactor);
}
inline void GlobalNamespace::GRBreakableItemSpawnConfig::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRBreakableItemSpawnConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBreakableItemSpawnConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRBreakableItemSpawnConfig* GlobalNamespace::GRBreakableItemSpawnConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBreakableItemSpawnConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRBreakableItemSpawnConfig::GRBreakableItemSpawnConfig()   {
}
