#pragma once
// IWYU pragma private; include "Fusion/Hitbox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__HitboxTypes_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Hitbox)
namespace Fusion::LagCompensation {
struct HitboxCollider;
}
namespace Fusion {
class HitboxRoot;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Fusion {
class Hitbox;
}
// Write type traits
MARK_REF_T(::Fusion::Hitbox*);
DEFINE_IL2CPP_CLASS(::Fusion::Hitbox*, "Fusion", "Hitbox");
// [AddComponentMenu("Fusion/Lag Compensation/Hitbox")]
// Dependencies Fusion.Behaviour, Fusion.HitboxTypes, UnityEngine.Color, UnityEngine.Vector3
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Hitbox
class CORDL_TYPE Hitbox : public ::Fusion::Behaviour {
public:
// Declarations
 __declspec(property(get=get_AbsBoxExtents)) ::UnityEngine::Vector3  AbsBoxExtents;

 __declspec(property(get=get_AbsCapsuleRadius)) float_t  AbsCapsuleRadius;

 __declspec(property(get=get_AbsSphereRadius)) float_t  AbsSphereRadius;

/// @brief Field BoxExtents, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_BoxExtents, put=__cordl_internal_set_BoxExtents)) ::UnityEngine::Vector3  BoxExtents;

 __declspec(property(get=get_CapsuleBottomCenter)) ::UnityEngine::Vector3  CapsuleBottomCenter;

/// @brief Field CapsuleExtents, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_CapsuleExtents, put=__cordl_internal_set_CapsuleExtents)) float_t  CapsuleExtents;

/// @brief Field CapsuleRadius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_CapsuleRadius, put=__cordl_internal_set_CapsuleRadius)) float_t  CapsuleRadius;

 __declspec(property(get=get_CapsuleTopCenter)) ::UnityEngine::Vector3  CapsuleTopCenter;

 __declspec(property(get=get_ColliderIndex, put=set_ColliderIndex)) int32_t  ColliderIndex;

/// @brief Field GizmosColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_GizmosColor, put=__cordl_internal_set_GizmosColor)) ::UnityEngine::Color  GizmosColor;

 __declspec(property(get=get_HitboxActive, put=set_HitboxActive)) bool  HitboxActive;

 __declspec(property(get=get_HitboxIndex)) int32_t  HitboxIndex;

