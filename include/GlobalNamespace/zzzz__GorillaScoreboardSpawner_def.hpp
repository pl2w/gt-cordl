#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaScoreboardSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaScoreboardSpawner)
namespace GlobalNamespace {
class GorillaScoreBoard;
}
namespace GlobalNamespace {
class GorillaScoreboardSpawner__UpdateBoard_d__14;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
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
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaScoreboardSpawner;
}
namespace GlobalNamespace {
class GorillaScoreboardSpawner__UpdateBoard_d__14;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaScoreboardSpawner*);
MARK_REF_T(::GlobalNamespace::GorillaScoreboardSpawner__UpdateBoard_d__14*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaScoreboardSpawner*, "", "GorillaScoreboardSpawner");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaScoreboardSpawner__UpdateBoard_d__14*, "", "GorillaScoreboardSpawner/<UpdateBoard>d__14");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaScoreboardSpawner
class CORDL_TYPE GorillaScoreboardSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateBoard_d__14 = ::GlobalNamespace::GorillaScoreboardSpawner__UpdateBoard_d__14;

/// @brief Field controllingParentGameObject, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllingParentGameObject, put=__cordl_internal_set_controllingParentGameObject)) ::UnityW<::UnityEngine::GameObject>  controllingParentGameObject;

/// @brief Field currentScoreboard, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentScoreboard, put=__cordl_internal_set_currentScoreboard)) ::UnityW<::GlobalNamespace::GorillaScoreBoard>  currentScoreboard;

/// @brief Field forOverlay, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_forOverlay, put=__cordl_internal_set_forOverlay)) bool  forOverlay;

/// @brief Field gameType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameType, put=__cordl_internal_set_gameType)) ::StringW  gameType;

/// @brief Field includeMMR, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeMMR, put=__cordl_internal_set_includeMMR)) bool  includeMMR;

/// @brief Field isActive, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field lastVisible, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastVisible, put=__cordl_internal_set_lastVisible)) bool  lastVisible;

/// @brief Field notInRoomText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_notInRoomText, put=__cordl_internal_set_notInRoomText)) ::UnityW<::UnityEngine::GameObject>  notInRoomText;

/// @brief Field scoreboardPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreboardPrefab, put=__cordl_internal_set_scoreboardPrefab)) ::UnityW<::UnityEngine::GameObject>  scoreboardPrefab;

/// @brief Method Awake, addr 0x599f31c, size 0x20, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Cleanup, addr 0x599f878, size 0xb8, virtual false, abstract: false, final false
inline void Cleanup() ;

/// @brief Method IsCurrentScoreboard, addr 0x599f4f4, size 0x20, virtual false, abstract: false, final false
inline bool IsCurrentScoreboard() ;

/// @brief Method IsVisible, addr 0x599f70c, size 0xb8, virtual false, abstract: false, final false
inline bool IsVisible() ;

static inline ::GlobalNamespace::GorillaScoreboardSpawner* New_ctor() ;

/// @brief Method OnJoinedRoom, addr 0x599f514, size 0x1f8, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnLeftRoom, addr 0x599f7ec, size 0x8c, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method Start, addr 0x599f3a8, size 0x14c, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(GorillaScoreboardSpawner::<UpdateBoard>d__14))]
/// @brief Method UpdateBoard, addr 0x599f33c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateBoard() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_controllingParentGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_controllingParentGameObject() ;

constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard> const& __cordl_internal_get_currentScoreboard() const;

constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard>& __cordl_internal_get_currentScoreboard() ;

constexpr bool const& __cordl_internal_get_forOverlay() const;

constexpr bool& __cordl_internal_get_forOverlay() ;

constexpr ::StringW const& __cordl_internal_get_gameType() const;

constexpr ::StringW& __cordl_internal_get_gameType() ;

constexpr bool const& __cordl_internal_get_includeMMR() const;

constexpr bool& __cordl_internal_get_includeMMR() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr bool const& __cordl_internal_get_lastVisible() const;

constexpr bool& __cordl_internal_get_lastVisible() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_notInRoomText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_notInRoomText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_scoreboardPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_scoreboardPrefab() ;

constexpr void __cordl_internal_set_controllingParentGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_currentScoreboard(::UnityW<::GlobalNamespace::GorillaScoreBoard>  value) ;

constexpr void __cordl_internal_set_forOverlay(bool  value) ;

constexpr void __cordl_internal_set_gameType(::StringW  value) ;

constexpr void __cordl_internal_set_includeMMR(bool  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_lastVisible(bool  value) ;

constexpr void __cordl_internal_set_notInRoomText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_scoreboardPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x599f930, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaScoreboardSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreboardSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaScoreboardSpawner(GorillaScoreboardSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreboardSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaScoreboardSpawner(GorillaScoreboardSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2616};

/// @brief Field gameType, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___gameType;

/// @brief Field includeMMR, offset: 0x28, size: 0x1, def value: None
 bool  ___includeMMR;

/// @brief Field scoreboardPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___scoreboardPrefab;

/// @brief Field notInRoomText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___notInRoomText;

/// @brief Field controllingParentGameObject, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___controllingParentGameObject;

/// @brief Field isActive, offset: 0x48, size: 0x1, def value: None
 bool  ___isActive;

/// @brief Field currentScoreboard, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaScoreBoard>  ___currentScoreboard;

/// @brief Field lastVisible, offset: 0x58, size: 0x1, def value: None
 bool  ___lastVisible;

/// @brief Field forOverlay, offset: 0x59, size: 0x1, def value: None
 bool  ___forOverlay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner, ___gameType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner, ___includeMMR) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner, ___scoreboardPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner, ___notInRoomText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner, ___controllingParentGameObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner, ___isActive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner, ___currentScoreboard) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner, ___lastVisible) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner, ___forOverlay) == 0x59, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaScoreboardSpawner) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaScoreboardSpawner/<UpdateBoard>d__14
class CORDL_TYPE GorillaScoreboardSpawner__UpdateBoard_d__14 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaScoreboardSpawner>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x599f944, size 0x388, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaScoreboardSpawner__UpdateBoard_d__14* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x599fccc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x599fcd4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x599fd0c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x599f940, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaScoreboardSpawner> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaScoreboardSpawner>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaScoreboardSpawner>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x599f7c4, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaScoreboardSpawner__UpdateBoard_d__14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreboardSpawner__UpdateBoard_d__14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaScoreboardSpawner__UpdateBoard_d__14(GorillaScoreboardSpawner__UpdateBoard_d__14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreboardSpawner__UpdateBoard_d__14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaScoreboardSpawner__UpdateBoard_d__14(GorillaScoreboardSpawner__UpdateBoard_d__14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2615};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaScoreboardSpawner>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner__UpdateBoard_d__14, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner__UpdateBoard_d__14, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardSpawner__UpdateBoard_d__14, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaScoreboardSpawner__UpdateBoard_d__14) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
