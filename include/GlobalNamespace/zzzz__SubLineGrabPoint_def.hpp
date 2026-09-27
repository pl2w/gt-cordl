#pragma once
// IWYU pragma private; include "GlobalNamespace/SubLineGrabPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SubGrabPoint_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SubLineGrabPoint)
namespace GlobalNamespace {
class AdvancedItemState_PreData;
}
namespace GlobalNamespace {
class SlotTransformOverride;
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
namespace GlobalNamespace {
class SubLineGrabPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SubLineGrabPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubLineGrabPoint*, "", "SubLineGrabPoint");
// Dependencies SubGrabPoint, UnityEngine.Matrix4x4, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SubLineGrabPoint
class CORDL_TYPE SubLineGrabPoint : public ::GlobalNamespace::SubGrabPoint {
public:
// Declarations
/// @brief Field endPoint, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_endPoint, put=__cordl_internal_set_endPoint)) ::UnityW<::UnityEngine::Transform>  endPoint;

/// @brief Field endPointRelativeToGrabPointOrigin, offset 0xc4, size 0xc 
 __declspec(property(get=__cordl_internal_get_endPointRelativeToGrabPointOrigin, put=__cordl_internal_set_endPointRelativeToGrabPointOrigin)) ::UnityEngine::Vector3  endPointRelativeToGrabPointOrigin;

/// @brief Field endPointRelativeTransformToGrabPointOrigin, offset 0x110, size 0x40 
 __declspec(property(get=__cordl_internal_get_endPointRelativeTransformToGrabPointOrigin, put=__cordl_internal_set_endPointRelativeTransformToGrabPointOrigin)) ::UnityEngine::Matrix4x4  endPointRelativeTransformToGrabPointOrigin;

/// @brief Field startPoint, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_startPoint, put=__cordl_internal_set_startPoint)) ::UnityW<::UnityEngine::Transform>  startPoint;

/// @brief Field startPointRelativeToGrabPointOrigin, offset 0xb8, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPointRelativeToGrabPointOrigin, put=__cordl_internal_set_startPointRelativeToGrabPointOrigin)) ::UnityEngine::Vector3  startPointRelativeToGrabPointOrigin;

/// @brief Field startPointRelativeTransformToGrabPointOrigin, offset 0xd0, size 0x40 
 __declspec(property(get=__cordl_internal_get_startPointRelativeTransformToGrabPointOrigin, put=__cordl_internal_set_startPointRelativeTransformToGrabPointOrigin)) ::UnityEngine::Matrix4x4  startPointRelativeTransformToGrabPointOrigin;

/// @brief Method EvaluateScore, addr 0x57695d4, size 0x1d0, virtual true, abstract: false, final false
inline float_t EvaluateScore(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock) ;

/// @brief Method GetPreData, addr 0x57693b4, size 0x11c, virtual true, abstract: false, final false
inline ::GlobalNamespace::AdvancedItemState_PreData* GetPreData(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method GetTransformation_GripPointLocalToAdvOriginLocal, addr 0x5768fc8, size 0x204, virtual true, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetTransformation_GripPointLocalToAdvOriginLocal(::GlobalNamespace::AdvancedItemState_PreData*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method InitializePoints, addr 0x57691cc, size 0x1e8, virtual true, abstract: false, final false
inline void InitializePoints(::UnityEngine::Transform*  anchor, ::UnityEngine::Transform*  grabPointAnchor, ::UnityEngine::Transform*  advancedGrabPointOrigin) ;

static inline ::GlobalNamespace::SubLineGrabPoint* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <EvaluateScore>g__FindNearestFractionOnLine|9_0, addr 0x57697a4, size 0x104, virtual false, abstract: false, final false
static inline float_t _EvaluateScore_g__FindNearestFractionOnLine_9_0(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::UnityEngine::Vector3  point) ;

/// [CompilerGenerated]
/// @brief Method <GetPreData>g__FindNearestFractionOnLine|8_0, addr 0x57694d0, size 0x104, virtual false, abstract: false, final false
static inline float_t _GetPreData_g__FindNearestFractionOnLine_8_0(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  end, ::UnityEngine::Vector3  point) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endPointRelativeToGrabPointOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_endPointRelativeToGrabPointOrigin() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_endPointRelativeTransformToGrabPointOrigin() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_endPointRelativeTransformToGrabPointOrigin() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startPoint() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPointRelativeToGrabPointOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPointRelativeToGrabPointOrigin() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_startPointRelativeTransformToGrabPointOrigin() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_startPointRelativeTransformToGrabPointOrigin() ;

constexpr void __cordl_internal_set_endPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_endPointRelativeToGrabPointOrigin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_endPointRelativeTransformToGrabPointOrigin(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_startPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startPointRelativeToGrabPointOrigin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_startPointRelativeTransformToGrabPointOrigin(::UnityEngine::Matrix4x4  value) ;

/// @brief Method .ctor, addr 0x57698a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubLineGrabPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubLineGrabPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubLineGrabPoint(SubLineGrabPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubLineGrabPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubLineGrabPoint(SubLineGrabPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1356};

/// @brief Field startPoint, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startPoint;

/// @brief Field endPoint, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endPoint;

/// @brief Field startPointRelativeToGrabPointOrigin, offset: 0xb8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPointRelativeToGrabPointOrigin;

/// @brief Field endPointRelativeToGrabPointOrigin, offset: 0xc4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___endPointRelativeToGrabPointOrigin;

/// @brief Field startPointRelativeTransformToGrabPointOrigin, offset: 0xd0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___startPointRelativeTransformToGrabPointOrigin;

/// @brief Field endPointRelativeTransformToGrabPointOrigin, offset: 0x110, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___endPointRelativeTransformToGrabPointOrigin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubLineGrabPoint, ___startPoint) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubLineGrabPoint, ___endPoint) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubLineGrabPoint, ___startPointRelativeToGrabPointOrigin) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubLineGrabPoint, ___endPointRelativeToGrabPointOrigin) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubLineGrabPoint, ___startPointRelativeTransformToGrabPointOrigin) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubLineGrabPoint, ___endPointRelativeTransformToGrabPointOrigin) == 0x110, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubLineGrabPoint) == 0x150, "Size mismatch!");

} // namespace end def GlobalNamespace
