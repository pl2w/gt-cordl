#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/AffordanceStateData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AffordanceStateData)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "AffordanceStateData");
// [IsReadOnly]
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData
struct CORDL_TYPE AffordanceStateData {
public:
// Declarations
 __declspec(property(get=get_stateIndex)) uint8_t  stateIndex;

 __declspec(property(get=get_stateTransitionAmountFloat)) float_t  stateTransitionAmountFloat;

 __declspec(property(get=get_stateTransitionIncrement)) uint8_t  stateTransitionIncrement;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*() ;

/// @brief Method Equals, addr 0xb4d2104, size 0x84, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb4d20dc, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  other) ;

/// @brief Method GetHashCode, addr 0xb4d2188, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0xb4d2094, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(uint8_t  stateIndex, float_t  transitionAmount) ;

/// @brief Method .ctor, addr 0xb4d20d0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(uint8_t  stateIndex, uint8_t  transitionIncrement) ;

/// [CompilerGenerated]
/// @brief Method get_stateIndex, addr 0xb4d206c, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_stateIndex() ;

/// @brief Method get_stateTransitionAmountFloat, addr 0xb4d207c, size 0x18, virtual false, abstract: false, final false
inline float_t get_stateTransitionAmountFloat() ;

/// [CompilerGenerated]
/// @brief Method get_stateTransitionIncrement, addr 0xb4d2074, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_stateTransitionIncrement() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>"
constexpr ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* i___System__IEquatable_1___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__State__AffordanceStateData_() ;

// Ctor Parameters []
// @brief default ctor
constexpr AffordanceStateData() ;

// Ctor Parameters [CppParam { name: "_stateIndex_k__BackingField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stateTransitionIncrement_k__BackingField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr AffordanceStateData(uint8_t  _stateIndex_k__BackingField, uint8_t  _stateTransitionIncrement_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11728};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field totalStateTransitionIncrements offset 0xffffffff size 0x1
static constexpr uint8_t  totalStateTransitionIncrements{static_cast<uint8_t>(0xffu)};

/// [CompilerGenerated]
/// @brief Field <stateIndex>k__BackingField, offset: 0x0, size: 0x1, def value: None
 uint8_t  _stateIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <stateTransitionIncrement>k__BackingField, offset: 0x1, size: 0x1, def value: None
 uint8_t  _stateTransitionIncrement_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData, _stateIndex_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData, _stateTransitionIncrement_k__BackingField) == 0x1, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData) == 0x2, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
