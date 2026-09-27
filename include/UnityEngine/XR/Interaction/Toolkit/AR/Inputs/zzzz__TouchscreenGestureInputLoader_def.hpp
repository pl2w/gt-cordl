#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/TouchscreenGestureInputLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TouchscreenGestureInputLoader)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
class TouchscreenGestureInputLoader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::TouchscreenGestureInputLoader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::TouchscreenGestureInputLoader*, "UnityEngine.XR.Interaction.Toolkit.AR.Inputs", "TouchscreenGestureInputLoader");
// [AddComponentMenu("XR/Input/Touchscreen Gesture Input Loader", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.TouchscreenGestureInputLoader.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AR.Inputs.TouchscreenGestureInputLoader
class CORDL_TYPE TouchscreenGestureInputLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_TapDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TapDuration, put=__cordl_internal_set_m_TapDuration)) float_t  m_TapDuration;

 __declspec(property(get=get_tapDuration, put=set_tapDuration)) float_t  tapDuration;

/// @brief Method Awake, addr 0xb4d0e84, size 0x80, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InitializeTouchscreenGestureController, addr 0xb4d0f08, size 0x4, virtual false, abstract: false, final false
inline void InitializeTouchscreenGestureController() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::TouchscreenGestureInputLoader* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4d0f10, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4d0f04, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RefreshGestureRecognizersConfiguration, addr 0xb4d0f0c, size 0x4, virtual false, abstract: false, final false
inline void RefreshGestureRecognizersConfiguration() ;

/// @brief Method RemoveTouchscreenGestureController, addr 0xb4d0f14, size 0x4, virtual false, abstract: false, final false
inline void RemoveTouchscreenGestureController() ;

constexpr float_t const& __cordl_internal_get_m_TapDuration() const;

constexpr float_t& __cordl_internal_get_m_TapDuration() ;

constexpr void __cordl_internal_set_m_TapDuration(float_t  value) ;

/// @brief Method .ctor, addr 0xb4d0f18, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_tapDuration, addr 0xb4d0e74, size 0x8, virtual false, abstract: false, final false
inline float_t get_tapDuration() ;

/// @brief Method set_tapDuration, addr 0xb4d0e7c, size 0x8, virtual false, abstract: false, final false
inline void set_tapDuration(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchscreenGestureInputLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchscreenGestureInputLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchscreenGestureInputLoader(TouchscreenGestureInputLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchscreenGestureInputLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchscreenGestureInputLoader(TouchscreenGestureInputLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11705};

/// [Header("Gesture Configuration")]
/// [SerializeField]
/// [Tooltip("Time (in seconds) within (\u{2264}) which a touch and release has to occur for it to be registered as a tap.")]
/// @brief Field m_TapDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_TapDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::TouchscreenGestureInputLoader, ___m_TapDuration) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::TouchscreenGestureInputLoader) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AR::Inputs
