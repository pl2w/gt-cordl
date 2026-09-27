#pragma once
// IWYU pragma private; include "UnityEngine/RectTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RectTransform)
namespace GlobalNamespace {
struct RectTransform_Axis;
}
namespace GlobalNamespace {
struct RectTransform_Edge;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct DrivenTransformProperties;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class RectTransform_ReapplyDrivenProperties;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class RectTransform_ReapplyDrivenProperties;
}
// Write type traits
MARK_REF_T(::UnityEngine::RectTransform*);
MARK_REF_T(::UnityEngine::RectTransform_ReapplyDrivenProperties*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RectTransform*, "UnityEngine", "RectTransform");
DEFINE_IL2CPP_CLASS(::UnityEngine::RectTransform_ReapplyDrivenProperties*, "UnityEngine", "RectTransform/ReapplyDrivenProperties");
// [NativeClass("UI::RectTransform")]
// [NativeHeader("Runtime/Transform/RectTransform.h")]
// Dependencies UnityEngine.Transform
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RectTransform
class CORDL_TYPE RectTransform : public ::UnityEngine::Transform {
public:
// Declarations
using Axis = ::GlobalNamespace::RectTransform_Axis;

using Edge = ::GlobalNamespace::RectTransform_Edge;

using ReapplyDrivenProperties = ::UnityEngine::RectTransform_ReapplyDrivenProperties;

 __declspec(property(get=get_anchorMax, put=set_anchorMax)) ::UnityEngine::Vector2  anchorMax;

 __declspec(property(get=get_anchorMin, put=set_anchorMin)) ::UnityEngine::Vector2  anchorMin;

 __declspec(property(get=get_anchoredPosition, put=set_anchoredPosition)) ::UnityEngine::Vector2  anchoredPosition;

 __declspec(property(get=get_anchoredPosition3D, put=set_anchoredPosition3D)) ::UnityEngine::Vector3  anchoredPosition3D;

 __declspec(property(get=get_drivenByObject, put=set_drivenByObject)) ::UnityW<::UnityEngine::Object>  drivenByObject;

 __declspec(property(get=get_drivenProperties, put=set_drivenProperties)) ::UnityEngine::DrivenTransformProperties  drivenProperties;

 __declspec(property(get=get_offsetMax, put=set_offsetMax)) ::UnityEngine::Vector2  offsetMax;

 __declspec(property(get=get_offsetMin, put=set_offsetMin)) ::UnityEngine::Vector2  offsetMin;

 __declspec(property(get=get_pivot, put=set_pivot)) ::UnityEngine::Vector2  pivot;

/// @brief Field reapplyDrivenProperties, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reapplyDrivenProperties, put=setStaticF_reapplyDrivenProperties)) ::UnityEngine::RectTransform_ReapplyDrivenProperties*  reapplyDrivenProperties;

 __declspec(property(get=get_rect)) ::UnityEngine::Rect  rect;

 __declspec(property(get=get_sendChildDimensionsChange, put=set_sendChildDimensionsChange)) bool  sendChildDimensionsChange;

