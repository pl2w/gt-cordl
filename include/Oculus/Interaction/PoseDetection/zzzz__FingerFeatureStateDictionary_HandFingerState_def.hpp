#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureStateDictionary_HandFingerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(FingerFeatureStateDictionary_HandFingerState)
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class FeatureStateProvider_2;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
// Forward declare root types
namespace GlobalNamespace {
struct FingerFeatureStateDictionary_HandFingerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState, "Oculus.Interaction.PoseDetection", "FingerFeatureStateDictionary/HandFingerState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureStateDictionary/HandFingerState
struct CORDL_TYPE FingerFeatureStateDictionary_HandFingerState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureStateDictionary_HandFingerState() ;

// Ctor Parameters [CppParam { name: "StateProvider", ty: "::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*", modifiers: "", def_value: None, comment: None }]
constexpr FingerFeatureStateDictionary_HandFingerState(::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*  StateProvider) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16104};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field StateProvider, offset: 0x0, size: 0x8, def value: None
 ::Oculus::Interaction::PoseDetection::FeatureStateProvider_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*  StateProvider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState, StateProvider) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FingerFeatureStateDictionary_HandFingerState) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
