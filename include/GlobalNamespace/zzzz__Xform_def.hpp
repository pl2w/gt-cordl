#pragma once
// IWYU pragma private; include "GlobalNamespace/Xform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(Xform)
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Xform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Xform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Xform*, "", "Xform");
// [ExecuteAlways]
// Dependencies Unity.Mathematics.float2, Unity.Mathematics.float3, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: Xform
class CORDL_TYPE Xform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AXIS_XR_RT, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_AXIS_XR_RT, put=setStaticF_AXIS_XR_RT)) ::Unity::Mathematics::float3  AXIS_XR_RT;

/// @brief Field AXIS_YG_UP, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_AXIS_YG_UP, put=setStaticF_AXIS_YG_UP)) ::Unity::Mathematics::float3  AXIS_YG_UP;

/// @brief Field AXIS_ZB_FW, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_AXIS_ZB_FW, put=setStaticF_AXIS_ZB_FW)) ::Unity::Mathematics::float3  AXIS_ZB_FW;

/// @brief Field CB, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CB, put=setStaticF_CB)) ::UnityEngine::Color  CB;

/// @brief Field CG, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CG, put=setStaticF_CG)) ::UnityEngine::Color  CG;

/// @brief Field CR, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CR, put=setStaticF_CR)) ::UnityEngine::Color  CR;

/// @brief Field F2_ONE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_F2_ONE, put=setStaticF_F2_ONE)) ::Unity::Mathematics::float2  F2_ONE;

/// @brief Field F3_ONE, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_F3_ONE, put=setStaticF_F3_ONE)) ::Unity::Mathematics::float3  F3_ONE;

/// @brief Field displayColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_displayColor, put=__cordl_internal_set_displayColor)) ::UnityEngine::Color  displayColor;

 __declspec(property(get=get_localExtents)) ::Unity::Mathematics::float3  localExtents;

/// @brief Field localPosition, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_localPosition, put=__cordl_internal_set_localPosition)) ::Unity::Mathematics::float3  localPosition;

/// @brief Field localRotation, offset 0x50, size 0x10 
 __declspec(property(get=__cordl_internal_get_localRotation, put=__cordl_internal_set_localRotation)) ::UnityEngine::Quaternion  localRotation;

/// @brief Field localScale, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_localScale, put=__cordl_internal_set_localScale)) ::Unity::Mathematics::float3  localScale;

/// @brief Field parent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::UnityEngine::Transform>  parent;

/// @brief Method LocalTRS, addr 0x5a23098, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 LocalTRS() ;

static inline ::GlobalNamespace::Xform* New_ctor() ;

/// @brief Method TRS, addr 0x5a23158, size 0x14c, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 TRS() ;

/// @brief Method Update, addr 0x5a232a4, size 0x3a0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_displayColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_displayColor() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_localPosition() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get_localPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_localRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_localRotation() ;

constexpr ::Unity::Mathematics::float3 const& __cordl_internal_get_localScale() const;

constexpr ::Unity::Mathematics::float3& __cordl_internal_get_localScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_parent() ;

constexpr void __cordl_internal_set_displayColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_localPosition(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set_localRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_localScale(::Unity::Mathematics::float3  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5a23644, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Mathematics::float3 getStaticF_AXIS_XR_RT() ;

static inline ::Unity::Mathematics::float3 getStaticF_AXIS_YG_UP() ;

static inline ::Unity::Mathematics::float3 getStaticF_AXIS_ZB_FW() ;

static inline ::UnityEngine::Color getStaticF_CB() ;

static inline ::UnityEngine::Color getStaticF_CG() ;

static inline ::UnityEngine::Color getStaticF_CR() ;

static inline ::Unity::Mathematics::float2 getStaticF_F2_ONE() ;

static inline ::Unity::Mathematics::float3 getStaticF_F3_ONE() ;

/// @brief Method get_localExtents, addr 0x5a23078, size 0x20, virtual false, abstract: false, final false
inline ::Unity::Mathematics::float3 get_localExtents() ;

static inline void setStaticF_AXIS_XR_RT(::Unity::Mathematics::float3  value) ;

static inline void setStaticF_AXIS_YG_UP(::Unity::Mathematics::float3  value) ;

static inline void setStaticF_AXIS_ZB_FW(::Unity::Mathematics::float3  value) ;

static inline void setStaticF_CB(::UnityEngine::Color  value) ;

static inline void setStaticF_CG(::UnityEngine::Color  value) ;

static inline void setStaticF_CR(::UnityEngine::Color  value) ;

static inline void setStaticF_F2_ONE(::Unity::Mathematics::float2  value) ;

static inline void setStaticF_F3_ONE(::Unity::Mathematics::float3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Xform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Xform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Xform(Xform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Xform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Xform(Xform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2850};

/// @brief Field parent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___parent;

/// [Space]
/// @brief Field displayColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___displayColor;

/// [Space]
/// @brief Field localPosition, offset: 0x38, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ___localPosition;

/// @brief Field localScale, offset: 0x44, size: 0xc, def value: None
 ::Unity::Mathematics::float3  ___localScale;

/// @brief Field localRotation, offset: 0x50, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___localRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Xform, ___parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Xform, ___displayColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Xform, ___localPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Xform, ___localScale) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Xform, ___localRotation) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Xform) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
