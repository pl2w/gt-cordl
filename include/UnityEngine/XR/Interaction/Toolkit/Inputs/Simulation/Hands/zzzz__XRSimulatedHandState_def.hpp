#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/XRSimulatedHandState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionName_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XRSimulatedHandState)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
struct HandExpressionName;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
struct XRSimulatedHandState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands", "XRSimulatedHandState");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.XRSimulatedHandState
struct CORDL_TYPE XRSimulatedHandState {
public:
// Declarations
 __declspec(property(get=get_euler, put=set_euler)) ::UnityEngine::Vector3  euler;

 __declspec(property(get=get_expressionName, put=set_expressionName)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  expressionName;

 __declspec(property(get=get_isTracked, put=set_isTracked)) bool  isTracked;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_rotation, put=set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Method Reset, addr 0xb4c44e4, size 0xb4, virtual false, abstract: false, final false
inline void Reset() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_euler, addr 0xb4c8bf0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_euler() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_expressionName, addr 0xb4c8c18, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName get_expressionName() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_isTracked, addr 0xb4c8c08, size 0x8, virtual false, abstract: false, final false
inline bool get_isTracked() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_position, addr 0xb4c8bc0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_rotation, addr 0xb4c8bd8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// [CompilerGenerated]
/// @brief Method set_euler, addr 0xb4c8bfc, size 0xc, virtual false, abstract: false, final false
inline void set_euler(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_expressionName, addr 0xb4c8c24, size 0xc, virtual false, abstract: false, final false
inline void set_expressionName(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value) ;

/// [CompilerGenerated]
/// @brief Method set_isTracked, addr 0xb4c8c10, size 0x8, virtual false, abstract: false, final false
inline void set_isTracked(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_position, addr 0xb4c8bcc, size 0xc, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// [CompilerGenerated]
/// @brief Method set_rotation, addr 0xb4c8be4, size 0xc, virtual false, abstract: false, final false
inline void set_rotation(::UnityEngine::Quaternion  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr XRSimulatedHandState() ;

// Ctor Parameters [CppParam { name: "_position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rotation_k__BackingField", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "_euler_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isTracked_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_expressionName_k__BackingField", ty: "::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName", modifiers: "", def_value: None, comment: None }]
constexpr XRSimulatedHandState(::UnityEngine::Vector3  _position_k__BackingField, ::UnityEngine::Quaternion  _rotation_k__BackingField, ::UnityEngine::Vector3  _euler_k__BackingField, bool  _isTracked_k__BackingField, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  _expressionName_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// [CompilerGenerated]
/// @brief Field <position>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _position_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <rotation>k__BackingField, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  _rotation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <euler>k__BackingField, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  _euler_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isTracked>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  _isTracked_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <expressionName>k__BackingField, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  _expressionName_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState, _position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState, _rotation_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState, _euler_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState, _isTracked_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState, _expressionName_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands
