#pragma once
// IWYU pragma private; include "BuildSafe/EditorOnlyScripts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(EditorOnlyScripts)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace BuildSafe {
class EditorOnlyScripts;
}
// Write type traits
MARK_REF_T(::BuildSafe::EditorOnlyScripts*);
DEFINE_IL2CPP_CLASS(::BuildSafe::EditorOnlyScripts*, "BuildSafe", "EditorOnlyScripts");
// Dependencies System.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.EditorOnlyScripts
class CORDL_TYPE EditorOnlyScripts : public ::System::Object {
public:
// Declarations
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Cleanup, addr 0x5c4ec94, size 0x4, virtual false, abstract: false, final false
static inline void Cleanup(::ArrayW<::UnityEngine::GameObject*>  rootObjects, bool  force) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorOnlyScripts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorOnlyScripts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorOnlyScripts(EditorOnlyScripts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorOnlyScripts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorOnlyScripts(EditorOnlyScripts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4250};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::EditorOnlyScripts) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
