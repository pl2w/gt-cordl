#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/IXRHapticImpulseChannel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IXRHapticImpulseChannel)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class IXRHapticImpulseChannel;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::IXRHapticImpulseChannel*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "IXRHapticImpulseChannel");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.IXRHapticImpulseChannel
class CORDL_TYPE IXRHapticImpulseChannel {
public:
// Declarations
/// @brief Method SendHapticImpulse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency) ;

// Ctor Parameters [CppParam { name: "", ty: "IXRHapticImpulseChannel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRHapticImpulseChannel(IXRHapticImpulseChannel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11675};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics
