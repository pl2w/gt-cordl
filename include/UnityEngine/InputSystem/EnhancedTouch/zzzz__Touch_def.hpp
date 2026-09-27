#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/EnhancedTouch/Touch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/EnhancedTouch/zzzz__Touch_GlobalState_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory`1_Record_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TouchState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch)
namespace GlobalNamespace {
template<typename TValue>
struct InputStateHistory_1_Record;
}
namespace GlobalNamespace {
struct Touch_ExtraDataPerTouchState;
}
namespace GlobalNamespace {
struct Touch_FingerAndTouchState;
}
namespace GlobalNamespace {
struct Touch_GlobalState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Finger;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct TouchHistory;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
class Touch___c;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class SavedStructState_1_TypedRestore;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::EnhancedTouch {
class Touch___c;
}
namespace UnityEngine::InputSystem::EnhancedTouch {
struct Touch;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::EnhancedTouch::Touch___c*);
MARK_VAL_T(::UnityEngine::InputSystem::EnhancedTouch::Touch);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::EnhancedTouch::Touch___c*, "UnityEngine.InputSystem.EnhancedTouch", "Touch/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::EnhancedTouch::Touch, "UnityEngine.InputSystem.EnhancedTouch", "Touch");
// Dependencies UnityEngine.InputSystem.EnhancedTouch.Touch::GlobalState, UnityEngine.InputSystem.LowLevel.InputStateHistory`1::Record<TValue>, UnityEngine.InputSystem.LowLevel.TouchState
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: true
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch
struct CORDL_TYPE Touch {
public:
// Declarations
using ExtraDataPerTouchState = ::GlobalNamespace::Touch_ExtraDataPerTouchState;

using FingerAndTouchState = ::GlobalNamespace::Touch_FingerAndTouchState;

using GlobalState = ::GlobalNamespace::Touch_GlobalState;

using __c = ::UnityEngine::InputSystem::EnhancedTouch::Touch___c;

 __declspec(property(get=get_began)) bool  began;

 __declspec(property(get=get_delta)) ::UnityEngine::Vector2  delta;

 __declspec(property(get=get_displayIndex)) int32_t  displayIndex;

 __declspec(property(get=get_ended)) bool  ended;

 __declspec(property(get=get_extraData)) ::GlobalNamespace::Touch_ExtraDataPerTouchState  extraData;

 __declspec(property(get=get_finger)) ::UnityEngine::InputSystem::EnhancedTouch::Finger*  finger;

 __declspec(property(get=get_history)) ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory  history;

 __declspec(property(get=get_inProgress)) bool  inProgress;

 __declspec(property(get=get_isInProgress)) bool  isInProgress;

 __declspec(property(get=get_isTap)) bool  isTap;

 __declspec(property(get=get_phase)) ::UnityEngine::InputSystem::TouchPhase  phase;

 __declspec(property(get=get_pressure)) float_t  pressure;

 __declspec(property(get=get_radius)) ::UnityEngine::Vector2  radius;

/// @brief Field s_GlobalState, offset 0xffffffff, size 0x150 
 __declspec(property(get=getStaticF_s_GlobalState, put=setStaticF_s_GlobalState)) ::GlobalNamespace::Touch_GlobalState  s_GlobalState;

 __declspec(property(get=get_screen)) ::UnityEngine::InputSystem::Touchscreen*  screen;

 __declspec(property(get=get_screenPosition)) ::UnityEngine::Vector2  screenPosition;

 __declspec(property(get=get_startScreenPosition)) ::UnityEngine::Vector2  startScreenPosition;

 __declspec(property(get=get_startTime)) double_t  startTime;

 __declspec(property(get=get_state)) ::UnityEngine::InputSystem::LowLevel::TouchState  state;

 __declspec(property(get=get_tapCount)) int32_t  tapCount;

 __declspec(property(get=get_time)) double_t  time;

 __declspec(property(get=get_touchId)) int32_t  touchId;

 __declspec(property(get=get_uniqueId)) uint32_t  uniqueId;

 __declspec(property(get=get_updateStepCount)) uint32_t  updateStepCount;

