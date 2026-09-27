#pragma once
// IWYU pragma private; include "GlobalNamespace/ForceRecalculateBounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(ForceRecalculateBounds)
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ForceRecalculateBounds;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ForceRecalculateBounds*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ForceRecalculateBounds*, "", "ForceRecalculateBounds");
// Dependencies MonoBehaviourTick, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ForceRecalculateBounds
class CORDL_TYPE ForceRecalculateBounds : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field bounds, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Vector3  bounds;

/// @brief Field mainCamera, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCamera, put=__cordl_internal_set_mainCamera)) ::UnityW<::UnityEngine::Transform>  mainCamera;

/// @brief Field skinnedMesh, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedMesh, put=__cordl_internal_set_skinnedMesh)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinnedMesh;

/// @brief Method Awake, addr 0x57121c8, size 0xd4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::ForceRecalculateBounds* New_ctor() ;

/// @brief Method Tick, addr 0x571229c, size 0x120, virtual true, abstract: false, final false
inline void Tick() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bounds() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mainCamera() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mainCamera() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_skinnedMesh() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_skinnedMesh() ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_skinnedMesh(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x57123bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ForceRecalculateBounds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ForceRecalculateBounds", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ForceRecalculateBounds(ForceRecalculateBounds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ForceRecalculateBounds", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ForceRecalculateBounds(ForceRecalculateBounds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1179};

/// @brief Field skinnedMesh, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___skinnedMesh;

/// @brief Field mainCamera, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___mainCamera;

/// @brief Field bounds, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ForceRecalculateBounds, ___skinnedMesh) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceRecalculateBounds, ___mainCamera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ForceRecalculateBounds, ___bounds) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ForceRecalculateBounds) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
