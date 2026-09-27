#pragma once
// IWYU pragma private; include "Pathfinding/Util/GraphTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GraphTransform)
namespace Pathfinding::Util {
class IMovementPlane;
}
namespace Pathfinding::Util {
class ITransform;
}
namespace Pathfinding {
struct Int3;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Util {
class GraphTransform;
}
// Write type traits
MARK_REF_T(::Pathfinding::Util::GraphTransform*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Util::GraphTransform*, "Pathfinding.Util", "GraphTransform");
// Dependencies Pathfinding.Int3, System.Object, UnityEngine.Matrix4x4, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Pathfinding::Util {
// Is value type: false
// CS Name: Pathfinding.Util.GraphTransform
class CORDL_TYPE GraphTransform : public ::System::Object {
public:
// Declarations
/// @brief Field i3translation, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_i3translation, put=__cordl_internal_set_i3translation)) ::Pathfinding::Int3  i3translation;

/// @brief Field identity, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_identity, put=__cordl_internal_set_identity)) bool  identity;

/// @brief Field identityTransform, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_identityTransform, put=setStaticF_identityTransform)) ::Pathfinding::Util::GraphTransform*  identityTransform;

/// @brief Field inverseMatrix, offset 0x54, size 0x40 
 __declspec(property(get=__cordl_internal_get_inverseMatrix, put=__cordl_internal_set_inverseMatrix)) ::UnityEngine::Matrix4x4  inverseMatrix;

/// @brief Field inverseRotation, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_inverseRotation, put=__cordl_internal_set_inverseRotation)) ::UnityEngine::Quaternion  inverseRotation;

/// @brief Field isXY, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_isXY, put=__cordl_internal_set_isXY)) bool  isXY;

/// @brief Field isXZ, offset 0x13, size 0x1 
 __declspec(property(get=__cordl_internal_get_isXZ, put=__cordl_internal_set_isXZ)) bool  isXZ;

/// @brief Field matrix, offset 0x14, size 0x40 
 __declspec(property(get=__cordl_internal_get_matrix, put=__cordl_internal_set_matrix)) ::UnityEngine::Matrix4x4  matrix;

/// @brief Field onlyTranslational, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyTranslational, put=__cordl_internal_set_onlyTranslational)) bool  onlyTranslational;

/// @brief Field rotation, offset 0xb8, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field translation, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_translation, put=__cordl_internal_set_translation)) ::UnityEngine::Vector3  translation;

/// @brief Field up, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_up, put=__cordl_internal_set_up)) ::UnityEngine::Vector3  up;

/// @brief Convert operator to "::Pathfinding::Util::IMovementPlane"
constexpr operator  ::Pathfinding::Util::IMovementPlane*() noexcept;

/// @brief Convert operator to "::Pathfinding::Util::ITransform"
constexpr operator  ::Pathfinding::Util::ITransform*() noexcept;

/// @brief Method InverseTransform, addr 0x5ed8600, size 0x8c, virtual false, abstract: false, final false
inline ::Pathfinding::Int3 InverseTransform(::Pathfinding::Int3  point) ;

/// @brief Method InverseTransform, addr 0x5ed8c10, size 0x340, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds InverseTransform(::UnityEngine::Bounds  bounds) ;

/// @brief Method InverseTransform, addr 0x5ed859c, size 0x64, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 InverseTransform(::UnityEngine::Vector3  point) ;

/// @brief Method InverseTransform, addr 0x5ed868c, size 0xc4, virtual false, abstract: false, final false
inline void InverseTransform(::ArrayW<::Pathfinding::Int3>  arr) ;

/// @brief Method MatrixIsTranslational, addr 0x5ed81a0, size 0xe8, virtual false, abstract: false, final false
static inline bool MatrixIsTranslational(::UnityEngine::Matrix4x4  matrix) ;

static inline ::Pathfinding::Util::GraphTransform* New_ctor(::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method Pathfinding.Util.IMovementPlane.ToPlane, addr 0x5ed8f50, size 0x50, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Pathfinding_Util_IMovementPlane_ToPlane(::UnityEngine::Vector3  point) ;

/// @brief Method Pathfinding.Util.IMovementPlane.ToPlane, addr 0x5ed8fa0, size 0x4c, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Pathfinding_Util_IMovementPlane_ToPlane(::UnityEngine::Vector3  point, ::by_ref<float_t>  elevation) ;

/// @brief Method Pathfinding.Util.IMovementPlane.ToWorld, addr 0x5ed8fec, size 0x24, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Pathfinding_Util_IMovementPlane_ToWorld(::UnityEngine::Vector2  point, float_t  elevation) ;

/// @brief Method Transform, addr 0x5ed88d0, size 0x340, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds Transform(::UnityEngine::Bounds  bounds) ;

/// @brief Method Transform, addr 0x5ed82e0, size 0x64, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 Transform(::UnityEngine::Vector3  point) ;

/// @brief Method Transform, addr 0x5ed8344, size 0x144, virtual false, abstract: false, final false
inline void Transform(::ArrayW<::Pathfinding::Int3>  arr) ;

/// @brief Method Transform, addr 0x5ed8488, size 0x114, virtual false, abstract: false, final false
inline void Transform(::ArrayW<::UnityEngine::Vector3>  arr) ;

/// @brief Method TransformVector, addr 0x5ed8288, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3  point) ;

/// @brief Method WorldUpAtGraphPosition, addr 0x5ed82d4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WorldUpAtGraphPosition(::UnityEngine::Vector3  point) ;

constexpr ::Pathfinding::Int3 const& __cordl_internal_get_i3translation() const;

constexpr ::Pathfinding::Int3& __cordl_internal_get_i3translation() ;

constexpr bool const& __cordl_internal_get_identity() const;

constexpr bool& __cordl_internal_get_identity() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_inverseMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_inverseMatrix() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_inverseRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_inverseRotation() ;

constexpr bool const& __cordl_internal_get_isXY() const;

constexpr bool& __cordl_internal_get_isXY() ;

constexpr bool const& __cordl_internal_get_isXZ() const;

constexpr bool& __cordl_internal_get_isXZ() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_matrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_matrix() ;

constexpr bool const& __cordl_internal_get_onlyTranslational() const;

constexpr bool& __cordl_internal_get_onlyTranslational() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_translation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_translation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_up() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_up() ;

constexpr void __cordl_internal_set_i3translation(::Pathfinding::Int3  value) ;

constexpr void __cordl_internal_set_identity(bool  value) ;

constexpr void __cordl_internal_set_inverseMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_inverseRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_isXY(bool  value) ;

constexpr void __cordl_internal_set_isXZ(bool  value) ;

constexpr void __cordl_internal_set_matrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_onlyTranslational(bool  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_translation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_up(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5ed7d78, size 0x428, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Matrix4x4  matrix) ;

static inline ::Pathfinding::Util::GraphTransform* getStaticF_identityTransform() ;

/// @brief Convert to "::Pathfinding::Util::IMovementPlane"
constexpr ::Pathfinding::Util::IMovementPlane* i___Pathfinding__Util__IMovementPlane() noexcept;

/// @brief Convert to "::Pathfinding::Util::ITransform"
constexpr ::Pathfinding::Util::ITransform* i___Pathfinding__Util__ITransform() noexcept;

/// @brief Method op_Multiply, addr 0x5ed8750, size 0xc0, virtual false, abstract: false, final false
static inline ::Pathfinding::Util::GraphTransform* op_Multiply(::Pathfinding::Util::GraphTransform*  lhs, ::UnityEngine::Matrix4x4  rhs) ;

/// @brief Method op_Multiply, addr 0x5ed8810, size 0xc0, virtual false, abstract: false, final false
static inline ::Pathfinding::Util::GraphTransform* op_Multiply(::UnityEngine::Matrix4x4  lhs, ::Pathfinding::Util::GraphTransform*  rhs) ;

static inline void setStaticF_identityTransform(::Pathfinding::Util::GraphTransform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphTransform(GraphTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphTransform(GraphTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21471};

/// @brief Field identity, offset: 0x10, size: 0x1, def value: None
 bool  ___identity;

/// @brief Field onlyTranslational, offset: 0x11, size: 0x1, def value: None
 bool  ___onlyTranslational;

/// @brief Field isXY, offset: 0x12, size: 0x1, def value: None
 bool  ___isXY;

/// @brief Field isXZ, offset: 0x13, size: 0x1, def value: None
 bool  ___isXZ;

/// @brief Field matrix, offset: 0x14, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___matrix;

/// @brief Field inverseMatrix, offset: 0x54, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___inverseMatrix;

/// @brief Field up, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___up;

/// @brief Field translation, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___translation;

/// @brief Field i3translation, offset: 0xac, size: 0xc, def value: None
 ::Pathfinding::Int3  ___i3translation;

/// @brief Field rotation, offset: 0xb8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotation;

/// @brief Field inverseRotation, offset: 0xc8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___inverseRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___identity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___onlyTranslational) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___isXY) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___isXZ) == 0x13, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___matrix) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___inverseMatrix) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___up) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___translation) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___i3translation) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___rotation) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Util::GraphTransform, ___inverseRotation) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Util::GraphTransform) == 0xd8, "Size mismatch!");

} // namespace end def Pathfinding::Util
