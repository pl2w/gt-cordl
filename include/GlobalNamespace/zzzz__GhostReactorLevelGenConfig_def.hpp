#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorLevelGenConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorLevelGenConfig)
namespace GlobalNamespace {
class GRBonusEntry;
}
namespace GlobalNamespace {
class GRDropTableOverrides;
}
namespace GlobalNamespace {
struct GREnemyCount;
}
namespace GlobalNamespace {
struct GhostReactorLevelGeneratorV2_TreeLevelConfig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GhostReactorLevelGenConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostReactorLevelGenConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorLevelGenConfig*, "", "GhostReactorLevelGenConfig");
// [CreateAssetMenu(fileName = "GhostReactorLevelGenConfig", menuName = "ScriptableObjects/GhostReactorLevelGenConfig")]
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostReactorLevelGenConfig
class CORDL_TYPE GhostReactorLevelGenConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field ambientLight, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_ambientLight, put=__cordl_internal_set_ambientLight)) ::UnityEngine::Color  ambientLight;

/// @brief Field coresRequired, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_coresRequired, put=__cordl_internal_set_coresRequired)) int32_t  coresRequired;

/// @brief Field dropTableOverrides, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_dropTableOverrides, put=__cordl_internal_set_dropTableOverrides)) ::UnityW<::GlobalNamespace::GRDropTableOverrides>  dropTableOverrides;

/// @brief Field enemyGlobalBonuses, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_enemyGlobalBonuses, put=__cordl_internal_set_enemyGlobalBonuses)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*  enemyGlobalBonuses;

/// @brief Field maxPlayerDeaths, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPlayerDeaths, put=__cordl_internal_set_maxPlayerDeaths)) int32_t  maxPlayerDeaths;

/// @brief Field minEnemyKills, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_minEnemyKills, put=__cordl_internal_set_minEnemyKills)) ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*  minEnemyKills;

/// @brief Field sentientCoresRequired, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_sentientCoresRequired, put=__cordl_internal_set_sentientCoresRequired)) int32_t  sentientCoresRequired;

/// @brief Field shiftBonus, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftBonus, put=__cordl_internal_set_shiftBonus)) int32_t  shiftBonus;

/// @brief Field shiftDuration, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftDuration, put=__cordl_internal_set_shiftDuration)) int32_t  shiftDuration;

/// @brief Field treeLevels, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeLevels, put=__cordl_internal_set_treeLevels)) ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*  treeLevels;

static inline ::GlobalNamespace::GhostReactorLevelGenConfig* New_ctor() ;

/// @brief Method OnValidate, addr 0x5847e7c, size 0x430, virtual false, abstract: false, final false
inline void OnValidate() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_ambientLight() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_ambientLight() ;

constexpr int32_t const& __cordl_internal_get_coresRequired() const;

constexpr int32_t& __cordl_internal_get_coresRequired() ;

constexpr ::UnityW<::GlobalNamespace::GRDropTableOverrides> const& __cordl_internal_get_dropTableOverrides() const;

constexpr ::UnityW<::GlobalNamespace::GRDropTableOverrides>& __cordl_internal_get_dropTableOverrides() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>* const& __cordl_internal_get_enemyGlobalBonuses() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*& __cordl_internal_get_enemyGlobalBonuses() ;

constexpr int32_t const& __cordl_internal_get_maxPlayerDeaths() const;

constexpr int32_t& __cordl_internal_get_maxPlayerDeaths() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>* const& __cordl_internal_get_minEnemyKills() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*& __cordl_internal_get_minEnemyKills() ;

constexpr int32_t const& __cordl_internal_get_sentientCoresRequired() const;

constexpr int32_t& __cordl_internal_get_sentientCoresRequired() ;

constexpr int32_t const& __cordl_internal_get_shiftBonus() const;

constexpr int32_t& __cordl_internal_get_shiftBonus() ;

constexpr int32_t const& __cordl_internal_get_shiftDuration() const;

constexpr int32_t& __cordl_internal_get_shiftDuration() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>* const& __cordl_internal_get_treeLevels() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*& __cordl_internal_get_treeLevels() ;

constexpr void __cordl_internal_set_ambientLight(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_coresRequired(int32_t  value) ;

constexpr void __cordl_internal_set_dropTableOverrides(::UnityW<::GlobalNamespace::GRDropTableOverrides>  value) ;

constexpr void __cordl_internal_set_enemyGlobalBonuses(::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*  value) ;

constexpr void __cordl_internal_set_maxPlayerDeaths(int32_t  value) ;

constexpr void __cordl_internal_set_minEnemyKills(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*  value) ;

constexpr void __cordl_internal_set_sentientCoresRequired(int32_t  value) ;

constexpr void __cordl_internal_set_shiftBonus(int32_t  value) ;

constexpr void __cordl_internal_set_shiftDuration(int32_t  value) ;

constexpr void __cordl_internal_set_treeLevels(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*  value) ;

/// @brief Method .ctor, addr 0x58482ac, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorLevelGenConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelGenConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorLevelGenConfig(GhostReactorLevelGenConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorLevelGenConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorLevelGenConfig(GhostReactorLevelGenConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1809};

/// @brief Field shiftDuration, offset: 0x18, size: 0x4, def value: None
 int32_t  ___shiftDuration;

/// @brief Field coresRequired, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___coresRequired;

/// @brief Field shiftBonus, offset: 0x20, size: 0x4, def value: None
 int32_t  ___shiftBonus;

/// @brief Field sentientCoresRequired, offset: 0x24, size: 0x4, def value: None
 int32_t  ___sentientCoresRequired;

/// @brief Field maxPlayerDeaths, offset: 0x28, size: 0x4, def value: None
 int32_t  ___maxPlayerDeaths;

/// @brief Field minEnemyKills, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyCount>*  ___minEnemyKills;

/// [ColorUsage(true, true)]
/// @brief Field ambientLight, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___ambientLight;

/// @brief Field treeLevels, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactorLevelGeneratorV2_TreeLevelConfig>*  ___treeLevels;

/// @brief Field enemyGlobalBonuses, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRBonusEntry*>*  ___enemyGlobalBonuses;

/// @brief Field dropTableOverrides, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRDropTableOverrides>  ___dropTableOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___shiftDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___coresRequired) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___shiftBonus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___sentientCoresRequired) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___maxPlayerDeaths) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___minEnemyKills) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___ambientLight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___treeLevels) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___enemyGlobalBonuses) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorLevelGenConfig, ___dropTableOverrides) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorLevelGenConfig) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
