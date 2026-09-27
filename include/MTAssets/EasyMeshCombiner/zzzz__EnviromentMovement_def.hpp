#pragma once
// IWYU pragma private; include "MTAssets/EasyMeshCombiner/EnviromentMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(EnviromentMovement)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace MTAssets::EasyMeshCombiner {
class EnviromentMovement;
}
// Write type traits
MARK_REF_T(::MTAssets::EasyMeshCombiner::EnviromentMovement*);
DEFINE_IL2CPP_CLASS(::MTAssets::EasyMeshCombiner::EnviromentMovement*, "MTAssets.EasyMeshCombiner", "EnviromentMovement");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace MTAssets::EasyMeshCombiner {
// Is value type: false
// CS Name: MTAssets.EasyMeshCombiner.EnviromentMovement
class CORDL_TYPE EnviromentMovement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field nextPosition, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_nextPosition, put=__cordl_internal_set_nextPosition)) ::UnityEngine::Vector3  nextPosition;

/// @brief Field pos1, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_pos1, put=__cordl_internal_set_pos1)) ::UnityEngine::Vector3  pos1;

/// @brief Field pos2, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_pos2, put=__cordl_internal_set_pos2)) ::UnityEngine::Vector3  pos2;

/// @brief Field thisTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_thisTransform, put=__cordl_internal_set_thisTransform)) ::UnityW<::UnityEngine::Transform>  thisTransform;

static inline ::MTAssets::EasyMeshCombiner::EnviromentMovement* New_ctor() ;

/// @brief Method Start, addr 0x5cb9920, size 0x7c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5cb999c, size 0x1e8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_nextPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_nextPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos1() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos1() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pos2() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pos2() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_thisTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_thisTransform() ;

constexpr void __cordl_internal_set_nextPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pos1(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pos2(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_thisTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5cb9b84, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnviromentMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnviromentMovement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnviromentMovement(EnviromentMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnviromentMovement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnviromentMovement(EnviromentMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4458};

/// @brief Field nextPosition, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___nextPosition;

/// @brief Field thisTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___thisTransform;

/// @brief Field pos1, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pos1;

/// @brief Field pos2, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pos2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MTAssets::EasyMeshCombiner::EnviromentMovement, ___nextPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::EnviromentMovement, ___thisTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::EnviromentMovement, ___pos1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MTAssets::EasyMeshCombiner::EnviromentMovement, ___pos2) == 0x44, "Offset mismatch!");

static_assert(sizeof(::MTAssets::EasyMeshCombiner::EnviromentMovement) == 0x50, "Size mismatch!");

} // namespace end def MTAssets::EasyMeshCombiner