 __declspec(property(get=get_sizeDelta, put=set_sizeDelta)) ::UnityEngine::Vector2  sizeDelta;

/// [NativeMethod("UpdateIfTransformDispatchIsDirty")]
/// @brief Method ForceUpdateRectTransforms, addr 0xb5f1fe0, size 0x70, virtual false, abstract: false, final false
inline void ForceUpdateRectTransforms() ;

/// @brief Method ForceUpdateRectTransforms_Injected, addr 0xb5f2050, size 0x3c, virtual false, abstract: false, final false
static inline void ForceUpdateRectTransforms_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetLocalCorners, addr 0xb5f208c, size 0xe0, virtual false, abstract: false, final false
inline void GetLocalCorners(::ArrayW<::UnityEngine::Vector3>  fourCornersArray) ;

/// @brief Method GetParentSize, addr 0xb5f2514, size 0xe8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetParentSize() ;

/// @brief Method GetRectInParentSpace, addr 0xb5f2668, size 0x160, virtual false, abstract: false, final false
inline ::UnityEngine::Rect GetRectInParentSpace() ;

/// @brief Method GetWorldCorners, addr 0xb5f216c, size 0x108, virtual false, abstract: false, final false
inline void GetWorldCorners(::ArrayW<::UnityEngine::Vector3>  fourCornersArray) ;

static inline ::UnityEngine::RectTransform* New_ctor() ;

/// [RequiredByNativeCode]
/// @brief Method SendReapplyDrivenProperties, addr 0xb5f25fc, size 0x6c, virtual false, abstract: false, final false
static inline void SendReapplyDrivenProperties(::UnityEngine::RectTransform*  driven) ;

/// @brief Method SetInsetAndSizeFromParentEdge, addr 0xb5f2314, size 0x104, virtual false, abstract: false, final false
inline void SetInsetAndSizeFromParentEdge(::GlobalNamespace::RectTransform_Edge  edge, float_t  inset, float_t  size) ;

/// @brief Method SetSizeWithCurrentAnchors, addr 0xb5f2418, size 0xfc, virtual false, abstract: false, final false
inline void SetSizeWithCurrentAnchors(::GlobalNamespace::RectTransform_Axis  axis, float_t  size) ;

/// @brief Method .ctor, addr 0xb5f27cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_reapplyDrivenProperties, addr 0xb5f0d2c, size 0xb8, virtual false, abstract: false, final false
static inline void add_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties*  value) ;

static inline ::UnityEngine::RectTransform_ReapplyDrivenProperties* getStaticF_reapplyDrivenProperties() ;

/// @brief Method get_anchorMax, addr 0xb5f10f0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_anchorMax() ;

/// @brief Method get_anchorMax_Injected, addr 0xb5f1170, size 0x44, virtual false, abstract: false, final false
static inline void get_anchorMax_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_anchorMin, addr 0xb5f0f6c, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_anchorMin() ;

/// @brief Method get_anchorMin_Injected, addr 0xb5f0fec, size 0x44, virtual false, abstract: false, final false
static inline void get_anchorMin_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_anchoredPosition, addr 0xb5f1274, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_anchoredPosition() ;

/// @brief Method get_anchoredPosition3D, addr 0xb5f1700, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_anchoredPosition3D() ;

/// @brief Method get_anchoredPosition_Injected, addr 0xb5f12f4, size 0x44, virtual false, abstract: false, final false
static inline void get_anchoredPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_drivenByObject, addr 0xb5f1b60, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> get_drivenByObject() ;

/// @brief Method get_drivenByObject_Injected, addr 0xb5f1bec, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_drivenByObject_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_drivenProperties, addr 0xb5f1d10, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::DrivenTransformProperties get_drivenProperties() ;

/// @brief Method get_drivenProperties_Injected, addr 0xb5f1d80, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::DrivenTransformProperties get_drivenProperties_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_offsetMax, addr 0xb5f19c4, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_offsetMax() ;

/// @brief Method get_offsetMin, addr 0xb5f187c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_offsetMin() ;

/// @brief Method get_pivot, addr 0xb5f157c, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_pivot() ;

/// @brief Method get_pivot_Injected, addr 0xb5f15fc, size 0x44, virtual false, abstract: false, final false
static inline void get_pivot_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_rect, addr 0xb5f0e9c, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Rect get_rect() ;

/// @brief Method get_rect_Injected, addr 0xb5f0f28, size 0x44, virtual false, abstract: false, final false
static inline void get_rect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  ret) ;

/// @brief Method get_sendChildDimensionsChange, addr 0xb5f1e78, size 0x70, virtual false, abstract: false, final false
inline bool get_sendChildDimensionsChange() ;

/// @brief Method get_sendChildDimensionsChange_Injected, addr 0xb5f1ee8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_sendChildDimensionsChange_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_sizeDelta, addr 0xb5f13f8, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_sizeDelta() ;

/// @brief Method get_sizeDelta_Injected, addr 0xb5f1478, size 0x44, virtual false, abstract: false, final false
static inline void get_sizeDelta_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret) ;

/// [CompilerGenerated]
/// @brief Method remove_reapplyDrivenProperties, addr 0xb5f0de4, size 0xb8, virtual false, abstract: false, final false
static inline void remove_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties*  value) ;

static inline void setStaticF_reapplyDrivenProperties(::UnityEngine::RectTransform_ReapplyDrivenProperties*  value) ;

