#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBreakableItemSpawnConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRBreakableItemSpawnConfig)
namespace GlobalNamespace {
struct GRBreakableItemSpawnConfig_ItemProbability;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
struct SRand;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GRBreakableItemSpawnConfig;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBreakableItemSpawnConfig*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBreakableItemSpawnConfig*, "", "GRBreakableItemSpawnConfig");
// [CreateAssetMenu(fileName = "GhostReactorBreakableItemSpawnConfig", menuName = "ScriptableObjects/GhostReactorBreakableItemSpawnConfig")]
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBreakableItemSpawnConfig
class CORDL_TYPE GRBreakableItemSpawnConfig : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ItemProbability = ::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability;

/// @brief Field perItemProbabilities, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_perItemProbabilities, put=__cordl_internal_set_perItemProbabilities)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>*  perItemProbabilities;

/// @brief Field precomputedItemTotalWeight, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_precomputedItemTotalWeight, put=__cordl_internal_set_precomputedItemTotalWeight)) float_t  precomputedItemTotalWeight;

/// @brief Field spawnAnythingProbability, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnAnythingProbability, put=__cordl_internal_set_spawnAnythingProbability)) float_t  spawnAnythingProbability;

/// @brief Method GetOverride, addr 0x5874334, size 0xcc, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> GetOverride(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method GetOverride, addr 0x58745f8, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> GetOverride(::GlobalNamespace::GhostReactor*  reactor) ;

static inline ::GlobalNamespace::GRBreakableItemSpawnConfig* New_ctor() ;

/// @brief Method OnValidate, addr 0x58746f8, size 0x9c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method TryForRandomItem, addr 0x5874400, size 0x1f8, virtual false, abstract: false, final false
inline bool TryForRandomItem(::GlobalNamespace::GhostReactor*  reactor, ::by_ref<::GlobalNamespace::SRand>  srand, ::by_ref<::GlobalNamespace::GameEntity*>  entity, int32_t  sanity) ;

/// @brief Method TryForRandomItem, addr 0x5869e54, size 0x1ec, virtual false, abstract: false, final false
inline bool TryForRandomItem(::GlobalNamespace::GameEntity*  spawnFromEntity, ::by_ref<::GlobalNamespace::GameEntity*>  entity, int32_t  sanity) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>* const& __cordl_internal_get_perItemProbabilities() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>*& __cordl_internal_get_perItemProbabilities() ;

constexpr float_t const& __cordl_internal_get_precomputedItemTotalWeight() const;

constexpr float_t& __cordl_internal_get_precomputedItemTotalWeight() ;

constexpr float_t const& __cordl_internal_get_spawnAnythingProbability() const;

constexpr float_t& __cordl_internal_get_spawnAnythingProbability() ;

constexpr void __cordl_internal_set_perItemProbabilities(::System::Collections::Generic::List_1<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>*  value) ;

constexpr void __cordl_internal_set_precomputedItemTotalWeight(float_t  value) ;

constexpr void __cordl_internal_set_spawnAnythingProbability(float_t  value) ;

/// @brief Method .ctor, addr 0x5874794, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBreakableItemSpawnConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBreakableItemSpawnConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBreakableItemSpawnConfig(GRBreakableItemSpawnConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBreakableItemSpawnConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBreakableItemSpawnConfig(GRBreakableItemSpawnConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1897};

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field spawnAnythingProbability, offset: 0x18, size: 0x4, def value: None
 float_t  ___spawnAnythingProbability;

/// @brief Field perItemProbabilities, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRBreakableItemSpawnConfig_ItemProbability>*  ___perItemProbabilities;

/// [SerializeField]
/// [ReadOnly]
/// @brief Field precomputedItemTotalWeight, offset: 0x28, size: 0x4, def value: None
 float_t  ___precomputedItemTotalWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRBreakableItemSpawnConfig, ___spawnAnythingProbability) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakableItemSpawnConfig, ___perItemProbabilities) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRBreakableItemSpawnConfig, ___precomputedItemTotalWeight) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRBreakableItemSpawnConfig) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