 __declspec(property(get=get_valid)) bool  valid;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>*() ;

/// @brief Method AddTouchscreen, addr 0xafe56f8, size 0x8c, virtual false, abstract: false, final false
static inline void AddTouchscreen(::UnityEngine::InputSystem::Touchscreen*  screen) ;

/// @brief Method BeginUpdate, addr 0xafe87d0, size 0x74, virtual false, abstract: false, final false
static inline void BeginUpdate() ;

/// @brief Method CreateGlobalState, addr 0xafe8844, size 0x20, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Touch_GlobalState CreateGlobalState() ;

/// @brief Method Equals, addr 0xafe845c, size 0xa4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xafe83e8, size 0x74, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::InputSystem::EnhancedTouch::Touch  other) ;

/// @brief Method GetHashCode, addr 0xafe8500, size 0x74, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method RemoveTouchscreen, addr 0xafe5784, size 0xe4, virtual false, abstract: false, final false
static inline void RemoveTouchscreen(::UnityEngine::InputSystem::Touchscreen*  screen) ;

/// @brief Method SaveAndResetState, addr 0xafe8864, size 0x238, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState() ;

/// @brief Method ToString, addr 0xafe80d4, size 0x314, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xafe5d30, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::EnhancedTouch::Finger*  finger, ::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>  touchRecord) ;

/// @brief Method add_onFingerDown, addr 0xafe7c3c, size 0xc4, virtual false, abstract: false, final false
static inline void add_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method add_onFingerMove, addr 0xafe7f4c, size 0xc4, virtual false, abstract: false, final false
static inline void add_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method add_onFingerUp, addr 0xafe7dc4, size 0xc4, virtual false, abstract: false, final false
static inline void add_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

static inline ::GlobalNamespace::Touch_GlobalState getStaticF_s_GlobalState() ;

/// @brief Method get_activeFingers, addr 0xafe79f4, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_activeFingers() ;

/// @brief Method get_activeTouches, addr 0xafe7308, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Touch> get_activeTouches() ;

/// @brief Method get_began, addr 0xafe6ca0, size 0x60, virtual false, abstract: false, final false
inline bool get_began() ;

/// @brief Method get_delta, addr 0xafe7048, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_delta() ;

/// @brief Method get_displayIndex, addr 0xafe716c, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_displayIndex() ;

/// @brief Method get_ended, addr 0xafe6da8, size 0x88, virtual false, abstract: false, final false
inline bool get_ended() ;

/// @brief Method get_extraData, addr 0xafe71c8, size 0x48, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::Touch_ExtraDataPerTouchState> get_extraData() ;

/// @brief Method get_finger, addr 0xafe6c50, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::EnhancedTouch::Finger* get_finger() ;

/// @brief Method get_fingers, addr 0xafe7964, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*> get_fingers() ;

/// @brief Method get_history, addr 0xafe7210, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::EnhancedTouch::TouchHistory get_history() ;

/// @brief Method get_inProgress, addr 0xafe6d00, size 0xa8, virtual false, abstract: false, final false
inline bool get_inProgress() ;

/// @brief Method get_isInProgress, addr 0xafe5d68, size 0x68, virtual false, abstract: false, final false
inline bool get_isInProgress() ;

/// @brief Method get_isTap, addr 0xafe7100, size 0x60, virtual false, abstract: false, final false
inline bool get_isTap() ;

/// @brief Method get_maxHistoryLengthPerFinger, addr 0xafe6204, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_maxHistoryLengthPerFinger() ;

/// @brief Method get_phase, addr 0xafe6bf4, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::TouchPhase get_phase() ;

/// @brief Method get_pressure, addr 0xafe6e30, size 0x5c, virtual false, abstract: false, final false
inline float_t get_pressure() ;

/// @brief Method get_radius, addr 0xafe6e8c, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_radius() ;

/// @brief Method get_screen, addr 0xafe6f8c, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::Touchscreen* get_screen() ;

/// @brief Method get_screenPosition, addr 0xafe5cd4, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_screenPosition() ;

/// @brief Method get_screens, addr 0xafe7ba8, size 0x94, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Touchscreen*>* get_screens() ;

/// @brief Method get_startScreenPosition, addr 0xafe6fec, size 0x5c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_startScreenPosition() ;

/// @brief Method get_startTime, addr 0xafe6ee8, size 0x5c, virtual false, abstract: false, final false
inline double_t get_startTime() ;

/// @brief Method get_state, addr 0xafe6c58, size 0x48, virtual false, abstract: false, final false
inline ::by_ref<::UnityEngine::InputSystem::LowLevel::TouchState> get_state() ;

/// @brief Method get_tapCount, addr 0xafe70a4, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_tapCount() ;

/// @brief Method get_time, addr 0xafe6f44, size 0x48, virtual false, abstract: false, final false
inline double_t get_time() ;

/// @brief Method get_touchId, addr 0xafe6b98, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_touchId() ;

/// @brief Method get_uniqueId, addr 0xafe6b3c, size 0x5c, virtual false, abstract: false, final false
inline uint32_t get_uniqueId() ;

/// @brief Method get_updateStepCount, addr 0xafe5dd0, size 0x5c, virtual false, abstract: false, final false
inline uint32_t get_updateStepCount() ;

/// @brief Method get_valid, addr 0xafe5b2c, size 0x48, virtual false, abstract: false, final false
inline bool get_valid() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>"
constexpr ::System::IEquatable_1<::UnityEngine::InputSystem::EnhancedTouch::Touch>* i___System__IEquatable_1___UnityEngine__InputSystem__EnhancedTouch__Touch_() ;

/// @brief Method remove_onFingerDown, addr 0xafe7d00, size 0xc4, virtual false, abstract: false, final false
static inline void remove_onFingerDown(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method remove_onFingerMove, addr 0xafe8010, size 0xc4, virtual false, abstract: false, final false
static inline void remove_onFingerMove(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

/// @brief Method remove_onFingerUp, addr 0xafe7e88, size 0xc4, virtual false, abstract: false, final false
static inline void remove_onFingerUp(::System::Action_1<::UnityEngine::InputSystem::EnhancedTouch::Finger*>*  value) ;

static inline void setStaticF_s_GlobalState(::GlobalNamespace::Touch_GlobalState  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Touch() ;

// Ctor Parameters [CppParam { name: "m_Finger", ty: "::UnityEngine::InputSystem::EnhancedTouch::Finger*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TouchRecord", ty: "::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: None, comment: None }]
constexpr Touch(::UnityEngine::InputSystem::EnhancedTouch::Finger*  m_Finger, ::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>  m_TouchRecord) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13641};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_Finger, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::EnhancedTouch::Finger*  m_Finger;

/// @brief Field m_TouchRecord, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::InputStateHistory_1_Record<::UnityEngine::InputSystem::LowLevel::TouchState>  m_TouchRecord;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch, m_Finger) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::EnhancedTouch::Touch, m_TouchRecord) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::EnhancedTouch::Touch) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::EnhancedTouch
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::EnhancedTouch {
// Is value type: false
// CS Name: UnityEngine.InputSystem.EnhancedTouch.Touch/<>c
class CORDL_TYPE Touch___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::EnhancedTouch::Touch___c*  __9;

/// @brief Field <>9__80_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_0, put=setStaticF___9__80_0)) ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::Touch_GlobalState>*  __9__80_0;

/// @brief Field <>9__80_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__80_1, put=setStaticF___9__80_1)) ::System::Action*  __9__80_1;

static inline ::UnityEngine::InputSystem::EnhancedTouch::Touch___c* New_ctor() ;

/// @brief Method <SaveAndResetState>b__80_0, addr 0xafe8b88, size 0x94, virtual false, abstract: false, final false
inline void _SaveAndResetState_b__80_0(::by_ref<::GlobalNamespace::Touch_GlobalState>  state) ;

/// @brief Method <SaveAndResetState>b__80_1, addr 0xafe8c1c, size 0x4, virtual false, abstract: false, final false
inline void _SaveAndResetState_b__80_1() ;

/// @brief Method .ctor, addr 0xafe8b80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::EnhancedTouch::Touch___c* getStaticF___9() ;

static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::Touch_GlobalState>* getStaticF___9__80_0() ;

static inline ::System::Action* getStaticF___9__80_1() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::EnhancedTouch::Touch___c*  value) ;

static inline void setStaticF___9__80_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::Touch_GlobalState>*  value) ;

static inline void setStaticF___9__80_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Touch___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Touch___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Touch___c(Touch___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Touch___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Touch___c(Touch___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13640};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::EnhancedTouch::Touch___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::EnhancedTouch
