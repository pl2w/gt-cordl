#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/IAffordanceStateReceiver_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAffordanceStateReceiver_1)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAffordanceStateReceiver;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template<typename T>
class BaseAffordanceTheme_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
template<typename T>
class IAffordanceStateReceiver_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver", "IAffordanceStateReceiver`1");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.IAffordanceStateReceiver`1<T>
class CORDL_TYPE IAffordanceStateReceiver_1 {
public:
// Declarations
 __declspec(property(get=get_affordanceTheme)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*  affordanceTheme;

 __declspec(property(get=get_currentAffordanceValue)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*  currentAffordanceValue;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*() noexcept;

/// @brief Method get_affordanceTheme, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* get_affordanceTheme() ;

/// @brief Method get_currentAffordanceValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* get_currentAffordanceValue() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver* i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IAffordanceStateReceiver_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAffordanceStateReceiver_1(IAffordanceStateReceiver_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11748};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver
