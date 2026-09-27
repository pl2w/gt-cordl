#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterDespawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CritterDespawner)
// Forward declare root types
namespace GlobalNamespace {
class CritterDespawner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CritterDespawner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterDespawner*, "", "CritterDespawner");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CritterDespawner
class CORDL_TYPE CritterDespawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method DespawnAllCritters, addr 0x55f04bc, size 0x5c, virtual false, abstract: false, final false
inline void DespawnAllCritters() ;

static inline ::GlobalNamespace::CritterDespawner* New_ctor() ;

/// @brief Method .ctor, addr 0x55f0518, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CritterDespawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CritterDespawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CritterDespawner(CritterDespawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CritterDespawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CritterDespawner(CritterDespawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{68};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CritterDespawner) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
