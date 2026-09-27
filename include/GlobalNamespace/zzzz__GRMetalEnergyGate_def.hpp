#pragma once
// IWYU pragma private; include "GlobalNamespace/GRMetalEnergyGate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_DoorParams_def.hpp"
#include "GlobalNamespace/zzzz__GRMetalEnergyGate_State_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRMetalEnergyGate)
namespace GlobalNamespace {
struct GRMetalEnergyGate_DoorParams;
}
namespace GlobalNamespace {
struct GRMetalEnergyGate_State;
}
namespace GlobalNamespace {
class GRMetalEnergyGate__UpdateDoorAnimation_d__25;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRMetalEnergyGate;
}
namespace GlobalNamespace {
class GRMetalEnergyGate__UpdateDoorAnimation_d__25;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRMetalEnergyGate*);
MARK_REF_T(::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRMetalEnergyGate*, "", "GRMetalEnergyGate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25*, "", "GRMetalEnergyGate/<UpdateDoorAnimation>d__25");
// Dependencies GRMetalEnergyGate::DoorParams, GRMetalEnergyGate::State, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRMetalEnergyGate
class CORDL_TYPE GRMetalEnergyGate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DoorParams = ::GlobalNamespace::GRMetalEnergyGate_DoorParams;

using State = ::GlobalNamespace::GRMetalEnergyGate_State;

using _UpdateDoorAnimation_d__25 = ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25;

/// @brief Field audioSource, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field disableObjectsOnOpen, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableObjectsOnOpen, put=__cordl_internal_set_disableObjectsOnOpen)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  disableObjectsOnOpen;

/// @brief Field doorAnimationCoroutine, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorAnimationCoroutine, put=__cordl_internal_set_doorAnimationCoroutine)) ::UnityEngine::Coroutine*  doorAnimationCoroutine;

/// @brief Field doorCloseClip, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorCloseClip, put=__cordl_internal_set_doorCloseClip)) ::UnityW<::UnityEngine::AudioClip>  doorCloseClip;

/// @brief Field doorCloseCurve, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorCloseCurve, put=__cordl_internal_set_doorCloseCurve)) ::UnityEngine::AnimationCurve*  doorCloseCurve;

/// @brief Field doorCloseTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorCloseTime, put=__cordl_internal_set_doorCloseTime)) float_t  doorCloseTime;

/// @brief Field doorOpenClip, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorOpenClip, put=__cordl_internal_set_doorOpenClip)) ::UnityW<::UnityEngine::AudioClip>  doorOpenClip;

/// @brief Field doorOpenCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_doorOpenCurve, put=__cordl_internal_set_doorOpenCurve)) ::UnityEngine::AnimationCurve*  doorOpenCurve;

/// @brief Field doorOpenTime, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_doorOpenTime, put=__cordl_internal_set_doorOpenTime)) float_t  doorOpenTime;

/// @brief Field enableObjectsOnOpen, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_enableObjectsOnOpen, put=__cordl_internal_set_enableObjectsOnOpen)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  enableObjectsOnOpen;

/// @brief Field gameEntity, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field lowerDoor, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_lowerDoor, put=__cordl_internal_set_lowerDoor)) ::GlobalNamespace::GRMetalEnergyGate_DoorParams  lowerDoor;

/// @brief Field openProgress, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_openProgress, put=__cordl_internal_set_openProgress)) float_t  openProgress;

/// @brief Field state, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::GRMetalEnergyGate_State  state;

/// @brief Field tool, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_tool, put=__cordl_internal_set_tool)) ::UnityW<::GlobalNamespace::GRTool>  tool;

/// @brief Field upperDoor, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_upperDoor, put=__cordl_internal_set_upperDoor)) ::GlobalNamespace::GRMetalEnergyGate_DoorParams  upperDoor;

/// @brief Method CloseGate, addr 0x589e9f4, size 0x8, virtual false, abstract: false, final false
inline void CloseGate() ;

static inline ::GlobalNamespace::GRMetalEnergyGate* New_ctor() ;

/// @brief Method OnDisable, addr 0x589e344, size 0x160, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x589e258, size 0xec, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnergyChange, addr 0x589e4a4, size 0x1d0, virtual false, abstract: false, final false
inline void OnEnergyChange(::GlobalNamespace::GRTool*  tool, int32_t  energyChange, ::GlobalNamespace::GameEntityId  chargingEntityId) ;

/// @brief Method OnEntityStateChanged, addr 0x589e938, size 0x48, virtual false, abstract: false, final false
inline void OnEntityStateChanged(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OpenGate, addr 0x589e9ec, size 0x8, virtual false, abstract: false, final false
inline void OpenGate() ;

/// @brief Method SetState, addr 0x589e720, size 0x218, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRMetalEnergyGate_State  newState) ;

/// [IteratorStateMachine(typeof(GRMetalEnergyGate::<UpdateDoorAnimation>d__25))]
/// @brief Method UpdateDoorAnimation, addr 0x589e980, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateDoorAnimation() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_disableObjectsOnOpen() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_disableObjectsOnOpen() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_doorAnimationCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_doorAnimationCoroutine() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_doorCloseClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_doorCloseClip() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_doorCloseCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_doorCloseCurve() ;

constexpr float_t const& __cordl_internal_get_doorCloseTime() const;

constexpr float_t& __cordl_internal_get_doorCloseTime() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_doorOpenClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_doorOpenClip() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_doorOpenCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_doorOpenCurve() ;

constexpr float_t const& __cordl_internal_get_doorOpenTime() const;

constexpr float_t& __cordl_internal_get_doorOpenTime() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_enableObjectsOnOpen() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_enableObjectsOnOpen() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr ::GlobalNamespace::GRMetalEnergyGate_DoorParams const& __cordl_internal_get_lowerDoor() const;

constexpr ::GlobalNamespace::GRMetalEnergyGate_DoorParams& __cordl_internal_get_lowerDoor() ;

constexpr float_t const& __cordl_internal_get_openProgress() const;

constexpr float_t& __cordl_internal_get_openProgress() ;

constexpr ::GlobalNamespace::GRMetalEnergyGate_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::GRMetalEnergyGate_State& __cordl_internal_get_state() ;

constexpr ::UnityW<::GlobalNamespace::GRTool> const& __cordl_internal_get_tool() const;

constexpr ::UnityW<::GlobalNamespace::GRTool>& __cordl_internal_get_tool() ;

constexpr ::GlobalNamespace::GRMetalEnergyGate_DoorParams const& __cordl_internal_get_upperDoor() const;

constexpr ::GlobalNamespace::GRMetalEnergyGate_DoorParams& __cordl_internal_get_upperDoor() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_disableObjectsOnOpen(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_doorAnimationCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_doorCloseClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_doorCloseCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_doorCloseTime(float_t  value) ;

constexpr void __cordl_internal_set_doorOpenClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_doorOpenCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_doorOpenTime(float_t  value) ;

constexpr void __cordl_internal_set_enableObjectsOnOpen(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_lowerDoor(::GlobalNamespace::GRMetalEnergyGate_DoorParams  value) ;

constexpr void __cordl_internal_set_openProgress(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::GRMetalEnergyGate_State  value) ;

constexpr void __cordl_internal_set_tool(::UnityW<::GlobalNamespace::GRTool>  value) ;

constexpr void __cordl_internal_set_upperDoor(::GlobalNamespace::GRMetalEnergyGate_DoorParams  value) ;

/// @brief Method .ctor, addr 0x589ea24, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRMetalEnergyGate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRMetalEnergyGate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRMetalEnergyGate(GRMetalEnergyGate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRMetalEnergyGate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRMetalEnergyGate(GRMetalEnergyGate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1990};

/// [SerializeField]
/// @brief Field upperDoor, offset: 0x20, size: 0x18, def value: None
 ::GlobalNamespace::GRMetalEnergyGate_DoorParams  ___upperDoor;

/// [SerializeField]
/// @brief Field lowerDoor, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::GRMetalEnergyGate_DoorParams  ___lowerDoor;

/// [SerializeField]
/// @brief Field doorOpenTime, offset: 0x50, size: 0x4, def value: None
 float_t  ___doorOpenTime;

/// [SerializeField]
/// @brief Field doorCloseTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___doorCloseTime;

/// [SerializeField]
/// @brief Field doorOpenCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___doorOpenCurve;

/// [SerializeField]
/// @brief Field doorCloseCurve, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___doorCloseCurve;

/// [SerializeField]
/// @brief Field doorOpenClip, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___doorOpenClip;

/// [SerializeField]
/// @brief Field doorCloseClip, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___doorCloseClip;

/// [SerializeField]
/// @brief Field enableObjectsOnOpen, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___enableObjectsOnOpen;

/// [SerializeField]
/// @brief Field disableObjectsOnOpen, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___disableObjectsOnOpen;

/// [SerializeField]
/// @brief Field tool, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRTool>  ___tool;

/// [SerializeField]
/// @brief Field gameEntity, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field state, offset: 0xa0, size: 0x4, def value: None
 ::GlobalNamespace::GRMetalEnergyGate_State  ___state;

/// @brief Field openProgress, offset: 0xa4, size: 0x4, def value: None
 float_t  ___openProgress;

/// @brief Field doorAnimationCoroutine, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___doorAnimationCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___upperDoor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___lowerDoor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___doorOpenTime) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___doorCloseTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___doorOpenCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___doorCloseCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___doorOpenClip) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___doorCloseClip) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___enableObjectsOnOpen) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___disableObjectsOnOpen) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___tool) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___gameEntity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___audioSource) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___state) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___openProgress) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate, ___doorAnimationCoroutine) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRMetalEnergyGate) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRMetalEnergyGate/<UpdateDoorAnimation>d__25
class CORDL_TYPE GRMetalEnergyGate__UpdateDoorAnimation_d__25 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GRMetalEnergyGate>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x589eadc, size 0x210, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x589ecec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x589ecf4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x589ed2c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x589ead8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GRMetalEnergyGate> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GRMetalEnergyGate>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRMetalEnergyGate>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x589e9fc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRMetalEnergyGate__UpdateDoorAnimation_d__25() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRMetalEnergyGate__UpdateDoorAnimation_d__25", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRMetalEnergyGate__UpdateDoorAnimation_d__25(GRMetalEnergyGate__UpdateDoorAnimation_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRMetalEnergyGate__UpdateDoorAnimation_d__25", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRMetalEnergyGate__UpdateDoorAnimation_d__25(GRMetalEnergyGate__UpdateDoorAnimation_d__25 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1989};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRMetalEnergyGate>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRMetalEnergyGate__UpdateDoorAnimation_d__25) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
