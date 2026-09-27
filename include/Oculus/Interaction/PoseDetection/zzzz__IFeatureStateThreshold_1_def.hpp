#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/IFeatureStateThreshold_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IFeatureStateThreshold_1)
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
template<typename TFeatureState>
class IFeatureStateThreshold_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1, "Oculus.Interaction.PoseDetection", "IFeatureStateThreshold`1");
// Dependencies 
namespace Oculus::Interaction::PoseDetection {
// cpp template
template<typename TFeatureState>
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.IFeatureStateThreshold`1<TFeatureState>
class CORDL_TYPE IFeatureStateThreshold_1 {
public:
// Declarations
 __declspec(property(get=get_FirstState)) TFeatureState  FirstState;

 __declspec(property(get=get_SecondState)) TFeatureState  SecondState;

 __declspec(property(get=get_ToFirstWhenBelow)) float_t  ToFirstWhenBelow;

 __declspec(property(get=get_ToSecondWhenAbove)) float_t  ToSecondWhenAbove;

/// @brief Method get_FirstState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TFeatureState get_FirstState() ;

/// @brief Method get_SecondState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TFeatureState get_SecondState() ;

/// @brief Method get_ToFirstWhenBelow, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_ToFirstWhenBelow() ;

/// @brief Method get_ToSecondWhenAbove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_ToSecondWhenAbove() ;

// Ctor Parameters [CppParam { name: "", ty: "IFeatureStateThreshold_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFeatureStateThreshold_1(IFeatureStateThreshold_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
