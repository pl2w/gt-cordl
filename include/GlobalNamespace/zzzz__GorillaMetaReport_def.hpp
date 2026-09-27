#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaMetaReport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaMetaReport)
namespace GlobalNamespace {
class GorillaMetaReport__Submitted_d__23;
}
namespace GlobalNamespace {
class GorillaReportButton;
}
namespace GlobalNamespace {
class GorillaScoreBoard;
}
namespace GlobalNamespace {
class NotificationsMessageResponse;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
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
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaMetaReport;
}
namespace GlobalNamespace {
class GorillaMetaReport__Submitted_d__23;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaMetaReport*);
MARK_REF_T(::GlobalNamespace::GorillaMetaReport__Submitted_d__23*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaMetaReport*, "", "GorillaMetaReport");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaMetaReport__Submitted_d__23*, "", "GorillaMetaReport/<Submitted>d__23");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaMetaReport
class CORDL_TYPE GorillaMetaReport : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Submitted_d__23 = ::GlobalNamespace::GorillaMetaReport__Submitted_d__23;

/// @brief Field ReportText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ReportText, put=__cordl_internal_set_ReportText)) ::UnityW<::UnityEngine::GameObject>  ReportText;

/// @brief Field blockButtonsUntilTimestamp, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockButtonsUntilTimestamp, put=__cordl_internal_set_blockButtonsUntilTimestamp)) float_t  blockButtonsUntilTimestamp;

/// @brief Field closeButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_closeButton, put=__cordl_internal_set_closeButton)) ::UnityW<::GlobalNamespace::GorillaReportButton>  closeButton;

/// @brief Field currentScoreboard, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentScoreboard, put=__cordl_internal_set_currentScoreboard)) ::UnityW<::GlobalNamespace::GorillaScoreBoard>  currentScoreboard;

/// @brief Field handRotOffset, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_handRotOffset, put=__cordl_internal_set_handRotOffset)) ::UnityEngine::Quaternion  handRotOffset;

/// @brief Field hasSavedCullingMask, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasSavedCullingMask, put=__cordl_internal_set_hasSavedCullingMask)) bool  hasSavedCullingMask;

/// @brief Field isMoving, offset 0x86, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMoving, put=__cordl_internal_set_isMoving)) bool  isMoving;

/// @brief Field leftHandObject, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandObject, put=__cordl_internal_set_leftHandObject)) ::UnityW<::UnityEngine::GameObject>  leftHandObject;

 __declspec(property(get=get_localPlayer)) ::UnityW<::GorillaLocomotion::GTPlayer>  localPlayer;

/// @brief Field movementTime, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementTime, put=__cordl_internal_set_movementTime)) float_t  movementTime;

/// @brief Field occluder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_occluder, put=__cordl_internal_set_occluder)) ::UnityW<::UnityEngine::GameObject>  occluder;

/// @brief Field playerLocalScreenPosition, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_playerLocalScreenPosition, put=__cordl_internal_set_playerLocalScreenPosition)) ::UnityEngine::Vector3  playerLocalScreenPosition;

/// @brief Field reportScoreboard, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportScoreboard, put=__cordl_internal_set_reportScoreboard)) ::UnityW<::UnityEngine::GameObject>  reportScoreboard;

/// @brief Field rightHandObject, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandObject, put=__cordl_internal_set_rightHandObject)) ::UnityW<::UnityEngine::GameObject>  rightHandObject;

/// @brief Field savedCullingLayers, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_savedCullingLayers, put=__cordl_internal_set_savedCullingLayers)) int32_t  savedCullingLayers;

/// @brief Field testPress, offset 0x85, size 0x1 
 __declspec(property(get=__cordl_internal_get_testPress, put=__cordl_internal_set_testPress)) bool  testPress;

/// @brief Field visibleLayers, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibleLayers, put=__cordl_internal_set_visibleLayers)) ::UnityEngine::LayerMask  visibleLayers;

/// @brief Method CheckDistance, addr 0x5714588, size 0x368, virtual false, abstract: false, final false
inline void CheckDistance() ;

/// @brief Method CheckReportSubmit, addr 0x57140f8, size 0x28c, virtual false, abstract: false, final false
inline void CheckReportSubmit() ;

/// @brief Method DuplicateScoreboard, addr 0x57139bc, size 0x1b0, virtual false, abstract: false, final false
inline void DuplicateScoreboard() ;

/// @brief Method FormatListToString, addr 0x571381c, size 0x10c, virtual false, abstract: false, final false
static inline ::StringW FormatListToString(/* [IsReadOnly] */ ::by_ref<::ArrayW<::StringW>>  list) ;

/// @brief Method GetIdealScreenPositionRotation, addr 0x5713b6c, size 0x194, virtual false, abstract: false, final false
inline void GetIdealScreenPositionRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation, ::by_ref<::UnityEngine::Vector3>  scale) ;

static inline ::GlobalNamespace::GorillaMetaReport* New_ctor() ;

/// @brief Method OnDisable, addr 0x5712d94, size 0x78, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnMuteSanction, addr 0x571356c, size 0x2b0, virtual false, abstract: false, final false
inline void OnMuteSanction(::StringW  muteNotification) ;

/// @brief Method OnNotification, addr 0x57131f0, size 0x1bc, virtual false, abstract: false, final false
inline void OnNotification(::GlobalNamespace::NotificationsMessageResponse*  notification, /* [NativeInteger] */ ::System::IntPtr  _) ;

/// @brief Method OnReportButtonIntentNotif, addr 0x5712e0c, size 0xd0, virtual false, abstract: false, final false
inline void OnReportButtonIntentNotif(::Oculus::Platform::Message_1<::StringW>*  message) ;

/// @brief Method OnWarning, addr 0x57133ac, size 0x1c0, virtual false, abstract: false, final false
inline void OnWarning(::StringW  warningNotification) ;

/// @brief Method Start, addr 0x5712cc8, size 0xcc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartOverlay, addr 0x5712edc, size 0x314, virtual false, abstract: false, final false
inline void StartOverlay(bool  isSanction) ;

/// [IteratorStateMachine(typeof(GorillaMetaReport::<Submitted>d__23))]
/// @brief Method Submitted, addr 0x5713928, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Submitted() ;

/// @brief Method Teardown, addr 0x5713e4c, size 0x238, virtual false, abstract: false, final false
inline void Teardown() ;

/// @brief Method ToggleLevelVisibility, addr 0x5713d00, size 0x14c, virtual false, abstract: false, final false
inline void ToggleLevelVisibility(bool  state) ;

/// @brief Method Update, addr 0x57148f0, size 0x220, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateHandPosRot, addr 0x5714384, size 0x204, virtual false, abstract: false, final false
inline void UpdateHandPosRot() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ReportText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ReportText() ;

constexpr float_t const& __cordl_internal_get_blockButtonsUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_blockButtonsUntilTimestamp() ;

constexpr ::UnityW<::GlobalNamespace::GorillaReportButton> const& __cordl_internal_get_closeButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaReportButton>& __cordl_internal_get_closeButton() ;

constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard> const& __cordl_internal_get_currentScoreboard() const;

constexpr ::UnityW<::GlobalNamespace::GorillaScoreBoard>& __cordl_internal_get_currentScoreboard() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_handRotOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_handRotOffset() ;

constexpr bool const& __cordl_internal_get_hasSavedCullingMask() const;

constexpr bool& __cordl_internal_get_hasSavedCullingMask() ;

constexpr bool const& __cordl_internal_get_isMoving() const;

constexpr bool& __cordl_internal_get_isMoving() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftHandObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftHandObject() ;

constexpr float_t const& __cordl_internal_get_movementTime() const;

constexpr float_t& __cordl_internal_get_movementTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_occluder() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_occluder() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_playerLocalScreenPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_playerLocalScreenPosition() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_reportScoreboard() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_reportScoreboard() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightHandObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightHandObject() ;

constexpr int32_t const& __cordl_internal_get_savedCullingLayers() const;

constexpr int32_t& __cordl_internal_get_savedCullingLayers() ;

constexpr bool const& __cordl_internal_get_testPress() const;

constexpr bool& __cordl_internal_get_testPress() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_visibleLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_visibleLayers() ;

constexpr void __cordl_internal_set_ReportText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_blockButtonsUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_closeButton(::UnityW<::GlobalNamespace::GorillaReportButton>  value) ;

constexpr void __cordl_internal_set_currentScoreboard(::UnityW<::GlobalNamespace::GorillaScoreBoard>  value) ;

constexpr void __cordl_internal_set_handRotOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_hasSavedCullingMask(bool  value) ;

constexpr void __cordl_internal_set_isMoving(bool  value) ;

constexpr void __cordl_internal_set_leftHandObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_movementTime(float_t  value) ;

constexpr void __cordl_internal_set_occluder(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_playerLocalScreenPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_reportScoreboard(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rightHandObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_savedCullingLayers(int32_t  value) ;

constexpr void __cordl_internal_set_testPress(bool  value) ;

constexpr void __cordl_internal_set_visibleLayers(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x5714b10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_localPlayer, addr 0x5712c40, size 0x88, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::GTPlayer> get_localPlayer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaMetaReport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaMetaReport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaMetaReport(GorillaMetaReport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaMetaReport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaMetaReport(GorillaMetaReport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1187};

/// [SerializeField]
/// @brief Field occluder, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___occluder;

/// [SerializeField]
/// @brief Field reportScoreboard, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___reportScoreboard;

/// [SerializeField]
/// @brief Field ReportText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ReportText;

/// [SerializeField]
/// @brief Field visibleLayers, offset: 0x38, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___visibleLayers;

/// [SerializeField]
/// @brief Field closeButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaReportButton>  ___closeButton;

/// [SerializeField]
/// @brief Field leftHandObject, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftHandObject;

/// [SerializeField]
/// @brief Field rightHandObject, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightHandObject;

/// [SerializeField]
/// @brief Field handRotOffset, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___handRotOffset;

/// [SerializeField]
/// @brief Field playerLocalScreenPosition, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___playerLocalScreenPosition;

/// @brief Field blockButtonsUntilTimestamp, offset: 0x74, size: 0x4, def value: None
 float_t  ___blockButtonsUntilTimestamp;

/// [SerializeField]
/// @brief Field currentScoreboard, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaScoreBoard>  ___currentScoreboard;

/// @brief Field savedCullingLayers, offset: 0x80, size: 0x4, def value: None
 int32_t  ___savedCullingLayers;

/// @brief Field hasSavedCullingMask, offset: 0x84, size: 0x1, def value: None
 bool  ___hasSavedCullingMask;

/// @brief Field testPress, offset: 0x85, size: 0x1, def value: None
 bool  ___testPress;

/// @brief Field isMoving, offset: 0x86, size: 0x1, def value: None
 bool  ___isMoving;

/// @brief Field movementTime, offset: 0x88, size: 0x4, def value: None
 float_t  ___movementTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___occluder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___reportScoreboard) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___ReportText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___visibleLayers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___closeButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___leftHandObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___rightHandObject) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___handRotOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___playerLocalScreenPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___blockButtonsUntilTimestamp) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___currentScoreboard) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___savedCullingLayers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___hasSavedCullingMask) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___testPress) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___isMoving) == 0x86, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport, ___movementTime) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaMetaReport) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaMetaReport/<Submitted>d__23
class CORDL_TYPE GorillaMetaReport__Submitted_d__23 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaMetaReport>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5714b1c, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaMetaReport__Submitted_d__23* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5714bc8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5714bd0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5714c08, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5714b18, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaMetaReport> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaMetaReport>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaMetaReport>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5713994, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaMetaReport__Submitted_d__23() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaMetaReport__Submitted_d__23", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaMetaReport__Submitted_d__23(GorillaMetaReport__Submitted_d__23 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaMetaReport__Submitted_d__23", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaMetaReport__Submitted_d__23(GorillaMetaReport__Submitted_d__23 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1186};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaMetaReport>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaMetaReport__Submitted_d__23, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport__Submitted_d__23, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaMetaReport__Submitted_d__23, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaMetaReport__Submitted_d__23) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
