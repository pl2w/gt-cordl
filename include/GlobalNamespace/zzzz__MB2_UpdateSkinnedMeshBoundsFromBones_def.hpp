#pragma once
// IWYU pragma private; include "GlobalNamespace/MB2_UpdateSkinnedMeshBoundsFromBones.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(MB2_UpdateSkinnedMeshBoundsFromBones)
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class MB2_UpdateSkinnedMeshBoundsFromBones;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones*, "", "MB2_UpdateSkinnedMeshBoundsFromBones");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB2_UpdateSkinnedMeshBoundsFromBones
class CORDL_TYPE MB2_UpdateSkinnedMeshBoundsFromBones : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bones, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bones, put=__cordl_internal_set_bones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  bones;

/// @brief Field smr, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_smr, put=__cordl_internal_set_smr)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  smr;

static inline ::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones* New_ctor() ;

/// @brief Method Start, addr 0x9d74abc, size 0x154, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x9d74c10, size 0x78, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_bones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_bones() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_smr() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_smr() ;

constexpr void __cordl_internal_set_bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_smr(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x9d74e84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB2_UpdateSkinnedMeshBoundsFromBones() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB2_UpdateSkinnedMeshBoundsFromBones", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB2_UpdateSkinnedMeshBoundsFromBones(MB2_UpdateSkinnedMeshBoundsFromBones && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB2_UpdateSkinnedMeshBoundsFromBones", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB2_UpdateSkinnedMeshBoundsFromBones(MB2_UpdateSkinnedMeshBoundsFromBones const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22563};

/// @brief Field smr, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___smr;

/// @brief Field bones, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___bones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones, ___smr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones, ___bones) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB2_UpdateSkinnedMeshBoundsFromBones) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
