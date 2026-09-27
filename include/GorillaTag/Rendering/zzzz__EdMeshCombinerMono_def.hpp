#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/EdMeshCombinerMono.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EdMeshCombinerMono)
// Forward declare root types
namespace GorillaTag::Rendering {
class EdMeshCombinerMono;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::EdMeshCombinerMono*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::EdMeshCombinerMono*, "GorillaTag.Rendering", "EdMeshCombinerMono");
// [DefaultExecutionOrder(-2147482648)]
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.EdMeshCombinerMono
class CORDL_TYPE EdMeshCombinerMono : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method Awake, addr 0x5d55874, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Rendering::EdMeshCombinerMono* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d558cc, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method .ctor, addr 0x5d558d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EdMeshCombinerMono() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinerMono", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EdMeshCombinerMono(EdMeshCombinerMono && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EdMeshCombinerMono", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EdMeshCombinerMono(EdMeshCombinerMono const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4803};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::Rendering::EdMeshCombinerMono) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
