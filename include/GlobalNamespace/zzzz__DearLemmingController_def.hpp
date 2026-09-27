#pragma once
// IWYU pragma private; include "GlobalNamespace/DearLemmingController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DearLemmingController)
namespace GlobalNamespace {
class DearLemmingController_DearLemmingRequest;
}
namespace GlobalNamespace {
class DearLemmingController_DearLemmingResponse;
}
namespace GlobalNamespace {
struct DearLemmingController__CheckCanSubmit_d__16;
}
namespace GlobalNamespace {
class DearLemmingController__DoRequest_d__20;
}
namespace GlobalNamespace {
struct DearLemmingController__SubmitMessage_d__17;
}
namespace GlobalNamespace {
struct DearLemmingController__WaitForLogin_d__22;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
class DearLemmingController;
}
namespace GlobalNamespace {
class DearLemmingController_DearLemmingRequest;
}
namespace GlobalNamespace {
class DearLemmingController_DearLemmingResponse;
}
namespace GlobalNamespace {
class DearLemmingController__DoRequest_d__20;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DearLemmingController*);
MARK_REF_T(::GlobalNamespace::DearLemmingController_DearLemmingRequest*);
MARK_REF_T(::GlobalNamespace::DearLemmingController_DearLemmingResponse*);
MARK_REF_T(::GlobalNamespace::DearLemmingController__DoRequest_d__20*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DearLemmingController*, "", "DearLemmingController");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DearLemmingController_DearLemmingRequest*, "", "DearLemmingController/DearLemmingRequest");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DearLemmingController_DearLemmingResponse*, "", "DearLemmingController/DearLemmingResponse");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DearLemmingController__DoRequest_d__20*, "", "DearLemmingController/<DoRequest>d__20");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DearLemmingController
class CORDL_TYPE DearLemmingController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DearLemmingRequest = ::GlobalNamespace::DearLemmingController_DearLemmingRequest;

using DearLemmingResponse = ::GlobalNamespace::DearLemmingController_DearLemmingResponse;

using _CheckCanSubmit_d__16 = ::GlobalNamespace::DearLemmingController__CheckCanSubmit_d__16;

using _DoRequest_d__20 = ::GlobalNamespace::DearLemmingController__DoRequest_d__20;

using _SubmitMessage_d__17 = ::GlobalNamespace::DearLemmingController__SubmitMessage_d__17;

using _WaitForLogin_d__22 = ::GlobalNamespace::DearLemmingController__WaitForLogin_d__22;

/// @brief Field OnCheckComplete, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCheckComplete, put=__cordl_internal_set_OnCheckComplete)) ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  OnCheckComplete;

/// @brief Field OnSubmitComplete, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSubmitComplete, put=__cordl_internal_set_OnSubmitComplete)) ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  OnSubmitComplete;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::GlobalNamespace::DearLemmingController>  _instance_k__BackingField;

/// @brief Field checkRetryCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkRetryCount, put=__cordl_internal_set_checkRetryCount)) int32_t  checkRetryCount;

/// @brief Field isChecking, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isChecking, put=__cordl_internal_set_isChecking)) bool  isChecking;

/// @brief Field isSubmitting, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSubmitting, put=__cordl_internal_set_isSubmitting)) bool  isSubmitting;

/// @brief Field maxRetriesOnFail, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRetriesOnFail, put=__cordl_internal_set_maxRetriesOnFail)) int32_t  maxRetriesOnFail;

/// @brief Field submitRetryCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_submitRetryCount, put=__cordl_internal_set_submitRetryCount)) int32_t  submitRetryCount;

/// @brief Method Awake, addr 0x5a9ccf4, size 0x100, virtual false, abstract: false, final false
inline void Awake() ;

/// [AsyncStateMachine(typeof(DearLemmingController::<CheckCanSubmit>d__16))]
/// @brief Method CheckCanSubmit, addr 0x5a9cdf4, size 0xa8, virtual false, abstract: false, final false
inline void CheckCanSubmit() ;

/// [IteratorStateMachine(typeof(DearLemmingController::<DoRequest>d__20))]
/// @brief Method DoRequest, addr 0x5a9cfbc, size 0xb0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DoRequest(::StringW  endpoint, ::StringW  messageText, bool  isCheckRequest) ;

/// @brief Method HandleResponse, addr 0x5a9d100, size 0x148, virtual false, abstract: false, final false
inline void HandleResponse(::StringW  json, bool  isCheckRequest) ;

