#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/MTAssetsMathematics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MTAssetsMathematics)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace MTAssets::EasyMeshCombiner {
class MTAssetsMathematics;
}
// Write type traits
MARK_REF_T(::MTAssets::EasyMeshCombiner::MTAssetsMathematics*);
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::MTAssetsMathematics*, "MTAssets.EasyMeshCombiner", "MTAssetsMathematics");
// [AddComponentMenu("")]
// Dependencies UnityEngine.MonoBehaviour
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.MTAssetsMathematics
class CORDL_TYPE MTAssetsMathematics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Method GetHalfPositionBetweenTwoPoints, addr 0x5cb9bec, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetHalfPositionBetweenTwoPoints(::UnityEngine::Vector3  pointA, ::UnityEngine::Vector3  pointB) ;

static inline ::MTAssets::EasyMeshCombiner::MTAssetsMathematics* New_ctor() ;

/// @brief Method RandomizeThisList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::List_1<T>* RandomizeThisList(::System::Collections::Generic::List_1<T>*  list) ;

/// @brief Method .ctor, addr 0x5cb9c18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MTAssetsMathematics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MTAssetsMathematics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MTAssetsMathematics(MTAssetsMathematics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MTAssetsMathematics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MTAssetsMathematics(MTAssetsMathematics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MTAssets::EasyMeshCombiner::MTAssetsMathematics) == 0x20, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner
