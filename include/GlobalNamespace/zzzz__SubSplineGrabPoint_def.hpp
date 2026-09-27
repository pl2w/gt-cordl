#pragma once
// IWYU pragma private; include "GlobalNamespace/SubSplineGrabPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SubLineGrabPoint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SubSplineGrabPoint)
namespace GlobalNamespace {
class AdvancedItemState_PreData;
}
namespace GlobalNamespace {
class CatmullRomSpline;
}
namespace GlobalNamespace {
class SlotTransformOverride;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class SubSplineGrabPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SubSplineGrabPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubSplineGrabPoint*, "", "SubSplineGrabPoint");
// Dependencies SubLineGrabPoint
namespace GlobalNamespace {
// Is value type: false
// CS Name: SubSplineGrabPoint
class CORDL_TYPE SubSplineGrabPoint : public ::GlobalNamespace::SubLineGrabPoint {
public:
// Declarations
/// @brief Field controlPointsRelativeToGrabOrigin, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPointsRelativeToGrabOrigin, put=__cordl_internal_set_controlPointsRelativeToGrabOrigin)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  controlPointsRelativeToGrabOrigin;

/// @brief Field controlPointsTransformsRelativeToGrabOrigin, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPointsTransformsRelativeToGrabOrigin, put=__cordl_internal_set_controlPointsTransformsRelativeToGrabOrigin)) ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  controlPointsTransformsRelativeToGrabOrigin;

/// @brief Field spline, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_spline, put=__cordl_internal_set_spline)) ::UnityW<::GlobalNamespace::CatmullRomSpline>  spline;

/// @brief Method EvaluateScore, addr 0x5769c64, size 0xa4, virtual true, abstract: false, final false
inline float_t EvaluateScore(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock) ;

/// @brief Method GetPreData, addr 0x5769b80, size 0xe4, virtual true, abstract: false, final false
inline ::GlobalNamespace::AdvancedItemState_PreData* GetPreData(::UnityEngine::Transform*  objectTransform, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  targetDock, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method GetTransformation_GripPointLocalToAdvOriginLocal, addr 0x57698b0, size 0x44, virtual true, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetTransformation_GripPointLocalToAdvOriginLocal(::GlobalNamespace::AdvancedItemState_PreData*  advancedItemState, ::GlobalNamespace::SlotTransformOverride*  slotTransformOverride) ;

/// @brief Method InitializePoints, addr 0x57698f4, size 0x28c, virtual true, abstract: false, final false
inline void InitializePoints(::UnityEngine::Transform*  anchor, ::UnityEngine::Transform*  grabPointAnchor, ::UnityEngine::Transform*  advancedGrabPointOrigin) ;

static inline ::GlobalNamespace::SubSplineGrabPoint* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_controlPointsRelativeToGrabOrigin() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_controlPointsRelativeToGrabOrigin() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& __cordl_internal_get_controlPointsTransformsRelativeToGrabOrigin() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& __cordl_internal_get_controlPointsTransformsRelativeToGrabOrigin() ;

constexpr ::UnityW<::GlobalNamespace::CatmullRomSpline> const& __cordl_internal_get_spline() const;

constexpr ::UnityW<::GlobalNamespace::CatmullRomSpline>& __cordl_internal_get_spline() ;

constexpr void __cordl_internal_set_controlPointsRelativeToGrabOrigin(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_controlPointsTransformsRelativeToGrabOrigin(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value) ;

constexpr void __cordl_internal_set_spline(::UnityW<::GlobalNamespace::CatmullRomSpline>  value) ;

/// @brief Method .ctor, addr 0x5769d08, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubSplineGrabPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubSplineGrabPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubSplineGrabPoint(SubSplineGrabPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubSplineGrabPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubSplineGrabPoint(SubSplineGrabPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1357};

/// @brief Field spline, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CatmullRomSpline>  ___spline;

/// @brief Field controlPointsRelativeToGrabOrigin, offset: 0x158, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___controlPointsRelativeToGrabOrigin;

/// @brief Field controlPointsTransformsRelativeToGrabOrigin, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  ___controlPointsTransformsRelativeToGrabOrigin;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubSplineGrabPoint, ___spline) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubSplineGrabPoint, ___controlPointsRelativeToGrabOrigin) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SubSplineGrabPoint, ___controlPointsTransformsRelativeToGrabOrigin) == 0x160, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubSplineGrabPoint) == 0x168, "Size mismatch!");

} // namespace end def GlobalNamespace
