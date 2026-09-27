#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/IFeatureThresholds_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IFeatureThresholds_2)
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureStateThresholds_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureThresholds_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PoseDetection::IFeatureThresholds_2, "Oculus.Interaction.PoseDetection", "IFeatureThresholds`2");
// Dependencies 
namespace Oculus::Interaction::PoseDetection {
// cpp template
template<typename TFeature,typename TFeatureState>
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.IFeatureThresholds`2<TFeature,TFeatureState>
class CORDL_TYPE IFeatureThresholds_2 {
public:
// Declarations
 __declspec(property(get=get_FeatureStateThresholds)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>*  FeatureStateThresholds;

 __declspec(property(get=get_MinTimeInState)) double_t  MinTimeInState;

/// @brief Method get_FeatureStateThresholds, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<TFeature,TFeatureState>*>* get_FeatureStateThresholds() ;

/// @brief Method get_MinTimeInState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline double_t get_MinTimeInState() ;

// Ctor Parameters [CppParam { name: "", ty: "IFeatureThresholds_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFeatureThresholds_2(IFeatureThresholds_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16119};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
