#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtNotificationController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GtNotificationController)
namespace Liv::Lck::GorillaTag {
class GtNotificationController__NotificationTimer_d__12;
}
namespace Liv::Lck::Recorder {
struct RecordingData;
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
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GtNotificationController;
}
namespace Liv::Lck::GorillaTag {
class GtNotificationController__NotificationTimer_d__12;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GtNotificationController*);
MARK_REF_T(::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtNotificationController*, "Liv.Lck.GorillaTag", "GtNotificationController");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12*, "Liv.Lck.GorillaTag", "GtNotificationController/<NotificationTimer>d__12");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtNotificationController
class CORDL_TYPE GtNotificationController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _NotificationTimer_d__12 = ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12;

/// @brief Field _hiddenDuringNotification, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__hiddenDuringNotification, put=__cordl_internal_set__hiddenDuringNotification)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _hiddenDuringNotification;

/// @brief Field _hiddenObjectsState, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__hiddenObjectsState, put=__cordl_internal_set__hiddenObjectsState)) bool  _hiddenObjectsState;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _notificationShowDuration, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__notificationShowDuration, put=__cordl_internal_set__notificationShowDuration)) float_t  _notificationShowDuration;

/// @brief Field _pcMessage, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__pcMessage, put=__cordl_internal_set__pcMessage)) ::UnityW<::UnityEngine::GameObject>  _pcMessage;

/// @brief Field _questMessage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__questMessage, put=__cordl_internal_set__questMessage)) ::UnityW<::UnityEngine::GameObject>  _questMessage;

/// @brief Field _ui, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ui, put=__cordl_internal_set__ui)) ::UnityW<::UnityEngine::GameObject>  _ui;

static inline ::Liv::Lck::GorillaTag::GtNotificationController* New_ctor() ;

/// [IteratorStateMachine(typeof(Liv.Lck.GorillaTag.GtNotificationController::<NotificationTimer>d__12))]
/// @brief Method NotificationTimer, addr 0x9d24128, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* NotificationTimer() ;

/// @brief Method OnDisable, addr 0x9d23c8c, size 0x1bc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d23ad4, size 0x1b8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRecordingSaved, addr 0x9d23fdc, size 0x14c, virtual false, abstract: false, final false
inline void OnRecordingSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result) ;

/// @brief Method OnRecordingStarted, addr 0x9d23e48, size 0x4c, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method SetHiddenObjectsState, addr 0x9d23e94, size 0x148, virtual false, abstract: false, final false
inline void SetHiddenObjectsState(bool  state) ;

/// @brief Method Start, addr 0x9d23a9c, size 0x38, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__hiddenDuringNotification() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__hiddenDuringNotification() ;

constexpr bool const& __cordl_internal_get__hiddenObjectsState() const;

constexpr bool& __cordl_internal_get__hiddenObjectsState() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr float_t const& __cordl_internal_get__notificationShowDuration() const;

constexpr float_t& __cordl_internal_get__notificationShowDuration() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pcMessage() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pcMessage() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__questMessage() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__questMessage() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__ui() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__ui() ;

constexpr void __cordl_internal_set__hiddenDuringNotification(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__hiddenObjectsState(bool  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__notificationShowDuration(float_t  value) ;

constexpr void __cordl_internal_set__pcMessage(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__questMessage(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__ui(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d241bc, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GtNotificationController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtNotificationController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtNotificationController(GtNotificationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtNotificationController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtNotificationController(GtNotificationController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29635};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [SerializeField]
/// @brief Field _ui, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____ui;

/// [SerializeField]
/// @brief Field _questMessage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____questMessage;

/// [SerializeField]
/// @brief Field _pcMessage, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____pcMessage;

/// [SerializeField]
/// @brief Field _notificationShowDuration, offset: 0x40, size: 0x4, def value: None
 float_t  ____notificationShowDuration;

/// [SerializeField]
/// @brief Field _hiddenDuringNotification, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____hiddenDuringNotification;

/// @brief Field _hiddenObjectsState, offset: 0x50, size: 0x1, def value: None
 bool  ____hiddenObjectsState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController, ____ui) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController, ____questMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController, ____pcMessage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController, ____notificationShowDuration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController, ____hiddenDuringNotification) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController, ____hiddenObjectsState) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtNotificationController) == 0x58, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GtNotificationController/<NotificationTimer>d__12
class CORDL_TYPE GtNotificationController__NotificationTimer_d__12 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Liv::Lck::GorillaTag::GtNotificationController>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d24258, size 0xe4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d2433c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d24344, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d2437c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d24254, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtNotificationController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtNotificationController>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Liv::Lck::GorillaTag::GtNotificationController>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d24194, size 0x28, virtual false, abstract: false, final false
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
constexpr GtNotificationController__NotificationTimer_d__12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GtNotificationController__NotificationTimer_d__12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GtNotificationController__NotificationTimer_d__12(GtNotificationController__NotificationTimer_d__12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GtNotificationController__NotificationTimer_d__12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GtNotificationController__NotificationTimer_d__12(GtNotificationController__NotificationTimer_d__12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29634};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtNotificationController>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GtNotificationController__NotificationTimer_d__12) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
