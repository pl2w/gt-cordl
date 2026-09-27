#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/AffordanceStateShortcuts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__AffordanceStateData_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AffordanceStateShortcuts)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class AffordanceStateShortcuts;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateShortcuts*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateShortcuts*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State", "AffordanceStateShortcuts");
// [Obsolete("The Affordance System namespace and all associated classes have been deprecated. The existing affordance system will be moved, replaced and updated with a new interaction feedback system in a future version of XRI.")]
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateData
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.AffordanceStateShortcuts
class CORDL_TYPE AffordanceStateShortcuts : public ::System::Object {
public:
// Declarations
/// @brief Field <activatedState>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__activatedState_k__BackingField, put=setStaticF__activatedState_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  _activatedState_k__BackingField;

/// @brief Field <disabledState>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__disabledState_k__BackingField, put=setStaticF__disabledState_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  _disabledState_k__BackingField;

/// @brief Field <focusedState>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__focusedState_k__BackingField, put=setStaticF__focusedState_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  _focusedState_k__BackingField;

/// @brief Field <hoveredPriorityState>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__hoveredPriorityState_k__BackingField, put=setStaticF__hoveredPriorityState_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  _hoveredPriorityState_k__BackingField;

/// @brief Field <hoveredState>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__hoveredState_k__BackingField, put=setStaticF__hoveredState_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  _hoveredState_k__BackingField;

/// @brief Field <idleState>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__idleState_k__BackingField, put=setStaticF__idleState_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  _idleState_k__BackingField;

/// @brief Field <selectedState>k__BackingField, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF__selectedState_k__BackingField, put=setStaticF__selectedState_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  _selectedState_k__BackingField;

/// @brief Field <stateCount>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__stateCount_k__BackingField, put=setStaticF__stateCount_k__BackingField)) uint8_t  _stateCount_k__BackingField;

/// @brief Field k_StateNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_StateNames, put=setStaticF_k_StateNames)) ::System::Collections::Generic::Dictionary_2<uint8_t,::StringW>*  k_StateNames;

/// @brief Method GetNameForIndex, addr 0xb4d1e54, size 0xa0, virtual false, abstract: false, final false
static inline ::StringW GetNameForIndex(uint8_t  index) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__activatedState_k__BackingField() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__disabledState_k__BackingField() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__focusedState_k__BackingField() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__hoveredPriorityState_k__BackingField() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__hoveredState_k__BackingField() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__idleState_k__BackingField() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData getStaticF__selectedState_k__BackingField() ;

static inline uint8_t getStaticF__stateCount_k__BackingField() ;

static inline ::System::Collections::Generic::Dictionary_2<uint8_t,::StringW>* getStaticF_k_StateNames() ;

/// [CompilerGenerated]
/// @brief Method get_activatedState, addr 0xb4d2394, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_activatedState() ;

/// [CompilerGenerated]
/// @brief Method get_disabledState, addr 0xb4d21dc, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_disabledState() ;

/// [CompilerGenerated]
/// @brief Method get_focusedState, addr 0xb4d23ec, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_focusedState() ;

/// [CompilerGenerated]
/// @brief Method get_hoveredPriorityState, addr 0xb4d22e4, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_hoveredPriorityState() ;

/// [CompilerGenerated]
/// @brief Method get_hoveredState, addr 0xb4d228c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_hoveredState() ;

/// [CompilerGenerated]
/// @brief Method get_idleState, addr 0xb4d2234, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_idleState() ;

/// [CompilerGenerated]
/// @brief Method get_selectedState, addr 0xb4d233c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData get_selectedState() ;

/// [CompilerGenerated]
/// @brief Method get_stateCount, addr 0xb4d2444, size 0x58, virtual false, abstract: false, final false
static inline uint8_t get_stateCount() ;

static inline void setStaticF__activatedState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value) ;

static inline void setStaticF__disabledState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value) ;

static inline void setStaticF__focusedState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value) ;

static inline void setStaticF__hoveredPriorityState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value) ;

static inline void setStaticF__hoveredState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value) ;

static inline void setStaticF__idleState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value) ;

static inline void setStaticF__selectedState_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value) ;

static inline void setStaticF__stateCount_k__BackingField(uint8_t  value) ;

static inline void setStaticF_k_StateNames(::System::Collections::Generic::Dictionary_2<uint8_t,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AffordanceStateShortcuts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AffordanceStateShortcuts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AffordanceStateShortcuts(AffordanceStateShortcuts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AffordanceStateShortcuts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AffordanceStateShortcuts(AffordanceStateShortcuts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11729};

/// @brief Field activated offset 0xffffffff size 0x1
static constexpr uint8_t  activated{static_cast<uint8_t>(0x5u)};

/// @brief Field disabled offset 0xffffffff size 0x1
static constexpr uint8_t  disabled{static_cast<uint8_t>(0x0u)};

/// @brief Field focused offset 0xffffffff size 0x1
static constexpr uint8_t  focused{static_cast<uint8_t>(0x6u)};

/// @brief Field hovered offset 0xffffffff size 0x1
static constexpr uint8_t  hovered{static_cast<uint8_t>(0x2u)};

/// @brief Field hoveredPriority offset 0xffffffff size 0x1
static constexpr uint8_t  hoveredPriority{static_cast<uint8_t>(0x3u)};

/// @brief Field idle offset 0xffffffff size 0x1
static constexpr uint8_t  idle{static_cast<uint8_t>(0x1u)};

/// @brief Field selected offset 0xffffffff size 0x1
static constexpr uint8_t  selected{static_cast<uint8_t>(0x4u)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateShortcuts) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State