 __declspec(property(get=get_HitboxMask)) uint32_t  HitboxMask;

/// @brief Field Offset, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) ::UnityEngine::Vector3  Offset;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

/// @brief Field Root, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) ::UnityW<::Fusion::HitboxRoot>  Root;

/// @brief Field SphereRadius, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_SphereRadius, put=__cordl_internal_set_SphereRadius)) float_t  SphereRadius;

/// @brief Field Type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::Fusion::HitboxTypes  Type;

/// @brief Field <ColliderIndex>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__ColliderIndex_k__BackingField, put=__cordl_internal_set__ColliderIndex_k__BackingField)) int32_t  _ColliderIndex_k__BackingField;

/// @brief Field _cachedLayerMask, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__cachedLayerMask, put=__cordl_internal_set__cachedLayerMask)) int32_t  _cachedLayerMask;

/// @brief Field _cachedTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedTransform, put=__cordl_internal_set__cachedTransform)) ::UnityW<::UnityEngine::Transform>  _cachedTransform;

/// @brief Field _hitboxIndex, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__hitboxIndex, put=__cordl_internal_set__hitboxIndex)) int32_t  _hitboxIndex;

/// @brief Method Awake, addr 0x5f91a9c, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CacheInfo, addr 0x5f91aa0, size 0x4c, virtual false, abstract: false, final false
inline void CacheInfo() ;

/// @brief Method DrawGizmos, addr 0x5f91ea4, size 0x17c, virtual true, abstract: false, final false
inline void DrawGizmos(::UnityEngine::Color  color, ::by_ref<::UnityEngine::Matrix4x4>  localToWorldMatrix) ;

static inline ::Fusion::Hitbox* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5f91c88, size 0x21c, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method SetColliderData, addr 0x5f91aec, size 0x158, virtual false, abstract: false, final false
inline void SetColliderData(::by_ref<::Fusion::LagCompensation::HitboxCollider>  c, int32_t  tick) ;

/// @brief Method SetLayer, addr 0x5f91c44, size 0x44, virtual false, abstract: false, final false
inline void SetLayer(int32_t  layer) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_BoxExtents() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_BoxExtents() ;

constexpr float_t const& __cordl_internal_get_CapsuleExtents() const;

constexpr float_t& __cordl_internal_get_CapsuleExtents() ;

constexpr float_t const& __cordl_internal_get_CapsuleRadius() const;

constexpr float_t& __cordl_internal_get_CapsuleRadius() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_GizmosColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_GizmosColor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Offset() ;

constexpr ::UnityW<::Fusion::HitboxRoot> const& __cordl_internal_get_Root() const;

constexpr ::UnityW<::Fusion::HitboxRoot>& __cordl_internal_get_Root() ;

constexpr float_t const& __cordl_internal_get_SphereRadius() const;

constexpr float_t& __cordl_internal_get_SphereRadius() ;

constexpr ::Fusion::HitboxTypes const& __cordl_internal_get_Type() const;

constexpr ::Fusion::HitboxTypes& __cordl_internal_get_Type() ;

constexpr int32_t const& __cordl_internal_get__ColliderIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ColliderIndex_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__cachedLayerMask() const;

constexpr int32_t& __cordl_internal_get__cachedLayerMask() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__cachedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__cachedTransform() ;

constexpr int32_t const& __cordl_internal_get__hitboxIndex() const;

constexpr int32_t& __cordl_internal_get__hitboxIndex() ;

constexpr void __cordl_internal_set_BoxExtents(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_CapsuleExtents(float_t  value) ;

constexpr void __cordl_internal_set_CapsuleRadius(float_t  value) ;

constexpr void __cordl_internal_set_GizmosColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_Offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Root(::UnityW<::Fusion::HitboxRoot>  value) ;

constexpr void __cordl_internal_set_SphereRadius(float_t  value) ;

constexpr void __cordl_internal_set_Type(::Fusion::HitboxTypes  value) ;

constexpr void __cordl_internal_set__ColliderIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__cachedLayerMask(int32_t  value) ;

constexpr void __cordl_internal_set__cachedTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__hitboxIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f92020, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AbsBoxExtents, addr 0x5f91140, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AbsBoxExtents() ;

/// @brief Method get_AbsCapsuleRadius, addr 0x5f9100c, size 0xc, virtual false, abstract: false, final false
inline float_t get_AbsCapsuleRadius() ;

/// @brief Method get_AbsSphereRadius, addr 0x5f91000, size 0xc, virtual false, abstract: false, final false
inline float_t get_AbsSphereRadius() ;

/// @brief Method get_CapsuleBottomCenter, addr 0x5f910ac, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CapsuleBottomCenter() ;

/// @brief Method get_CapsuleTopCenter, addr 0x5f91018, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_CapsuleTopCenter() ;

/// [CompilerGenerated]
/// @brief Method get_ColliderIndex, addr 0x5f91a14, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ColliderIndex() ;

/// @brief Method get_HitboxActive, addr 0x5f91194, size 0x20, virtual false, abstract: false, final false
inline bool get_HitboxActive() ;

/// @brief Method get_HitboxIndex, addr 0x5f91158, size 0x8, virtual false, abstract: false, final false
inline int32_t get_HitboxIndex() ;

/// @brief Method get_HitboxMask, addr 0x5f91160, size 0x34, virtual false, abstract: false, final false
inline uint32_t get_HitboxMask() ;

/// @brief Method get_Position, addr 0x5f91a24, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_ColliderIndex, addr 0x5f91a1c, size 0x8, virtual false, abstract: false, final false
inline void set_ColliderIndex(int32_t  value) ;

/// @brief Method set_HitboxActive, addr 0x5f915b8, size 0x24, virtual false, abstract: false, final false
inline void set_HitboxActive(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hitbox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hitbox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Hitbox(Hitbox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hitbox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hitbox(Hitbox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18958};

/// [InlineHelp]
/// @brief Field Type, offset: 0x20, size: 0x4, def value: None
 ::Fusion::HitboxTypes  ___Type;

/// [InlineHelp]
/// [DrawIf("Type", 2, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0, Hide = true)]
/// [Unit((Fusion.Units)16)]
/// @brief Field SphereRadius, offset: 0x24, size: 0x4, def value: None
 float_t  ___SphereRadius;

/// [InlineHelp]
/// [DrawIf("Type", 3, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0, Hide = true)]
/// [Unit((Fusion.Units)16)]
/// @brief Field CapsuleRadius, offset: 0x28, size: 0x4, def value: None
 float_t  ___CapsuleRadius;

/// [InlineHelp]
/// [DrawIf("Type", 1, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0, Hide = true)]
/// @brief Field BoxExtents, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___BoxExtents;

/// [InlineHelp]
/// [DrawIf("Type", 3, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0, Hide = true)]
/// [Unit((Fusion.Units)16)]
/// @brief Field CapsuleExtents, offset: 0x38, size: 0x4, def value: None
 float_t  ___CapsuleExtents;

/// [DrawIf("Type", Hide = true)]
/// @brief Field Offset, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Offset;

/// [HideInInspector]
/// @brief Field Root, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Fusion::HitboxRoot>  ___Root;

/// @brief Field _hitboxIndex, offset: 0x50, size: 0x4, def value: None
 int32_t  ____hitboxIndex;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ColliderIndex>k__BackingField, offset: 0x54, size: 0x4, def value: None
 int32_t  ____ColliderIndex_k__BackingField;

/// [InlineHelp]
/// @brief Field GizmosColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ___GizmosColor;

/// @brief Field _cachedLayerMask, offset: 0x68, size: 0x4, def value: None
 int32_t  ____cachedLayerMask;

/// @brief Field _cachedTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____cachedTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Hitbox, ___Type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ___SphereRadius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ___CapsuleRadius) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ___BoxExtents) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ___CapsuleExtents) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ___Offset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ___Root) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ____hitboxIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ____ColliderIndex_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ___GizmosColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ____cachedLayerMask) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Hitbox, ____cachedTransform) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Fusion::Hitbox) == 0x78, "Size mismatch!");

} // namespace end def Fusion
