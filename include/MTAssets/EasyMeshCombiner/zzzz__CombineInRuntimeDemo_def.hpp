#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/CombineInRuntimeDemo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CombineInRuntimeDemo)
namespace MTAssets::EasyMeshCombiner {
class RuntimeMeshCombiner;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace MTAssets::EasyMeshCombiner {
class CombineInRuntimeDemo;
}
// Write type traits
MARK_REF_T(::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*);
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo*, "MTAssets.EasyMeshCombiner", "CombineInRuntimeDemo");
// Dependencies UnityEngine.MonoBehaviour
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.CombineInRuntimeDemo
class CORDL_TYPE CombineInRuntimeDemo : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field combineButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_combineButton, put=__cordl_internal_set_combineButton)) ::UnityW<::UnityEngine::GameObject>  combineButton;

/// @brief Field runtimeCombiner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_runtimeCombiner, put=__cordl_internal_set_runtimeCombiner)) ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>  runtimeCombiner;

/// @brief Field undoButton, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_undoButton, put=__cordl_internal_set_undoButton)) ::UnityW<::UnityEngine::GameObject>  undoButton;

/// @brief Method CombineMeshes, addr 0x5cb7d98, size 0x14, virtual false, abstract: false, final false
inline void CombineMeshes() ;

static inline ::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo* New_ctor() ;

/// @brief Method UndoMerge, addr 0x5cb93ac, size 0x14, virtual false, abstract: false, final false
inline void UndoMerge() ;

/// @brief Method Update, addr 0x5cb7d10, size 0x88, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_combineButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_combineButton() ;

constexpr ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner> const& __cordl_internal_get_runtimeCombiner() const;

constexpr ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>& __cordl_internal_get_runtimeCombiner() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_undoButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_undoButton() ;

constexpr void __cordl_internal_set_combineButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_runtimeCombiner(::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>  value) ;

constexpr void __cordl_internal_set_undoButton(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5cb9918, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CombineInRuntimeDemo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CombineInRuntimeDemo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CombineInRuntimeDemo(CombineInRuntimeDemo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CombineInRuntimeDemo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CombineInRuntimeDemo(CombineInRuntimeDemo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4457};

/// @brief Field combineButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___combineButton;

/// @brief Field undoButton, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___undoButton;

/// @brief Field runtimeCombiner, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::MTAssets::EasyMeshCombiner::RuntimeMeshCombiner>  ___runtimeCombiner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo, ___combineButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo, ___undoButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo, ___runtimeCombiner) == 0x30, "Offset mismatch!");

static_assert(sizeof(::MTAssets::EasyMeshCombiner::CombineInRuntimeDemo) == 0x38, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner
