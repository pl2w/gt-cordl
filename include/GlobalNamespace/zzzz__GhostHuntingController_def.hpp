#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostHuntingController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GhostHuntingController)
// Forward declare root types
namespace GlobalNamespace {
class GhostHuntingController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GhostHuntingController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostHuntingController*, "", "GhostHuntingController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GhostHuntingController
class CORDL_TYPE GhostHuntingController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GhostHuntingController* New_ctor() ;

/// @brief Method Start, addr 0x5d0a1dc, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5d0a1e0, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method .ctor, addr 0x5d0a1e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostHuntingController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostHuntingController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostHuntingController(GhostHuntingController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostHuntingController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostHuntingController(GhostHuntingController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{455};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GhostHuntingController) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
