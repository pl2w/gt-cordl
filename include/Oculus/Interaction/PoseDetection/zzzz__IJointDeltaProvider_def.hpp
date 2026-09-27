#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/IJointDeltaProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IJointDeltaProvider)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::PoseDetection {
class JointDeltaConfig;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class IJointDeltaProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::IJointDeltaProvider*, "Oculus.Interaction.PoseDetection", "IJointDeltaProvider");
// Dependencies 
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.IJointDeltaProvider
class CORDL_TYPE IJointDeltaProvider {
public:
// Declarations
/// @brief Method GetPositionDelta, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetPositionDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Vector3>  delta) ;

/// @brief Method GetRotationDelta, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool GetRotationDelta(::Oculus::Interaction::Input::HandJointId  joint, ::by_ref<::UnityEngine::Quaternion>  delta) ;

/// @brief Method RegisterConfig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config) ;

/// @brief Method UnRegisterConfig, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UnRegisterConfig(::Oculus::Interaction::PoseDetection::JointDeltaConfig*  config) ;

// Ctor Parameters [CppParam { name: "", ty: "IJointDeltaProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IJointDeltaProvider(IJointDeltaProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16121};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::PoseDetection
