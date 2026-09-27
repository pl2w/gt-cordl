#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/CombinedMeshesManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CombinedMeshesManager)
// Forward declare root types
namespace MTAssets::EasyMeshCombiner {
class CombinedMeshesManager;
}
// Write type traits
MARK_REF_T(::MTAssets::EasyMeshCombiner::CombinedMeshesManager*);
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::CombinedMeshesManager*, "MTAssets.EasyMeshCombiner", "CombinedMeshesManager");
// [AddComponentMenu("")]
// Dependencies UnityEngine.MonoBehaviour
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.CombinedMeshesManager
class CORDL_TYPE CombinedMeshesManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::MTAssets::EasyMeshCombiner::CombinedMeshesManager* New_ctor() ;

/// @brief Method .ctor, addr 0x5cb9c20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CombinedMeshesManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CombinedMeshesManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CombinedMeshesManager(CombinedMeshesManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CombinedMeshesManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CombinedMeshesManager(CombinedMeshesManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4462};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MTAssets::EasyMeshCombiner::CombinedMeshesManager) == 0x20, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner
