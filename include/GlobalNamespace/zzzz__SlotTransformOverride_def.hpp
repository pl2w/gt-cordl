#pragma once
// IWYU pragma private; include "GlobalNamespace/SlotTransformOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SlotTransformOverride)
namespace GlobalNamespace {
class SubGrabPoint;
}
namespace GlobalNamespace {
class TransferrableObjectGripPosition;
}
namespace GorillaTag {
struct XformOffset;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SlotTransformOverride;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlotTransformOverride*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlotTransformOverride*, "", "SlotTransformOverride");
// Dependencies System.Object, TransferrableObject::PositionState, UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlotTransformOverride
class CORDL_TYPE SlotTransformOverride : public ::System::Object {
public:
// Declarations
/// @brief Field AdvAnchorLocalToAdvOriginLocal, offset 0xc0, size 0x40 
 __declspec(property(get=__cordl_internal_get_AdvAnchorLocalToAdvOriginLocal, put=__cordl_internal_set_AdvAnchorLocalToAdvOriginLocal)) ::UnityEngine::Matrix4x4  AdvAnchorLocalToAdvOriginLocal;

/// @brief Field AdvOriginLocalToParentAnchorLocal, offset 0x80, size 0x40 
 __declspec(property(get=__cordl_internal_get_AdvOriginLocalToParentAnchorLocal, put=__cordl_internal_set_AdvOriginLocalToParentAnchorLocal)) ::UnityEngine::Matrix4x4  AdvOriginLocalToParentAnchorLocal;

