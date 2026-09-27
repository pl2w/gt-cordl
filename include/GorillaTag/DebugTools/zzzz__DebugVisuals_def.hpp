#pragma once
// IWYU pragma private; include "GorillaTag/DebugTools/DebugVisuals.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DebugVisuals)
// Forward declare root types
namespace GorillaTag::DebugTools {
class DebugVisuals;
}
// Write type traits
MARK_REF_T(::GorillaTag::DebugTools::DebugVisuals*);
DEFINE_IL2CPP_CLASS(::GorillaTag::DebugTools::DebugVisuals*, "GorillaTag.DebugTools", "DebugVisuals");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::DebugTools {
// Is value type: false
// CS Name: GorillaTag.DebugTools.DebugVisuals
class CORDL_TYPE DebugVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GorillaTag::DebugTools::DebugVisuals* New_ctor() ;

/// @brief Method .ctor, addr 0x5d45a78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugVisuals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugVisuals", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugVisuals(DebugVisuals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugVisuals", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugVisuals(DebugVisuals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4736};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::DebugTools::DebugVisuals) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::DebugTools
