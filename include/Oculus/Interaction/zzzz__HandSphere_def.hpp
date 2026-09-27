#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandSphere.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HandSphere)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
struct HandSphere;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::HandSphere);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandSphere, "Oculus.Interaction", "HandSphere");
// Dependencies Oculus.Interaction.Input.HandJointId, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.HandSphere
struct CORDL_TYPE HandSphere {
public:
// Declarations
 __declspec(property(get=get_Joint)) ::Oculus::Interaction::Input::HandJointId  Joint;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Radius)) float_t  Radius;

/// @brief Method .ctor, addr 0xa46556c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  position, float_t  radius, ::Oculus::Interaction::Input::HandJointId  joint) ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Joint, addr 0xa46581c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandJointId get_Joint() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Position, addr 0xa465808, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Radius, addr 0xa465814, size 0x8, virtual false, abstract: false, final false
inline float_t get_Radius() ;

// Ctor Parameters []
// @brief default ctor
constexpr HandSphere() ;

// Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Radius_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Joint_k__BackingField", ty: "::Oculus::Interaction::Input::HandJointId", modifiers: "", def_value: None, comment: None }]
constexpr HandSphere(::UnityEngine::Vector3  _Position_k__BackingField, float_t  _Radius_k__BackingField, ::Oculus::Interaction::Input::HandJointId  _Joint_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15886};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// [CompilerGenerated]
/// @brief Field <Position>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _Position_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Radius>k__BackingField, offset: 0xc, size: 0x4, def value: None
 float_t  _Radius_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Joint>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::HandJointId  _Joint_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::HandSphere, _Position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandSphere, _Radius_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::HandSphere, _Joint_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::HandSphere) == 0x14, "Size mismatch!");

} // namespace end def Oculus::Interaction