/// @brief Method set_anchorMax, addr 0xb5f11b4, size 0x7c, virtual false, abstract: false, final false
inline void set_anchorMax(::UnityEngine::Vector2  value) ;

/// @brief Method set_anchorMax_Injected, addr 0xb5f1230, size 0x44, virtual false, abstract: false, final false
static inline void set_anchorMax_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_anchorMin, addr 0xb5f1030, size 0x7c, virtual false, abstract: false, final false
inline void set_anchorMin(::UnityEngine::Vector2  value) ;

/// @brief Method set_anchorMin_Injected, addr 0xb5f10ac, size 0x44, virtual false, abstract: false, final false
static inline void set_anchorMin_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_anchoredPosition, addr 0xb5f1338, size 0x7c, virtual false, abstract: false, final false
inline void set_anchoredPosition(::UnityEngine::Vector2  value) ;

/// @brief Method set_anchoredPosition3D, addr 0xb5f17c4, size 0x30, virtual false, abstract: false, final false
inline void set_anchoredPosition3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_anchoredPosition_Injected, addr 0xb5f13b4, size 0x44, virtual false, abstract: false, final false
static inline void set_anchoredPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_drivenByObject, addr 0xb5f1c28, size 0xa4, virtual false, abstract: false, final false
inline void set_drivenByObject(::UnityEngine::Object*  value) ;

/// @brief Method set_drivenByObject_Injected, addr 0xb5f1ccc, size 0x44, virtual false, abstract: false, final false
static inline void set_drivenByObject_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_drivenProperties, addr 0xb5f1dbc, size 0x78, virtual false, abstract: false, final false
inline void set_drivenProperties(::UnityEngine::DrivenTransformProperties  value) ;

/// @brief Method set_drivenProperties_Injected, addr 0xb5f1e34, size 0x44, virtual false, abstract: false, final false
static inline void set_drivenProperties_Injected(::System::IntPtr  _unity_self, ::UnityEngine::DrivenTransformProperties  value) ;

/// @brief Method set_offsetMax, addr 0xb5f1a64, size 0xfc, virtual false, abstract: false, final false
inline void set_offsetMax(::UnityEngine::Vector2  value) ;

/// @brief Method set_offsetMin, addr 0xb5f18d0, size 0xf4, virtual false, abstract: false, final false
inline void set_offsetMin(::UnityEngine::Vector2  value) ;

/// @brief Method set_pivot, addr 0xb5f1640, size 0x7c, virtual false, abstract: false, final false
inline void set_pivot(::UnityEngine::Vector2  value) ;

/// @brief Method set_pivot_Injected, addr 0xb5f16bc, size 0x44, virtual false, abstract: false, final false
static inline void set_pivot_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

/// @brief Method set_sendChildDimensionsChange, addr 0xb5f1f24, size 0x78, virtual false, abstract: false, final false
inline void set_sendChildDimensionsChange(bool  value) ;

/// @brief Method set_sendChildDimensionsChange_Injected, addr 0xb5f1f9c, size 0x44, virtual false, abstract: false, final false
static inline void set_sendChildDimensionsChange_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_sizeDelta, addr 0xb5f14bc, size 0x7c, virtual false, abstract: false, final false
inline void set_sizeDelta(::UnityEngine::Vector2  value) ;

/// @brief Method set_sizeDelta_Injected, addr 0xb5f1538, size 0x44, virtual false, abstract: false, final false
static inline void set_sizeDelta_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RectTransform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RectTransform(RectTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectTransform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectTransform(RectTransform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15158};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RectTransform) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RectTransform/ReapplyDrivenProperties
class CORDL_TYPE RectTransform_ReapplyDrivenProperties : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xb5f288c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::RectTransform*  driven) ;

static inline ::UnityEngine::RectTransform_ReapplyDrivenProperties* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb5f27dc, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RectTransform_ReapplyDrivenProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RectTransform_ReapplyDrivenProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RectTransform_ReapplyDrivenProperties(RectTransform_ReapplyDrivenProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectTransform_ReapplyDrivenProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectTransform_ReapplyDrivenProperties(RectTransform_ReapplyDrivenProperties const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15157};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RectTransform_ReapplyDrivenProperties) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine
