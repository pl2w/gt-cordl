#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRGameObjectExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GRGameObjectExtensions)
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::GhostReactor {
class GRGameObjectExtensions;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRGameObjectExtensions*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRGameObjectExtensions*, "GorillaTagScripts.GhostReactor", "GRGameObjectExtensions");
// [Extension]
// Dependencies System.Object
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRGameObjectExtensions
class CORDL_TYPE GRGameObjectExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetToolType, addr 0x5c199b0, size 0x2f4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GRTool_GRToolType GetToolType(::UnityEngine::GameObject*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRGameObjectExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRGameObjectExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRGameObjectExtensions(GRGameObjectExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRGameObjectExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRGameObjectExtensions(GRGameObjectExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRGameObjectExtensions) == 0x10, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