static inline ::GlobalNamespace::DearLemmingController* New_ctor() ;

/// @brief Method StartCheck, addr 0x5a9cf5c, size 0x60, virtual false, abstract: false, final false
inline void StartCheck() ;

/// @brief Method StartSubmit, addr 0x5a9d06c, size 0x6c, virtual false, abstract: false, final false
inline void StartSubmit(::StringW  messageText) ;

/// [AsyncStateMachine(typeof(DearLemmingController::<SubmitMessage>d__17))]
/// @brief Method SubmitMessage, addr 0x5a9ce9c, size 0xc0, virtual false, abstract: false, final false
inline void SubmitMessage(::StringW  messageText) ;

/// [AsyncStateMachine(typeof(DearLemmingController::<WaitForLogin>d__22))]
/// @brief Method WaitForLogin, addr 0x5a9d248, size 0xc4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForLogin() ;

constexpr ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>* const& __cordl_internal_get_OnCheckComplete() const;

constexpr ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*& __cordl_internal_get_OnCheckComplete() ;

constexpr ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>* const& __cordl_internal_get_OnSubmitComplete() const;

constexpr ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*& __cordl_internal_get_OnSubmitComplete() ;

constexpr int32_t const& __cordl_internal_get_checkRetryCount() const;

constexpr int32_t& __cordl_internal_get_checkRetryCount() ;

constexpr bool const& __cordl_internal_get_isChecking() const;

constexpr bool& __cordl_internal_get_isChecking() ;

constexpr bool const& __cordl_internal_get_isSubmitting() const;

constexpr bool& __cordl_internal_get_isSubmitting() ;

constexpr int32_t const& __cordl_internal_get_maxRetriesOnFail() const;

constexpr int32_t& __cordl_internal_get_maxRetriesOnFail() ;

constexpr int32_t const& __cordl_internal_get_submitRetryCount() const;

constexpr int32_t& __cordl_internal_get_submitRetryCount() ;

constexpr void __cordl_internal_set_OnCheckComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value) ;

constexpr void __cordl_internal_set_OnSubmitComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value) ;

constexpr void __cordl_internal_set_checkRetryCount(int32_t  value) ;

constexpr void __cordl_internal_set_isChecking(bool  value) ;

constexpr void __cordl_internal_set_isSubmitting(bool  value) ;

constexpr void __cordl_internal_set_maxRetriesOnFail(int32_t  value) ;

constexpr void __cordl_internal_set_submitRetryCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a9d30c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCheckComplete, addr 0x5a9ca34, size 0xb0, virtual false, abstract: false, final false
inline void add_OnCheckComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSubmitComplete, addr 0x5a9cb94, size 0xb0, virtual false, abstract: false, final false
inline void add_OnSubmitComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value) ;

static inline ::UnityW<::GlobalNamespace::DearLemmingController> getStaticF__instance_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0x5a9c994, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::DearLemmingController> get_instance() ;

/// [CompilerGenerated]
/// @brief Method remove_OnCheckComplete, addr 0x5a9cae4, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnCheckComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSubmitComplete, addr 0x5a9cc44, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnSubmitComplete(::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  value) ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::DearLemmingController>  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0x5a9c9dc, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::GlobalNamespace::DearLemmingController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DearLemmingController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DearLemmingController(DearLemmingController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DearLemmingController(DearLemmingController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3242};

/// @brief Field maxRetriesOnFail, offset: 0x20, size: 0x4, def value: None
 int32_t  ___maxRetriesOnFail;

/// @brief Field checkRetryCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___checkRetryCount;

/// @brief Field submitRetryCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___submitRetryCount;

/// [CompilerGenerated]
/// @brief Field OnCheckComplete, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  ___OnCheckComplete;

/// [CompilerGenerated]
/// @brief Field OnSubmitComplete, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::GlobalNamespace::DearLemmingController_DearLemmingResponse*>*  ___OnSubmitComplete;

/// @brief Field isChecking, offset: 0x40, size: 0x1, def value: None
 bool  ___isChecking;

/// @brief Field isSubmitting, offset: 0x41, size: 0x1, def value: None
 bool  ___isSubmitting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DearLemmingController, ___maxRetriesOnFail) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController, ___checkRetryCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController, ___submitRetryCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController, ___OnCheckComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController, ___OnSubmitComplete) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController, ___isChecking) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController, ___isSubmitting) == 0x41, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DearLemmingController) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DearLemmingController/<DoRequest>d__20
