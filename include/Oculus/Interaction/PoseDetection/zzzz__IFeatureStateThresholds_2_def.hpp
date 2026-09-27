#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/IFeatureStateThresholds_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFeatureStateThresholds_2)
namespace Oculus::Interaction::PoseDetection {
template<typename TFeatureState>
class IFeatureStateThreshold_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureStateThresholds_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2, "Oculus.Interaction.PoseDetection", "IFeatureStateThresholds`2");
// Dependencies 
namespace Oculus::Interaction::PoseDetection {
// cpp template
template<typename TFeature,typename TFeatureState>
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.IFeatureStateThresholds`2<TFeature,TFeatureState>
class CORDL_TYPE IFeatureStateThresholds_2 {
public:
// Declarations
 __declspec(property(get=get_Feature)) TFeature  Feature;

 __declspec(property(get=get_Thresholds)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>*  Thresholds;

/// @brief Method get_Feature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TFeature get_Feature() ;

/// @brief Method get_Thresholds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<TFeatureState>*>* get_Thresholds() ;

// Ctor Parameters [CppParam { name: "", ty: "IFeatureStateThresholds_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFeatureStateThresholds_2(IFeatureStateThresholds_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16118};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
