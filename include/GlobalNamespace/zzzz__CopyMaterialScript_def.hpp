#pragma once
// IWYU pragma private; include "GlobalNamespace/CopyMaterialScript.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CopyMaterialScript)
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class CopyMaterialScript;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CopyMaterialScript*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CopyMaterialScript*, "", "CopyMaterialScript");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CopyMaterialScript
class CORDL_TYPE CopyMaterialScript : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field mySkinnedMeshRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mySkinnedMeshRenderer, put=__cordl_internal_set_mySkinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  mySkinnedMeshRenderer;

/// @brief Field sourceToCopyMaterialFrom, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceToCopyMaterialFrom, put=__cordl_internal_set_sourceToCopyMaterialFrom)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  sourceToCopyMaterialFrom;

static inline ::GlobalNamespace::CopyMaterialScript* New_ctor() ;

/// @brief Method Start, addr 0x5ac3634, size 0x88, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5ac36bc, size 0xc8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_mySkinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_mySkinnedMeshRenderer() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_sourceToCopyMaterialFrom() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_sourceToCopyMaterialFrom() ;

constexpr void __cordl_internal_set_mySkinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_sourceToCopyMaterialFrom(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x5ac3784, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CopyMaterialScript() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CopyMaterialScript", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CopyMaterialScript(CopyMaterialScript && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CopyMaterialScript", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CopyMaterialScript(CopyMaterialScript const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3357};

/// @brief Field sourceToCopyMaterialFrom, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___sourceToCopyMaterialFrom;

/// @brief Field mySkinnedMeshRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___mySkinnedMeshRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CopyMaterialScript, ___sourceToCopyMaterialFrom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CopyMaterialScript, ___mySkinnedMeshRenderer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CopyMaterialScript) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
