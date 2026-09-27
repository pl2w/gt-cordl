#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_ExampleSkinnedMeshDescription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MB_ExampleSkinnedMeshDescription)
// Forward declare root types
namespace GlobalNamespace {
class MB_ExampleSkinnedMeshDescription;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_ExampleSkinnedMeshDescription*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_ExampleSkinnedMeshDescription*, "", "MB_ExampleSkinnedMeshDescription");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_ExampleSkinnedMeshDescription
class CORDL_TYPE MB_ExampleSkinnedMeshDescription : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::MB_ExampleSkinnedMeshDescription* New_ctor() ;

/// @brief Method OnGUI, addr 0x9dfd830, size 0xb0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method .ctor, addr 0x9dfd8e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_ExampleSkinnedMeshDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_ExampleSkinnedMeshDescription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_ExampleSkinnedMeshDescription(MB_ExampleSkinnedMeshDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_ExampleSkinnedMeshDescription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_ExampleSkinnedMeshDescription(MB_ExampleSkinnedMeshDescription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32363};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MB_ExampleSkinnedMeshDescription) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
