#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/HapticImpulsePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HapticImpulsePlayer)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class XRInputHapticImpulseProvider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticImpulsePlayer;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics", "HapticImpulsePlayer");
// [AddComponentMenu("XR/Haptics/Haptic Impulse Player", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticImpulsePlayer.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticImpulsePlayer
class CORDL_TYPE HapticImpulsePlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_amplitudeMultiplier, put=set_amplitudeMultiplier)) float_t  amplitudeMultiplier;

 __declspec(property(get=get_hapticOutput, put=set_hapticOutput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*  hapticOutput;

/// @brief Field m_AmplitudeMultiplier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AmplitudeMultiplier, put=__cordl_internal_set_m_AmplitudeMultiplier)) float_t  m_AmplitudeMultiplier;

/// @brief Field m_HapticOutput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HapticOutput, put=__cordl_internal_set_m_HapticOutput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*  m_HapticOutput;

/// @brief Method Awake, addr 0xb4cb510, size 0x14c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetOrCreateInHierarchy, addr 0xb4cba68, size 0x170, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer> GetOrCreateInHierarchy(::UnityEngine::GameObject*  gameObject) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4cb6cc, size 0x14, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4cb6b8, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SendHapticImpulse, addr 0xb4cb6e0, size 0x8, virtual false, abstract: false, final false
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration) ;

/// @brief Method SendHapticImpulse, addr 0xb4cb6e8, size 0x1c0, virtual false, abstract: false, final false
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency) ;

constexpr float_t const& __cordl_internal_get_m_AmplitudeMultiplier() const;

constexpr float_t& __cordl_internal_get_m_AmplitudeMultiplier() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider* const& __cordl_internal_get_m_HapticOutput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*& __cordl_internal_get_m_HapticOutput() ;

constexpr void __cordl_internal_set_m_AmplitudeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticOutput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*  value) ;

/// @brief Method .ctor, addr 0xb4cbbd8, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_amplitudeMultiplier, addr 0xb4cb500, size 0x8, virtual false, abstract: false, final false
inline float_t get_amplitudeMultiplier() ;

/// @brief Method get_hapticOutput, addr 0xb4cb4ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider* get_hapticOutput() ;

/// @brief Method set_amplitudeMultiplier, addr 0xb4cb508, size 0x8, virtual false, abstract: false, final false
inline void set_amplitudeMultiplier(float_t  value) ;

/// @brief Method set_hapticOutput, addr 0xb4cb4f4, size 0xc, virtual false, abstract: false, final false
inline void set_hapticOutput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HapticImpulsePlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HapticImpulsePlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HapticImpulsePlayer(HapticImpulsePlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HapticImpulsePlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HapticImpulsePlayer(HapticImpulsePlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11671};

/// [SerializeField]
/// [Tooltip("Specifies the output haptic control or controller that haptic impulses will be sent to.")]
/// @brief Field m_HapticOutput, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::XRInputHapticImpulseProvider*  ___m_HapticOutput;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Amplitude multiplier which can be used to dampen the haptic impulses sent by this component.")]
/// @brief Field m_AmplitudeMultiplier, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_AmplitudeMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer, ___m_HapticOutput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer, ___m_AmplitudeMultiplier) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics
