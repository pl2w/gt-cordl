#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/GrabPoseFinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GrabPoseFinder)
namespace GlobalNamespace {
struct GrabPoseFinder_FindResult;
}
namespace Oculus::Interaction::Grab {
struct PoseMeasureParameters;
}
namespace Oculus::Interaction::HandGrab {
class GrabPoseFinder_InterpolationCache;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabPose;
}
namespace Oculus::Interaction::HandGrab {
class HandGrabResult;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Oculus::Interaction::HandGrab {
class GrabPoseFinder;
}
namespace Oculus::Interaction::HandGrab {
class GrabPoseFinder_InterpolationCache;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandGrab::GrabPoseFinder*);
MARK_REF_T(::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::GrabPoseFinder*, "Oculus.Interaction.HandGrab", "GrabPoseFinder");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*, "Oculus.Interaction.HandGrab", "GrabPoseFinder/InterpolationCache");
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.GrabPoseFinder
class CORDL_TYPE GrabPoseFinder : public ::System::Object {
public:
// Declarations
using FindResult = ::GlobalNamespace::GrabPoseFinder_FindResult;

using InterpolationCache = ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache;

 __declspec(property(get=get_UsesHandPose)) bool  UsesHandPose;

/// @brief Field _handGrabPoses, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabPoses, put=__cordl_internal_set__handGrabPoses)) ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  _handGrabPoses;

/// @brief Field _interpolationCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interpolationCache, put=__cordl_internal_set__interpolationCache)) ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*  _interpolationCache;

/// @brief Field _relativeTo, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__relativeTo, put=__cordl_internal_set__relativeTo)) ::UnityW<::UnityEngine::Transform>  _relativeTo;

/// @brief Method CalculateBestScaleInterpolatedPose, addr 0xa4dcf54, size 0x44c, virtual false, abstract: false, final false
inline void CalculateBestScaleInterpolatedPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::Oculus::Interaction::Input::Handedness  handedness, float_t  handScale, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// @brief Method FindBestPose, addr 0xa4dce54, size 0x100, virtual false, abstract: false, final false
inline bool FindBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, float_t  handScale, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabResult*>  result) ;

/// @brief Method FindInterpolationRange, addr 0xa4dd3a0, size 0x2a0, virtual false, abstract: false, final false
static inline bool FindInterpolationRange(float_t  relativeHandScale, ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  grabPoses, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>  from, ::by_ref<::Oculus::Interaction::HandGrab::HandGrabPose*>  to, ::by_ref<float_t>  t) ;

/// @brief Method FindNextScaledGrabPose, addr 0xa4ddb3c, size 0x180, virtual false, abstract: false, final false
static inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> FindNextScaledGrabPose(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  grabPoses, float_t  lowLimit, bool  notEqual) ;

/// @brief Method FindPreviousScaledGrabPose, addr 0xa4dd9bc, size 0x180, virtual false, abstract: false, final false
static inline ::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose> FindPreviousScaledGrabPose(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  grabPoses, float_t  upLimit, bool  notEqual) ;

static inline ::Oculus::Interaction::HandGrab::GrabPoseFinder* New_ctor(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  handGrabPoses, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method SupportsHandedness, addr 0xa4dcdc4, size 0x90, virtual false, abstract: false, final false
inline bool SupportsHandedness(::Oculus::Interaction::Input::Handedness  handedness) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>* const& __cordl_internal_get__handGrabPoses() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*& __cordl_internal_get__handGrabPoses() ;

constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache* const& __cordl_internal_get__interpolationCache() const;

constexpr ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*& __cordl_internal_get__interpolationCache() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__relativeTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__relativeTo() ;

constexpr void __cordl_internal_set__handGrabPoses(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  value) ;

constexpr void __cordl_internal_set__interpolationCache(::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*  value) ;

constexpr void __cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0xa4dcca4, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  handGrabPoses, ::UnityEngine::Transform*  relativeTo) ;

/// @brief Method get_UsesHandPose, addr 0xa4dcbfc, size 0x90, virtual false, abstract: false, final false
inline bool get_UsesHandPose() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabPoseFinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabPoseFinder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabPoseFinder(GrabPoseFinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabPoseFinder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabPoseFinder(GrabPoseFinder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16316};

/// @brief Field _handGrabPoses, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Oculus::Interaction::HandGrab::HandGrabPose>>*  ____handGrabPoses;

/// @brief Field _relativeTo, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____relativeTo;

/// @brief Field _interpolationCache, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache*  ____interpolationCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::GrabPoseFinder, ____handGrabPoses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::GrabPoseFinder, ____relativeTo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::GrabPoseFinder, ____interpolationCache) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::GrabPoseFinder) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
// Dependencies System.Object
namespace Oculus::Interaction::HandGrab {
// Is value type: false
// CS Name: Oculus.Interaction.HandGrab.GrabPoseFinder/InterpolationCache
class CORDL_TYPE GrabPoseFinder_InterpolationCache : public ::System::Object {
public:
// Declarations
/// @brief Field overResult, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_overResult, put=__cordl_internal_set_overResult)) ::Oculus::Interaction::HandGrab::HandGrabResult*  overResult;

/// @brief Field underResult, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_underResult, put=__cordl_internal_set_underResult)) ::Oculus::Interaction::HandGrab::HandGrabResult*  underResult;

static inline ::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache* New_ctor() ;

constexpr ::Oculus::Interaction::HandGrab::HandGrabResult* const& __cordl_internal_get_overResult() const;

constexpr ::Oculus::Interaction::HandGrab::HandGrabResult*& __cordl_internal_get_overResult() ;

constexpr ::Oculus::Interaction::HandGrab::HandGrabResult* const& __cordl_internal_get_underResult() const;

constexpr ::Oculus::Interaction::HandGrab::HandGrabResult*& __cordl_internal_get_underResult() ;

constexpr void __cordl_internal_set_overResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value) ;

constexpr void __cordl_internal_set_underResult(::Oculus::Interaction::HandGrab::HandGrabResult*  value) ;

/// @brief Method .ctor, addr 0xa4dcd3c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabPoseFinder_InterpolationCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabPoseFinder_InterpolationCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabPoseFinder_InterpolationCache(GrabPoseFinder_InterpolationCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabPoseFinder_InterpolationCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabPoseFinder_InterpolationCache(GrabPoseFinder_InterpolationCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16315};

/// @brief Field underResult, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandGrabResult*  ___underResult;

/// @brief Field overResult, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::HandGrab::HandGrabResult*  ___overResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache, ___underResult) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache, ___overResult) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandGrab::GrabPoseFinder_InterpolationCache) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::HandGrab
