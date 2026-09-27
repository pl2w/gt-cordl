#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/IAsyncAffordanceStateReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IAsyncAffordanceStateReceiver)
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAffordanceStateReceiver;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAsyncAffordanceStateReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver", "IAsyncAffordanceStateReceiver");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.IAsyncAffordanceStateReceiver
class CORDL_TYPE IAsyncAffordanceStateReceiver {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*() noexcept;

/// @brief Method HandleTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::Jobs::JobHandle HandleTween(float_t  tweenTarget) ;

/// @brief Method UpdateStateFromCompletedJob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateStateFromCompletedJob() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver* i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAsyncAffordanceStateReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAsyncAffordanceStateReceiver(IAsyncAffordanceStateReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver
