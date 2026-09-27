#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/Inputs/ScreenSpaceRotateInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceRotateInput)
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
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRRayInteractor;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
class ScreenSpaceRotateInput;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput*, "UnityEngine.XR.Interaction.Toolkit.AR.Inputs", "ScreenSpaceRotateInput");
// [AddComponentMenu("XR/Input/Screen Space Rotate Input", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceRotateInput.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::AR::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceRotateInput
class CORDL_TYPE ScreenSpaceRotateInput : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_dragDeltaInput, put=set_dragDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  dragDeltaInput;

/// @brief Field m_DragDeltaInput, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DragDeltaInput, put=__cordl_internal_set_m_DragDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_DragDeltaInput;

/// @brief Field m_RayInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RayInteractor, put=__cordl_internal_set_m_RayInteractor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  m_RayInteractor;

/// @brief Field m_ScreenTouchCountInput, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScreenTouchCountInput, put=__cordl_internal_set_m_ScreenTouchCountInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  m_ScreenTouchCountInput;

/// @brief Field m_TwistDeltaRotationInput, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TwistDeltaRotationInput, put=__cordl_internal_set_m_TwistDeltaRotationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  m_TwistDeltaRotationInput;

 __declspec(property(get=get_rayInteractor, put=set_rayInteractor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  rayInteractor;

 __declspec(property(get=get_screenTouchCountInput, put=set_screenTouchCountInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  screenTouchCountInput;

 __declspec(property(get=get_twistDeltaRotationInput, put=set_twistDeltaRotationInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  twistDeltaRotationInput;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>*() noexcept;

/// @brief Method Awake, addr 0xb4d047c, size 0xa8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4d0558, size 0x34, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4d0524, size 0x34, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadValue, addr 0xb4d058c, size 0x18, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 ReadValue() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Reset, addr 0xb4d0478, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method TryReadValue, addr 0xb4d05a4, size 0x288, virtual true, abstract: false, final true
inline bool TryReadValue(::by_ref<::UnityEngine::Vector2>  value) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_DragDeltaInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_DragDeltaInput() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& __cordl_internal_get_m_RayInteractor() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& __cordl_internal_get_m_RayInteractor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* const& __cordl_internal_get_m_ScreenTouchCountInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*& __cordl_internal_get_m_ScreenTouchCountInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& __cordl_internal_get_m_TwistDeltaRotationInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& __cordl_internal_get_m_TwistDeltaRotationInput() ;

constexpr void __cordl_internal_set_m_DragDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_RayInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value) ;

constexpr void __cordl_internal_set_m_ScreenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_TwistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xb4d082c, size 0x18c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_dragDeltaInput, addr 0xb4d03b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_dragDeltaInput() ;

/// @brief Method get_rayInteractor, addr 0xb4d033c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> get_rayInteractor() ;

/// @brief Method get_screenTouchCountInput, addr 0xb4d0414, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>* get_screenTouchCountInput() ;

/// @brief Method get_twistDeltaRotationInput, addr 0xb4d034c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* get_twistDeltaRotationInput() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::IXRInputValueReader_1<::UnityEngine::Vector2>* i___UnityEngine__XR__Interaction__Toolkit__Inputs__Readers__IXRInputValueReader_1___UnityEngine__Vector2_() noexcept;

/// @brief Method set_dragDeltaInput, addr 0xb4d03b8, size 0x5c, virtual false, abstract: false, final false
inline void set_dragDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_rayInteractor, addr 0xb4d0344, size 0x8, virtual false, abstract: false, final false
inline void set_rayInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*  value) ;

/// @brief Method set_screenTouchCountInput, addr 0xb4d041c, size 0x5c, virtual false, abstract: false, final false
inline void set_screenTouchCountInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  value) ;

/// @brief Method set_twistDeltaRotationInput, addr 0xb4d0354, size 0x5c, virtual false, abstract: false, final false
inline void set_twistDeltaRotationInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceRotateInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceRotateInput", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenSpaceRotateInput(ScreenSpaceRotateInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceRotateInput", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenSpaceRotateInput(ScreenSpaceRotateInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11703};

/// [SerializeField]
/// [Tooltip("The ray interactor to get the attach transform from.")]
/// @brief Field m_RayInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  ___m_RayInteractor;

/// [SerializeField]
/// [Tooltip("The input used to read the twist delta rotation value.")]
/// @brief Field m_TwistDeltaRotationInput, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  ___m_TwistDeltaRotationInput;

/// [SerializeField]
/// [Tooltip("The input used to read the drag delta value.")]
/// @brief Field m_DragDeltaInput, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_DragDeltaInput;

/// [SerializeField]
/// [Tooltip("The input used to read the screen touch count value.")]
/// @brief Field m_ScreenTouchCountInput, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<int32_t>*  ___m_ScreenTouchCountInput;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput, ___m_RayInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput, ___m_TwistDeltaRotationInput) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput, ___m_DragDeltaInput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput, ___m_ScreenTouchCountInput) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AR::Inputs::ScreenSpaceRotateInput) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AR::Inputs
