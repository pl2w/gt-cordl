#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_TriggerState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState_TriggerState)
namespace GlobalNamespace {
struct TriggerState_InputActionState_Flags;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionState_TriggerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionState_TriggerState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionState_TriggerState, "UnityEngine.InputSystem", "InputActionState/TriggerState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/TriggerState
#pragma pack(push, 0)
struct CORDL_TYPE InputActionState_TriggerState {
public:
// Declarations
using Flags = ::GlobalNamespace::TriggerState_InputActionState_Flags;

 __declspec(property(get=get_bindingIndex, put=set_bindingIndex)) int32_t  bindingIndex;

 __declspec(property(get=get_controlIndex, put=set_controlIndex)) int32_t  controlIndex;

 __declspec(property(get=get_flags, put=set_flags)) ::GlobalNamespace::TriggerState_InputActionState_Flags  flags;

/// @brief Field frameCompleted, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameCompleted, put=__cordl_internal_set_frameCompleted)) int32_t  frameCompleted;

/// @brief Field framePerformed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_framePerformed, put=__cordl_internal_set_framePerformed)) int32_t  framePerformed;

/// @brief Field framePressed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_framePressed, put=__cordl_internal_set_framePressed)) int32_t  framePressed;

/// @brief Field frameReleased, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameReleased, put=__cordl_internal_set_frameReleased)) int32_t  frameReleased;

 __declspec(property(get=get_hasMultipleConcurrentActuations, put=set_hasMultipleConcurrentActuations)) bool  hasMultipleConcurrentActuations;

 __declspec(property(get=get_haveMagnitude)) bool  haveMagnitude;

 __declspec(property(get=get_inProcessing, put=set_inProcessing)) bool  inProcessing;

 __declspec(property(get=get_interactionIndex, put=set_interactionIndex)) int32_t  interactionIndex;

 __declspec(property(get=get_isButton, put=set_isButton)) bool  isButton;

 __declspec(property(get=get_isCanceled)) bool  isCanceled;

 __declspec(property(get=get_isDisabled)) bool  isDisabled;

 __declspec(property(get=get_isPassThrough, put=set_isPassThrough)) bool  isPassThrough;

 __declspec(property(get=get_isPerformed)) bool  isPerformed;

 __declspec(property(get=get_isPressed, put=set_isPressed)) bool  isPressed;

 __declspec(property(get=get_isStarted)) bool  isStarted;

 __declspec(property(get=get_isWaiting)) bool  isWaiting;

 __declspec(property(get=get_lastCanceledInUpdate, put=set_lastCanceledInUpdate)) uint32_t  lastCanceledInUpdate;

 __declspec(property(get=get_lastCompletedInUpdate, put=set_lastCompletedInUpdate)) uint32_t  lastCompletedInUpdate;

 __declspec(property(get=get_lastPerformedInUpdate, put=set_lastPerformedInUpdate)) uint32_t  lastPerformedInUpdate;

/// @brief Field m_BindingIndex, offset 0x18, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_BindingIndex, put=__cordl_internal_set_m_BindingIndex)) uint16_t  m_BindingIndex;

/// @brief Field m_ControlIndex, offset 0x4, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_ControlIndex, put=__cordl_internal_set_m_ControlIndex)) uint16_t  m_ControlIndex;

/// @brief Field m_Flags, offset 0x1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Flags, put=__cordl_internal_set_m_Flags)) uint8_t  m_Flags;

/// @brief Field m_InteractionIndex, offset 0x1a, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_InteractionIndex, put=__cordl_internal_set_m_InteractionIndex)) uint16_t  m_InteractionIndex;

/// @brief Field m_LastCanceledInUpdate, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastCanceledInUpdate, put=__cordl_internal_set_m_LastCanceledInUpdate)) uint32_t  m_LastCanceledInUpdate;

/// @brief Field m_LastCompletedInUpdate, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastCompletedInUpdate, put=__cordl_internal_set_m_LastCompletedInUpdate)) uint32_t  m_LastCompletedInUpdate;

/// @brief Field m_LastPerformedInUpdate, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastPerformedInUpdate, put=__cordl_internal_set_m_LastPerformedInUpdate)) uint32_t  m_LastPerformedInUpdate;

/// @brief Field m_Magnitude, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Magnitude, put=__cordl_internal_set_m_Magnitude)) float_t  m_Magnitude;

/// @brief Field m_MapIndex, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MapIndex, put=__cordl_internal_set_m_MapIndex)) uint8_t  m_MapIndex;

/// @brief Field m_Phase, offset 0x0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Phase, put=__cordl_internal_set_m_Phase)) uint8_t  m_Phase;

/// @brief Field m_PressedInUpdate, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PressedInUpdate, put=__cordl_internal_set_m_PressedInUpdate)) uint32_t  m_PressedInUpdate;

/// @brief Field m_ReleasedInUpdate, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ReleasedInUpdate, put=__cordl_internal_set_m_ReleasedInUpdate)) uint32_t  m_ReleasedInUpdate;

/// @brief Field m_StartTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartTime, put=__cordl_internal_set_m_StartTime)) double_t  m_StartTime;

/// @brief Field m_Time, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Time, put=__cordl_internal_set_m_Time)) double_t  m_Time;

