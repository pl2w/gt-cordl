#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/IAffordanceStateReceiver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAffordanceStateReceiver)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAffordanceStateReceiver;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver", "IAffordanceStateReceiver");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.IAffordanceStateReceiver
class CORDL_TYPE IAffordanceStateReceiver {
public:
// Declarations
 __declspec(property(get=get_currentAffordanceStateData)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*  currentAffordanceStateData;

/// @brief Method OnAffordanceStateUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnAffordanceStateUpdated(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  previousState, ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  newState) ;

/// @brief Method get_currentAffordanceStateData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* get_currentAffordanceStateData() ;

// Ctor Parameters [CppParam { name: "", ty: "IAffordanceStateReceiver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAffordanceStateReceiver(IAffordanceStateReceiver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11747};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver
