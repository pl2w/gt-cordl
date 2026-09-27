#pragma once
// IWYU pragma private; include "GlobalNamespace/EditorOnlyComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EditorOnlyComponent)
// Forward declare root types
namespace GlobalNamespace {
class EditorOnlyComponent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EditorOnlyComponent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EditorOnlyComponent*, "", "EditorOnlyComponent");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EditorOnlyComponent
class CORDL_TYPE EditorOnlyComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::EditorOnlyComponent* New_ctor() ;

/// @brief Method .ctor, addr 0x5a1ab78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorOnlyComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorOnlyComponent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorOnlyComponent(EditorOnlyComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorOnlyComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorOnlyComponent(EditorOnlyComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2800};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EditorOnlyComponent) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
