#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/ScreenSpaceSelectInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScreenSpaceSelectInput)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class IXRInputButtonReader;
}
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
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
class ScreenSpaceSelectInput;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput*, "UnityEngine.XR.Interaction.Toolkit.AR.Inputs", "ScreenSpaceSelectInput");
// [AddComponentMenu("XR/Input/Screen Space Select Input", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceSelectInput.html")]
// [DefaultExecutionOrder(-30050)]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceSelectInput
class CORDL_TYPE ScreenSpaceSelectInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_dragCurrentPositionInput, put=set_dragCurrentPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  dragCurrentPositionInput;

/// @brief Field m_DragCurrentPositionInput, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DragCurrentPositionInput, put=__cordl_internal_set_m_DragCurrentPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_DragCurrentPositionInput;

/// @brief Field m_IsPerformed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsPerformed, put=__cordl_internal_set_m_IsPerformed)) bool  m_IsPerformed;

/// @brief Field m_PinchGapDeltaInput, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PinchGapDeltaInput, put=__cordl_internal_set_m_PinchGapDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  m_PinchGapDeltaInput;

/// @brief Field m_TapStartPosition, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TapStartPosition, put=__cordl_internal_set_m_TapStartPosition)) ::UnityEngine::Vector2  m_TapStartPosition;

/// @brief Field m_TapStartPositionInput, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TapStartPositionInput, put=__cordl_internal_set_m_TapStartPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_TapStartPositionInput;

/// @brief Field m_TwistDeltaRotationInput, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TwistDeltaRotationInput, put=__cordl_internal_set_m_TwistDeltaRotationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  m_TwistDeltaRotationInput;

/// @brief Field m_WasCompletedThisFrame, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasCompletedThisFrame, put=__cordl_internal_set_m_WasCompletedThisFrame)) bool  m_WasCompletedThisFrame;

/// @brief Field m_WasPerformedThisFrame, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasPerformedThisFrame, put=__cordl_internal_set_m_WasPerformedThisFrame)) bool  m_WasPerformedThisFrame;

 __declspec(property(get=get_pinchGapDeltaInput, put=set_pinchGapDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  pinchGapDeltaInput;

 __declspec(property(get=get_tapStartPositionInput, put=set_tapStartPositionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  tapStartPositionInput;

 __declspec(property(get=get_twistDeltaRotationInput, put=set_twistDeltaRotationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  twistDeltaRotationInput;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput* New_ctor() ;

/// @brief Method ReadIsPerformed, addr 0xb4d0c84, size 0x8, virtual true, abstract: false, final true
inline bool ReadIsPerformed() ;

/// @brief Method ReadValue, addr 0xb4d0c9c, size 0x18, virtual true, abstract: false, final true
inline float_t ReadValue() ;

/// @brief Method ReadWasCompletedThisFrame, addr 0xb4d0c94, size 0x8, virtual true, abstract: false, final true
inline bool ReadWasCompletedThisFrame() ;

/// @brief Method ReadWasPerformedThisFrame, addr 0xb4d0c8c, size 0x8, virtual true, abstract: false, final true
inline bool ReadWasPerformedThisFrame() ;

/// @brief Method TryReadValue, addr 0xb4d0cb4, size 0x1c, virtual true, abstract: false, final true
inline bool TryReadValue(::by_ref<float_t>  value) ;

/// @brief Method Update, addr 0xb4d0b48, size 0x13c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_DragCurrentPositionInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_DragCurrentPositionInput() ;

constexpr bool const& __cordl_internal_get_m_IsPerformed() const;

constexpr bool& __cordl_internal_get_m_IsPerformed() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& __cordl_internal_get_m_PinchGapDeltaInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& __cordl_internal_get_m_PinchGapDeltaInput() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_TapStartPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_TapStartPosition() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_TapStartPositionInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_TapStartPositionInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& __cordl_internal_get_m_TwistDeltaRotationInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& __cordl_internal_get_m_TwistDeltaRotationInput() ;

constexpr bool const& __cordl_internal_get_m_WasCompletedThisFrame() const;

constexpr bool& __cordl_internal_get_m_WasCompletedThisFrame() ;

constexpr bool const& __cordl_internal_get_m_WasPerformedThisFrame() const;

constexpr bool& __cordl_internal_get_m_WasPerformedThisFrame() ;

constexpr void __cordl_internal_set_m_DragCurrentPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_IsPerformed(bool  value) ;

constexpr void __cordl_internal_set_m_PinchGapDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_TapStartPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_TapStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_TwistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_WasCompletedThisFrame(bool  value) ;

constexpr void __cordl_internal_set_m_WasPerformedThisFrame(bool  value) ;

/// @brief Method .ctor, addr 0xb4d0cd0, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_dragCurrentPositionInput, addr 0xb4d0a1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_dragCurrentPositionInput() ;

/// @brief Method get_pinchGapDeltaInput, addr 0xb4d0a80, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* get_pinchGapDeltaInput() ;

/// @brief Method get_tapStartPositionInput, addr 0xb4d09b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_tapStartPositionInput() ;

/// @brief Method get_twistDeltaRotationInput, addr 0xb4d0ae4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* get_twistDeltaRotationInput() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputButtonReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputButtonReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<float_t>* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1_float_t_() noexcept;

/// @brief Method set_dragCurrentPositionInput, addr 0xb4d0a24, size 0x5c, virtual false, abstract: false, final false
inline void set_dragCurrentPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_pinchGapDeltaInput, addr 0xb4d0a88, size 0x5c, virtual false, abstract: false, final false
inline void set_pinchGapDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

/// @brief Method set_tapStartPositionInput, addr 0xb4d09c0, size 0x5c, virtual false, abstract: false, final false
inline void set_tapStartPositionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_twistDeltaRotationInput, addr 0xb4d0aec, size 0x5c, virtual false, abstract: false, final false
inline void set_twistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceSelectInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceSelectInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenSpaceSelectInput(ScreenSpaceSelectInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceSelectInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenSpaceSelectInput(ScreenSpaceSelectInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11704};

/// [SerializeField]
/// @brief Field m_TapStartPositionInput, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_TapStartPositionInput;

/// [SerializeField]
/// @brief Field m_DragCurrentPositionInput, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_DragCurrentPositionInput;

/// [SerializeField]
/// @brief Field m_PinchGapDeltaInput, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  ___m_PinchGapDeltaInput;

/// [SerializeField]
/// @brief Field m_TwistDeltaRotationInput, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  ___m_TwistDeltaRotationInput;

/// @brief Field m_IsPerformed, offset: 0x40, size: 0x1, def value: None
 bool  ___m_IsPerformed;

/// @brief Field m_WasPerformedThisFrame, offset: 0x41, size: 0x1, def value: None
 bool  ___m_WasPerformedThisFrame;

/// @brief Field m_WasCompletedThisFrame, offset: 0x42, size: 0x1, def value: None
 bool  ___m_WasCompletedThisFrame;

/// @brief Field m_TapStartPosition, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_TapStartPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput, ___m_TapStartPositionInput) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput, ___m_DragCurrentPositionInput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput, ___m_PinchGapDeltaInput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput, ___m_TwistDeltaRotationInput) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput, ___m_IsPerformed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput, ___m_WasPerformedThisFrame) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput, ___m_WasCompletedThisFrame) == 0x42, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput, ___m_TapStartPosition) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceSelectInput) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AR::Inputs
