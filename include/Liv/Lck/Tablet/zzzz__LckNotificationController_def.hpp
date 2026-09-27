#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckNotificationController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__NotificationType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckNotificationController)
namespace GlobalNamespace {
struct LckNotificationController__CheckInitializationAfterDelay_d__9;
}
namespace Liv::Lck::Recorder {
struct RecordingData;
}
namespace Liv::Lck::Tablet {
class InitializerNotification;
}
namespace Liv::Lck::Tablet {
class LckBaseNotification;
}
namespace Liv::Lck::Tablet {
class LckNotificationController__CreateNotification_d__22;
}
namespace Liv::Lck::Tablet {
class LckOnScreenUIController;
}
namespace Liv::Lck::Tablet {
struct NotificationType;
}
namespace Liv::Lck {
struct EchoDisableReason;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
class Transform;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LckNotificationController;
}
namespace Liv::Lck::Tablet {
class LckNotificationController__CreateNotification_d__22;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LckNotificationController*);
MARK_REF_T(::Liv::Lck::Tablet::LckNotificationController__CreateNotification_d__22*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckNotificationController*, "Liv.Lck.Tablet", "LckNotificationController");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LckNotificationController__CreateNotification_d__22*, "Liv.Lck.Tablet", "LckNotificationController/<CreateNotification>d__22");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckNotificationController
class CORDL_TYPE LckNotificationController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CheckInitializationAfterDelay_d__9 = ::GlobalNamespace::LckNotificationController__CheckInitializationAfterDelay_d__9;

using _CreateNotification_d__22 = ::Liv::Lck::Tablet::LckNotificationController__CreateNotification_d__22;

/// @brief Field _currentNotification, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentNotification, put=__cordl_internal_set__currentNotification)) ::UnityW<::Liv::Lck::Tablet::LckBaseNotification>  _currentNotification;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _notificationShowDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__notificationShowDuration, put=__cordl_internal_set__notificationShowDuration)) float_t  _notificationShowDuration;

/// @brief Field _notifications, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__notifications, put=__cordl_internal_set__notifications)) ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::NotificationType,::UnityW<::Liv::Lck::Tablet::LckBaseNotification>>*  _notifications;

/// @brief Field _notificationsInitializer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__notificationsInitializer, put=__cordl_internal_set__notificationsInitializer)) ::System::Collections::Generic::List_1<::Liv::Lck::Tablet::InitializerNotification*>*  _notificationsInitializer;

/// @brief Field _notificationsTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__notificationsTransform, put=__cordl_internal_set__notificationsTransform)) ::UnityW<::UnityEngine::Transform>  _notificationsTransform;

/// @brief Field _onScreenUIController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__onScreenUIController, put=__cordl_internal_set__onScreenUIController)) ::UnityW<::Liv::Lck::Tablet::LckOnScreenUIController>  _onScreenUIController;

/// @brief Method Awake, addr 0x9d57bf4, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Tablet.LckNotificationController::<CheckInitializationAfterDelay>d__9))]
/// @brief Method CheckInitializationAfterDelay, addr 0x9d57f2c, size 0xa8, virtual false, abstract: false, final false
inline void CheckInitializationAfterDelay() ;

/// [IteratorStateMachine(typeof(Liv.Lck.Tablet.LckNotificationController::<CreateNotification>d__22))]
/// @brief Method CreateNotification, addr 0x9d58e1c, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CreateNotification(::Liv::Lck::Tablet::NotificationType  type) ;

/// @brief Method DestroyNotifications, addr 0x9d58cd4, size 0x140, virtual false, abstract: false, final false
inline void DestroyNotifications() ;

/// @brief Method HideNotifications, addr 0x9d56530, size 0x1bc, virtual false, abstract: false, final false
inline void HideNotifications() ;

/// @brief Method InitializeNotifications, addr 0x9d57bf8, size 0x330, virtual false, abstract: false, final false
inline void InitializeNotifications() ;

static inline ::Liv::Lck::Tablet::LckNotificationController* New_ctor() ;

/// @brief Method OnCaptureStarted, addr 0x9d58a74, size 0x1c, virtual false, abstract: false, final false
inline void OnCaptureStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnDisable, addr 0x9d58580, size 0x3d8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEchoDisabled, addr 0x9d58ba0, size 0x24, virtual false, abstract: false, final false
inline void OnEchoDisabled(::Liv::Lck::LckResult*  result, ::Liv::Lck::EchoDisableReason  reason) ;

/// @brief Method OnEchoSaved, addr 0x9d58bc4, size 0x110, virtual false, abstract: false, final false
inline void OnEchoSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result) ;

/// @brief Method OnEnable, addr 0x9d581a0, size 0x3e0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRecordingSaved, addr 0x9d58a90, size 0x110, virtual false, abstract: false, final false
inline void OnRecordingSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result) ;

/// @brief Method OnValidate, addr 0x9d57fd4, size 0x1cc, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetNotificationStreamCode, addr 0x9d58958, size 0x11c, virtual false, abstract: false, final false
inline void SetNotificationStreamCode(::StringW  code) ;

/// @brief Method ShowNotification, addr 0x9d4cb70, size 0x15c, virtual false, abstract: false, final false
inline void ShowNotification(::Liv::Lck::Tablet::NotificationType  type) ;

/// @brief Method Start, addr 0x9d57f28, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckBaseNotification> const& __cordl_internal_get__currentNotification() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckBaseNotification>& __cordl_internal_get__currentNotification() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr float_t const& __cordl_internal_get__notificationShowDuration() const;

constexpr float_t& __cordl_internal_get__notificationShowDuration() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::NotificationType,::UnityW<::Liv::Lck::Tablet::LckBaseNotification>>* const& __cordl_internal_get__notifications() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::NotificationType,::UnityW<::Liv::Lck::Tablet::LckBaseNotification>>*& __cordl_internal_get__notifications() ;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Tablet::InitializerNotification*>* const& __cordl_internal_get__notificationsInitializer() const;

constexpr ::System::Collections::Generic::List_1<::Liv::Lck::Tablet::InitializerNotification*>*& __cordl_internal_get__notificationsInitializer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__notificationsTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__notificationsTransform() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckOnScreenUIController> const& __cordl_internal_get__onScreenUIController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckOnScreenUIController>& __cordl_internal_get__onScreenUIController() ;

constexpr void __cordl_internal_set__currentNotification(::UnityW<::Liv::Lck::Tablet::LckBaseNotification>  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__notificationShowDuration(float_t  value) ;

constexpr void __cordl_internal_set__notifications(::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::NotificationType,::UnityW<::Liv::Lck::Tablet::LckBaseNotification>>*  value) ;

constexpr void __cordl_internal_set__notificationsInitializer(::System::Collections::Generic::List_1<::Liv::Lck::Tablet::InitializerNotification*>*  value) ;

constexpr void __cordl_internal_set__notificationsTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__onScreenUIController(::UnityW<::Liv::Lck::Tablet::LckOnScreenUIController>  value) ;

/// @brief Method .ctor, addr 0x9d58ec0, size 0xe4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckNotificationController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNotificationController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNotificationController(LckNotificationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNotificationController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNotificationController(LckNotificationController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24939};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [Tooltip("Configure the list of all possible notifications. Drag your notification prefabs here and assign them a type.")]
/// [SerializeField]
/// @brief Field _notificationsInitializer, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Liv::Lck::Tablet::InitializerNotification*>*  ____notificationsInitializer;

/// @brief Field _notifications, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Tablet::NotificationType,::UnityW<::Liv::Lck::Tablet::LckBaseNotification>>*  ____notifications;

/// @brief Field _currentNotification, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckBaseNotification>  ____currentNotification;

/// [Tooltip("The default duration in seconds that a notification will remain on screen before automatically hiding. This can be overridden by the notification itself.")]
/// [SerializeField]
/// @brief Field _notificationShowDuration, offset: 0x40, size: 0x4, def value: None
 float_t  ____notificationShowDuration;

/// [Tooltip("The parent Transform under which all notification prefabs will be instantiated.")]
/// [SerializeField]
/// @brief Field _notificationsTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____notificationsTransform;

/// [Tooltip("A reference to a higher-level UI controller that may need to react when notifications appear or disappear (e.g., to adjust layout).")]
/// [SerializeField]
/// @brief Field _onScreenUIController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckOnScreenUIController>  ____onScreenUIController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController, ____notificationsInitializer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController, ____notifications) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController, ____currentNotification) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController, ____notificationShowDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController, ____notificationsTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController, ____onScreenUIController) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckNotificationController) == 0x58, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
// [CompilerGenerated]
// Dependencies Liv.Lck.Tablet.NotificationType, System.Object
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LckNotificationController/<CreateNotification>d__22
class CORDL_TYPE LckNotificationController__CreateNotification_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  __4__this;

/// @brief Field type, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Liv::Lck::Tablet::NotificationType  type;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d592bc, size 0x258, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::Tablet::LckNotificationController__CreateNotification_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d59514, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d5951c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d59554, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d592b8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& __cordl_internal_get___4__this() ;

constexpr ::Liv::Lck::Tablet::NotificationType const& __cordl_internal_get_type() const;

constexpr ::Liv::Lck::Tablet::NotificationType& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value) ;

constexpr void __cordl_internal_set_type(::Liv::Lck::Tablet::NotificationType  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d58e98, size 0x28, virtual false, abstract: false, final false
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
constexpr LckNotificationController__CreateNotification_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckNotificationController__CreateNotification_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckNotificationController__CreateNotification_d__22(LckNotificationController__CreateNotification_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckNotificationController__CreateNotification_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckNotificationController__CreateNotification_d__22(LckNotificationController__CreateNotification_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24938};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  _____4__this;

/// @brief Field type, offset: 0x28, size: 0x4, def value: None
 ::Liv::Lck::Tablet::NotificationType  ___type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController__CreateNotification_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController__CreateNotification_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController__CreateNotification_d__22, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LckNotificationController__CreateNotification_d__22, ___type) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LckNotificationController__CreateNotification_d__22) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
