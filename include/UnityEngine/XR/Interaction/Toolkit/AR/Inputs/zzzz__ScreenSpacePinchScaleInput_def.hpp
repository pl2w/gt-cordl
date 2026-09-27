#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/ScreenSpacePinchScaleInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScreenSpacePinchScaleInput)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class IXRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputValueReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
class ScreenSpacePinchScaleInput;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput*, "UnityEngine.XR.Interaction.Toolkit.AR.Inputs", "ScreenSpacePinchScaleInput");
// [AddComponentMenu("XR/Input/Screen Space Pinch Scale Input", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpacePinchScaleInput.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpacePinchScaleInput
class CORDL_TYPE ScreenSpacePinchScaleInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field m_PinchGapDeltaInput, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PinchGapDeltaInput, put=__cordl_internal_set_m_PinchGapDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  m_PinchGapDeltaInput;

/// @brief Field m_RotationThreshold, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RotationThreshold, put=__cordl_internal_set_m_RotationThreshold)) float_t  m_RotationThreshold;

/// @brief Field m_TwistDeltaRotationInput, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TwistDeltaRotationInput, put=__cordl_internal_set_m_TwistDeltaRotationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  m_TwistDeltaRotationInput;

/// @brief Field m_UseRotationThreshold, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseRotationThreshold, put=__cordl_internal_set_m_UseRotationThreshold)) bool  m_UseRotationThreshold;

 __declspec(property(get=get_pinchGapDeltaInput, put=set_pinchGapDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  pinchGapDeltaInput;

 __declspec(property(get=get_rotationThreshold, put=set_rotationThreshold)) float_t  rotationThreshold;

 __declspec(property(get=get_twistDeltaRotationInput, put=set_twistDeltaRotationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  twistDeltaRotationInput;

 __declspec(property(get=get_useRotationThreshold, put=set_useRotationThreshold)) bool  useRotationThreshold;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4cf804, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4cf7dc, size 0x28, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadValue, addr 0xb4cf82c, size 0x1c, virtual true, abstract: false, final true
inline float_t ReadValue() ;

/// @brief Method TryReadValue, addr 0xb4cf848, size 0xf0, virtual true, abstract: false, final true
inline bool TryReadValue(::by_ref<float_t>  value) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& __cordl_internal_get_m_PinchGapDeltaInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& __cordl_internal_get_m_PinchGapDeltaInput() ;

constexpr float_t const& __cordl_internal_get_m_RotationThreshold() const;

constexpr float_t& __cordl_internal_get_m_RotationThreshold() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& __cordl_internal_get_m_TwistDeltaRotationInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& __cordl_internal_get_m_TwistDeltaRotationInput() ;

constexpr bool const& __cordl_internal_get_m_UseRotationThreshold() const;

constexpr bool& __cordl_internal_get_m_UseRotationThreshold() ;

constexpr void __cordl_internal_set_m_PinchGapDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_RotationThreshold(float_t  value) ;

constexpr void __cordl_internal_set_m_TwistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_UseRotationThreshold(bool  value) ;

/// @brief Method .ctor, addr 0xb4cf938, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_pinchGapDeltaInput, addr 0xb4cf714, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* get_pinchGapDeltaInput() ;

/// @brief Method get_rotationThreshold, addr 0xb4cf704, size 0x8, virtual false, abstract: false, final false
inline float_t get_rotationThreshold() ;

/// @brief Method get_twistDeltaRotationInput, addr 0xb4cf778, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* get_twistDeltaRotationInput() ;

/// @brief Method get_useRotationThreshold, addr 0xb4cf6f4, size 0x8, virtual false, abstract: false, final false
inline bool get_useRotationThreshold() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_float_t_() noexcept;

/// @brief Method set_pinchGapDeltaInput, addr 0xb4cf71c, size 0x5c, virtual false, abstract: false, final false
inline void set_pinchGapDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

/// @brief Method set_rotationThreshold, addr 0xb4cf70c, size 0x8, virtual false, abstract: false, final false
inline void set_rotationThreshold(float_t  value) ;

/// @brief Method set_twistDeltaRotationInput, addr 0xb4cf780, size 0x5c, virtual false, abstract: false, final false
inline void set_twistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

/// @brief Method set_useRotationThreshold, addr 0xb4cf6fc, size 0x8, virtual false, abstract: false, final false
inline void set_useRotationThreshold(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpacePinchScaleInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpacePinchScaleInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenSpacePinchScaleInput(ScreenSpacePinchScaleInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpacePinchScaleInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenSpacePinchScaleInput(ScreenSpacePinchScaleInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11701};

/// [SerializeField]
/// [Tooltip("Enables a rotation threshold that blocks pinch scale gestures when surpassed.")]
/// @brief Field m_UseRotationThreshold, offset: 0x20, size: 0x1, def value: None
 bool  ___m_UseRotationThreshold;

/// [SerializeField]
/// [Tooltip("The threshold at which a gestures will be interpreted only as rotation and not a pinch scale gesture.")]
/// @brief Field m_RotationThreshold, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_RotationThreshold;

/// [SerializeField]
/// [Tooltip("The input used to read the pinch gap delta value.")]
/// @brief Field m_PinchGapDeltaInput, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  ___m_PinchGapDeltaInput;

/// [SerializeField]
/// [Tooltip("The input used to read the twist delta rotation value.")]
/// @brief Field m_TwistDeltaRotationInput, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  ___m_TwistDeltaRotationInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput, ___m_UseRotationThreshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput, ___m_RotationThreshold) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput, ___m_PinchGapDeltaInput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput, ___m_TwistDeltaRotationInput) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpacePinchScaleInput) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AR::Inputs
