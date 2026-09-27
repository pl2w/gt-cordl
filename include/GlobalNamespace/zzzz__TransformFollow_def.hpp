#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformFollow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(TransformFollow)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformFollow;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransformFollow*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformFollow*, "", "TransformFollow");
// [DefaultExecutionOrder(100)]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformFollow
class CORDL_TYPE TransformFollow : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field forRigRecording, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_forRigRecording, put=__cordl_internal_set_forRigRecording)) bool  forRigRecording;

/// @brief Field offset, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field parentFollow, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentFollow, put=__cordl_internal_set_parentFollow)) ::UnityW<::GlobalNamespace::TransformFollow>  parentFollow;

/// @brief Field prevPos, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_prevPos, put=__cordl_internal_set_prevPos)) ::UnityEngine::Vector3  prevPos;

/// @brief Field rotationOnly, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_rotationOnly, put=__cordl_internal_set_rotationOnly)) bool  rotationOnly;

/// @brief Field transformToFollow, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformToFollow, put=__cordl_internal_set_transformToFollow)) ::UnityW<::UnityEngine::Transform>  transformToFollow;

/// @brief Method Awake, addr 0x598f974, size 0x16c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x598fae0, size 0x1f0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::TransformFollow* New_ctor() ;

constexpr bool const& __cordl_internal_get_forRigRecording() const;

constexpr bool& __cordl_internal_get_forRigRecording() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr ::UnityW<::GlobalNamespace::TransformFollow> const& __cordl_internal_get_parentFollow() const;

constexpr ::UnityW<::GlobalNamespace::TransformFollow>& __cordl_internal_get_parentFollow() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_prevPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_prevPos() ;

constexpr bool const& __cordl_internal_get_rotationOnly() const;

constexpr bool& __cordl_internal_get_rotationOnly() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transformToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transformToFollow() ;

constexpr void __cordl_internal_set_forRigRecording(bool  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_parentFollow(::UnityW<::GlobalNamespace::TransformFollow>  value) ;

constexpr void __cordl_internal_set_prevPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotationOnly(bool  value) ;

constexpr void __cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x598fcd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFollow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFollow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFollow(TransformFollow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFollow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFollow(TransformFollow const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2575};

/// @brief Field transformToFollow, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transformToFollow;

/// @brief Field offset, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// @brief Field prevPos, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___prevPos;

/// @brief Field rotationOnly, offset: 0x40, size: 0x1, def value: None
 bool  ___rotationOnly;

/// @brief Field forRigRecording, offset: 0x41, size: 0x1, def value: None
 bool  ___forRigRecording;

/// @brief Field parentFollow, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransformFollow>  ___parentFollow;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformFollow, ___transformToFollow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFollow, ___offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFollow, ___prevPos) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFollow, ___rotationOnly) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFollow, ___forRigRecording) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformFollow, ___parentFollow) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformFollow) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
