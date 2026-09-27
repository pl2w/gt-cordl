#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_InteractionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState_InteractionState)
namespace GlobalNamespace {
struct InteractionState_InputActionState_Flags;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
// Forward declare root types
namespace GlobalNamespace {
struct InputActionState_InteractionState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputActionState_InteractionState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputActionState_InteractionState, "UnityEngine.InputSystem", "InputActionState/InteractionState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputActionState/InteractionState
#pragma pack(push, 0)
struct CORDL_TYPE InputActionState_InteractionState {
public:
// Declarations
using Flags = ::GlobalNamespace::InteractionState_InputActionState_Flags;

 __declspec(property(get=get_isTimerRunning, put=set_isTimerRunning)) bool  isTimerRunning;

/// @brief Field m_Flags, offset 0x3, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Flags, put=__cordl_internal_set_m_Flags)) uint8_t  m_Flags;

/// @brief Field m_PerformedTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PerformedTime, put=__cordl_internal_set_m_PerformedTime)) double_t  m_PerformedTime;

/// @brief Field m_Phase, offset 0x2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Phase, put=__cordl_internal_set_m_Phase)) uint8_t  m_Phase;

/// @brief Field m_StartTime, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartTime, put=__cordl_internal_set_m_StartTime)) double_t  m_StartTime;

/// @brief Field m_TimerDuration, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimerDuration, put=__cordl_internal_set_m_TimerDuration)) float_t  m_TimerDuration;

/// @brief Field m_TimerMonitorIndex, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TimerMonitorIndex, put=__cordl_internal_set_m_TimerMonitorIndex)) int64_t  m_TimerMonitorIndex;

/// @brief Field m_TimerStartTime, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TimerStartTime, put=__cordl_internal_set_m_TimerStartTime)) double_t  m_TimerStartTime;

/// @brief Field m_TotalTimeoutCompletionTimeDone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TotalTimeoutCompletionTimeDone, put=__cordl_internal_set_m_TotalTimeoutCompletionTimeDone)) float_t  m_TotalTimeoutCompletionTimeDone;

/// @brief Field m_TotalTimeoutCompletionTimeRemaining, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TotalTimeoutCompletionTimeRemaining, put=__cordl_internal_set_m_TotalTimeoutCompletionTimeRemaining)) float_t  m_TotalTimeoutCompletionTimeRemaining;

/// @brief Field m_TriggerControlIndex, offset 0x0, size 0x2 
 __declspec(property(get=__cordl_internal_get_m_TriggerControlIndex, put=__cordl_internal_set_m_TriggerControlIndex)) uint16_t  m_TriggerControlIndex;

 __declspec(property(get=get_performedTime, put=set_performedTime)) double_t  performedTime;

 __declspec(property(get=get_phase, put=set_phase)) ::UnityEngine::InputSystem::InputActionPhase  phase;

 __declspec(property(get=get_startTime, put=set_startTime)) double_t  startTime;

 __declspec(property(get=get_timerDuration, put=set_timerDuration)) float_t  timerDuration;

 __declspec(property(get=get_timerMonitorIndex, put=set_timerMonitorIndex)) int64_t  timerMonitorIndex;

 __declspec(property(get=get_timerStartTime, put=set_timerStartTime)) double_t  timerStartTime;

 __declspec(property(get=get_totalTimeoutCompletionDone, put=set_totalTimeoutCompletionDone)) float_t  totalTimeoutCompletionDone;

 __declspec(property(get=get_totalTimeoutCompletionTimeRemaining, put=set_totalTimeoutCompletionTimeRemaining)) float_t  totalTimeoutCompletionTimeRemaining;

