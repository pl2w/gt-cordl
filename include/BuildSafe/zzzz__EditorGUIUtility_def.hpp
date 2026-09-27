#pragma once
// IWYU pragma private; include "BuildSafe/EditorGUIUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EditorGUIUtility)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace BuildSafe {
class EditorGUIUtility;
}
// Write type traits
MARK_REF_T(::BuildSafe::EditorGUIUtility*);
DEFINE_IL2CPP_CLASS(::BuildSafe::EditorGUIUtility*, "BuildSafe", "EditorGUIUtility");
// Dependencies System.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.EditorGUIUtility
class CORDL_TYPE EditorGUIUtility : public ::System::Object {
public:
// Declarations
/// [Conditional("UNITY_EDITOR")]
/// @brief Method PingObject, addr 0x5c4ec88, size 0x4, virtual false, abstract: false, final false
static inline void PingObject(::UnityEngine::Object*  obj) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorGUIUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorGUIUtility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorGUIUtility(EditorGUIUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorGUIUtility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorGUIUtility(EditorGUIUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4248};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::EditorGUIUtility) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe
