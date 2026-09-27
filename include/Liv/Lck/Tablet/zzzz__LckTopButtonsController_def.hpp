#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckTopButtonsController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__LckTopButtonsController_TopButtonPage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckTopButtonsController)
namespace GlobalNamespace {
struct LckTopButtonsController_TopButtonPage;
}
namespace Liv::Lck::Tablet {
class ILckTopButtons;
}
namespace Liv::Lck::Tablet {
class LckNotificationController;
}
namespace Liv::Lck::Tablet {
class LckTopButtonsController__ResetAfterApplicationFocus_d__18;
}
namespace Liv::Lck::UI {
class LckPhotoModeController;
}
namespace Liv::Lck {
class ILckService;
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
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckTopButtonsController;
}
namespace Liv::Lck::Tablet {
class LckTopButtonsController__ResetAfterApplicationFocus_d__18;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckTopButtonsController*);
MARK_REF_T(::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckTopButtonsController*, "Liv.Lck.Tablet", "LckTopButtonsController");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18*, "Liv.Lck.Tablet", "LckTopButtonsController/<ResetAfterApplicationFocus>d__18");
// Dependencies Liv.Lck.Tablet.LckTopButtonsController::TopButtonPage, UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckTopButtonsController
class CORDL_TYPE LckTopButtonsController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TopButtonPage = ::GlobalNamespace::LckTopButtonsController_TopButtonPage;

using _ResetAfterApplicationFocus_d__18 = ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18;

 __declspec(property(get=get_CurrentPage)) ::GlobalNamespace::LckTopButtonsController_TopButtonPage  CurrentPage;

/// @brief Field _buttonsDisabled, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get__buttonsDisabled, put=__cordl_internal_set__buttonsDisabled)) bool  _buttonsDisabled;

/// @brief Field _cameraPageButtons, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraPageButtons, put=__cordl_internal_set__cameraPageButtons)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _cameraPageButtons;

/// @brief Field _currentPage, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentPage, put=__cordl_internal_set__currentPage)) ::GlobalNamespace::LckTopButtonsController_TopButtonPage  _currentPage;

/// @brief Field _echoPageButtons, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__echoPageButtons, put=__cordl_internal_set__echoPageButtons)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _echoPageButtons;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _notificationController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__notificationController, put=__cordl_internal_set__notificationController)) ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  _notificationController;

/// @brief Field _onCameraPageOpened, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onCameraPageOpened, put=__cordl_internal_set__onCameraPageOpened)) ::UnityEngine::Events::UnityEvent*  _onCameraPageOpened;

/// @brief Field _onEchoPageOpened, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__onEchoPageOpened, put=__cordl_internal_set__onEchoPageOpened)) ::UnityEngine::Events::UnityEvent*  _onEchoPageOpened;

/// @brief Field _onStreamPageOpened, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStreamPageOpened, put=__cordl_internal_set__onStreamPageOpened)) ::UnityEngine::Events::UnityEvent*  _onStreamPageOpened;

/// @brief Field _photoModeController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__photoModeController, put=__cordl_internal_set__photoModeController)) ::UnityW<::Liv::Lck::UI::LckPhotoModeController>  _photoModeController;

/// @brief Field _streamPageButtons, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamPageButtons, put=__cordl_internal_set__streamPageButtons)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _streamPageButtons;

/// @brief Field _topButtonsControllerGameObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__topButtonsControllerGameObject, put=__cordl_internal_set__topButtonsControllerGameObject)) ::UnityW<::UnityEngine::GameObject>  _topButtonsControllerGameObject;

/// @brief Field _topButtonsHelper, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__topButtonsHelper, put=__cordl_internal_set__topButtonsHelper)) ::Liv::Lck::Tablet::ILckTopButtons*  _topButtonsHelper;

/// @brief Method DisableEchoIfActive, addr 0x9d5e128, size 0x150, virtual false, abstract: false, final false
inline void DisableEchoIfActive() ;

static inline ::Liv::Lck::Tablet::LckTopButtonsController* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x9d5e06c, size 0x28, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// [IteratorStateMachine(typeof(Liv.Lck.Tablet.LckTopButtonsController::<ResetAfterApplicationFocus>d__18))]
/// @brief Method ResetAfterApplicationFocus, addr 0x9d5e094, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ResetAfterApplicationFocus() ;

/// @brief Method SetCameraPageVisualsManually, addr 0x9d5eac0, size 0xa4, virtual false, abstract: false, final false
inline void SetCameraPageVisualsManually() ;

/// @brief Method SetTopButtonsIsDisabledState, addr 0x9d55cb8, size 0x144, virtual false, abstract: false, final false
inline void SetTopButtonsIsDisabledState(bool  isDisabled) ;

/// @brief Method Start, addr 0x9d5dbc4, size 0x104, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleCameraPage, addr 0x9d5dcc8, size 0x3a4, virtual false, abstract: false, final false
inline void ToggleCameraPage(bool  state) ;

/// @brief Method ToggleEchoPage, addr 0x9d5e610, size 0x4b0, virtual false, abstract: false, final false
inline void ToggleEchoPage(bool  state) ;

/// @brief Method ToggleStreamPage, addr 0x9d5e278, size 0x398, virtual false, abstract: false, final false
inline void ToggleStreamPage(bool  state) ;

constexpr bool const& __cordl_internal_get__buttonsDisabled() const;

constexpr bool& __cordl_internal_get__buttonsDisabled() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__cameraPageButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__cameraPageButtons() ;

constexpr ::GlobalNamespace::LckTopButtonsController_TopButtonPage const& __cordl_internal_get__currentPage() const;

constexpr ::GlobalNamespace::LckTopButtonsController_TopButtonPage& __cordl_internal_get__currentPage() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__echoPageButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__echoPageButtons() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& __cordl_internal_get__notificationController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& __cordl_internal_get__notificationController() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onCameraPageOpened() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onCameraPageOpened() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onEchoPageOpened() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onEchoPageOpened() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onStreamPageOpened() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onStreamPageOpened() ;

constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController> const& __cordl_internal_get__photoModeController() const;

constexpr ::UnityW<::Liv::Lck::UI::LckPhotoModeController>& __cordl_internal_get__photoModeController() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__streamPageButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__streamPageButtons() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__topButtonsControllerGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__topButtonsControllerGameObject() ;

constexpr ::Liv::Lck::Tablet::ILckTopButtons* const& __cordl_internal_get__topButtonsHelper() const;

constexpr ::Liv::Lck::Tablet::ILckTopButtons*& __cordl_internal_get__topButtonsHelper() ;

constexpr void __cordl_internal_set__buttonsDisabled(bool  value) ;

constexpr void __cordl_internal_set__cameraPageButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__currentPage(::GlobalNamespace::LckTopButtonsController_TopButtonPage  value) ;

constexpr void __cordl_internal_set__echoPageButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value) ;

constexpr void __cordl_internal_set__onCameraPageOpened(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onEchoPageOpened(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onStreamPageOpened(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__photoModeController(::UnityW<::Liv::Lck::UI::LckPhotoModeController>  value) ;

constexpr void __cordl_internal_set__streamPageButtons(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__topButtonsControllerGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__topButtonsHelper(::Liv::Lck::Tablet::ILckTopButtons*  value) ;

/// @brief Method .ctor, addr 0x9d5eb64, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentPage, addr 0x9d5dbbc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::LckTopButtonsController_TopButtonPage get_CurrentPage() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckTopButtonsController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTopButtonsController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTopButtonsController(LckTopButtonsController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTopButtonsController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTopButtonsController(LckTopButtonsController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24955};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [SerializeField]
/// @brief Field _topButtonsControllerGameObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____topButtonsControllerGameObject;

/// [SerializeField]
/// @brief Field _notificationController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  ____notificationController;

/// [SerializeField]
/// @brief Field _photoModeController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckPhotoModeController>  ____photoModeController;

/// [SerializeField]
/// @brief Field _cameraPageButtons, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____cameraPageButtons;

/// [SerializeField]
/// @brief Field _streamPageButtons, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____streamPageButtons;

/// [SerializeField]
/// @brief Field _echoPageButtons, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____echoPageButtons;

/// [Header("Top Button Events")]
/// [SerializeField]
/// @brief Field _onCameraPageOpened, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onCameraPageOpened;

/// [SerializeField]
/// @brief Field _onStreamPageOpened, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onStreamPageOpened;

/// [SerializeField]
/// @brief Field _onEchoPageOpened, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onEchoPageOpened;

/// @brief Field _topButtonsHelper, offset: 0x70, size: 0x8, def value: None
 ::Liv::Lck::Tablet::ILckTopButtons*  ____topButtonsHelper;

/// @brief Field _currentPage, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::LckTopButtonsController_TopButtonPage  ____currentPage;

/// @brief Field _buttonsDisabled, offset: 0x7c, size: 0x1, def value: None
 bool  ____buttonsDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____topButtonsControllerGameObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____notificationController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____photoModeController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____cameraPageButtons) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____streamPageButtons) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____echoPageButtons) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____onCameraPageOpened) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____onStreamPageOpened) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____onEchoPageOpened) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____topButtonsHelper) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____currentPage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController, ____buttonsDisabled) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckTopButtonsController) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckTopButtonsController/<ResetAfterApplicationFocus>d__18
class CORDL_TYPE LckTopButtonsController__ResetAfterApplicationFocus_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d5ecb8, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d5ed48, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d5ed50, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d5ed88, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d5ecb4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d5e100, size 0x28, virtual false, abstract: false, final false
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
constexpr LckTopButtonsController__ResetAfterApplicationFocus_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckTopButtonsController__ResetAfterApplicationFocus_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckTopButtonsController__ResetAfterApplicationFocus_d__18(LckTopButtonsController__ResetAfterApplicationFocus_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckTopButtonsController__ResetAfterApplicationFocus_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckTopButtonsController__ResetAfterApplicationFocus_d__18(LckTopButtonsController__ResetAfterApplicationFocus_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24954};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckTopButtonsController__ResetAfterApplicationFocus_d__18) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
