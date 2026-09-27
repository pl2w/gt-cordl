#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterExplosion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SIBlasterExplosion)
// Forward declare root types
namespace GlobalNamespace {
class SIBlasterExplosion;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIBlasterExplosion*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIBlasterExplosion*, "", "SIBlasterExplosion");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIBlasterExplosion
class CORDL_TYPE SIBlasterExplosion : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::SIBlasterExplosion* New_ctor() ;

/// @brief Method OnDisable, addr 0x57f6f30, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method .ctor, addr 0x57f7068, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIBlasterExplosion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterExplosion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIBlasterExplosion(SIBlasterExplosion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterExplosion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIBlasterExplosion(SIBlasterExplosion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{216};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::SIBlasterExplosion) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