class CORDL_TYPE DearLemmingController__DoRequest_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::DearLemmingController>  __4__this;

/// @brief Field <request>5__2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__request_5__2, put=__cordl_internal_set__request_5__2)) ::UnityEngine::Networking::UnityWebRequest*  _request_5__2;

/// @brief Field <retry>5__3, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__retry_5__3, put=__cordl_internal_set__retry_5__3)) bool  _retry_5__3;

/// @brief Field endpoint, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_endpoint, put=__cordl_internal_set_endpoint)) ::StringW  endpoint;

/// @brief Field isCheckRequest, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isCheckRequest, put=__cordl_internal_set_isCheckRequest)) bool  isCheckRequest;

/// @brief Field messageText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_messageText, put=__cordl_internal_set_messageText)) ::StringW  messageText;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a9d50c, size 0x4fc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::DearLemmingController__DoRequest_d__20* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a9da08, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a9da10, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a9da48, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a9d508, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::DearLemmingController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::DearLemmingController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get__request_5__2() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get__request_5__2() ;

constexpr bool const& __cordl_internal_get__retry_5__3() const;

constexpr bool& __cordl_internal_get__retry_5__3() ;

constexpr ::StringW const& __cordl_internal_get_endpoint() const;

constexpr ::StringW& __cordl_internal_get_endpoint() ;

constexpr bool const& __cordl_internal_get_isCheckRequest() const;

constexpr bool& __cordl_internal_get_isCheckRequest() ;

constexpr ::StringW const& __cordl_internal_get_messageText() const;

constexpr ::StringW& __cordl_internal_get_messageText() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DearLemmingController>  value) ;

constexpr void __cordl_internal_set__request_5__2(::UnityEngine::Networking::UnityWebRequest*  value) ;

constexpr void __cordl_internal_set__retry_5__3(bool  value) ;

constexpr void __cordl_internal_set_endpoint(::StringW  value) ;

constexpr void __cordl_internal_set_isCheckRequest(bool  value) ;

constexpr void __cordl_internal_set_messageText(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a9d0d8, size 0x28, virtual false, abstract: false, final false
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
constexpr DearLemmingController__DoRequest_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingController__DoRequest_d__20", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DearLemmingController__DoRequest_d__20(DearLemmingController__DoRequest_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingController__DoRequest_d__20", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DearLemmingController__DoRequest_d__20(DearLemmingController__DoRequest_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3239};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field messageText, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___messageText;

/// @brief Field endpoint, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___endpoint;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DearLemmingController>  _____4__this;

/// @brief Field isCheckRequest, offset: 0x38, size: 0x1, def value: None
 bool  ___isCheckRequest;

/// @brief Field <request>5__2, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ____request_5__2;

/// @brief Field <retry>5__3, offset: 0x48, size: 0x1, def value: None
 bool  ____retry_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DearLemmingController__DoRequest_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController__DoRequest_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController__DoRequest_d__20, ___messageText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController__DoRequest_d__20, ___endpoint) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController__DoRequest_d__20, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController__DoRequest_d__20, ___isCheckRequest) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController__DoRequest_d__20, ____request_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController__DoRequest_d__20, ____retry_5__3) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DearLemmingController__DoRequest_d__20) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.DateTime, System.Nullable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DearLemmingController/DearLemmingResponse
