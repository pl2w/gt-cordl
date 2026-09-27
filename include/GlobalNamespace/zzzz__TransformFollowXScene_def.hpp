#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformFollowXScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__XSceneRef_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(TransformFollowXScene)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformFollowXScene;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransformFollowXScene*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformFollowXScene*, "", "TransformFollowXScene");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3, XSceneRef
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformFollowXScene
class CORDL_TYPE TransformFollowXScene : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field offset, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field prevPos, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_prevPos, put=__cordl_internal_set_prevPos)) ::UnityEngine::Vector3  prevPos;

/// @brief Field refToFollow, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_refToFollow, put=__cordl_internal_set_refToFollow)) ::GlobalNamespace::XSceneRef  refToFollow;

/// @brief Field transformToFollow, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformToFollow, put=__cordl_internal_set_transformToFollow)) ::UnityW<::UnityEngine::Transform>  transformToFollow;

/// @brief Method Awake, addr 0x598fcd8, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x598fd54, size 0xe4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::TransformFollowXScene* New_ctor() ;

/// @brief Method Start, addr 0x598fd08, size 0x4c, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_prevPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_prevPos() ;

constexpr ::GlobalNamespace::XSceneRef const& __cordl_internal_get_refToFollow() const;

constexpr ::GlobalNamespace::XSceneRef& __cordl_internal_get_refToFollow() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transformToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transformToFollow() ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_prevPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_refToFollow(::GlobalNamespace::XSceneRef  value) ;

constexpr void __cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x598fe38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFollowXScene() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFollowXScene", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFollowXScene(TransformFollowXScene && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFollowXScene", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFollowXScene(TransformFollowXScene const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2576};

/// @brief Field refToFollow, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::XSceneRef  ___refToFollow;

/// @brief Field transformToFollow, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transformToFollow;

/// @brief Field offset, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// @brief Field prevPos, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___prevPos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformFollowXScene, ___refToFollow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFollowXScene, ___transformToFollow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFollowXScene, ___offset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFollowXScene, ___prevPos) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformFollowXScene) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
