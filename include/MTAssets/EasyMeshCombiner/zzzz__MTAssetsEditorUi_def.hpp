#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/MTAssetsEditorUi.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MTAssetsEditorUi)
// Forward declare root types
namespace MTAssets::EasyMeshCombiner {
class MTAssetsEditorUi;
}
// Write type traits
MARK_REF_T(::MTAssets::EasyMeshCombiner::MTAssetsEditorUi*);
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::MTAssetsEditorUi*, "MTAssets.EasyMeshCombiner", "MTAssetsEditorUi");
// [AddComponentMenu("")]
// Dependencies UnityEngine.MonoBehaviour
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.MTAssetsEditorUi
class CORDL_TYPE MTAssetsEditorUi : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::MTAssets::EasyMeshCombiner::MTAssetsEditorUi* New_ctor() ;

/// @brief Method .ctor, addr 0x5cb9be4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MTAssetsEditorUi() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MTAssetsEditorUi", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MTAssetsEditorUi(MTAssetsEditorUi && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MTAssetsEditorUi", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MTAssetsEditorUi(MTAssetsEditorUi const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4459};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MTAssets::EasyMeshCombiner::MTAssetsEditorUi) == 0x20, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner
