#pragma once
// IWYU pragma private; include "Meta/Voice/VoiceRequest_4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__VoiceRequestState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceRequest_4)
namespace GlobalNamespace {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
struct __c__DisplayClass46_0_VoiceRequest_4___WaitForHold_b__0_d;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Logging {
struct VLoggerVerbosity;
}
namespace Meta::Voice {
struct VoiceRequestState;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
class VoiceRequest_4___c__DisplayClass46_0;
}
namespace Meta::WitAi::Data {
class SimulatedResponse;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
class VoiceRequest_4;
}
namespace Meta::Voice {
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
class VoiceRequest_4___c__DisplayClass46_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Meta::Voice::VoiceRequest_4);
MARK_GEN_REF_T_PTR(::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::VoiceRequest_4, "Meta.Voice", "VoiceRequest`4");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0, "Meta.Voice", "VoiceRequest`4/<>c__DisplayClass46_0");
// [LogCategory((Meta.Voice.Logging.LogCategory)7)]
// Dependencies Meta.Voice.VoiceRequestState, System.Object
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
// Is value type: false
// CS Name: Meta.Voice.VoiceRequest`4<TUnityEvent,TOptions,TEvents,TResults>
class CORDL_TYPE VoiceRequest_4 : public ::System::Object {
public:
// Declarations
using __c__DisplayClass46_0 = ::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent, TOptions, TEvents, TResults>;

