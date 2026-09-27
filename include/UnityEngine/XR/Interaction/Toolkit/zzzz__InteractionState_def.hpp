#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InteractionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(InteractionState)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::InteractionState);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::InteractionState, "UnityEngine.XR.Interaction.Toolkit", "InteractionState");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.InteractionState
struct CORDL_TYPE InteractionState {
public:
// Declarations
 __declspec(property(get=get_activatedThisFrame, put=set_activatedThisFrame)) bool  activatedThisFrame;

 __declspec(property(get=get_active, put=set_active)) bool  active;

/// @brief [Obsolete("deActivatedThisFrame has been deprecated. Use deactivatedThisFrame instead. (UnityUpgradable) -> deactivatedThisFrame", true)]
 __declspec(property(get=get_deActivatedThisFrame, put=set_deActivatedThisFrame)) bool  deActivatedThisFrame;

 __declspec(property(get=get_deactivatedThisFrame, put=set_deactivatedThisFrame)) bool  deactivatedThisFrame;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

/// [Obsolete("Reset has been renamed. Use ResetFrameDependent instead. (UnityUpgradable) -> ResetFrameDependent()", true)]
/// @brief Method Reset, addr 0xb400428, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetFrameDependent, addr 0xb400414, size 0x8, virtual false, abstract: false, final false
inline void ResetFrameDependent() ;

/// @brief Method SetFrameDependent, addr 0xb4003f0, size 0x24, virtual false, abstract: false, final false
inline void SetFrameDependent(bool  wasActive) ;

/// @brief Method SetFrameState, addr 0xb4003b0, size 0x40, virtual false, abstract: false, final false
inline void SetFrameState(bool  isActive) ;

/// @brief Method SetFrameState, addr 0xb3ff674, size 0x30, virtual false, abstract: false, final false
inline void SetFrameState(bool  isActive, float_t  newValue) ;

/// @brief Method get_activatedThisFrame, addr 0xb400390, size 0x8, virtual false, abstract: false, final false
inline bool get_activatedThisFrame() ;

/// @brief Method get_active, addr 0xb400380, size 0x8, virtual false, abstract: false, final false
inline bool get_active() ;

/// @brief Method get_deActivatedThisFrame, addr 0xb40041c, size 0x8, virtual false, abstract: false, final false
inline bool get_deActivatedThisFrame() ;

/// @brief Method get_deactivatedThisFrame, addr 0xb4003a0, size 0x8, virtual false, abstract: false, final false
inline bool get_deactivatedThisFrame() ;

/// @brief Method get_value, addr 0xb400370, size 0x8, virtual false, abstract: false, final false
inline float_t get_value() ;

/// @brief Method set_activatedThisFrame, addr 0xb400398, size 0x8, virtual false, abstract: false, final false
inline void set_activatedThisFrame(bool  value) ;

/// @brief Method set_active, addr 0xb400388, size 0x8, virtual false, abstract: false, final false
inline void set_active(bool  value) ;

/// @brief Method set_deActivatedThisFrame, addr 0xb400424, size 0x4, virtual false, abstract: false, final false
inline void set_deActivatedThisFrame(bool  value) ;

/// @brief Method set_deactivatedThisFrame, addr 0xb4003a8, size 0x8, virtual false, abstract: false, final false
inline void set_deactivatedThisFrame(bool  value) ;

/// @brief Method set_value, addr 0xb400378, size 0x8, virtual false, abstract: false, final false
inline void set_value(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InteractionState() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Active", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ActivatedThisFrame", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DeactivatedThisFrame", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr InteractionState(float_t  m_Value, bool  m_Active, bool  m_ActivatedThisFrame, bool  m_DeactivatedThisFrame) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11066};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
 float_t  m_Value;

/// [SerializeField]
/// @brief Field m_Active, offset: 0x4, size: 0x1, def value: None
 bool  m_Active;

/// @brief Field m_ActivatedThisFrame, offset: 0x5, size: 0x1, def value: None
 bool  m_ActivatedThisFrame;

/// @brief Field m_DeactivatedThisFrame, offset: 0x6, size: 0x1, def value: None
 bool  m_DeactivatedThisFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionState, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionState, m_Active) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionState, m_ActivatedThisFrame) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionState, m_DeactivatedThisFrame) == 0x6, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InteractionState) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
