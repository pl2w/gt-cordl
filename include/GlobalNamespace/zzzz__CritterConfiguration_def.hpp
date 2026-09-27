#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterConfiguration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CritterConfiguration_AnimalType_def.hpp"
#include "GlobalNamespace/zzzz__CrittersBiome_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CritterConfiguration)
namespace GlobalNamespace {
struct CritterAppearance;
}
namespace GlobalNamespace {
struct CritterConfiguration_AnimalType;
}
namespace GlobalNamespace {
class CritterSpawnCriteria;
}
namespace GlobalNamespace {
class CritterTemplate;
}
namespace GlobalNamespace {
class CritterVisuals;
}
namespace GlobalNamespace {
class CrittersPawn;
}
namespace GlobalNamespace {
class CrittersRegion;
}
namespace GlobalNamespace {
class RealWorldDateTimeWindow;
}
namespace System {
struct DateTime;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class CritterConfiguration;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CritterConfiguration*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterConfiguration*, "", "CritterConfiguration");
// Dependencies CritterConfiguration::AnimalType, CrittersBiome, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CritterConfiguration
class CORDL_TYPE CritterConfiguration : public ::System::Object {
public:
// Declarations
using AnimalType = ::GlobalNamespace::CritterConfiguration_AnimalType;

/// @brief Field animalType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_animalType, put=__cordl_internal_set_animalType)) ::GlobalNamespace::CritterConfiguration_AnimalType  animalType;

/// @brief Field behaviour, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_behaviour, put=__cordl_internal_set_behaviour)) ::UnityW<::GlobalNamespace::CritterTemplate>  behaviour;

/// @brief Field biome, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_biome, put=__cordl_internal_set_biome)) ::GlobalNamespace::CrittersBiome  biome;

/// @brief Field critterMat, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_critterMat, put=__cordl_internal_set_critterMat)) ::UnityW<::UnityEngine::Material>  critterMat;

/// @brief Field critterName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_critterName, put=__cordl_internal_set_critterName)) ::StringW  critterName;

/// @brief Field dateLimit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dateLimit, put=__cordl_internal_set_dateLimit)) ::UnityW<::GlobalNamespace::RealWorldDateTimeWindow>  dateLimit;

/// @brief Field internalDescription, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_internalDescription, put=__cordl_internal_set_internalDescription)) ::StringW  internalDescription;

/// @brief Field spawnCriteria, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnCriteria, put=__cordl_internal_set_spawnCriteria)) ::UnityW<::GlobalNamespace::CritterSpawnCriteria>  spawnCriteria;

/// @brief Field spawnWeight, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnWeight, put=__cordl_internal_set_spawnWeight)) float_t  spawnWeight;

/// @brief Method ApplyToCreature, addr 0x55f0800, size 0x8c, virtual false, abstract: false, final false
inline void ApplyToCreature(::GlobalNamespace::CrittersPawn*  crittersPawn) ;

/// @brief Method ApplyVisualsTo, addr 0x55f088c, size 0x18, virtual false, abstract: false, final false
inline void ApplyVisualsTo(::GlobalNamespace::CrittersPawn*  critter, bool  generateAppearance) ;

/// @brief Method ApplyVisualsTo, addr 0x55f08a4, size 0x8c, virtual false, abstract: false, final false
inline void ApplyVisualsTo(::GlobalNamespace::CritterVisuals*  visuals, bool  generateAppearance) ;

/// @brief Method CanSpawn, addr 0x55f0724, size 0x4, virtual false, abstract: false, final false
inline bool CanSpawn() ;

/// @brief Method CanSpawn, addr 0x55f0728, size 0x28, virtual false, abstract: false, final false
inline bool CanSpawn(::GlobalNamespace::CrittersRegion*  region) ;

/// @brief Method DateConditionsMet, addr 0x55f0750, size 0x98, virtual false, abstract: false, final false
inline bool DateConditionsMet(::System::DateTime  utcDate) ;

/// @brief Method GenerateAppearance, addr 0x55f09d8, size 0x1b8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CritterAppearance GenerateAppearance() ;

/// @brief Method GetIndex, addr 0x55f0590, size 0x84, virtual false, abstract: false, final false
inline int32_t GetIndex() ;

static inline ::GlobalNamespace::CritterConfiguration* New_ctor() ;

/// @brief Method RegionMatches, addr 0x55f0614, size 0x8c, virtual false, abstract: false, final false
inline bool RegionMatches(::GlobalNamespace::CrittersRegion*  region) ;

/// @brief Method ShouldDespawn, addr 0x55f07e8, size 0x18, virtual false, abstract: false, final false
inline bool ShouldDespawn() ;

/// @brief Method SpawnCriteriaMatches, addr 0x55f06a0, size 0x84, virtual false, abstract: false, final false
inline bool SpawnCriteriaMatches() ;

/// @brief Method ToString, addr 0x55f0b90, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::GlobalNamespace::CritterConfiguration_AnimalType const& __cordl_internal_get_animalType() const;

constexpr ::GlobalNamespace::CritterConfiguration_AnimalType& __cordl_internal_get_animalType() ;

constexpr ::UnityW<::GlobalNamespace::CritterTemplate> const& __cordl_internal_get_behaviour() const;

constexpr ::UnityW<::GlobalNamespace::CritterTemplate>& __cordl_internal_get_behaviour() ;

constexpr ::GlobalNamespace::CrittersBiome const& __cordl_internal_get_biome() const;

constexpr ::GlobalNamespace::CrittersBiome& __cordl_internal_get_biome() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_critterMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_critterMat() ;

constexpr ::StringW const& __cordl_internal_get_critterName() const;

constexpr ::StringW& __cordl_internal_get_critterName() ;

constexpr ::UnityW<::GlobalNamespace::RealWorldDateTimeWindow> const& __cordl_internal_get_dateLimit() const;

constexpr ::UnityW<::GlobalNamespace::RealWorldDateTimeWindow>& __cordl_internal_get_dateLimit() ;

constexpr ::StringW const& __cordl_internal_get_internalDescription() const;

constexpr ::StringW& __cordl_internal_get_internalDescription() ;

constexpr ::UnityW<::GlobalNamespace::CritterSpawnCriteria> const& __cordl_internal_get_spawnCriteria() const;

constexpr ::UnityW<::GlobalNamespace::CritterSpawnCriteria>& __cordl_internal_get_spawnCriteria() ;

constexpr float_t const& __cordl_internal_get_spawnWeight() const;

constexpr float_t& __cordl_internal_get_spawnWeight() ;

constexpr void __cordl_internal_set_animalType(::GlobalNamespace::CritterConfiguration_AnimalType  value) ;

constexpr void __cordl_internal_set_behaviour(::UnityW<::GlobalNamespace::CritterTemplate>  value) ;

constexpr void __cordl_internal_set_biome(::GlobalNamespace::CrittersBiome  value) ;

constexpr void __cordl_internal_set_critterMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_critterName(::StringW  value) ;

constexpr void __cordl_internal_set_dateLimit(::UnityW<::GlobalNamespace::RealWorldDateTimeWindow>  value) ;

constexpr void __cordl_internal_set_internalDescription(::StringW  value) ;

constexpr void __cordl_internal_set_spawnCriteria(::UnityW<::GlobalNamespace::CritterSpawnCriteria>  value) ;

constexpr void __cordl_internal_set_spawnWeight(float_t  value) ;

/// @brief Method .ctor, addr 0x55f0520, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CritterConfiguration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CritterConfiguration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CritterConfiguration(CritterConfiguration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CritterConfiguration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CritterConfiguration(CritterConfiguration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{70};

/// [Tooltip("Basic internal description of critter.  Could be role, purpose, player experience, etc.")]
/// @brief Field internalDescription, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___internalDescription;

/// @brief Field critterName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___critterName;

/// @brief Field animalType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CritterConfiguration_AnimalType  ___animalType;

/// @brief Field behaviour, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CritterTemplate>  ___behaviour;

/// @brief Field spawnCriteria, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CritterSpawnCriteria>  ___spawnCriteria;

/// @brief Field dateLimit, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RealWorldDateTimeWindow>  ___dateLimit;

/// @brief Field biome, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::CrittersBiome  ___biome;

/// @brief Field spawnWeight, offset: 0x44, size: 0x4, def value: None
 float_t  ___spawnWeight;

/// @brief Field critterMat, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___critterMat;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CritterConfiguration, ___internalDescription) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterConfiguration, ___critterName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterConfiguration, ___animalType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterConfiguration, ___behaviour) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterConfiguration, ___spawnCriteria) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterConfiguration, ___dateLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterConfiguration, ___biome) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterConfiguration, ___spawnWeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterConfiguration, ___critterMat) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CritterConfiguration) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