 __declspec(property(get=get_Completion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  Completion;

 __declspec(property(get=get_DownloadProgress, put=set_DownloadProgress)) float_t  DownloadProgress;

 __declspec(property(get=get_Events)) TEvents  Events;

 __declspec(property(get=get_HoldTask)) ::System::Threading::Tasks::Task*  HoldTask;

 __declspec(property(get=get_IsActive)) bool  IsActive;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

 __declspec(property(get=get_Options)) TOptions  Options;

 __declspec(property(get=get_Results)) TResults  Results;

 __declspec(property(get=get_State, put=set_State)) ::Meta::Voice::VoiceRequestState  State;

 __declspec(property(get=get_UploadProgress, put=set_UploadProgress)) float_t  UploadProgress;

/// @brief Field <Completion>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Completion_k__BackingField, put=__cordl_internal_set__Completion_k__BackingField)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _Completion_k__BackingField;

/// @brief Field <DownloadProgress>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__DownloadProgress_k__BackingField, put=__cordl_internal_set__DownloadProgress_k__BackingField)) float_t  _DownloadProgress_k__BackingField;

/// @brief Field <Events>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Events_k__BackingField, put=__cordl_internal_set__Events_k__BackingField)) TEvents  _Events_k__BackingField;

/// @brief Field <HoldTask>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__HoldTask_k__BackingField, put=__cordl_internal_set__HoldTask_k__BackingField)) ::System::Threading::Tasks::Task*  _HoldTask_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <Options>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Options_k__BackingField, put=__cordl_internal_set__Options_k__BackingField)) TOptions  _Options_k__BackingField;

/// @brief Field <Results>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Results_k__BackingField, put=__cordl_internal_set__Results_k__BackingField)) TResults  _Results_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::Meta::Voice::VoiceRequestState  _State_k__BackingField;

/// @brief Field <UploadProgress>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__UploadProgress_k__BackingField, put=__cordl_internal_set__UploadProgress_k__BackingField)) float_t  _UploadProgress_k__BackingField;

/// @brief Field simulatedResponse, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_simulatedResponse, put=setStaticF_simulatedResponse)) ::Meta::WitAi::Data::SimulatedResponse*  simulatedResponse;

/// @brief Method AddEventListeners, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AddEventListeners(TEvents  newEvents) ;

/// @brief Method Cancel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Cancel(::StringW  reason) ;

/// @brief Method GetNewResults, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TResults GetNewResults() ;

/// @brief Method GetSendError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW GetSendError() ;

/// @brief Method HandleCancel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleCancel() ;

/// @brief Method HandleFailure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleFailure(::StringW  error) ;

/// @brief Method HandleFailure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleFailure(int32_t  errorStatusCode, ::StringW  errorMessage) ;

/// @brief Method HandleSend, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void HandleSend() ;

/// @brief Method HandleSuccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleSuccess() ;

/// @brief Method HoldSend, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HoldSend() ;

/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Log(::StringW  log, ::Meta::Voice::Logging::VLoggerVerbosity  logLevel) ;

/// @brief Method LogE, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LogE(::StringW  log, ::System::Exception*  e) ;

/// @brief Method LogW, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LogW(::StringW  log) ;

/// @brief Method MainThreadCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void MainThreadCallback(::System::Action*  action) ;

static inline ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>* New_ctor(TOptions  newOptions, TEvents  newEvents) ;

/// @brief Method OnCancel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnCancel() ;

/// @brief Method OnComplete, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnComplete() ;

/// @brief Method OnFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnFailed() ;

/// @brief Method OnInit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnInit() ;

/// @brief Method OnSend, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSend() ;

/// @brief Method OnSimulateResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool OnSimulateResponse() ;

/// @brief Method OnStateChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnStateChange() ;

/// @brief Method OnSuccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnSuccess() ;

/// @brief Method RaiseEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RaiseEvent(TUnityEvent  requestEvent) ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Send() ;

/// @brief Method SetDownloadProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetDownloadProgress(float_t  newProgress) ;

/// @brief Method SetEventListeners, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetEventListeners(TEvents  newEvents, bool  addListeners) ;

/// @brief Method SetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetState(::Meta::Voice::VoiceRequestState  newState) ;

/// @brief Method SetUploadProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetUploadProgress(float_t  newProgress) ;

/// @brief Method ShouldIgnoreError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ShouldIgnoreError(int32_t  errorStatusCode, ::StringW  errorMessage) ;

/// @brief Method WaitForHold, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void WaitForHold(::System::Action*  onReady) ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__Completion_k__BackingField() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__Completion_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__DownloadProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__DownloadProgress_k__BackingField() ;

constexpr TEvents const& __cordl_internal_get__Events_k__BackingField() const;

constexpr TEvents& __cordl_internal_get__Events_k__BackingField() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__HoldTask_k__BackingField() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__HoldTask_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr TOptions const& __cordl_internal_get__Options_k__BackingField() const;

constexpr TOptions& __cordl_internal_get__Options_k__BackingField() ;

constexpr TResults const& __cordl_internal_get__Results_k__BackingField() const;

constexpr TResults& __cordl_internal_get__Results_k__BackingField() ;

constexpr ::Meta::Voice::VoiceRequestState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::Meta::Voice::VoiceRequestState& __cordl_internal_get__State_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__UploadProgress_k__BackingField() const;

constexpr float_t& __cordl_internal_get__UploadProgress_k__BackingField() ;

constexpr void __cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__DownloadProgress_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Events_k__BackingField(TEvents  value) ;

constexpr void __cordl_internal_set__HoldTask_k__BackingField(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__Options_k__BackingField(TOptions  value) ;

constexpr void __cordl_internal_set__Results_k__BackingField(TResults  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::Meta::Voice::VoiceRequestState  value) ;

constexpr void __cordl_internal_set__UploadProgress_k__BackingField(float_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TOptions  newOptions, TEvents  newEvents) ;

static inline ::Meta::WitAi::Data::SimulatedResponse* getStaticF_simulatedResponse() ;

/// [CompilerGenerated]
/// @brief Method get_Completion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_Completion() ;

/// [CompilerGenerated]
/// @brief Method get_DownloadProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_DownloadProgress() ;

/// [CompilerGenerated]
/// @brief Method get_Events, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEvents get_Events() ;

/// [CompilerGenerated]
/// @brief Method get_HoldTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* get_HoldTask() ;

/// @brief Method get_IsActive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method get_Options, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TOptions get_Options() ;

/// [CompilerGenerated]
/// @brief Method get_Results, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResults get_Results() ;

/// [CompilerGenerated]
/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Meta::Voice::VoiceRequestState get_State() ;

/// [CompilerGenerated]
/// @brief Method get_UploadProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline float_t get_UploadProgress() ;

static inline void setStaticF_simulatedResponse(::Meta::WitAi::Data::SimulatedResponse*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DownloadProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_DownloadProgress(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_State(::Meta::Voice::VoiceRequestState  value) ;

/// [CompilerGenerated]
/// @brief Method set_UploadProgress, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_UploadProgress(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceRequest_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceRequest_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceRequest_4(VoiceRequest_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceRequest_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceRequest_4(VoiceRequest_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25454};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Meta::Voice::VoiceRequestState  ____State_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Completion>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____Completion_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HoldTask>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____HoldTask_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DownloadProgress>k__BackingField, offset: 0x30, size: 0x4, def value: None
 float_t  ____DownloadProgress_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UploadProgress>k__BackingField, offset: 0x34, size: 0x4, def value: None
 float_t  ____UploadProgress_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Options>k__BackingField, offset: 0x38, size: 0x8, def value: None
 TOptions  ____Options_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Events>k__BackingField, offset: 0x40, size: 0x8, def value: None
 TEvents  ____Events_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Results>k__BackingField, offset: 0x48, size: 0x8, def value: None
 TResults  ____Results_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice {
// cpp template
template<typename TUnityEvent,typename TOptions,typename TEvents,typename TResults>
// Is value type: false
// CS Name: Meta.Voice.VoiceRequest`4/<>c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>
class CORDL_TYPE VoiceRequest_4___c__DisplayClass46_0 : public ::System::Object {
public:
// Declarations
using __WaitForHold_b__0_d = ::GlobalNamespace::__c__DisplayClass46_0_VoiceRequest_4___WaitForHold_b__0_d<TUnityEvent, TOptions, TEvents, TResults>;

/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*  __4__this;

/// @brief Field <>9__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action*  __9__1;

/// @brief Field onReady, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReady, put=__cordl_internal_set_onReady)) ::System::Action*  onReady;

static inline ::Meta::Voice::VoiceRequest_4___c__DisplayClass46_0<TUnityEvent,TOptions,TEvents,TResults>* New_ctor() ;

/// [AsyncStateMachine(typeof(Meta.Voice.VoiceRequest`4::<>c__DisplayClass46_0::<<WaitForHold>b__0>d<TUnityEvent, TOptions, TEvents, TResults>))]
/// @brief Method <WaitForHold>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _WaitForHold_b__0() ;

/// @brief Method <WaitForHold>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _WaitForHold_b__1() ;

constexpr ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*& __cordl_internal_get___4__this() ;

constexpr ::System::Action* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action*& __cordl_internal_get___9__1() ;

constexpr ::System::Action* const& __cordl_internal_get_onReady() const;

constexpr ::System::Action*& __cordl_internal_get_onReady() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*  value) ;

constexpr void __cordl_internal_set___9__1(::System::Action*  value) ;

constexpr void __cordl_internal_set_onReady(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceRequest_4___c__DisplayClass46_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceRequest_4___c__DisplayClass46_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceRequest_4___c__DisplayClass46_0(VoiceRequest_4___c__DisplayClass46_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceRequest_4___c__DisplayClass46_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceRequest_4___c__DisplayClass46_0(VoiceRequest_4___c__DisplayClass46_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25453};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::VoiceRequest_4<TUnityEvent,TOptions,TEvents,TResults>*  _____4__this;

/// @brief Field onReady, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ___onReady;

/// @brief Field <>9__1, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::Voice