class CORDL_TYPE DearLemmingController_DearLemmingResponse : public ::System::Object {
public:
// Declarations
/// @brief Field CanSubmit, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_CanSubmit, put=__cordl_internal_set_CanSubmit)) bool  CanSubmit;

/// @brief Field Error, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field NextSubmitTimeUtc, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_NextSubmitTimeUtc, put=__cordl_internal_set_NextSubmitTimeUtc)) ::System::Nullable_1<::System::DateTime>  NextSubmitTimeUtc;

/// @brief Field SecondsUntilNextSubmit, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_SecondsUntilNextSubmit, put=__cordl_internal_set_SecondsUntilNextSubmit)) ::System::Nullable_1<double_t>  SecondsUntilNextSubmit;

/// @brief Field StatusCode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_StatusCode, put=__cordl_internal_set_StatusCode)) int32_t  StatusCode;

static inline ::GlobalNamespace::DearLemmingController_DearLemmingResponse* New_ctor() ;

constexpr bool const& __cordl_internal_get_CanSubmit() const;

constexpr bool& __cordl_internal_get_CanSubmit() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr ::System::Nullable_1<::System::DateTime> const& __cordl_internal_get_NextSubmitTimeUtc() const;

constexpr ::System::Nullable_1<::System::DateTime>& __cordl_internal_get_NextSubmitTimeUtc() ;

constexpr ::System::Nullable_1<double_t> const& __cordl_internal_get_SecondsUntilNextSubmit() const;

constexpr ::System::Nullable_1<double_t>& __cordl_internal_get_SecondsUntilNextSubmit() ;

constexpr int32_t const& __cordl_internal_get_StatusCode() const;

constexpr int32_t& __cordl_internal_get_StatusCode() ;

constexpr void __cordl_internal_set_CanSubmit(bool  value) ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_NextSubmitTimeUtc(::System::Nullable_1<::System::DateTime>  value) ;

constexpr void __cordl_internal_set_SecondsUntilNextSubmit(::System::Nullable_1<double_t>  value) ;

constexpr void __cordl_internal_set_StatusCode(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a9d324, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DearLemmingController_DearLemmingResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingController_DearLemmingResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DearLemmingController_DearLemmingResponse(DearLemmingController_DearLemmingResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingController_DearLemmingResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DearLemmingController_DearLemmingResponse(DearLemmingController_DearLemmingResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3237};

/// @brief Field CanSubmit, offset: 0x10, size: 0x1, def value: None
 bool  ___CanSubmit;

/// @brief Field NextSubmitTimeUtc, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::System::DateTime>  ___NextSubmitTimeUtc;

/// @brief Field SecondsUntilNextSubmit, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<double_t>  ___SecondsUntilNextSubmit;

/// @brief Field Error, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___Error;

/// @brief Field StatusCode, offset: 0x40, size: 0x4, def value: None
 int32_t  ___StatusCode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingResponse, ___CanSubmit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingResponse, ___NextSubmitTimeUtc) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingResponse, ___SecondsUntilNextSubmit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingResponse, ___Error) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingResponse, ___StatusCode) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DearLemmingController_DearLemmingResponse) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DearLemmingController/DearLemmingRequest
class CORDL_TYPE DearLemmingController_DearLemmingRequest : public ::System::Object {
public:
// Declarations
/// @brief Field MessageText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_MessageText, put=__cordl_internal_set_MessageText)) ::StringW  MessageText;

/// @brief Field MothershipEnvId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipEnvId, put=__cordl_internal_set_MothershipEnvId)) ::StringW  MothershipEnvId;

/// @brief Field MothershipId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipId, put=__cordl_internal_set_MothershipId)) ::StringW  MothershipId;

/// @brief Field MothershipTitleId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipTitleId, put=__cordl_internal_set_MothershipTitleId)) ::StringW  MothershipTitleId;

/// @brief Field MothershipToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipToken, put=__cordl_internal_set_MothershipToken)) ::StringW  MothershipToken;

static inline ::GlobalNamespace::DearLemmingController_DearLemmingRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_MessageText() const;

constexpr ::StringW& __cordl_internal_get_MessageText() ;

constexpr ::StringW const& __cordl_internal_get_MothershipEnvId() const;

constexpr ::StringW& __cordl_internal_get_MothershipEnvId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipId() const;

constexpr ::StringW& __cordl_internal_get_MothershipId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipTitleId() const;

constexpr ::StringW& __cordl_internal_get_MothershipTitleId() ;

constexpr ::StringW const& __cordl_internal_get_MothershipToken() const;

constexpr ::StringW& __cordl_internal_get_MothershipToken() ;

constexpr void __cordl_internal_set_MessageText(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipEnvId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipTitleId(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipToken(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a9d31c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DearLemmingController_DearLemmingRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingController_DearLemmingRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DearLemmingController_DearLemmingRequest(DearLemmingController_DearLemmingRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DearLemmingController_DearLemmingRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DearLemmingController_DearLemmingRequest(DearLemmingController_DearLemmingRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3236};

/// @brief Field MothershipId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___MothershipId;

/// @brief Field MothershipToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___MothershipToken;

/// @brief Field MothershipTitleId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___MothershipTitleId;

/// @brief Field MothershipEnvId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___MothershipEnvId;

/// @brief Field MessageText, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___MessageText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingRequest, ___MothershipId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingRequest, ___MothershipToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingRequest, ___MothershipTitleId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingRequest, ___MothershipEnvId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DearLemmingController_DearLemmingRequest, ___MessageText) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DearLemmingController_DearLemmingRequest) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