 __declspec(property(get=get_triggerControlIndex, put=set_triggerControlIndex)) int32_t  triggerControlIndex;

constexpr uint8_t const& __cordl_internal_get_m_Flags() const;

constexpr uint8_t& __cordl_internal_get_m_Flags() ;

constexpr double_t const& __cordl_internal_get_m_PerformedTime() const;

constexpr double_t& __cordl_internal_get_m_PerformedTime() ;

constexpr uint8_t const& __cordl_internal_get_m_Phase() const;

constexpr uint8_t& __cordl_internal_get_m_Phase() ;

constexpr double_t const& __cordl_internal_get_m_StartTime() const;

constexpr double_t& __cordl_internal_get_m_StartTime() ;

constexpr float_t const& __cordl_internal_get_m_TimerDuration() const;

constexpr float_t& __cordl_internal_get_m_TimerDuration() ;

constexpr int64_t const& __cordl_internal_get_m_TimerMonitorIndex() const;

constexpr int64_t& __cordl_internal_get_m_TimerMonitorIndex() ;

constexpr double_t const& __cordl_internal_get_m_TimerStartTime() const;

constexpr double_t& __cordl_internal_get_m_TimerStartTime() ;

constexpr float_t const& __cordl_internal_get_m_TotalTimeoutCompletionTimeDone() const;

constexpr float_t& __cordl_internal_get_m_TotalTimeoutCompletionTimeDone() ;

constexpr float_t const& __cordl_internal_get_m_TotalTimeoutCompletionTimeRemaining() const;

constexpr float_t& __cordl_internal_get_m_TotalTimeoutCompletionTimeRemaining() ;

constexpr uint16_t const& __cordl_internal_get_m_TriggerControlIndex() const;

constexpr uint16_t& __cordl_internal_get_m_TriggerControlIndex() ;

constexpr void __cordl_internal_set_m_Flags(uint8_t  value) ;

constexpr void __cordl_internal_set_m_PerformedTime(double_t  value) ;

constexpr void __cordl_internal_set_m_Phase(uint8_t  value) ;

constexpr void __cordl_internal_set_m_StartTime(double_t  value) ;

constexpr void __cordl_internal_set_m_TimerDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_TimerMonitorIndex(int64_t  value) ;

constexpr void __cordl_internal_set_m_TimerStartTime(double_t  value) ;

constexpr void __cordl_internal_set_m_TotalTimeoutCompletionTimeDone(float_t  value) ;

constexpr void __cordl_internal_set_m_TotalTimeoutCompletionTimeRemaining(float_t  value) ;

constexpr void __cordl_internal_set_m_TriggerControlIndex(uint16_t  value) ;

/// @brief Method get_isTimerRunning, addr 0xaf2ad40, size 0xc, virtual false, abstract: false, final false
inline bool get_isTimerRunning() ;

/// @brief Method get_performedTime, addr 0xaf2fd60, size 0x8, virtual false, abstract: false, final false
inline double_t get_performedTime() ;

/// @brief Method get_phase, addr 0xaf2fdc0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionPhase get_phase() ;

/// @brief Method get_startTime, addr 0xaf2fd50, size 0x8, virtual false, abstract: false, final false
inline double_t get_startTime() ;

/// @brief Method get_timerDuration, addr 0xaf2fd80, size 0x8, virtual false, abstract: false, final false
inline float_t get_timerDuration() ;

/// @brief Method get_timerMonitorIndex, addr 0xaf2fdb0, size 0x8, virtual false, abstract: false, final false
inline int64_t get_timerMonitorIndex() ;

/// @brief Method get_timerStartTime, addr 0xaf2fd70, size 0x8, virtual false, abstract: false, final false
inline double_t get_timerStartTime() ;

/// @brief Method get_totalTimeoutCompletionDone, addr 0xaf2fd90, size 0x8, virtual false, abstract: false, final false
inline float_t get_totalTimeoutCompletionDone() ;

/// @brief Method get_totalTimeoutCompletionTimeRemaining, addr 0xaf2fda0, size 0x8, virtual false, abstract: false, final false
inline float_t get_totalTimeoutCompletionTimeRemaining() ;

/// @brief Method get_triggerControlIndex, addr 0xaf29d48, size 0x14, virtual false, abstract: false, final false
inline int32_t get_triggerControlIndex() ;

/// @brief Method set_isTimerRunning, addr 0xaf2d574, size 0x14, virtual false, abstract: false, final false
inline void set_isTimerRunning(bool  value) ;

/// @brief Method set_performedTime, addr 0xaf2fd68, size 0x8, virtual false, abstract: false, final false
inline void set_performedTime(double_t  value) ;

/// @brief Method set_phase, addr 0xaf2accc, size 0x8, virtual false, abstract: false, final false
inline void set_phase(::UnityEngine::InputSystem::InputActionPhase  value) ;

/// @brief Method set_startTime, addr 0xaf2fd58, size 0x8, virtual false, abstract: false, final false
inline void set_startTime(double_t  value) ;

/// @brief Method set_timerDuration, addr 0xaf2fd88, size 0x8, virtual false, abstract: false, final false
inline void set_timerDuration(float_t  value) ;

/// @brief Method set_timerMonitorIndex, addr 0xaf2fdb8, size 0x8, virtual false, abstract: false, final false
inline void set_timerMonitorIndex(int64_t  value) ;

/// @brief Method set_timerStartTime, addr 0xaf2fd78, size 0x8, virtual false, abstract: false, final false
inline void set_timerStartTime(double_t  value) ;

/// @brief Method set_totalTimeoutCompletionDone, addr 0xaf2fd98, size 0x8, virtual false, abstract: false, final false
inline void set_totalTimeoutCompletionDone(float_t  value) ;

/// @brief Method set_totalTimeoutCompletionTimeRemaining, addr 0xaf2fda8, size 0x8, virtual false, abstract: false, final false
inline void set_totalTimeoutCompletionTimeRemaining(float_t  value) ;

/// @brief Method set_triggerControlIndex, addr 0xaf2acd4, size 0x6c, virtual false, abstract: false, final false
inline void set_triggerControlIndex(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr InputActionState_InteractionState() ;

// Ctor Parameters [CppParam { name: "m_TriggerControlIndex", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Phase", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TimerDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TimerStartTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PerformedTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TotalTimeoutCompletionTimeDone", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TotalTimeoutCompletionTimeRemaining", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TimerMonitorIndex", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr InputActionState_InteractionState(uint16_t  m_TriggerControlIndex, uint8_t  m_Phase, uint8_t  m_Flags, float_t  m_TimerDuration, double_t  m_StartTime, double_t  m_TimerStartTime, double_t  m_PerformedTime, float_t  m_TotalTimeoutCompletionTimeDone, float_t  m_TotalTimeoutCompletionTimeRemaining, int64_t  m_TimerMonitorIndex) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___m_TriggerControlIndex_padding[0x0];
/// @brief Field m_TriggerControlIndex, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___m_TriggerControlIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___m_TriggerControlIndex_padding_forAlignment[0x0];
/// @brief Field m_TriggerControlIndex, offset: 0x0, size: 0x2, def value: None
 uint16_t  ___m_TriggerControlIndex_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x2
 uint8_t  ___m_Phase_padding[0x2];
/// @brief Field m_Phase, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___m_Phase;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x2 for alignment
 uint8_t  ___m_Phase_padding_forAlignment[0x2];
/// @brief Field m_Phase, offset: 0x2, size: 0x1, def value: None
 uint8_t  ___m_Phase_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x3
 uint8_t  ___m_Flags_padding[0x3];
/// @brief Field m_Flags, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___m_Flags;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x3 for alignment
 uint8_t  ___m_Flags_padding_forAlignment[0x3];
/// @brief Field m_Flags, offset: 0x3, size: 0x1, def value: None
 uint8_t  ___m_Flags_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___m_TimerDuration_padding[0x4];
/// @brief Field m_TimerDuration, offset: 0x4, size: 0x4, def value: None
 float_t  ___m_TimerDuration;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___m_TimerDuration_padding_forAlignment[0x4];
/// @brief Field m_TimerDuration, offset: 0x4, size: 0x4, def value: None
 float_t  ___m_TimerDuration_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___m_StartTime_padding[0x8];
/// @brief Field m_StartTime, offset: 0x8, size: 0x8, def value: None
 double_t  ___m_StartTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___m_StartTime_padding_forAlignment[0x8];
/// @brief Field m_StartTime, offset: 0x8, size: 0x8, def value: None
 double_t  ___m_StartTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___m_TimerStartTime_padding[0x10];
/// @brief Field m_TimerStartTime, offset: 0x10, size: 0x8, def value: None
 double_t  ___m_TimerStartTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___m_TimerStartTime_padding_forAlignment[0x10];
/// @brief Field m_TimerStartTime, offset: 0x10, size: 0x8, def value: None
 double_t  ___m_TimerStartTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x18
 uint8_t  ___m_PerformedTime_padding[0x18];
/// @brief Field m_PerformedTime, offset: 0x18, size: 0x8, def value: None
 double_t  ___m_PerformedTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x18 for alignment
 uint8_t  ___m_PerformedTime_padding_forAlignment[0x18];
/// @brief Field m_PerformedTime, offset: 0x18, size: 0x8, def value: None
 double_t  ___m_PerformedTime_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x20
 uint8_t  ___m_TotalTimeoutCompletionTimeDone_padding[0x20];
/// @brief Field m_TotalTimeoutCompletionTimeDone, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_TotalTimeoutCompletionTimeDone;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x20 for alignment
 uint8_t  ___m_TotalTimeoutCompletionTimeDone_padding_forAlignment[0x20];
/// @brief Field m_TotalTimeoutCompletionTimeDone, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_TotalTimeoutCompletionTimeDone_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x24
 uint8_t  ___m_TotalTimeoutCompletionTimeRemaining_padding[0x24];
/// @brief Field m_TotalTimeoutCompletionTimeRemaining, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_TotalTimeoutCompletionTimeRemaining;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x24 for alignment
 uint8_t  ___m_TotalTimeoutCompletionTimeRemaining_padding_forAlignment[0x24];
/// @brief Field m_TotalTimeoutCompletionTimeRemaining, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_TotalTimeoutCompletionTimeRemaining_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x28
 uint8_t  ___m_TimerMonitorIndex_padding[0x28];
/// @brief Field m_TimerMonitorIndex, offset: 0x28, size: 0x8, def value: None
 int64_t  ___m_TimerMonitorIndex;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x28 for alignment
 uint8_t  ___m_TimerMonitorIndex_padding_forAlignment[0x28];
/// @brief Field m_TimerMonitorIndex, offset: 0x28, size: 0x8, def value: None
 int64_t  ___m_TimerMonitorIndex_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13382};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::InputActionState_InteractionState) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
