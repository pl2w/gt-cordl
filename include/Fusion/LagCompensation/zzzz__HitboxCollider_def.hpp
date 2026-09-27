#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/HitboxCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_BoxNarrowData_def.hpp"
#include "Fusion/zzzz__HitboxTypes_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HitboxCollider)
namespace Fusion {
class Hitbox;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
struct HitboxCollider;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensation::HitboxCollider);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::HitboxCollider, "Fusion.LagCompensation", "HitboxCollider");
// Dependencies Fusion.HitboxTypes, Fusion.LagCompensation.LagCompensationUtils::BoxNarrowData, UnityEngine.Matrix4x4, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Fusion::LagCompensation {
// Is value type: true
// CS Name: Fusion.LagCompensation.HitboxCollider
struct CORDL_TYPE HitboxCollider {
public:
// Declarations
 __declspec(property(get=get_CapsuleLocalBottomCenter)) ::UnityEngine::Vector3  CapsuleLocalBottomCenter;

 __declspec(property(get=get_CapsuleLocalTopCenter)) ::UnityEngine::Vector3  CapsuleLocalTopCenter;

 __declspec(property(get=get_IsBoxNarrowDataInitialized, put=set_IsBoxNarrowDataInitialized)) bool  IsBoxNarrowDataInitialized;

 __declspec(property(get=get_LocalToWorld)) ::UnityEngine::Matrix4x4  LocalToWorld;

/// @brief Method CustomTRS, addr 0x601bb30, size 0xe0, virtual false, abstract: false, final false
static inline void CustomTRS(::by_ref<::UnityEngine::Matrix4x4>  res, ::UnityEngine::Vector3  t, ::UnityEngine::Quaternion  r, ::UnityEngine::Vector3  s) ;

/// @brief Method InitNarrowData, addr 0x601a4c0, size 0xfc, virtual false, abstract: false, final false
inline void InitNarrowData() ;

/// @brief Method Lerp, addr 0x601a130, size 0x17c, virtual false, abstract: false, final false
static inline void Lerp(::by_ref<::Fusion::LagCompensation::HitboxCollider>  from, ::by_ref<::Fusion::LagCompensation::HitboxCollider>  to, float_t  alpha, ::by_ref<::Fusion::LagCompensation::HitboxCollider>  result) ;

/// @brief Method ResetCachedMatrix, addr 0x601bc20, size 0x8, virtual false, abstract: false, final false
inline void ResetCachedMatrix() ;

/// @brief Method get_CapsuleLocalBottomCenter, addr 0x6017e24, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CapsuleLocalBottomCenter() ;

/// @brief Method get_CapsuleLocalTopCenter, addr 0x6017ce8, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CapsuleLocalTopCenter() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_IsBoxNarrowDataInitialized, addr 0x601bc10, size 0x8, virtual false, abstract: false, final false
inline bool get_IsBoxNarrowDataInitialized() ;

/// @brief Method get_LocalToWorld, addr 0x6017f84, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 get_LocalToWorld() ;

/// [CompilerGenerated]
/// @brief Method set_IsBoxNarrowDataInitialized, addr 0x601bc18, size 0x8, virtual false, abstract: false, final false
inline void set_IsBoxNarrowDataInitialized(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr HitboxCollider() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::Fusion::HitboxTypes", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cachedMatrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_matrixCalculated", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Offset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoxExtents", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Radius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CapsuleExtents", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Active", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hitbox", ty: "::UnityW<::Fusion::Hitbox>", modifiers: "", def_value: None, comment: None }, CppParam { name: "layerMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DebugTick", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Used", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Next", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoxNarrowData", ty: "::GlobalNamespace::LagCompensationUtils_BoxNarrowData", modifiers: "", def_value: None, comment: None }, CppParam { name: "_IsBoxNarrowDataInitialized_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr HitboxCollider(::Fusion::HitboxTypes  Type, ::UnityEngine::Matrix4x4  _cachedMatrix, bool  _matrixCalculated, ::UnityEngine::Vector3  Offset, ::UnityEngine::Vector3  BoxExtents, float_t  Radius, float_t  CapsuleExtents, bool  Active, ::UnityW<::Fusion::Hitbox>  Hitbox, int32_t  layerMask, int32_t  DebugTick, bool  Used, int32_t  Next, ::GlobalNamespace::LagCompensationUtils_BoxNarrowData  BoxNarrowData, bool  _IsBoxNarrowDataInitialized_k__BackingField, ::UnityEngine::Vector3  Position, ::UnityEngine::Quaternion  Rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19414};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1d8};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::Fusion::HitboxTypes  Type;

/// @brief Field _cachedMatrix, offset: 0x4, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  _cachedMatrix;

/// @brief Field _matrixCalculated, offset: 0x44, size: 0x1, def value: None
 bool  _matrixCalculated;

/// @brief Field Offset, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  Offset;

/// @brief Field BoxExtents, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  BoxExtents;

/// @brief Field Radius, offset: 0x60, size: 0x4, def value: None
 float_t  Radius;

/// @brief Field CapsuleExtents, offset: 0x64, size: 0x4, def value: None
 float_t  CapsuleExtents;

/// @brief Field Active, offset: 0x68, size: 0x1, def value: None
 bool  Active;

/// @brief Field Hitbox, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Fusion::Hitbox>  Hitbox;

/// @brief Field layerMask, offset: 0x78, size: 0x4, def value: None
 int32_t  layerMask;

/// @brief Field DebugTick, offset: 0x7c, size: 0x4, def value: None
 int32_t  DebugTick;

/// @brief Field Used, offset: 0x80, size: 0x1, def value: None
 bool  Used;

/// @brief Field Next, offset: 0x84, size: 0x4, def value: None
 int32_t  Next;

/// @brief Field BoxNarrowData, offset: 0x88, size: 0x12c, def value: None
 ::GlobalNamespace::LagCompensationUtils_BoxNarrowData  BoxNarrowData;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <IsBoxNarrowDataInitialized>k__BackingField, offset: 0x1b4, size: 0x1, def value: None
 bool  _IsBoxNarrowDataInitialized_k__BackingField;

/// @brief Field Position, offset: 0x1b8, size: 0xc, def value: None
 ::UnityEngine::Vector3  Position;

/// @brief Field Rotation, offset: 0x1c4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  Rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, _cachedMatrix) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, _matrixCalculated) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, Offset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, BoxExtents) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, Radius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, CapsuleExtents) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, Active) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, Hitbox) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, layerMask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, DebugTick) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, Used) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, Next) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, BoxNarrowData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, _IsBoxNarrowDataInitialized_k__BackingField) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, Position) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::HitboxCollider, Rotation) == 0x1c4, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::HitboxCollider) == 0x1d8, "Size mismatch!");

} // namespace end def Fusion::LagCompensation
