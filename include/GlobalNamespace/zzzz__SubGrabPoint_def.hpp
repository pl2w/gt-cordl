#pragma once
// IWYU pragma private; include "GlobalNamespace/SubGrabPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LimitAxis_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SubGrabPoint)
namespace GlobalNamespace {
class AdvancedItemState_PreData;
}
namespace GlobalNamespace {
class AdvancedItemState;
}
namespace GlobalNamespace {
class SlotTransformOverride;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SubGrabPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SubGrabPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubGrabPoint*, "", "SubGrabPoint");
// Dependencies LimitAxis, System.Object, UnityEngine.Matrix4x4, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SubGrabPoint
class CORDL_TYPE SubGrabPoint : public ::System::Object {
public:
// Declarations
/// @brief Field advAnchor_ParentAnchorLocal, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_advAnchor_ParentAnchorLocal, put=__cordl_internal_set_advAnchor_ParentAnchorLocal)) ::UnityEngine::Quaternion  advAnchor_ParentAnchorLocal;

/// @brief Field allowReverseGrip, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowReverseGrip, put=__cordl_internal_set_allowReverseGrip)) bool  allowReverseGrip;

/// @brief Field gripPoint, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gripPoint, put=__cordl_internal_set_gripPoint)) ::UnityW<::UnityEngine::Transform>  gripPoint;

/// @brief Field gripPointLocalToAdvOriginLocal, offset 0x68, size 0x40 
 __declspec(property(get=__cordl_internal_get_gripPointLocalToAdvOriginLocal, put=__cordl_internal_set_gripPointLocalToAdvOriginLocal)) ::UnityEngine::Matrix4x4  gripPointLocalToAdvOriginLocal;

/// @brief Field gripPointOffset_AdvOriginLocal, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_gripPointOffset_AdvOriginLocal, put=__cordl_internal_set_gripPointOffset_AdvOriginLocal)) ::UnityEngine::Vector3  gripPointOffset_AdvOriginLocal;

/// @brief Field gripPoint_AdvOriginLocal, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_gripPoint_AdvOriginLocal, put=__cordl_internal_set_gripPoint_AdvOriginLocal)) ::UnityEngine::Vector3  gripPoint_AdvOriginLocal;

/// @brief Field gripRotation_AdvOriginLocal, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_gripRotation_AdvOriginLocal, put=__cordl_internal_set_gripRotation_AdvOriginLocal)) ::UnityEngine::Quaternion  gripRotation_AdvOriginLocal;

/// @brief Field gripRotation_ParentAnchorLocal, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_gripRotation_ParentAnchorLocal, put=__cordl_internal_set_gripRotation_ParentAnchorLocal)) ::UnityEngine::Quaternion  gripRotation_ParentAnchorLocal;

/// @brief Field limitAxis, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_limitAxis, put=__cordl_internal_set_limitAxis)) ::GlobalNamespace::LimitAxis  limitAxis;

/// @brief Method EvaluateScore, addr 0x5768d38, size 0x288, virtual true, abstract: false, final false
inline float_t EvaluateScore(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock) ;

/// @brief Method GetAdvancedItemStateFromHand, addr 0x5768634, size 0x6a4, virtual false, abstract: false, final false
inline ::GlobalNamespace::AdvancedItemState* GetAdvancedItemStateFromHand(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method GetGrabPositionRelativeToGrabPointOrigin, addr 0x5767f24, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetGrabPositionRelativeToGrabPointOrigin(::GlobalNamespace::AdvancedItemState*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method GetPositionOnObject, addr 0x57682b4, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPositionOnObject(::UnityEngine::Transform*  transferableObject, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method GetPreData, addr 0x5768cd8, size 0x60, virtual true, abstract: false, final false
inline ::GlobalNamespace::AdvancedItemState_PreData* GetPreData(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method GetRotationRelativeToObjectAnchor, addr 0x5767f18, size 0xc, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion GetRotationRelativeToObjectAnchor(::GlobalNamespace::AdvancedItemState*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method GetTransformFromPositionState, addr 0x57682d4, size 0x360, virtual true, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetTransformFromPositionState(::GlobalNamespace::AdvancedItemState*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride, ::UnityEngine::Transform*  targetDockXf) ;

/// @brief Method GetTransformation_GripPointLocalToAdvOriginLocal, addr 0x5767efc, size 0x1c, virtual true, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetTransformation_GripPointLocalToAdvOriginLocal(::GlobalNamespace::AdvancedItemState_PreData*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method InitializePoints, addr 0x5767f30, size 0x384, virtual true, abstract: false, final false
inline void InitializePoints(::UnityEngine::Transform*  anchor, ::UnityEngine::Transform*  grabPointAnchor, ::UnityEngine::Transform*  advancedGrabPointOrigin) ;

static inline ::GlobalNamespace::SubGrabPoint* New_ctor() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_advAnchor_ParentAnchorLocal() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_advAnchor_ParentAnchorLocal() ;

constexpr bool const& __cordl_internal_get_allowReverseGrip() const;

constexpr bool& __cordl_internal_get_allowReverseGrip() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gripPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gripPoint() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_gripPointLocalToAdvOriginLocal() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_gripPointLocalToAdvOriginLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gripPointOffset_AdvOriginLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gripPointOffset_AdvOriginLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gripPoint_AdvOriginLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gripPoint_AdvOriginLocal() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_gripRotation_AdvOriginLocal() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_gripRotation_AdvOriginLocal() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_gripRotation_ParentAnchorLocal() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_gripRotation_ParentAnchorLocal() ;

constexpr ::GlobalNamespace::LimitAxis const& __cordl_internal_get_limitAxis() const;

constexpr ::GlobalNamespace::LimitAxis& __cordl_internal_get_limitAxis() ;

constexpr void __cordl_internal_set_advAnchor_ParentAnchorLocal(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_allowReverseGrip(bool  value) ;

constexpr void __cordl_internal_set_gripPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gripPointLocalToAdvOriginLocal(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_gripPointOffset_AdvOriginLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_gripPoint_AdvOriginLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_gripRotation_AdvOriginLocal(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_gripRotation_ParentAnchorLocal(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_limitAxis(::GlobalNamespace::LimitAxis  value) ;

/// @brief Method .ctor, addr 0x5768fc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubGrabPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubGrabPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubGrabPoint(SubGrabPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubGrabPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubGrabPoint(SubGrabPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1355};

/// [FormerlySerializedAs("transform")]
/// @brief Field gripPoint, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gripPoint;

/// @brief Field limitAxis, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::LimitAxis  ___limitAxis;

/// @brief Field allowReverseGrip, offset: 0x1c, size: 0x1, def value: None
 bool  ___allowReverseGrip;

/// @brief Field gripPoint_AdvOriginLocal, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gripPoint_AdvOriginLocal;

/// @brief Field gripPointOffset_AdvOriginLocal, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gripPointOffset_AdvOriginLocal;

/// @brief Field gripRotation_AdvOriginLocal, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___gripRotation_AdvOriginLocal;

/// @brief Field advAnchor_ParentAnchorLocal, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___advAnchor_ParentAnchorLocal;

/// @brief Field gripRotation_ParentAnchorLocal, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___gripRotation_ParentAnchorLocal;

/// @brief Field gripPointLocalToAdvOriginLocal, offset: 0x68, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___gripPointLocalToAdvOriginLocal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubGrabPoint, ___gripPoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubGrabPoint, ___limitAxis) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubGrabPoint, ___allowReverseGrip) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubGrabPoint, ___gripPoint_AdvOriginLocal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubGrabPoint, ___gripPointOffset_AdvOriginLocal) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubGrabPoint, ___gripRotation_AdvOriginLocal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubGrabPoint, ___advAnchor_ParentAnchorLocal) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubGrabPoint, ___gripRotation_ParentAnchorLocal) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubGrabPoint, ___gripPointLocalToAdvOriginLocal) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubGrabPoint) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
