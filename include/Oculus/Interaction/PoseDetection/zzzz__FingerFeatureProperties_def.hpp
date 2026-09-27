#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateDescription_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FingerFeatureProperties)
namespace Oculus::Interaction::PoseDetection {
class FeatureDescription;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureProperties;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureProperties*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureProperties*, "Oculus.Interaction.PoseDetection", "FingerFeatureProperties");
// Dependencies Oculus.Interaction.PoseDetection.FeatureStateDescription, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureProperties
class CORDL_TYPE FingerFeatureProperties : public ::System::Object {
public:
// Declarations
/// @brief Field AbductionFeatureStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AbductionFeatureStates, put=setStaticF_AbductionFeatureStates)) ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  AbductionFeatureStates;

/// @brief Field CurlFeatureStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CurlFeatureStates, put=setStaticF_CurlFeatureStates)) ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  CurlFeatureStates;

/// @brief Field FlexionFeatureStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FlexionFeatureStates, put=setStaticF_FlexionFeatureStates)) ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  FlexionFeatureStates;

/// @brief Field OppositionFeatureStates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OppositionFeatureStates, put=setStaticF_OppositionFeatureStates)) ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  OppositionFeatureStates;

/// @brief Field <FeatureDescriptions>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__FeatureDescriptions_k__BackingField, put=setStaticF__FeatureDescriptions_k__BackingField)) ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*  _FeatureDescriptions_k__BackingField;

static inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> getStaticF_AbductionFeatureStates() ;

static inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> getStaticF_CurlFeatureStates() ;

static inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> getStaticF_FlexionFeatureStates() ;

static inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> getStaticF_OppositionFeatureStates() ;

static inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* getStaticF__FeatureDescriptions_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_FeatureDescriptions, addr 0xa49af80, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* get_FeatureDescriptions() ;

static inline void setStaticF_AbductionFeatureStates(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value) ;

static inline void setStaticF_CurlFeatureStates(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value) ;

static inline void setStaticF_FlexionFeatureStates(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value) ;

static inline void setStaticF_OppositionFeatureStates(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value) ;

static inline void setStaticF__FeatureDescriptions_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::FingerFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureProperties(FingerFeatureProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureProperties(FingerFeatureProperties const& ) = delete;

/// @brief Field FeatureAbductionDetailHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureAbductionDetailHelpText{u"Zero value implies that the two fingers are parallel.\nPositive angles indicate that the fingertips are spread apart.\nSmall negative angles are possible, and indicate that the finger is pressed up against the next finger."};

/// @brief Field FeatureAbductionShortHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureAbductionShortHelpText{u"Angle (in degrees) between the given finger, and the next finger towards the pinkie."};

/// @brief Field FeatureCurlDetailHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureCurlDetailHelpText{u"Calculated from the average of the convex angles formed by the 2 bones connected to Joint 2, and 2 bones connected to Joint 3.\nValues above 180 Positive show a curled state, while values below 180 represent hyper-extension."};

/// @brief Field FeatureCurlShortHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureCurlShortHelpText{u"Convex angle (in degrees) representing the top 2 joints of the fingers. Angle increases as finger curl becomes closed."};

/// @brief Field FeatureFlexionDetailHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureFlexionDetailHelpText{u"Calculated from the angle between the bones connected to finger Joint 1 around the Z axis of the joint.\nFor fingers, joint 1 is commonly known as the \'Knuckle\'; but for the thumb it is alongside the wrist.\nValues above 180 Positive show a curled state, while values below 180 represent hyper-extension.upwards from the palm."};

/// @brief Field FeatureFlexionShortHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureFlexionShortHelpText{u"Convex angle (in degrees) of joint 1 of the finger. Angle increases as finger flexion becomes closed."};

/// @brief Field FeatureOppositionDetailHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureOppositionDetailHelpText{u"Positive values indicate that the fingertips are spread apart.\nNegative values are not possible."};

/// @brief Field FeatureOppositionShortHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureOppositionShortHelpText{u"Distance between the tip of the given finger and the tip of the thumb.\nCalculated tracking space, with a 1.0 hand scale."};

/// @brief Field FeatureStateThresholdMidpointHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureStateThresholdMidpointHelpText{u"The angle at which a state will transition from A > B (or B > A)"};

/// @brief Field FeatureStateThresholdWidthHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureStateThresholdWidthHelpText{u"How far the angle must exceed the midpoint until the transition can occur. This is to prevent rapid flickering at transition edges."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16103};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureProperties) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection
