#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/VirtualStumpReturnWatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__VirtualStumpReturnWatchProps_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VirtualStumpReturnWatch)
namespace GT_CustomMapSupportRuntime {
struct VirtualStumpReturnWatchProps;
}
namespace GlobalNamespace {
class HeldButton;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class VirtualStumpReturnWatch__UpdateCountdownText_d__16;
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
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class VirtualStumpReturnWatch;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class VirtualStumpReturnWatch__UpdateCountdownText_d__16;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch__UpdateCountdownText_d__16*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch*, "GorillaTagScripts.VirtualStumpCustomMaps", "VirtualStumpReturnWatch");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch__UpdateCountdownText_d__16*, "GorillaTagScripts.VirtualStumpCustomMaps", "VirtualStumpReturnWatch/<UpdateCountdownText>d__16");
// Dependencies GT_CustomMapSupportRuntime.VirtualStumpReturnWatchProps, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpReturnWatch
class CORDL_TYPE VirtualStumpReturnWatch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateCountdownText_d__16 = ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch__UpdateCountdownText_d__16;

/// @brief Field buttonText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonText, put=__cordl_internal_set_buttonText)) ::UnityW<::TMPro::TMP_Text>  buttonText;

/// @brief Field countdownText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_countdownText, put=__cordl_internal_set_countdownText)) ::UnityW<::TMPro::TMP_Text>  countdownText;

/// @brief Field currentCustomMapProps, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_currentCustomMapProps, put=setStaticF_currentCustomMapProps)) ::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps  currentCustomMapProps;

/// @brief Field currentlyBeingPressed, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentlyBeingPressed, put=__cordl_internal_set_currentlyBeingPressed)) bool  currentlyBeingPressed;

/// @brief Field returnButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnButton, put=__cordl_internal_set_returnButton)) ::UnityW<::GlobalNamespace::HeldButton>  returnButton;

/// @brief Field startPressingButtonTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_startPressingButtonTime, put=__cordl_internal_set_startPressingButtonTime)) float_t  startPressingButtonTime;

/// @brief Field updateCountdownCoroutine, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateCountdownCoroutine, put=__cordl_internal_set_updateCountdownCoroutine)) ::UnityEngine::Coroutine*  updateCountdownCoroutine;

/// @brief Method GetCurrentHoldDuration, addr 0x5beee34, size 0xe4, virtual false, abstract: false, final false
inline float_t GetCurrentHoldDuration() ;

/// @brief Method HideCountdownText, addr 0x5bef1a4, size 0x104, virtual false, abstract: false, final false
inline void HideCountdownText() ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch* New_ctor() ;

/// @brief Method OnButtonPressed, addr 0x5bef2a8, size 0x24c, virtual false, abstract: false, final false
inline void OnButtonPressed() ;

/// @brief Method OnDestroy, addr 0x5beec00, size 0x184, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnStartedPressingButton, addr 0x5beef18, size 0x6c, virtual false, abstract: false, final false
inline void OnStartedPressingButton() ;

/// @brief Method OnStoppedPressingButton, addr 0x5bef154, size 0x50, virtual false, abstract: false, final false
inline void OnStoppedPressingButton() ;

/// @brief Method SetWatchProperties, addr 0x5beed84, size 0xb0, virtual false, abstract: false, final false
static inline void SetWatchProperties(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps  props) ;

/// @brief Method ShowCountdownText, addr 0x5beef84, size 0x164, virtual false, abstract: false, final false
inline void ShowCountdownText() ;

/// @brief Method Start, addr 0x5beea7c, size 0x184, virtual false, abstract: false, final false
inline void Start() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpReturnWatch::<UpdateCountdownText>d__16))]
/// @brief Method UpdateCountdownText, addr 0x5bef0e8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateCountdownText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_buttonText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_buttonText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_countdownText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_countdownText() ;

constexpr bool const& __cordl_internal_get_currentlyBeingPressed() const;

constexpr bool& __cordl_internal_get_currentlyBeingPressed() ;

constexpr ::UnityW<::GlobalNamespace::HeldButton> const& __cordl_internal_get_returnButton() const;

constexpr ::UnityW<::GlobalNamespace::HeldButton>& __cordl_internal_get_returnButton() ;

constexpr float_t const& __cordl_internal_get_startPressingButtonTime() const;

constexpr float_t& __cordl_internal_get_startPressingButtonTime() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_updateCountdownCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_updateCountdownCoroutine() ;

constexpr void __cordl_internal_set_buttonText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_countdownText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_currentlyBeingPressed(bool  value) ;

constexpr void __cordl_internal_set_returnButton(::UnityW<::GlobalNamespace::HeldButton>  value) ;

constexpr void __cordl_internal_set_startPressingButtonTime(float_t  value) ;

constexpr void __cordl_internal_set_updateCountdownCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x5bef51c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps getStaticF_currentCustomMapProps() ;

static inline void setStaticF_currentCustomMapProps(::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualStumpReturnWatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpReturnWatch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpReturnWatch(VirtualStumpReturnWatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpReturnWatch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpReturnWatch(VirtualStumpReturnWatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4062};

/// [SerializeField]
/// @brief Field returnButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HeldButton>  ___returnButton;

/// [SerializeField]
/// @brief Field buttonText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___buttonText;

/// [SerializeField]
/// @brief Field countdownText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___countdownText;

/// @brief Field startPressingButtonTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___startPressingButtonTime;

/// @brief Field currentlyBeingPressed, offset: 0x3c, size: 0x1, def value: None
 bool  ___currentlyBeingPressed;

/// @brief Field updateCountdownCoroutine, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___updateCountdownCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch, ___returnButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch, ___buttonText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch, ___countdownText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch, ___startPressingButtonTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch, ___currentlyBeingPressed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch, ___updateCountdownCoroutine) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpReturnWatch/<UpdateCountdownText>d__16
class CORDL_TYPE VirtualStumpReturnWatch__UpdateCountdownText_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5bef530, size 0x164, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch__UpdateCountdownText_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5bef694, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bef69c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bef6d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bef52c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5bef4f4, size 0x28, virtual false, abstract: false, final false
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
constexpr VirtualStumpReturnWatch__UpdateCountdownText_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpReturnWatch__UpdateCountdownText_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualStumpReturnWatch__UpdateCountdownText_d__16(VirtualStumpReturnWatch__UpdateCountdownText_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualStumpReturnWatch__UpdateCountdownText_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualStumpReturnWatch__UpdateCountdownText_d__16(VirtualStumpReturnWatch__UpdateCountdownText_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4061};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch__UpdateCountdownText_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch__UpdateCountdownText_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch__UpdateCountdownText_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpReturnWatch__UpdateCountdownText_d__16) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
