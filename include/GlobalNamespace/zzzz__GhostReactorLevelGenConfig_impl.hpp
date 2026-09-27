#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelGenConfig.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGenConfig_def.hpp"
#include "GlobalNamespace/zzzz__GRBonusEntry_def.hpp"
#include "GlobalNamespace/zzzz__GRDropTableOverrides_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyCount_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGeneratorV2_TreeLevelConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenConfig.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenConfig::*)()>(&::GlobalNamespace::GhostReactorLevelGenConfig::OnValidate)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5847e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenConfig*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorLevelGenConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorLevelGenConfig::*)()>(&::GlobalNamespace::GhostReactorLevelGenConfig::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x58482ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_shiftDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftDuration;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_shiftDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftDuration;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_shiftDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftDuration = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_coresRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresRequired;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_coresRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coresRequired;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_coresRequired(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coresRequired = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_shiftBonus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftBonus;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_shiftBonus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftBonus;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_shiftBonus(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftBonus = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_sentientCoresRequired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentientCoresRequired;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_sentientCoresRequired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentientCoresRequired;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_sentientCoresRequired(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sentientCoresRequired = value;
}
constexpr int32_t& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_maxPlayerDeaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayerDeaths;
}
constexpr int32_t const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_maxPlayerDeaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayerDeaths;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_maxPlayerDeaths(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPlayerDeaths = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_minEnemyKills()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minEnemyKills;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>* const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_minEnemyKills() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minEnemyKills;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_minEnemyKills(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minEnemyKills = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_ambientLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientLight;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_ambientLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ambientLight;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_ambientLight(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ambientLight = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_treeLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeLevels;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_treeLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___treeLevels;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_treeLevels(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___treeLevels = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_enemyGlobalBonuses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyGlobalBonuses;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>* const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_enemyGlobalBonuses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyGlobalBonuses;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_enemyGlobalBonuses(::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemyGlobalBonuses = value;
}
constexpr ::UnityW<::GlobalNamespace::GRDropTableOverrides>& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_dropTableOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropTableOverrides;
}
constexpr ::UnityW<::GlobalNamespace::GRDropTableOverrides> const& GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_get_dropTableOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropTableOverrides;
}
constexpr void GlobalNamespace::GhostReactorLevelGenConfig::__cordl_internal_set_dropTableOverrides(::UnityW<::GlobalNamespace::GRDropTableOverrides>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropTableOverrides = value;
}
inline void GlobalNamespace::GhostReactorLevelGenConfig::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenConfig*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactorLevelGenConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorLevelGenConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorLevelGenConfig* GlobalNamespace::GhostReactorLevelGenConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorLevelGenConfig*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorLevelGenConfig::GhostReactorLevelGenConfig()   {
}