 __declspec(property(get=get__EdXformOffsetRepresenationOf_overrideTransformMatrix, put=set__EdXformOffsetRepresenationOf_overrideTransformMatrix)) ::GorillaTag::XformOffset  _EdXformOffsetRepresenationOf_overrideTransformMatrix;

/// @brief Field advancedGrabPointAnchor, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_advancedGrabPointAnchor, put=__cordl_internal_set_advancedGrabPointAnchor)) ::UnityW<::UnityEngine::Transform>  advancedGrabPointAnchor;

/// @brief Field advancedGrabPointOrigin, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_advancedGrabPointOrigin, put=__cordl_internal_set_advancedGrabPointOrigin)) ::UnityW<::UnityEngine::Transform>  advancedGrabPointOrigin;

/// @brief Field multiPoints, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_multiPoints, put=__cordl_internal_set_multiPoints)) ::System::Collections::Generic::List_1<::GlobalNamespace::SubGrabPoint*>*  multiPoints;

/// @brief Field overrideTransform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideTransform, put=__cordl_internal_set_overrideTransform)) ::UnityW<::UnityEngine::Transform>  overrideTransform;

/// @brief Field overrideTransformMatrix, offset 0x28, size 0x40 
 __declspec(property(get=__cordl_internal_get_overrideTransformMatrix, put=__cordl_internal_set_overrideTransformMatrix)) ::UnityEngine::Matrix4x4  overrideTransformMatrix;

/// @brief Field overrideTransform_path, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideTransform_path, put=__cordl_internal_set_overrideTransform_path)) ::StringW  overrideTransform_path;

/// @brief Field positionState, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionState, put=__cordl_internal_set_positionState)) ::GlobalNamespace::TransferrableObject_PositionState  positionState;

/// @brief Field useAdvancedGrab, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_useAdvancedGrab, put=__cordl_internal_set_useAdvancedGrab)) bool  useAdvancedGrab;

/// @brief Method AddLineButton, addr 0x576a128, size 0xd0, virtual false, abstract: false, final false
inline void AddLineButton() ;

/// @brief Method AddSubGrabPoint, addr 0x576a1f8, size 0xb0, virtual false, abstract: false, final false
inline void AddSubGrabPoint(::GlobalNamespace::TransferrableObjectGripPosition*  togp) ;

/// @brief Method Initialize, addr 0x5769ef4, size 0x234, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::Component*  component, ::UnityEngine::Transform*  anchor) ;

static inline ::GlobalNamespace::SlotTransformOverride* New_ctor() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_AdvAnchorLocalToAdvOriginLocal() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_AdvAnchorLocalToAdvOriginLocal() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_AdvOriginLocalToParentAnchorLocal() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_AdvOriginLocalToParentAnchorLocal() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_advancedGrabPointAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_advancedGrabPointAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_advancedGrabPointOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_advancedGrabPointOrigin() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SubGrabPoint*>* const& __cordl_internal_get_multiPoints() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SubGrabPoint*>*& __cordl_internal_get_multiPoints() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_overrideTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_overrideTransform() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_overrideTransformMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_overrideTransformMatrix() ;

constexpr ::StringW const& __cordl_internal_get_overrideTransform_path() const;

constexpr ::StringW& __cordl_internal_get_overrideTransform_path() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get_positionState() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get_positionState() ;

constexpr bool const& __cordl_internal_get_useAdvancedGrab() const;

constexpr bool& __cordl_internal_get_useAdvancedGrab() ;

constexpr void __cordl_internal_set_AdvAnchorLocalToAdvOriginLocal(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_AdvOriginLocalToParentAnchorLocal(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_advancedGrabPointAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_advancedGrabPointOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_multiPoints(::System::Collections::Generic::List_1<::GlobalNamespace::SubGrabPoint*>*  value) ;

constexpr void __cordl_internal_set_overrideTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_overrideTransformMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_overrideTransform_path(::StringW  value) ;

constexpr void __cordl_internal_set_positionState(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set_useAdvancedGrab(bool  value) ;

/// @brief Method .ctor, addr 0x576a2fc, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get__EdXformOffsetRepresenationOf_overrideTransformMatrix, addr 0x5769de4, size 0x4c, virtual false, abstract: false, final false
inline ::GorillaTag::XformOffset get__EdXformOffsetRepresenationOf_overrideTransformMatrix() ;

/// @brief Method set__EdXformOffsetRepresenationOf_overrideTransformMatrix, addr 0x5769e30, size 0xc4, virtual false, abstract: false, final false
inline void set__EdXformOffsetRepresenationOf_overrideTransformMatrix(::GorillaTag::XformOffset  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlotTransformOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlotTransformOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlotTransformOverride(SlotTransformOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlotTransformOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlotTransformOverride(SlotTransformOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1358};

/// [Obsolete("(2024-08-20 MattO) Cosmetics use xformOffsets now which fills in the appropriate data for this component. If you are doing something weird then `overrideTransformMatrix` must be used instead. This will probably be removed after 2024-09-15.")]
/// @brief Field overrideTransform, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___overrideTransform;

/// [Obsolete("(2024-08-20 MattO) Cosmetics use xformOffsets now which fills in the appropriate data for this component. If you are doing something weird then `overrideTransformMatrix` must be used instead. This will probably be removed after 2024-09-15.")]
/// [Delayed]
/// @brief Field overrideTransform_path, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___overrideTransform_path;

/// @brief Field positionState, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ___positionState;

/// @brief Field useAdvancedGrab, offset: 0x24, size: 0x1, def value: None
 bool  ___useAdvancedGrab;

/// @brief Field overrideTransformMatrix, offset: 0x28, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___overrideTransformMatrix;

/// @brief Field advancedGrabPointAnchor, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___advancedGrabPointAnchor;

/// @brief Field advancedGrabPointOrigin, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___advancedGrabPointOrigin;

/// [SerializeReference]
/// @brief Field multiPoints, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SubGrabPoint*>*  ___multiPoints;

/// @brief Field AdvOriginLocalToParentAnchorLocal, offset: 0x80, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___AdvOriginLocalToParentAnchorLocal;

/// @brief Field AdvAnchorLocalToAdvOriginLocal, offset: 0xc0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___AdvAnchorLocalToAdvOriginLocal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___overrideTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___overrideTransform_path) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___positionState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___useAdvancedGrab) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___overrideTransformMatrix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___advancedGrabPointAnchor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___advancedGrabPointOrigin) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___multiPoints) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___AdvOriginLocalToParentAnchorLocal) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlotTransformOverride, ___AdvAnchorLocalToAdvOriginLocal) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlotTransformOverride) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
