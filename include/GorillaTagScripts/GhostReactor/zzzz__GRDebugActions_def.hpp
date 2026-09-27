#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRDebugActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRDebugActions)
// Forward declare root types
namespace GorillaTagScripts::GhostReactor {
class GRDebugActions;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::GRDebugActions*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::GRDebugActions*, "GorillaTagScripts.GhostReactor", "GRDebugActions");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::GhostReactor {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.GRDebugActions
class CORDL_TYPE GRDebugActions : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field giveScripAmount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_giveScripAmount, put=__cordl_internal_set_giveScripAmount)) int32_t  giveScripAmount;

static inline ::GorillaTagScripts::GhostReactor::GRDebugActions* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_giveScripAmount() const;

constexpr int32_t& __cordl_internal_get_giveScripAmount() ;

constexpr void __cordl_internal_set_giveScripAmount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5c192dc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDebugActions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDebugActions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDebugActions(GRDebugActions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDebugActions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDebugActions(GRDebugActions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4122};

/// @brief Field giveScripAmount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___giveScripAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::GRDebugActions, ___giveScripAmount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::GRDebugActions) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor
