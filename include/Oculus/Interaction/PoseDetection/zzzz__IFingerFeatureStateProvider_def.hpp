#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/IFingerFeatureStateProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IFingerFeatureStateProvider)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::PoseDetection {
struct FeatureStateActiveMode;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class IFingerFeatureStateProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*, "Oculus.Interaction.PoseDetection", "IFingerFeatureStateProvider");
// Dependencies 
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.IFingerFeatureStateProvider
class CORDL_TYPE IFingerFeatureStateProvider {
public:
// Declarations
/// @brief Method GetCurrentState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetCurrentState(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature, ::by_ref<::StringW>  currentState) ;

/// @brief Method GetFeatureValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Nullable_1<float_t> GetFeatureValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature) ;

/// @brief Method IsStateActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsStateActive(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId) ;

// Ctor Parameters [CppParam { name: "", ty: "IFingerFeatureStateProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFingerFeatureStateProvider(IFingerFeatureStateProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16106};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
