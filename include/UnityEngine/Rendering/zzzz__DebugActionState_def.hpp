#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionState_DebugActionKeyType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugActionState)
namespace GlobalNamespace {
struct DebugActionState_DebugActionKeyType;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::Rendering {
class DebugActionDesc;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugActionState;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::DebugActionState*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::DebugActionState*, "UnityEngine.Rendering", "DebugActionState");
// Dependencies System.Object, UnityEngine.Rendering.DebugActionState::DebugActionKeyType
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugActionState
class CORDL_TYPE DebugActionState : public ::System::Object {
public:
// Declarations
using DebugActionKeyType = ::GlobalNamespace::DebugActionState_DebugActionKeyType;

/// @brief Field <actionState>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__actionState_k__BackingField, put=__cordl_internal_set__actionState_k__BackingField)) float_t  _actionState_k__BackingField;

/// @brief Field <runningAction>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__runningAction_k__BackingField, put=__cordl_internal_set__runningAction_k__BackingField)) bool  _runningAction_k__BackingField;

 __declspec(property(get=get_actionState, put=set_actionState)) float_t  actionState;

/// @brief Field inputAction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputAction, put=__cordl_internal_set_inputAction)) ::UnityEngine::InputSystem::InputAction*  inputAction;

/// @brief Field m_Timer, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Timer, put=__cordl_internal_set_m_Timer)) float_t  m_Timer;

/// @brief Field m_TriggerPressedUp, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TriggerPressedUp, put=__cordl_internal_set_m_TriggerPressedUp)) ::ArrayW<bool>  m_TriggerPressedUp;

/// @brief Field m_Type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Type, put=__cordl_internal_set_m_Type)) ::GlobalNamespace::DebugActionState_DebugActionKeyType  m_Type;

 __declspec(property(get=get_runningAction, put=set_runningAction)) bool  runningAction;

static inline ::UnityEngine::Rendering::DebugActionState* New_ctor() ;

/// @brief Method Reset, addr 0xb1342f4, size 0x14, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Trigger, addr 0xb134234, size 0xc0, virtual false, abstract: false, final false
inline void Trigger(int32_t  triggerCount, float_t  state) ;

/// @brief Method TriggerWithButton, addr 0xb1300bc, size 0x78, virtual false, abstract: false, final false
inline void TriggerWithButton(::UnityEngine::InputSystem::InputAction*  action, float_t  state) ;

/// @brief Method Update, addr 0xb130198, size 0x1d8, virtual false, abstract: false, final false
inline void Update(::UnityEngine::Rendering::DebugActionDesc*  desc) ;

constexpr float_t const& __cordl_internal_get__actionState_k__BackingField() const;

constexpr float_t& __cordl_internal_get__actionState_k__BackingField() ;

constexpr bool const& __cordl_internal_get__runningAction_k__BackingField() const;

constexpr bool& __cordl_internal_get__runningAction_k__BackingField() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_inputAction() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_inputAction() ;

constexpr float_t const& __cordl_internal_get_m_Timer() const;

constexpr float_t& __cordl_internal_get_m_Timer() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_m_TriggerPressedUp() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_m_TriggerPressedUp() ;

constexpr ::GlobalNamespace::DebugActionState_DebugActionKeyType const& __cordl_internal_get_m_Type() const;

constexpr ::GlobalNamespace::DebugActionState_DebugActionKeyType& __cordl_internal_get_m_Type() ;

constexpr void __cordl_internal_set__actionState_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__runningAction_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_inputAction(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_Timer(float_t  value) ;

constexpr void __cordl_internal_set_m_TriggerPressedUp(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_m_Type(::GlobalNamespace::DebugActionState_DebugActionKeyType  value) ;

/// @brief Method .ctor, addr 0xb12ff7c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_actionState, addr 0xb134224, size 0x8, virtual false, abstract: false, final false
inline float_t get_actionState() ;

/// [CompilerGenerated]
/// @brief Method get_runningAction, addr 0xb134214, size 0x8, virtual false, abstract: false, final false
inline bool get_runningAction() ;

/// [CompilerGenerated]
/// @brief Method set_actionState, addr 0xb13422c, size 0x8, virtual false, abstract: false, final false
inline void set_actionState(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_runningAction, addr 0xb13421c, size 0x8, virtual false, abstract: false, final false
inline void set_runningAction(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugActionState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugActionState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugActionState(DebugActionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugActionState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugActionState(DebugActionState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16702};

/// @brief Field m_Type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::DebugActionState_DebugActionKeyType  ___m_Type;

/// @brief Field inputAction, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___inputAction;

/// @brief Field m_TriggerPressedUp, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<bool>  ___m_TriggerPressedUp;

/// @brief Field m_Timer, offset: 0x28, size: 0x4, def value: None
 float_t  ___m_Timer;

/// [CompilerGenerated]
/// @brief Field <runningAction>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____runningAction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <actionState>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  ____actionState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___inputAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_TriggerPressedUp) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ___m_Timer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ____runningAction_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DebugActionState, ____actionState_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::DebugActionState) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
