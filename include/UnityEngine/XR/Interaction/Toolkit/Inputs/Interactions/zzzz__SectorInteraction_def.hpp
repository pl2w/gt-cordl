#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/SectorInteraction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_Directions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_State_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Interactions/zzzz__SectorInteraction_SweepBehavior_def.hpp"
#include "beatsaber-hook/shared/valuew.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SectorInteraction)
namespace GlobalNamespace {
struct SectorInteraction_Directions;
}
namespace GlobalNamespace {
struct SectorInteraction_State;
}
namespace GlobalNamespace {
struct SectorInteraction_SweepBehavior;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class IInputInteraction_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
struct Cardinal;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
class SectorInteraction;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions", "SectorInteraction");
// [Preserve]
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions.SectorInteraction::Directions, UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions.SectorInteraction::State, UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions.SectorInteraction::SweepBehavior
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Interactions.SectorInteraction
class CORDL_TYPE SectorInteraction : public ::System::Object {
public:
// Declarations
using Directions = ::GlobalNamespace::SectorInteraction_Directions;

using State = ::GlobalNamespace::SectorInteraction_State;

using SweepBehavior = ::GlobalNamespace::SectorInteraction_SweepBehavior;

/// @brief Field <defaultPressPoint>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__defaultPressPoint_k__BackingField, put=setStaticF__defaultPressPoint_k__BackingField)) float_t  _defaultPressPoint_k__BackingField;

/// @brief Field directions, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_directions, put=__cordl_internal_set_directions)) ::GlobalNamespace::SectorInteraction_Directions  directions;

/// @brief Field m_State, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_State, put=__cordl_internal_set_m_State)) ::GlobalNamespace::SectorInteraction_State  m_State;

/// @brief Field m_WasValidDirection, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WasValidDirection, put=__cordl_internal_set_m_WasValidDirection)) bool  m_WasValidDirection;

/// @brief Field pressPoint, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressPoint, put=__cordl_internal_set_pressPoint)) float_t  pressPoint;

 __declspec(property(get=get_pressPointOrDefault)) float_t  pressPointOrDefault;

/// @brief Field sweepBehavior, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_sweepBehavior, put=__cordl_internal_set_sweepBehavior)) ::GlobalNamespace::SectorInteraction_SweepBehavior  sweepBehavior;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>"
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>*() noexcept;

/// @brief Method GetNearestDirection, addr 0xb4cac90, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SectorInteraction_Directions GetNearestDirection(::UnityEngine::XR::Interaction::Toolkit::Inputs::Cardinal  value) ;

/// @brief Convert operator to "Il2CppObject"
constexpr operator  Il2CppObject*() noexcept;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// [Preserve]
/// @brief Method Initialize, addr 0xb4cad40, size 0x4, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method IsValidDirection, addr 0xb4cabdc, size 0xb4, virtual false, abstract: false, final false
inline bool IsValidDirection(::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>  context) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction* New_ctor() ;

/// @brief Method Process, addr 0xb4caac0, size 0x11c, virtual true, abstract: false, final true
inline void Process(::by_ref<::ValueW<80, "UnityEngine.InputSystem", "InputInteractionContext">>  context) ;

/// @brief Method Reset, addr 0xb4cacb0, size 0x4, virtual true, abstract: false, final true
inline void Reset() ;

constexpr ::GlobalNamespace::SectorInteraction_Directions const& __cordl_internal_get_directions() const;

constexpr ::GlobalNamespace::SectorInteraction_Directions& __cordl_internal_get_directions() ;

constexpr ::GlobalNamespace::SectorInteraction_State const& __cordl_internal_get_m_State() const;

constexpr ::GlobalNamespace::SectorInteraction_State& __cordl_internal_get_m_State() ;

constexpr bool const& __cordl_internal_get_m_WasValidDirection() const;

constexpr bool& __cordl_internal_get_m_WasValidDirection() ;

constexpr float_t const& __cordl_internal_get_pressPoint() const;

constexpr float_t& __cordl_internal_get_pressPoint() ;

constexpr ::GlobalNamespace::SectorInteraction_SweepBehavior const& __cordl_internal_get_sweepBehavior() const;

constexpr ::GlobalNamespace::SectorInteraction_SweepBehavior& __cordl_internal_get_sweepBehavior() ;

constexpr void __cordl_internal_set_directions(::GlobalNamespace::SectorInteraction_Directions  value) ;

constexpr void __cordl_internal_set_m_State(::GlobalNamespace::SectorInteraction_State  value) ;

constexpr void __cordl_internal_set_m_WasValidDirection(bool  value) ;

constexpr void __cordl_internal_set_pressPoint(float_t  value) ;

constexpr void __cordl_internal_set_sweepBehavior(::GlobalNamespace::SectorInteraction_SweepBehavior  value) ;

/// @brief Method .ctor, addr 0xb4cad44, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF__defaultPressPoint_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_defaultPressPoint, addr 0xb4caa04, size 0x58, virtual false, abstract: false, final false
static inline float_t get_defaultPressPoint() ;

/// @brief Method get_pressPointOrDefault, addr 0xb4ca96c, size 0x98, virtual false, abstract: false, final false
inline float_t get_pressPointOrDefault() ;

/// @brief Convert to "Il2CppObject"
constexpr Il2CppObject* i_Il2CppObject() noexcept;

/// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>"
constexpr ::UnityEngine::InputSystem::IInputInteraction_1<::UnityEngine::Vector2>* i___UnityEngine__InputSystem__IInputInteraction_1___UnityEngine__Vector2_() noexcept;

static inline void setStaticF__defaultPressPoint_k__BackingField(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_defaultPressPoint, addr 0xb4caa5c, size 0x64, virtual false, abstract: false, final false
static inline void set_defaultPressPoint(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SectorInteraction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SectorInteraction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SectorInteraction(SectorInteraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SectorInteraction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SectorInteraction(SectorInteraction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11667};

/// @brief Field directions, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SectorInteraction_Directions  ___directions;

/// @brief Field sweepBehavior, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::SectorInteraction_SweepBehavior  ___sweepBehavior;

/// @brief Field pressPoint, offset: 0x18, size: 0x4, def value: None
 float_t  ___pressPoint;

/// @brief Field m_State, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::SectorInteraction_State  ___m_State;

/// @brief Field m_WasValidDirection, offset: 0x20, size: 0x1, def value: None
 bool  ___m_WasValidDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___directions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___sweepBehavior) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___pressPoint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___m_State) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction, ___m_WasValidDirection) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions::SectorInteraction) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Interactions