 __declspec(property(get=get_magnitude, put=set_magnitude)) float_t  magnitude;

 __declspec(property(get=get_mapIndex, put=set_mapIndex)) int32_t  mapIndex;

 __declspec(property(get=get_mayNeedConflictResolution, put=set_mayNeedConflictResolution)) bool  mayNeedConflictResolution;

 __declspec(property(get=get_phase, put=set_phase)) ::UnityEngine::InputSystem::InputActionPhase  phase;

 __declspec(property(get=get_pressedInUpdate, put=set_pressedInUpdate)) uint32_t  pressedInUpdate;

 __declspec(property(get=get_releasedInUpdate, put=set_releasedInUpdate)) uint32_t  releasedInUpdate;

 __declspec(property(get=get_startTime, put=set_startTime)) double_t  startTime;

 __declspec(property(get=get_time, put=set_time)) double_t  time;

constexpr int32_t const& __cordl_internal_get_frameCompleted() const;

constexpr int32_t& __cordl_internal_get_frameCompleted() ;

constexpr int32_t const& __cordl_internal_get_framePerformed() const;

constexpr int32_t& __cordl_internal_get_framePerformed() ;

constexpr int32_t const& __cordl_internal_get_framePressed() const;

constexpr int32_t& __cordl_internal_get_framePressed() ;

constexpr int32_t const& __cordl_internal_get_frameReleased() const;

constexpr int32_t& __cordl_internal_get_frameReleased() ;

constexpr uint16_t const& __cordl_internal_get_m_BindingIndex() const;

constexpr uint16_t& __cordl_internal_get_m_BindingIndex() ;

constexpr uint16_t const& __cordl_internal_get_m_ControlIndex() const;

constexpr uint16_t& __cordl_internal_get_m_ControlIndex() ;

constexpr uint8_t const& __cordl_internal_get_m_Flags() const;

constexpr uint8_t& __cordl_internal_get_m_Flags() ;

constexpr uint16_t const& __cordl_internal_get_m_InteractionIndex() const;

constexpr uint16_t& __cordl_internal_get_m_InteractionIndex() ;

constexpr uint32_t const& __cordl_internal_get_m_LastCanceledInUpdate() const;

constexpr uint32_t& __cordl_internal_get_m_LastCanceledInUpdate() ;

constexpr uint32_t const& __cordl_internal_get_m_LastCompletedInUpdate() const;

constexpr uint32_t& __cordl_internal_get_m_LastCompletedInUpdate() ;

constexpr uint32_t const& __cordl_internal_get_m_LastPerformedInUpdate() const;

constexpr uint32_t& __cordl_internal_get_m_LastPerformedInUpdate() ;

constexpr float_t const& __cordl_internal_get_m_Magnitude() const;

constexpr float_t& __cordl_internal_get_m_Magnitude() ;

constexpr uint8_t const& __cordl_internal_get_m_MapIndex() const;

constexpr uint8_t& __cordl_internal_get_m_MapIndex() ;

constexpr uint8_t const& __cordl_internal_get_m_Phase() const;

constexpr uint8_t& __cordl_internal_get_m_Phase() ;

constexpr uint32_t const& __cordl_internal_get_m_PressedInUpdate() const;

constexpr uint32_t& __cordl_internal_get_m_PressedInUpdate() ;

constexpr uint32_t const& __cordl_internal_get_m_ReleasedInUpdate() const;

constexpr uint32_t& __cordl_internal_get_m_ReleasedInUpdate() ;

constexpr double_t const& __cordl_internal_get_m_StartTime() const;

constexpr double_t& __cordl_internal_get_m_StartTime() ;

constexpr double_t const& __cordl_internal_get_m_Time() const;

constexpr double_t& __cordl_internal_get_m_Time() ;

constexpr void __cordl_internal_set_frameCompleted(int32_t  value) ;

constexpr void __cordl_internal_set_framePerformed(int32_t  value) ;

constexpr void __cordl_internal_set_framePressed(int32_t  value) ;

constexpr void __cordl_internal_set_frameReleased(int32_t  value) ;

constexpr void __cordl_internal_set_m_BindingIndex(uint16_t  value) ;

constexpr void __cordl_internal_set_m_ControlIndex(uint16_t  value) ;

constexpr void __cordl_internal_set_m_Flags(uint8_t  value) ;

constexpr void __cordl_internal_set_m_InteractionIndex(uint16_t  value) ;

constexpr void __cordl_internal_set_m_LastCanceledInUpdate(uint32_t  value) ;

constexpr void __cordl_internal_set_m_LastCompletedInUpdate(uint32_t  value) ;

constexpr void __cordl_internal_set_m_LastPerformedInUpdate(uint32_t  value) ;

constexpr void __cordl_internal_set_m_Magnitude(float_t  value) ;

constexpr void __cordl_internal_set_m_MapIndex(uint8_t  value) ;

constexpr void __cordl_internal_set_m_Phase(uint8_t  value) ;

constexpr void __cordl_internal_set_m_PressedInUpdate(uint32_t  value) ;

constexpr void __cordl_internal_set_m_ReleasedInUpdate(uint32_t  value) ;

constexpr void __cordl_internal_set_m_StartTime(double_t  value) ;

constexpr void __cordl_internal_set_m_Time(double_t  value) ;

/// @brief Method get_bindingIndex, addr 0xaf304a0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_bindingIndex() ;

/// @brief Method get_controlIndex, addr 0xaf29d20, size 0x14, virtual false, abstract: false, final false
inline int32_t get_controlIndex() ;

/// @brief Method get_flags, addr 0xaf30518, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TriggerState_InputActionState_Flags get_flags() ;

/// @brief Method get_hasMultipleConcurrentActuations, addr 0xaf2d4c0, size 0xc, virtual false, abstract: false, final false
inline bool get_hasMultipleConcurrentActuations() ;

/// @brief Method get_haveMagnitude, addr 0xaf3048c, size 0xc, virtual false, abstract: false, final false
inline bool get_haveMagnitude() ;

/// @brief Method get_inProcessing, addr 0xaf2dea8, size 0xc, virtual false, abstract: false, final false
inline bool get_inProcessing() ;

/// @brief Method get_interactionIndex, addr 0xaf2ac4c, size 0x14, virtual false, abstract: false, final false
inline int32_t get_interactionIndex() ;

/// @brief Method get_isButton, addr 0xaf2c880, size 0xc, virtual false, abstract: false, final false
inline bool get_isButton() ;

/// @brief Method get_isCanceled, addr 0xaf30454, size 0x10, virtual false, abstract: false, final false
inline bool get_isCanceled() ;

/// @brief Method get_isDisabled, addr 0xaf2a994, size 0x10, virtual false, abstract: false, final false
inline bool get_isDisabled() ;

/// @brief Method get_isPassThrough, addr 0xaf2b390, size 0xc, virtual false, abstract: false, final false
inline bool get_isPassThrough() ;

/// @brief Method get_isPerformed, addr 0xaf2db58, size 0x10, virtual false, abstract: false, final false
inline bool get_isPerformed() ;

/// @brief Method get_isPressed, addr 0xaf2d4a8, size 0xc, virtual false, abstract: false, final false
inline bool get_isPressed() ;

/// @brief Method get_isStarted, addr 0xaf30444, size 0x10, virtual false, abstract: false, final false
inline bool get_isStarted() ;

/// @brief Method get_isWaiting, addr 0xaf30434, size 0x10, virtual false, abstract: false, final false
inline bool get_isWaiting() ;

/// @brief Method get_lastCanceledInUpdate, addr 0xaf304c8, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_lastCanceledInUpdate() ;

/// @brief Method get_lastCompletedInUpdate, addr 0xaf304b8, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_lastCompletedInUpdate() ;

/// @brief Method get_lastPerformedInUpdate, addr 0xaf304a8, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_lastPerformedInUpdate() ;

/// @brief Method get_magnitude, addr 0xaf30484, size 0x8, virtual false, abstract: false, final false
inline float_t get_magnitude() ;

/// @brief Method get_mapIndex, addr 0xaf30498, size 0x8, virtual false, abstract: false, final false
inline int32_t get_mapIndex() ;

/// @brief Method get_mayNeedConflictResolution, addr 0xaf2d4b4, size 0xc, virtual false, abstract: false, final false
inline bool get_mayNeedConflictResolution() ;

/// @brief Method get_phase, addr 0xaf3042c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method get_pressedInUpdate, addr 0xaf304d8, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_pressedInUpdate() ;

/// @brief Method get_releasedInUpdate, addr 0xaf304e8, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_releasedInUpdate() ;

/// @brief Method get_startTime, addr 0xaf30474, size 0x8, virtual false, abstract: false, final false
inline double_t get_startTime() ;

/// @brief Method get_time, addr 0xaf30464, size 0x8, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method set_bindingIndex, addr 0xaf2a91c, size 0x5c, virtual false, abstract: false, final false
inline void set_bindingIndex(int32_t  value) ;

/// @brief Method set_controlIndex, addr 0xaf2abcc, size 0x6c, virtual false, abstract: false, final false
inline void set_controlIndex(int32_t  value) ;

/// @brief Method set_flags, addr 0xaf2deb4, size 0x8, virtual false, abstract: false, final false
inline void set_flags(::GlobalNamespace::TriggerState_InputActionState_Flags  value) ;

/// @brief Method set_hasMultipleConcurrentActuations, addr 0xaf2b738, size 0x20, virtual false, abstract: false, final false
inline void set_hasMultipleConcurrentActuations(bool  value) ;

/// @brief Method set_inProcessing, addr 0xaf2b758, size 0x20, virtual false, abstract: false, final false
inline void set_inProcessing(bool  value) ;

/// @brief Method set_interactionIndex, addr 0xaf2ac60, size 0x6c, virtual false, abstract: false, final false
inline void set_interactionIndex(int32_t  value) ;

/// @brief Method set_isButton, addr 0xaf2c88c, size 0x20, virtual false, abstract: false, final false
inline void set_isButton(bool  value) ;

/// @brief Method set_isPassThrough, addr 0xaf2c860, size 0x20, virtual false, abstract: false, final false
inline void set_isPassThrough(bool  value) ;

/// @brief Method set_isPressed, addr 0xaf2b778, size 0x20, virtual false, abstract: false, final false
inline void set_isPressed(bool  value) ;

/// @brief Method set_lastCanceledInUpdate, addr 0xaf304d0, size 0x8, virtual false, abstract: false, final false
inline void set_lastCanceledInUpdate(uint32_t  value) ;

/// @brief Method set_lastCompletedInUpdate, addr 0xaf304c0, size 0x8, virtual false, abstract: false, final false
inline void set_lastCompletedInUpdate(uint32_t  value) ;

/// @brief Method set_lastPerformedInUpdate, addr 0xaf304b0, size 0x8, virtual false, abstract: false, final false
inline void set_lastPerformedInUpdate(uint32_t  value) ;

/// @brief Method set_magnitude, addr 0xaf2ac38, size 0x14, virtual false, abstract: false, final false
inline void set_magnitude(float_t  value) ;

/// @brief Method set_mapIndex, addr 0xaf2ad4c, size 0x5c, virtual false, abstract: false, final false
inline void set_mapIndex(int32_t  value) ;

/// @brief Method set_mayNeedConflictResolution, addr 0xaf304f8, size 0x20, virtual false, abstract: false, final false
inline void set_mayNeedConflictResolution(bool  value) ;

/// @brief Method set_phase, addr 0xaf2a978, size 0x8, virtual false, abstract: false, final false
inline void set_phase(::UnityEngine::InputSystem::InputActionPhase  value) ;

/// @brief Method set_pressedInUpdate, addr 0xaf304e0, size 0x8, virtual false, abstract: false, final false
inline void set_pressedInUpdate(uint32_t  value) ;

/// @brief Method set_releasedInUpdate, addr 0xaf304f0, size 0x8, virtual false, abstract: false, final false
inline void set_releasedInUpdate(uint32_t  value) ;

/// @brief Method set_startTime, addr 0xaf3047c, size 0x8, virtual false, abstract: false, final false
inline void set_startTime(double_t  value) ;

/// @brief Method set_time, addr 0xaf3046c, size 0x8, virtual false, abstract: false, final false
inline void set_time(double_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionState_TriggerState() ;

// Ctor Parameters [CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MapIndex", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ControlIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BindingIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InteractionIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Magnitude", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LastPerformedInUpdate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LastCanceledInUpdate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PressedInUpdate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ReleasedInUpdate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LastCompletedInUpdate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "framePerformed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "framePressed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "frameReleased", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "frameCompleted", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputActionState_TriggerState(uint8_t  m_Phase, uint8_t  m_Flags, uint8_t  m_MapIndex, uint16_t  m_ControlIndex, double_t  m_Time, double_t  m_StartTime, uint16_t  m_BindingIndex, uint16_t  m_InteractionIndex, float_t  m_Magnitude, uint32_t  m_LastPerformedInUpdate, uint32_t  m_LastCanceledInUpdate, uint32_t  m_PressedInUpdate, uint32_t  m_ReleasedInUpdate, uint32_t  m_LastCompletedInUpdate, int32_t  framePerformed, int32_t  framePressed, int32_t  frameReleased, int32_t  frameCompleted) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_Phase_padding[0x0];
/// @brief Field m_Phase, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___m_Phase;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_Phase_padding_forAlignment[0x0];
/// @brief Field m_Phase, offset: 0x0, size: 0x1, def value: None
 uint8_t  ___m_Phase_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1
 uint8_t  ___m_Flags_padding[0x1];
/// @brief Field m_Flags, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___m_Flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1 for alignment
 uint8_t  ___m_Flags_padding_forAlignment[0x1];
/// @brief Field m_Flags, offset: 0x1, size: 0x1, def value: None
 uint8_t  ___m_Flags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___m_MapIndex_padding[0x2];
/// @brief Field m_MapIndex, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___m_MapIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___m_MapIndex_padding_forAlignment[0x2];
/// @brief Field m_MapIndex, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___m_MapIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___m_ControlIndex_padding[0x4];
/// @brief Field m_ControlIndex, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___m_ControlIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___m_ControlIndex_padding_forAlignment[0x4];
/// @brief Field m_ControlIndex, offset: 0x4, size: 0x2, def value: None
 uint16_t  ___m_ControlIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___m_Time_padding[0x8];
/// @brief Field m_Time, offset: 0x8, size: 0x8, def value: None
 double_t  ___m_Time;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___m_Time_padding_forAlignment[0x8];
/// @brief Field m_Time, offset: 0x8, size: 0x8, def value: None
 double_t  ___m_Time_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___m_StartTime_padding[0x10];
/// @brief Field m_StartTime, offset: 0x10, size: 0x8, def value: None
 double_t  ___m_StartTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___m_StartTime_padding_forAlignment[0x10];
/// @brief Field m_StartTime, offset: 0x10, size: 0x8, def value: None
 double_t  ___m_StartTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___m_BindingIndex_padding[0x18];
/// @brief Field m_BindingIndex, offset: 0x18, size: 0x2, def value: None
 uint16_t  ___m_BindingIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___m_BindingIndex_padding_forAlignment[0x18];
/// @brief Field m_BindingIndex, offset: 0x18, size: 0x2, def value: None
 uint16_t  ___m_BindingIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1a
 uint8_t  ___m_InteractionIndex_padding[0x1a];
/// @brief Field m_InteractionIndex, offset: 0x1a, size: 0x2, def value: None
 uint16_t  ___m_InteractionIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1a for alignment
 uint8_t  ___m_InteractionIndex_padding_forAlignment[0x1a];
/// @brief Field m_InteractionIndex, offset: 0x1a, size: 0x2, def value: None
 uint16_t  ___m_InteractionIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x1c
 uint8_t  ___m_Magnitude_padding[0x1c];
/// @brief Field m_Magnitude, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_Magnitude;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x1c for alignment
 uint8_t  ___m_Magnitude_padding_forAlignment[0x1c];
/// @brief Field m_Magnitude, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_Magnitude_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___m_LastPerformedInUpdate_padding[0x20];
/// @brief Field m_LastPerformedInUpdate, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___m_LastPerformedInUpdate;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___m_LastPerformedInUpdate_padding_forAlignment[0x20];
/// @brief Field m_LastPerformedInUpdate, offset: 0x20, size: 0x4, def value: None
 uint32_t  ___m_LastPerformedInUpdate_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ___m_LastCanceledInUpdate_padding[0x24];
/// @brief Field m_LastCanceledInUpdate, offset: 0x24, size: 0x4, def value: None
 uint32_t  ___m_LastCanceledInUpdate;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ___m_LastCanceledInUpdate_padding_forAlignment[0x24];
/// @brief Field m_LastCanceledInUpdate, offset: 0x24, size: 0x4, def value: None
 uint32_t  ___m_LastCanceledInUpdate_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ___m_PressedInUpdate_padding[0x28];
/// @brief Field m_PressedInUpdate, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___m_PressedInUpdate;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ___m_PressedInUpdate_padding_forAlignment[0x28];
/// @brief Field m_PressedInUpdate, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___m_PressedInUpdate_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2c
 uint8_t  ___m_ReleasedInUpdate_padding[0x2c];
/// @brief Field m_ReleasedInUpdate, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ___m_ReleasedInUpdate;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2c for alignment
 uint8_t  ___m_ReleasedInUpdate_padding_forAlignment[0x2c];
/// @brief Field m_ReleasedInUpdate, offset: 0x2c, size: 0x4, def value: None
 uint32_t  ___m_ReleasedInUpdate_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x30
 uint8_t  ___m_LastCompletedInUpdate_padding[0x30];
/// @brief Field m_LastCompletedInUpdate, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___m_LastCompletedInUpdate;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x30 for alignment
 uint8_t  ___m_LastCompletedInUpdate_padding_forAlignment[0x30];
/// @brief Field m_LastCompletedInUpdate, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___m_LastCompletedInUpdate_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x34
 uint8_t  ___framePerformed_padding[0x34];
/// @brief Field framePerformed, offset: 0x34, size: 0x4, def value: None
 int32_t  ___framePerformed;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x34 for alignment
 uint8_t  ___framePerformed_padding_forAlignment[0x34];
/// @brief Field framePerformed, offset: 0x34, size: 0x4, def value: None
 int32_t  ___framePerformed_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x38
 uint8_t  ___framePressed_padding[0x38];
/// @brief Field framePressed, offset: 0x38, size: 0x4, def value: None
 int32_t  ___framePressed;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x38 for alignment
 uint8_t  ___framePressed_padding_forAlignment[0x38];
/// @brief Field framePressed, offset: 0x38, size: 0x4, def value: None
 int32_t  ___framePressed_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3c
 uint8_t  ___frameReleased_padding[0x3c];
/// @brief Field frameReleased, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___frameReleased;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3c for alignment
 uint8_t  ___frameReleased_padding_forAlignment[0x3c];
/// @brief Field frameReleased, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___frameReleased_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x40
 uint8_t  ___frameCompleted_padding[0x40];
/// @brief Field frameCompleted, offset: 0x40, size: 0x4, def value: None
 int32_t  ___frameCompleted;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x40 for alignment
 uint8_t  ___frameCompleted_padding_forAlignment[0x40];
/// @brief Field frameCompleted, offset: 0x40, size: 0x4, def value: None
 int32_t  ___frameCompleted_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13386};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x44};

/// @brief Field kMaxNumBindings offset 0xffffffff size 0x4
static constexpr int32_t  kMaxNumBindings{static_cast<int32_t>(0xffff)};

/// @brief Field kMaxNumControls offset 0xffffffff size 0x4
static constexpr int32_t  kMaxNumControls{static_cast<int32_t>(0xffff)};

/// @brief Field kMaxNumMaps offset 0xffffffff size 0x4
static constexpr int32_t  kMaxNumMaps{static_cast<int32_t>(0xff)};

/// @brief Size padding 0x44 - 0x48 = 0x4, packed as 0x4
 uint8_t  _cordl_size_padding[0x4];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::InputActionState_TriggerState) == 0x44, "Size mismatch!");

} // namespace end def GlobalNamespace
