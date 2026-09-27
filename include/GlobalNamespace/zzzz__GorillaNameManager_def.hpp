#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaNameManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GorillaNameManager)
// Forward declare root types
namespace GlobalNamespace {
class GorillaNameManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaNameManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaNameManager*, "", "GorillaNameManager");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaNameManager
class CORDL_TYPE GorillaNameManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::GorillaNameManager* New_ctor() ;

/// @brief Method .ctor, addr 0x5998500, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaNameManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaNameManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaNameManager(GorillaNameManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaNameManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaNameManager(GorillaNameManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2605};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaNameManager) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
