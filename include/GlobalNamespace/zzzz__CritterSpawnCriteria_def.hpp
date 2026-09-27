#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterSpawnCriteria.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CritterSpawnCriteria)
// Forward declare root types
namespace GlobalNamespace {
class CritterSpawnCriteria;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CritterSpawnCriteria*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterSpawnCriteria*, "", "CritterSpawnCriteria");
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: CritterSpawnCriteria
class CORDL_TYPE CritterSpawnCriteria : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field spawnTimings, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnTimings, put=__cordl_internal_set_spawnTimings)) ::ArrayW<::StringW>  spawnTimings;

/// @brief Method CanSpawn, addr 0x56f29c8, size 0xe8, virtual false, abstract: false, final false
inline bool CanSpawn() ;

static inline ::GlobalNamespace::CritterSpawnCriteria* New_ctor() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_spawnTimings() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_spawnTimings() ;

constexpr void __cordl_internal_set_spawnTimings(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x56f2ab0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CritterSpawnCriteria() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CritterSpawnCriteria", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CritterSpawnCriteria(CritterSpawnCriteria && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CritterSpawnCriteria", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CritterSpawnCriteria(CritterSpawnCriteria const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{115};

/// @brief Field spawnTimings, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___spawnTimings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CritterSpawnCriteria, ___spawnTimings) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CritterSpawnCriteria) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
