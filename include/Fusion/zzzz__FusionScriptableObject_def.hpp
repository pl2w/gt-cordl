#pragma once
// IWYU pragma private; include "Fusion/FusionScriptableObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(FusionScriptableObject)
// Forward declare root types
namespace Fusion {
class FusionScriptableObject;
}
// Write type traits
MARK_REF_T(::Fusion::FusionScriptableObject*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionScriptableObject*, "Fusion", "FusionScriptableObject");
// Dependencies UnityEngine.ScriptableObject
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionScriptableObject
class CORDL_TYPE FusionScriptableObject : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::Fusion::FusionScriptableObject* New_ctor() ;

/// @brief Method .ctor, addr 0x5f3e1dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionScriptableObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionScriptableObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionScriptableObject(FusionScriptableObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionScriptableObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionScriptableObject(FusionScriptableObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31302};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionScriptableObject) == 0x18, "Size mismatch!");

} // namespace end def Fusion
