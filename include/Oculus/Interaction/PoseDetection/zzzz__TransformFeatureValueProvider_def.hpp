#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureValueProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformFeatureValueProvider)
namespace GlobalNamespace {
struct TransformFeatureValueProvider_TransformProperties;
}
namespace Oculus::Interaction::PoseDetection {
class TransformConfig;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
namespace Oculus::Interaction::PoseDetection {
class TransformJointData;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureValueProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider*, "Oculus.Interaction.PoseDetection", "TransformFeatureValueProvider");
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureValueProvider
class CORDL_TYPE TransformFeatureValueProvider : public ::System::Object {
public:
// Declarations
using TransformProperties = ::GlobalNamespace::TransformFeatureValueProvider_TransformProperties;

/// @brief Method GetFingersDownValue, addr 0xa4a8dcc, size 0x144, virtual false, abstract: false, final false
static inline float_t GetFingersDownValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetFingersUpValue, addr 0xa4a8c88, size 0x144, virtual false, abstract: false, final false
static inline float_t GetFingersUpValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetHandVectorForFeature, addr 0xa4a7ef8, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetHandVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>  transformJointData) ;

/// [Obsolete("The TransformConfig parameter is obsolete")]
/// @brief Method GetHandVectorForFeature, addr 0xa4a9054, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetHandVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>  transformJointData, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetHandVectorForFeature, addr 0xa4a9058, size 0x27c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetHandVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps) ;

/// @brief Method GetPalmAwayFromFaceValue, addr 0xa4a8b44, size 0x144, virtual false, abstract: false, final false
static inline float_t GetPalmAwayFromFaceValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetPalmDownValue, addr 0xa4a8778, size 0x144, virtual false, abstract: false, final false
static inline float_t GetPalmDownValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetPalmTowardsFaceValue, addr 0xa4a8a00, size 0x144, virtual false, abstract: false, final false
static inline float_t GetPalmTowardsFaceValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetPalmUpValue, addr 0xa4a88bc, size 0x144, virtual false, abstract: false, final false
static inline float_t GetPalmUpValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetPinchClearValue, addr 0xa4a8f10, size 0x144, virtual false, abstract: false, final false
static inline float_t GetPinchClearValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetTargetVectorForFeature, addr 0xa4a7e88, size 0x70, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetTargetVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformJointData*>  transformJointData, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetTargetVectorForFeature, addr 0xa4a92d4, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetTargetVectorForFeature(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetValue, addr 0xa4a72d0, size 0x144, virtual false, abstract: false, final false
static inline float_t GetValue(::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, ::Oculus::Interaction::PoseDetection::TransformJointData*  transformJointData, ::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

/// @brief Method GetVerticalVector, addr 0xa4a93f0, size 0xfc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetVerticalVector(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  centerEyePose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  trackingSystemUp, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetWristDownValue, addr 0xa4a84f0, size 0x144, virtual false, abstract: false, final false
static inline float_t GetWristDownValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method GetWristUpValue, addr 0xa4a8634, size 0x144, virtual false, abstract: false, final false
static inline float_t GetWristUpValue(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider* New_ctor() ;

/// @brief Method OffsetVectorWithRotation, addr 0xa4a94ec, size 0x200, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 OffsetVectorWithRotation(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::TransformFeatureValueProvider_TransformProperties>  transformProps, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  originalVector, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::PoseDetection::TransformConfig*>  transformConfig) ;

/// @brief Method .ctor, addr 0xa4a96ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureValueProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureValueProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureValueProvider(TransformFeatureValueProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureValueProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureValueProvider(TransformFeatureValueProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureValueProvider) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
