#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabPoseHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GrabPoseHelper)
namespace Oculus::Interaction::Grab {
class GrabPoseHelper_PoseCalculator;
}
namespace Oculus::Interaction::Grab {
struct GrabPoseScore;
}
namespace Oculus::Interaction::Grab {
struct PoseMeasureParameters;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Grab {
class GrabPoseHelper;
}
namespace Oculus::Interaction::Grab {
class GrabPoseHelper_PoseCalculator;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Grab::GrabPoseHelper*);
MARK_REF_T(::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabPoseHelper*, "Oculus.Interaction.Grab", "GrabPoseHelper");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*, "Oculus.Interaction.Grab", "GrabPoseHelper/PoseCalculator");
// Dependencies System.Object
namespace Oculus::Interaction::Grab {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabPoseHelper
class CORDL_TYPE GrabPoseHelper : public ::System::Object {
public:
// Declarations
using PoseCalculator = ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator;

/// @brief Method CalculateBestPoseAtSurface, addr 0xa4e618c, size 0x1fc, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Grab::GrabPoseScore CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  desiredPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo, ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*  minimalTranslationPoseCalculator, ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator*  minimalRotationPoseCalculator) ;

/// @brief Method CollidersScore, addr 0xa4de6dc, size 0x1e0, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Grab::GrabPoseScore CollidersScore(::UnityEngine::Vector3  position, ::ArrayW<::UnityEngine::Collider*>  colliders, ::by_ref<::UnityEngine::Vector3>  hitPoint) ;

/// @brief Method SelectBestPose, addr 0xa4e6388, size 0x128, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose SelectBestPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  poseA, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  poseB, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  reference, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::Oculus::Interaction::Grab::PoseMeasureParameters  scoringModifier, ::by_ref<::Oculus::Interaction::Grab::GrabPoseScore>  bestScore) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabPoseHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabPoseHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabPoseHelper(GrabPoseHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabPoseHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabPoseHelper(GrabPoseHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16350};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Grab::GrabPoseHelper) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab
// Dependencies System.MulticastDelegate
namespace Oculus::Interaction::Grab {
// Is value type: false
// CS Name: Oculus.Interaction.Grab.GrabPoseHelper/PoseCalculator
class CORDL_TYPE GrabPoseHelper_PoseCalculator : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa4e6674, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  desiredPose, ::UnityEngine::Transform*  relativeTo, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa4e6708, size 0x38, virtual true, abstract: false, final false
inline ::UnityEngine::Pose EndInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  desiredPose, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa4e6660, size 0x14, virtual true, abstract: false, final false
inline ::UnityEngine::Pose Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  desiredPose, ::UnityEngine::Transform*  relativeTo) ;

static inline ::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa4e65ac, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GrabPoseHelper_PoseCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GrabPoseHelper_PoseCalculator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GrabPoseHelper_PoseCalculator(GrabPoseHelper_PoseCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GrabPoseHelper_PoseCalculator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GrabPoseHelper_PoseCalculator(GrabPoseHelper_PoseCalculator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16349};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Grab::GrabPoseHelper_PoseCalculator) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab
