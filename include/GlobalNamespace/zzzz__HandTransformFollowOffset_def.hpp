#pragma once
// IWYU pragma private; include "GlobalNamespace/HandTransformFollowOffset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(HandTransformFollowOffset)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HandTransformFollowOffset;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HandTransformFollowOffset*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandTransformFollowOffset*, "", "HandTransformFollowOffset");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HandTransformFollowOffset
class CORDL_TYPE HandTransformFollowOffset : public ::System::Object {
public:
// Declarations
/// @brief Field followTransform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_followTransform, put=__cordl_internal_set_followTransform)) ::UnityW<::UnityEngine::Transform>  followTransform;

/// @brief Field position, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field positionOffset, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_positionOffset, put=__cordl_internal_set_positionOffset)) ::UnityEngine::Vector3  positionOffset;

/// @brief Field rotation, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field rotationOffset, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotationOffset, put=__cordl_internal_set_rotationOffset)) ::UnityEngine::Quaternion  rotationOffset;

/// @brief Field targetTransforms, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetTransforms, put=__cordl_internal_set_targetTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  targetTransforms;

static inline ::GlobalNamespace::HandTransformFollowOffset* New_ctor() ;

/// @brief Method UpdatePositionRotation, addr 0x57e39a4, size 0x258, virtual false, abstract: false, final false
inline void UpdatePositionRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_followTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_followTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_positionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_positionOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotationOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotationOffset() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_targetTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_targetTransforms() ;

constexpr void __cordl_internal_set_followTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_positionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_targetTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x57e3bfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTransformFollowOffset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTransformFollowOffset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTransformFollowOffset(HandTransformFollowOffset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTransformFollowOffset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTransformFollowOffset(HandTransformFollowOffset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1654};

/// @brief Field followTransform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___followTransform;

/// [SerializeField]
/// @brief Field targetTransforms, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___targetTransforms;

/// [SerializeField]
/// @brief Field positionOffset, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___positionOffset;

/// [SerializeField]
/// @brief Field rotationOffset, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotationOffset;

/// @brief Field position, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

/// @brief Field rotation, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandTransformFollowOffset, ___followTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTransformFollowOffset, ___targetTransforms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTransformFollowOffset, ___positionOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTransformFollowOffset, ___rotationOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTransformFollowOffset, ___position) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandTransformFollowOffset, ___rotation) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandTransformFollowOffset) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
