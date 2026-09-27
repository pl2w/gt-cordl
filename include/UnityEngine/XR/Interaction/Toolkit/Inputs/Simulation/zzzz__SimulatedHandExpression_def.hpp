#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/SimulatedHandExpression.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionName_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SimulatedHandExpression)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
class HandExpressionCapture;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
struct HandExpressionName;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedHandExpression;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "SimulatedHandExpression");
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedHandExpression
class CORDL_TYPE SimulatedHandExpression : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_capture, put=set_capture)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  capture;

 __declspec(property(get=get_expressionName, put=set_expressionName)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  expressionName;

 __declspec(property(get=get_icon)) ::UnityW<::UnityEngine::Sprite>  icon;

 __declspec(property(get=get_isQuickAction, put=set_isQuickAction)) bool  isQuickAction;

/// @brief Field m_Capture, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Capture, put=__cordl_internal_set_m_Capture)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  m_Capture;

/// @brief Field m_ExpressionName, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_ExpressionName, put=__cordl_internal_set_m_ExpressionName)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  m_ExpressionName;

/// @brief Field m_IsQuickAction, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsQuickAction, put=__cordl_internal_set_m_IsQuickAction)) bool  m_IsQuickAction;

/// @brief Field m_Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::StringW  m_Name;

/// @brief Field m_ToggleInput, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleInput, put=__cordl_internal_set_m_ToggleInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ToggleInput;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_toggleInput, put=set_toggleInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  toggleInput;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression* New_ctor() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0xb4b8ff0, size 0x40, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0xb4b8f88, size 0x68, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> const& __cordl_internal_get_m_Capture() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>& __cordl_internal_get_m_Capture() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName const& __cordl_internal_get_m_ExpressionName() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName& __cordl_internal_get_m_ExpressionName() ;

constexpr bool const& __cordl_internal_get_m_IsQuickAction() const;

constexpr bool& __cordl_internal_get_m_IsQuickAction() ;

constexpr ::StringW const& __cordl_internal_get_m_Name() const;

constexpr ::StringW& __cordl_internal_get_m_Name() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ToggleInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ToggleInput() ;

constexpr void __cordl_internal_set_m_Capture(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  value) ;

constexpr void __cordl_internal_set_m_ExpressionName(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value) ;

constexpr void __cordl_internal_set_m_IsQuickAction(bool  value) ;

constexpr void __cordl_internal_set_m_Name(::StringW  value) ;

constexpr void __cordl_internal_set_m_ToggleInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method .ctor, addr 0xb4b9030, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_capture, addr 0xb4b8f38, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> get_capture() ;

/// @brief Method get_expressionName, addr 0xb4b8f58, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName get_expressionName() ;

/// @brief Method get_icon, addr 0xb4b8f70, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_icon() ;

/// @brief Method get_isQuickAction, addr 0xb4b8f48, size 0x8, virtual false, abstract: false, final false
inline bool get_isQuickAction() ;

/// @brief Method get_name, addr 0xb4b8ed0, size 0x58, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_toggleInput, addr 0xb4b8f28, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_toggleInput() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_capture, addr 0xb4b8f40, size 0x8, virtual false, abstract: false, final false
inline void set_capture(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*  value) ;

/// @brief Method set_expressionName, addr 0xb4b8f64, size 0xc, virtual false, abstract: false, final false
inline void set_expressionName(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value) ;

/// @brief Method set_isQuickAction, addr 0xb4b8f50, size 0x8, virtual false, abstract: false, final false
inline void set_isQuickAction(bool  value) ;

/// @brief Method set_toggleInput, addr 0xb4b8f30, size 0x8, virtual false, abstract: false, final false
inline void set_toggleInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulatedHandExpression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulatedHandExpression", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulatedHandExpression(SimulatedHandExpression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulatedHandExpression", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulatedHandExpression(SimulatedHandExpression const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11614};

/// [SerializeField]
/// [Tooltip("The unique name for the hand expression.")]
/// [Delayed]
/// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Name;

/// [SerializeField]
/// [Tooltip("The input to trigger the simulated hand expression.")]
/// @brief Field m_ToggleInput, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ToggleInput;

/// [SerializeField]
/// [Tooltip("The captured hand expression to simulate when the input action is performed.")]
/// @brief Field m_Capture, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  ___m_Capture;

/// [SerializeField]
/// [Tooltip("Whether or not this expression appears in the quick action list in the simulator.")]
/// @brief Field m_IsQuickAction, offset: 0x28, size: 0x1, def value: None
 bool  ___m_IsQuickAction;

/// @brief Field m_ExpressionName, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  ___m_ExpressionName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression, ___m_ToggleInput) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression, ___m_Capture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression, ___m_IsQuickAction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression, ___m_ExpressionName) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
