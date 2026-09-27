#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdDoNotMeshCombine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EdDoNotMeshCombine)
// Forward declare root types
namespace GorillaTag::Rendering {
class EdDoNotMeshCombine;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::EdDoNotMeshCombine*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::EdDoNotMeshCombine*, "GorillaTag.Rendering", "EdDoNotMeshCombine");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.EdDoNotMeshCombine
class CORDL_TYPE EdDoNotMeshCombine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5d55814, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Rendering::EdDoNotMeshCombine* New_ctor() ;

/// @brief Method .ctor, addr 0x5d5586c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdDoNotMeshCombine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdDoNotMeshCombine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdDoNotMeshCombine(EdDoNotMeshCombine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdDoNotMeshCombine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdDoNotMeshCombine(EdDoNotMeshCombine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4802};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Rendering::EdDoNotMeshCombine) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
