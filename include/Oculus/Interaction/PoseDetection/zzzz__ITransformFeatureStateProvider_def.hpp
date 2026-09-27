#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ITransformFeatureStateProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ITransformFeatureStateProvider)
namespace Oculus::Interaction::PoseDetection {
struct FeatureStateActiveMode;
}
namespace Oculus::Interaction::PoseDetection {
class TransformConfig;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class ITransformFeatureStateProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*, "Oculus.Interaction.PoseDetection", "ITransformFeatureStateProvider");
// Dependencies 
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.ITransformFeatureStateProvider
class CORDL_TYPE ITransformFeatureStateProvider {
public:
// Declarations
/// @brief Method GetCurrentState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetCurrentState(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, ::by_ref<::StringW>  currentState) ;

/// @brief Method GetFeatureVectorAndWristPos, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, bool  isHandVector, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  featureVec, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  wristPos) ;

/// @brief Method IsStateActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsStateActive(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId) ;

/// @brief Method RegisterConfig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

/// @brief Method UnRegisterConfig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UnRegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig) ;

// Ctor Parameters [CppParam { name: "", ty: "ITransformFeatureStateProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITransformFeatureStateProvider(ITransformFeatureStateProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16165};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
