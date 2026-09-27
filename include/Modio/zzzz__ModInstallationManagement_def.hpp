#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__ModInstallationManagement_OperationPhase_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationType_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModInstallationManagement)
namespace GlobalNamespace {
struct DownloadAndExtractJob_ModInstallationManagement__Run_d__3;
}
namespace GlobalNamespace {
struct DownloadJob_ModInstallationManagement__Run_d__1;
}
namespace GlobalNamespace {
struct InstallJob_ModInstallationManagement__Run_d__2;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationPhase;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationType;
}
namespace GlobalNamespace {
struct ModInstallationManagement__AddTemporaryMods_d__44;
}
namespace GlobalNamespace {
struct ModInstallationManagement__DownloadAndInstallMod_d__53;
}
namespace GlobalNamespace {
struct ModInstallationManagement__EnqueueJobs_d__41;
}
namespace GlobalNamespace {
struct ModInstallationManagement__ExecuteJobs_d__40;
}
namespace GlobalNamespace {
struct ModInstallationManagement__GetAllInstalledMods_d__36;
}
namespace GlobalNamespace {
struct ModInstallationManagement__Init_d__30;
}
namespace GlobalNamespace {
struct ModInstallationManagement__IsThereAvailableSpaceFor_d__64;
}
namespace GlobalNamespace {
struct ModInstallationManagement__RetryInstallingMod_d__48;
}
namespace GlobalNamespace {
struct ModInstallationManagement__SaveIndex_d__39;
}
namespace GlobalNamespace {
struct ModInstallationManagement__Shutdown_d__31;
}
namespace GlobalNamespace {
struct ModInstallationManagement__StartTempModSession_d__42;
}
namespace GlobalNamespace {
struct ModInstallationManagement__UninstallAllMods_d__65;
}
namespace GlobalNamespace {
struct ScanForInstalledModJob_ModInstallationManagement__Run_d__1;
}
namespace GlobalNamespace {
struct ScanMissingInstallsJob_ModInstallationManagement__Run_d__1;
}
namespace GlobalNamespace {
struct UninstallJob_ModInstallationManagement__Run_d__1;
}
namespace GlobalNamespace {
struct ValidateJob_ModInstallationManagement__Run_d__1;
}
namespace Modio::API::SchemaDefinitions {
struct ModObject;
}
namespace Modio::Mods {
struct ModChangeType;
}
namespace Modio::Mods {
struct ModFileState;
}
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Mods {
class Modfile;
}
namespace Modio {
class Error;
}
namespace Modio {
class ModIndex_IndexEntry;
}
namespace Modio {
class ModIndex;
}
namespace Modio {
class ModInstallationManagement_DownloadAndExtractJob;
}
namespace Modio {
class ModInstallationManagement_DownloadJob;
}
namespace Modio {
class ModInstallationManagement_InstallJob;
}
namespace Modio {
class ModInstallationManagement_InstallationManagementEventDelegate;
}
namespace Modio {
class ModInstallationManagement_Job;
}
namespace Modio {
class ModInstallationManagement_ScanForInstalledModJob;
}
namespace Modio {
class ModInstallationManagement_ScanMissingInstallsJob;
}
namespace Modio {
class ModInstallationManagement_UninstallJob;
}
namespace Modio {
class ModInstallationManagement_ValidateJob;
}
namespace Modio {
class ModInstallationManagement___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio {
class ModInstallationManagement;
}
namespace Modio {
class ModInstallationManagement_DownloadAndExtractJob;
}
namespace Modio {
class ModInstallationManagement_DownloadJob;
}
namespace Modio {
class ModInstallationManagement_InstallJob;
}
namespace Modio {
class ModInstallationManagement_InstallationManagementEventDelegate;
}
namespace Modio {
class ModInstallationManagement_Job;
}
namespace Modio {
class ModInstallationManagement_ScanForInstalledModJob;
}
namespace Modio {
class ModInstallationManagement_ScanMissingInstallsJob;
}
namespace Modio {
class ModInstallationManagement_UninstallJob;
}
namespace Modio {
class ModInstallationManagement_ValidateJob;
}
namespace Modio {
class ModInstallationManagement___c;
}
// Write type traits
MARK_REF_T(::Modio::ModInstallationManagement*);
MARK_REF_T(::Modio::ModInstallationManagement_DownloadAndExtractJob*);
MARK_REF_T(::Modio::ModInstallationManagement_DownloadJob*);
MARK_REF_T(::Modio::ModInstallationManagement_InstallJob*);
MARK_REF_T(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*);
MARK_REF_T(::Modio::ModInstallationManagement_Job*);
MARK_REF_T(::Modio::ModInstallationManagement_ScanForInstalledModJob*);
MARK_REF_T(::Modio::ModInstallationManagement_ScanMissingInstallsJob*);
MARK_REF_T(::Modio::ModInstallationManagement_UninstallJob*);
MARK_REF_T(::Modio::ModInstallationManagement_ValidateJob*);
MARK_REF_T(::Modio::ModInstallationManagement___c*);
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement*, "Modio", "ModInstallationManagement");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement_DownloadAndExtractJob*, "Modio", "ModInstallationManagement/DownloadAndExtractJob");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement_DownloadJob*, "Modio", "ModInstallationManagement/DownloadJob");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement_InstallJob*, "Modio", "ModInstallationManagement/InstallJob");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*, "Modio", "ModInstallationManagement/InstallationManagementEventDelegate");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement_Job*, "Modio", "ModInstallationManagement/Job");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement_ScanForInstalledModJob*, "Modio", "ModInstallationManagement/ScanForInstalledModJob");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement_ScanMissingInstallsJob*, "Modio", "ModInstallationManagement/ScanMissingInstallsJob");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement_UninstallJob*, "Modio", "ModInstallationManagement/UninstallJob");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement_ValidateJob*, "Modio", "ModInstallationManagement/ValidateJob");
DEFINE_IL2CPP_CLASS(::Modio::ModInstallationManagement___c*, "Modio", "ModInstallationManagement/<>c");
// Dependencies System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement
class CORDL_TYPE ModInstallationManagement : public ::System::Object {
public:
// Declarations
using OperationPhase = ::GlobalNamespace::ModInstallationManagement_OperationPhase;

using OperationType = ::GlobalNamespace::ModInstallationManagement_OperationType;

using _AddTemporaryMods_d__44 = ::GlobalNamespace::ModInstallationManagement__AddTemporaryMods_d__44;

using _DownloadAndInstallMod_d__53 = ::GlobalNamespace::ModInstallationManagement__DownloadAndInstallMod_d__53;

using _EnqueueJobs_d__41 = ::GlobalNamespace::ModInstallationManagement__EnqueueJobs_d__41;

using _ExecuteJobs_d__40 = ::GlobalNamespace::ModInstallationManagement__ExecuteJobs_d__40;

using _GetAllInstalledMods_d__36 = ::GlobalNamespace::ModInstallationManagement__GetAllInstalledMods_d__36;

using _Init_d__30 = ::GlobalNamespace::ModInstallationManagement__Init_d__30;

using _IsThereAvailableSpaceFor_d__64 = ::GlobalNamespace::ModInstallationManagement__IsThereAvailableSpaceFor_d__64;

using _RetryInstallingMod_d__48 = ::GlobalNamespace::ModInstallationManagement__RetryInstallingMod_d__48;

using _SaveIndex_d__39 = ::GlobalNamespace::ModInstallationManagement__SaveIndex_d__39;

using _Shutdown_d__31 = ::GlobalNamespace::ModInstallationManagement__Shutdown_d__31;

using _StartTempModSession_d__42 = ::GlobalNamespace::ModInstallationManagement__StartTempModSession_d__42;

using _UninstallAllMods_d__65 = ::GlobalNamespace::ModInstallationManagement__UninstallAllMods_d__65;

using DownloadAndExtractJob = ::Modio::ModInstallationManagement_DownloadAndExtractJob;

using DownloadJob = ::Modio::ModInstallationManagement_DownloadJob;

using InstallJob = ::Modio::ModInstallationManagement_InstallJob;

using InstallationManagementEventDelegate = ::Modio::ModInstallationManagement_InstallationManagementEventDelegate;

using Job = ::Modio::ModInstallationManagement_Job;

using ScanForInstalledModJob = ::Modio::ModInstallationManagement_ScanForInstalledModJob;

using ScanMissingInstallsJob = ::Modio::ModInstallationManagement_ScanMissingInstallsJob;

using UninstallJob = ::Modio::ModInstallationManagement_UninstallJob;

using ValidateJob = ::Modio::ModInstallationManagement_ValidateJob;

using __c = ::Modio::ModInstallationManagement___c;

/// @brief Field ManagementEvents, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ManagementEvents, put=setStaticF_ManagementEvents)) ::Modio::ModInstallationManagement_InstallationManagementEventDelegate*  ManagementEvents;

/// @brief Field <DownloadAndExtractAsSingleJob>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__DownloadAndExtractAsSingleJob_k__BackingField, put=setStaticF__DownloadAndExtractAsSingleJob_k__BackingField)) bool  _DownloadAndExtractAsSingleJob_k__BackingField;

/// @brief Field _currentOperation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__currentOperation, put=setStaticF__currentOperation)) ::Modio::ModInstallationManagement_Job*  _currentOperation;

/// @brief Field _currentSessionMods, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__currentSessionMods, put=setStaticF__currentSessionMods)) ::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*  _currentSessionMods;

/// @brief Field _downloadAttemptsThisSession, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__downloadAttemptsThisSession, put=setStaticF__downloadAttemptsThisSession)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _downloadAttemptsThisSession;

/// @brief Field _hasScannedMissingMods, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasScannedMissingMods, put=setStaticF__hasScannedMissingMods)) bool  _hasScannedMissingMods;

/// @brief Field _index, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__index, put=setStaticF__index)) ::Modio::ModIndex*  _index;

/// @brief Field _isDeactivated, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isDeactivated, put=setStaticF__isDeactivated)) bool  _isDeactivated;

/// @brief Field _isRunning, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isRunning, put=setStaticF__isRunning)) bool  _isRunning;

/// @brief Field _missingModfileReenqueues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__missingModfileReenqueues, put=setStaticF__missingModfileReenqueues)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  _missingModfileReenqueues;

/// @brief Field _modsToRefresh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__modsToRefresh, put=setStaticF__modsToRefresh)) ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  _modsToRefresh;

/// @brief Field _modsToUninstall, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__modsToUninstall, put=setStaticF__modsToUninstall)) ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  _modsToUninstall;

/// @brief Field _operationQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__operationQueue, put=setStaticF__operationQueue)) ::System::Collections::Generic::Queue_1<::Modio::ModInstallationManagement_Job*>*  _operationQueue;

/// @brief Field _requestedModDownloads, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__requestedModDownloads, put=setStaticF__requestedModDownloads)) ::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*  _requestedModDownloads;

/// @brief Field _uninstallUnsubscribedMods, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__uninstallUnsubscribedMods, put=setStaticF__uninstallUnsubscribedMods)) bool  _uninstallUnsubscribedMods;

/// @brief Field _unverifiedMods, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__unverifiedMods, put=setStaticF__unverifiedMods)) ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  _unverifiedMods;

/// @brief Method Activate, addr 0xa009158, size 0x58, virtual false, abstract: false, final false
static inline void Activate() ;

/// @brief Method AddTemporaryMod, addr 0xa009f10, size 0x180, virtual false, abstract: false, final false
static inline void AddTemporaryMod(::Modio::Mods::Mod*  modId, int32_t  lifetime) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<AddTemporaryMods>d__44))]
/// @brief Method AddTemporaryMods, addr 0xa009e00, size 0x110, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* AddTemporaryMods(::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  tempMods, int32_t  lifeTimeDaysOverride) ;

/// @brief Method CancelInstallOperation, addr 0xa00925c, size 0x10c, virtual false, abstract: false, final false
static inline void CancelInstallOperation(::Modio::Mods::Mod*  mod) ;

/// @brief Method ClearExpiredTempMods, addr 0xa00a090, size 0x4c, virtual false, abstract: false, final false
static inline void ClearExpiredTempMods() ;

/// @brief Method Deactivate, addr 0xa0091b0, size 0xac, virtual false, abstract: false, final false
static inline void Deactivate(bool  cancelCurrentJob) ;

/// @brief Method DoesModNeedUpdate, addr 0xa00a594, size 0x9c, virtual false, abstract: false, final false
static inline bool DoesModNeedUpdate(::Modio::Mods::Mod*  mod) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<DownloadAndInstallMod>d__53))]
/// @brief Method DownloadAndInstallMod, addr 0xa00a630, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* DownloadAndInstallMod(::Modio::Mods::ModId  modId) ;

/// @brief Method EndCurrentTempModSession, addr 0xa009d84, size 0x7c, virtual false, abstract: false, final false
static inline void EndCurrentTempModSession() ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<EnqueueJobs>d__41))]
/// @brief Method EnqueueJobs, addr 0xa009ba4, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* EnqueueJobs() ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<ExecuteJobs>d__40))]
/// @brief Method ExecuteJobs, addr 0xa0090c4, size 0x94, virtual false, abstract: false, final false
static inline void ExecuteJobs() ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<GetAllInstalledMods>d__36))]
/// @brief Method GetAllInstalledMods, addr 0xa009460, size 0x100, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::ICollection_1<::Modio::Mods::Mod*>*>* GetAllInstalledMods(bool  forceRefresh) ;

/// @brief Method GetHiddenModObjectFromIndex, addr 0xa00b25c, size 0x178, virtual false, abstract: false, final false
static inline ::Modio::API::SchemaDefinitions::ModObject GetHiddenModObjectFromIndex(::Modio::Mods::ModId  modId, ::Modio::ModIndex*  tempIndex) ;

/// @brief Method GetModRespectingIndexCache, addr 0xa0097c4, size 0x2f4, virtual false, abstract: false, final false
static inline ::Modio::Mods::Mod* GetModRespectingIndexCache(int64_t  modId) ;

/// @brief Method GetTotalDiskUsage, addr 0xa009560, size 0x264, virtual false, abstract: false, final false
static inline int64_t GetTotalDiskUsage(bool  includeQueued) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<Init>d__30))]
/// @brief Method Init, addr 0xa008c64, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Init() ;

/// @brief Method IsModSubscribed, addr 0xa009368, size 0xf8, virtual false, abstract: false, final false
static inline bool IsModSubscribed(int64_t  modId, int64_t  userId) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<IsThereAvailableSpaceFor>d__64))]
/// @brief Method IsThereAvailableSpaceFor, addr 0xa00a72c, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<bool>* IsThereAvailableSpaceFor(::Modio::Mods::Mod*  mod) ;

/// @brief Method MarkModForUninstallation, addr 0xa00a3e4, size 0x84, virtual false, abstract: false, final false
static inline void MarkModForUninstallation(::Modio::Mods::Mod*  mod) ;

/// @brief Method NotifyLoggingOut, addr 0xa00ab94, size 0x418, virtual false, abstract: false, final false
static inline void NotifyLoggingOut() ;

/// @brief Method OnModSubscriptionChange, addr 0xa00a468, size 0x114, virtual false, abstract: false, final false
static inline void OnModSubscriptionChange(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType) ;

/// @brief Method RefreshMod, addr 0xa00a8f8, size 0xc4, virtual false, abstract: false, final false
static inline void RefreshMod(::Modio::Mods::Mod*  mod) ;

/// @brief Method RefreshMods, addr 0xa00a9bc, size 0x1d8, virtual false, abstract: false, final false
static inline void RefreshMods(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  mods) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<RetryInstallingMod>d__48))]
/// @brief Method RetryInstallingMod, addr 0xa00a2dc, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* RetryInstallingMod(::Modio::Mods::Mod*  mod) ;

/// @brief Method RetryInstallingTaintedMods, addr 0xa00a0dc, size 0x200, virtual false, abstract: false, final false
static inline void RetryInstallingTaintedMods() ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<SaveIndex>d__39))]
/// @brief Method SaveIndex, addr 0xa009ab8, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SaveIndex() ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<Shutdown>d__31))]
/// @brief Method Shutdown, addr 0xa008d50, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* Shutdown() ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<StartTempModSession>d__42))]
/// @brief Method StartTempModSession, addr 0xa009c6c, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* StartTempModSession(::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  tempMods, bool  appendCurrentSession) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::<UninstallAllMods>d__65))]
/// @brief Method UninstallAllMods, addr 0xa00a834, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* UninstallAllMods() ;

/// @brief Method ValidateInstalledMod, addr 0xa00b098, size 0x1c4, virtual false, abstract: false, final false
static inline bool ValidateInstalledMod(::Modio::Mods::Mod*  mod) ;

/// @brief Method WakeUp, addr 0xa008e14, size 0xfc, virtual false, abstract: false, final false
static inline void WakeUp() ;

/// [CompilerGenerated]
/// @brief Method <EnqueueJobs>g__EnqueueJobsIfNeeded|41_0, addr 0xa00b5c4, size 0x538, virtual false, abstract: false, final false
static inline void _EnqueueJobs_g__EnqueueJobsIfNeeded_41_0(::Modio::ModIndex_IndexEntry*  entry, ::Modio::Mods::Mod*  mod) ;

/// [CompilerGenerated]
/// @brief Method add_ManagementEvents, addr 0xa008980, size 0xdc, virtual false, abstract: false, final false
static inline void add_ManagementEvents(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*  value) ;

static inline ::Modio::ModInstallationManagement_InstallationManagementEventDelegate* getStaticF_ManagementEvents() ;

static inline bool getStaticF__DownloadAndExtractAsSingleJob_k__BackingField() ;

static inline ::Modio::ModInstallationManagement_Job* getStaticF__currentOperation() ;

static inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>* getStaticF__currentSessionMods() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF__downloadAttemptsThisSession() ;

static inline bool getStaticF__hasScannedMissingMods() ;

static inline ::Modio::ModIndex* getStaticF__index() ;

static inline bool getStaticF__isDeactivated() ;

static inline bool getStaticF__isRunning() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF__missingModfileReenqueues() ;

static inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* getStaticF__modsToRefresh() ;

static inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* getStaticF__modsToUninstall() ;

static inline ::System::Collections::Generic::Queue_1<::Modio::ModInstallationManagement_Job*>* getStaticF__operationQueue() ;

static inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>* getStaticF__requestedModDownloads() ;

static inline bool getStaticF__uninstallUnsubscribedMods() ;

static inline ::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>* getStaticF__unverifiedMods() ;

/// @brief Method get_CurrentOperationOnMod, addr 0xa008918, size 0x68, virtual false, abstract: false, final false
static inline ::Modio::Mods::Mod* get_CurrentOperationOnMod() ;

/// [CompilerGenerated]
/// @brief Method get_DownloadAndExtractAsSingleJob, addr 0xa008860, size 0x58, virtual false, abstract: false, final false
static inline bool get_DownloadAndExtractAsSingleJob() ;

/// @brief Method get_IsInitialized, addr 0xa008b38, size 0x60, virtual false, abstract: false, final false
static inline bool get_IsInitialized() ;

/// @brief Method get_IsRunning, addr 0xa008c0c, size 0x58, virtual false, abstract: false, final false
static inline bool get_IsRunning() ;

/// @brief Method get_PendingModOperationCount, addr 0xa008b98, size 0x74, virtual false, abstract: false, final false
static inline int32_t get_PendingModOperationCount() ;

/// [CompilerGenerated]
/// @brief Method remove_ManagementEvents, addr 0xa008a5c, size 0xdc, virtual false, abstract: false, final false
static inline void remove_ManagementEvents(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*  value) ;

static inline void setStaticF_ManagementEvents(::Modio::ModInstallationManagement_InstallationManagementEventDelegate*  value) ;

static inline void setStaticF__DownloadAndExtractAsSingleJob_k__BackingField(bool  value) ;

static inline void setStaticF__currentOperation(::Modio::ModInstallationManagement_Job*  value) ;

static inline void setStaticF__currentSessionMods(::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*  value) ;

static inline void setStaticF__downloadAttemptsThisSession(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

static inline void setStaticF__hasScannedMissingMods(bool  value) ;

static inline void setStaticF__index(::Modio::ModIndex*  value) ;

static inline void setStaticF__isDeactivated(bool  value) ;

static inline void setStaticF__isRunning(bool  value) ;

static inline void setStaticF__missingModfileReenqueues(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

static inline void setStaticF__modsToRefresh(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value) ;

static inline void setStaticF__modsToUninstall(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value) ;

static inline void setStaticF__operationQueue(::System::Collections::Generic::Queue_1<::Modio::ModInstallationManagement_Job*>*  value) ;

static inline void setStaticF__requestedModDownloads(::System::Collections::Generic::HashSet_1<::Modio::Mods::ModId>*  value) ;

static inline void setStaticF__uninstallUnsubscribedMods(bool  value) ;

static inline void setStaticF__unverifiedMods(::System::Collections::Generic::HashSet_1<::Modio::Mods::Mod*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DownloadAndExtractAsSingleJob, addr 0xa0088b8, size 0x60, virtual false, abstract: false, final false
static inline void set_DownloadAndExtractAsSingleJob(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement(ModInstallationManagement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement(ModInstallationManagement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17488};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModInstallationManagement) == 0x10, "Size mismatch!");

} // namespace end def Modio
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/<>c
class CORDL_TYPE ModInstallationManagement___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::ModInstallationManagement___c*  __9;

/// @brief Field <>9__44_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_0, put=setStaticF___9__44_0)) ::System::Func_2<::Modio::Mods::ModId,int64_t>*  __9__44_0;

/// @brief Field <>9__44_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_1, put=setStaticF___9__44_1)) ::System::Func_2<::Modio::Mods::ModId,bool>*  __9__44_1;

static inline ::Modio::ModInstallationManagement___c* New_ctor() ;

/// @brief Method <AddTemporaryMods>b__44_0, addr 0xa01239c, size 0x8, virtual false, abstract: false, final false
inline int64_t _AddTemporaryMods_b__44_0(::Modio::Mods::ModId  modId) ;

/// @brief Method <AddTemporaryMods>b__44_1, addr 0xa0123a4, size 0x9c, virtual false, abstract: false, final false
inline bool _AddTemporaryMods_b__44_1(::Modio::Mods::ModId  modId) ;

/// @brief Method .ctor, addr 0xa012394, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::ModInstallationManagement___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Mods::ModId,int64_t>* getStaticF___9__44_0() ;

static inline ::System::Func_2<::Modio::Mods::ModId,bool>* getStaticF___9__44_1() ;

static inline void setStaticF___9(::Modio::ModInstallationManagement___c*  value) ;

static inline void setStaticF___9__44_0(::System::Func_2<::Modio::Mods::ModId,int64_t>*  value) ;

static inline void setStaticF___9__44_1(::System::Func_2<::Modio::Mods::ModId,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement___c(ModInstallationManagement___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement___c(ModInstallationManagement___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17475};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModInstallationManagement___c) == 0x10, "Size mismatch!");

} // namespace end def Modio
// Dependencies Modio.ModInstallationManagement::Job
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/ScanForInstalledModJob
class CORDL_TYPE ModInstallationManagement_ScanForInstalledModJob : public ::Modio::ModInstallationManagement_Job {
public:
// Declarations
using _Run_d__1 = ::GlobalNamespace::ScanForInstalledModJob_ModInstallationManagement__Run_d__1;

/// @brief Method GetPendingSpaceChange, addr 0xa011db0, size 0x4, virtual true, abstract: false, final false
inline void GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired) ;

static inline ::Modio::ModInstallationManagement_ScanForInstalledModJob* New_ctor(::Modio::Mods::Mod*  mod) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::ScanForInstalledModJob::<Run>d__1))]
/// @brief Method Run, addr 0xa011ca4, size 0x10c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Run() ;

/// @brief Method .ctor, addr 0xa011c9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  mod) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_ScanForInstalledModJob() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_ScanForInstalledModJob", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement_ScanForInstalledModJob(ModInstallationManagement_ScanForInstalledModJob && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_ScanForInstalledModJob", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement_ScanForInstalledModJob(ModInstallationManagement_ScanForInstalledModJob const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModInstallationManagement_ScanForInstalledModJob) == 0x40, "Size mismatch!");

} // namespace end def Modio
// Dependencies Modio.ModInstallationManagement::Job
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/ScanMissingInstallsJob
class CORDL_TYPE ModInstallationManagement_ScanMissingInstallsJob : public ::Modio::ModInstallationManagement_Job {
public:
// Declarations
using _Run_d__1 = ::GlobalNamespace::ScanMissingInstallsJob_ModInstallationManagement__Run_d__1;

/// @brief Method GetPendingSpaceChange, addr 0xa0117f0, size 0x4, virtual true, abstract: false, final false
inline void GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired) ;

static inline ::Modio::ModInstallationManagement_ScanMissingInstallsJob* New_ctor() ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::ScanMissingInstallsJob::<Run>d__1))]
/// @brief Method Run, addr 0xa0116e4, size 0x10c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Run() ;

/// @brief Method .ctor, addr 0xa0116d8, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_ScanMissingInstallsJob() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_ScanMissingInstallsJob", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement_ScanMissingInstallsJob(ModInstallationManagement_ScanMissingInstallsJob && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_ScanMissingInstallsJob", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement_ScanMissingInstallsJob(ModInstallationManagement_ScanMissingInstallsJob const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17470};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModInstallationManagement_ScanMissingInstallsJob) == 0x40, "Size mismatch!");

} // namespace end def Modio
// Dependencies Modio.ModInstallationManagement::Job
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/ValidateJob
class CORDL_TYPE ModInstallationManagement_ValidateJob : public ::Modio::ModInstallationManagement_Job {
public:
// Declarations
using _Run_d__1 = ::GlobalNamespace::ValidateJob_ModInstallationManagement__Run_d__1;

/// @brief Method GetPendingSpaceChange, addr 0xa01108c, size 0x4, virtual true, abstract: false, final false
inline void GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired) ;

static inline ::Modio::ModInstallationManagement_ValidateJob* New_ctor(::Modio::Mods::Mod*  mod) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::ValidateJob::<Run>d__1))]
/// @brief Method Run, addr 0xa010f84, size 0x108, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Run() ;

/// @brief Method .ctor, addr 0xa00bafc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  mod) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_ValidateJob() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_ValidateJob", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement_ValidateJob(ModInstallationManagement_ValidateJob && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_ValidateJob", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement_ValidateJob(ModInstallationManagement_ValidateJob const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17468};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModInstallationManagement_ValidateJob) == 0x40, "Size mismatch!");

} // namespace end def Modio
// Dependencies Modio.ModInstallationManagement::Job
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/UninstallJob
class CORDL_TYPE ModInstallationManagement_UninstallJob : public ::Modio::ModInstallationManagement_Job {
public:
// Declarations
using _Run_d__1 = ::GlobalNamespace::UninstallJob_ModInstallationManagement__Run_d__1;

/// @brief Method GetPendingSpaceChange, addr 0xa0108ec, size 0x30, virtual true, abstract: false, final false
inline void GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired) ;

static inline ::Modio::ModInstallationManagement_UninstallJob* New_ctor(::Modio::Mods::Mod*  mod) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::UninstallJob::<Run>d__1))]
/// @brief Method Run, addr 0xa0107e0, size 0x10c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Run() ;

/// @brief Method .ctor, addr 0xa0107d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  mod) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_UninstallJob() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_UninstallJob", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement_UninstallJob(ModInstallationManagement_UninstallJob && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_UninstallJob", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement_UninstallJob(ModInstallationManagement_UninstallJob const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17466};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModInstallationManagement_UninstallJob) == 0x40, "Size mismatch!");

} // namespace end def Modio
// Dependencies Modio.ModInstallationManagement::Job
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/DownloadAndExtractJob
class CORDL_TYPE ModInstallationManagement_DownloadAndExtractJob : public ::Modio::ModInstallationManagement_Job {
public:
// Declarations
using _Run_d__3 = ::GlobalNamespace::DownloadAndExtractJob_ModInstallationManagement__Run_d__3;

 __declspec(property(get=get_IsUpdateJob)) bool  IsUpdateJob;

/// @brief Method GetPendingSpaceChange, addr 0xa00f184, size 0x12c, virtual true, abstract: false, final false
inline void GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired) ;

static inline ::Modio::ModInstallationManagement_DownloadAndExtractJob* New_ctor(::Modio::Mods::Mod*  mod, bool  isUpdateJob) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::DownloadAndExtractJob::<Run>d__3))]
/// @brief Method Run, addr 0xa00f078, size 0x10c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Run() ;

/// @brief Method .ctor, addr 0xa00bb04, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  mod, bool  isUpdateJob) ;

/// @brief Method get_IsUpdateJob, addr 0xa00f068, size 0x10, virtual false, abstract: false, final false
inline bool get_IsUpdateJob() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_DownloadAndExtractJob() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_DownloadAndExtractJob", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement_DownloadAndExtractJob(ModInstallationManagement_DownloadAndExtractJob && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_DownloadAndExtractJob", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement_DownloadAndExtractJob(ModInstallationManagement_DownloadAndExtractJob const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17464};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModInstallationManagement_DownloadAndExtractJob) == 0x40, "Size mismatch!");

} // namespace end def Modio
// Dependencies Modio.ModInstallationManagement::Job
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/InstallJob
class CORDL_TYPE ModInstallationManagement_InstallJob : public ::Modio::ModInstallationManagement_Job {
public:
// Declarations
using _Run_d__2 = ::GlobalNamespace::InstallJob_ModInstallationManagement__Run_d__2;

/// @brief Field _isUpdateJob, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__isUpdateJob, put=__cordl_internal_set__isUpdateJob)) bool  _isUpdateJob;

/// @brief Method GetPendingSpaceChange, addr 0xa00da9c, size 0x128, virtual true, abstract: false, final false
inline void GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired) ;

static inline ::Modio::ModInstallationManagement_InstallJob* New_ctor(::Modio::Mods::Mod*  mod, bool  isUpdateJob) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::InstallJob::<Run>d__2))]
/// @brief Method Run, addr 0xa00d994, size 0x108, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Run() ;

constexpr bool const& __cordl_internal_get__isUpdateJob() const;

constexpr bool& __cordl_internal_get__isUpdateJob() ;

constexpr void __cordl_internal_set__isUpdateJob(bool  value) ;

/// @brief Method .ctor, addr 0xa00bb1c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  mod, bool  isUpdateJob) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_InstallJob() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_InstallJob", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement_InstallJob(ModInstallationManagement_InstallJob && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_InstallJob", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement_InstallJob(ModInstallationManagement_InstallJob const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17462};

/// @brief Field _isUpdateJob, offset: 0x3c, size: 0x1, def value: None
 bool  ____isUpdateJob;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::ModInstallationManagement_InstallJob, ____isUpdateJob) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Modio::ModInstallationManagement_InstallJob) == 0x40, "Size mismatch!");

} // namespace end def Modio
// Dependencies Modio.ModInstallationManagement::Job
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/DownloadJob
class CORDL_TYPE ModInstallationManagement_DownloadJob : public ::Modio::ModInstallationManagement_Job {
public:
// Declarations
using _Run_d__1 = ::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1;

/// @brief Method GetPendingSpaceChange, addr 0xa00c058, size 0x8c, virtual true, abstract: false, final false
inline void GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired) ;

static inline ::Modio::ModInstallationManagement_DownloadJob* New_ctor(::Modio::Mods::Mod*  mod) ;

/// [AsyncStateMachine(typeof(Modio.ModInstallationManagement::DownloadJob::<Run>d__1))]
/// @brief Method Run, addr 0xa00bf44, size 0x114, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Run() ;

/// @brief Method .ctor, addr 0xa00bb14, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  mod) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_DownloadJob() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_DownloadJob", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement_DownloadJob(ModInstallationManagement_DownloadJob && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_DownloadJob", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement_DownloadJob(ModInstallationManagement_DownloadJob const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModInstallationManagement_DownloadJob) == 0x40, "Size mismatch!");

} // namespace end def Modio
// Dependencies Modio.ModInstallationManagement::OperationPhase, Modio.ModInstallationManagement::OperationType, System.Object, System.Threading.CancellationToken
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/Job
class CORDL_TYPE ModInstallationManagement_Job : public ::System::Object {
public:
// Declarations
/// @brief Field CancellationToken, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CancellationToken, put=__cordl_internal_set_CancellationToken)) ::System::Threading::CancellationToken  CancellationToken;

 __declspec(property(get=get_Mod, put=set_Mod)) ::Modio::Mods::Mod*  Mod;

/// @brief Field Operation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Operation, put=__cordl_internal_set_Operation)) ::System::Func_1<::System::Threading::Tasks::Task_1<::Modio::Error*>*>*  Operation;

/// @brief Field Phase, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_Phase, put=__cordl_internal_set_Phase)) ::GlobalNamespace::ModInstallationManagement_OperationPhase  Phase;

/// @brief Field Type, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::GlobalNamespace::ModInstallationManagement_OperationType  Type;

/// @brief Field _cancellationTokenSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellationTokenSource, put=__cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _mod, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mod, put=__cordl_internal_set__mod)) ::Modio::Mods::Mod*  _mod;

/// @brief Method Cancel, addr 0xa00a57c, size 0x18, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method ClearMod, addr 0xa00bf38, size 0xc, virtual false, abstract: false, final false
inline void ClearMod() ;

/// @brief Method GetPendingSpaceChange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetPendingSpaceChange(::by_ref<int64_t>  spaceRequired, ::by_ref<int64_t>  tempSpaceRequired) ;

static inline ::Modio::ModInstallationManagement_Job* New_ctor(::Modio::Mods::Mod*  mod, ::GlobalNamespace::ModInstallationManagement_OperationType  type) ;

/// @brief Method PostEvent, addr 0xa00be14, size 0x124, virtual false, abstract: false, final false
inline void PostEvent(::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase, ::Modio::Mods::ModFileState  modState, ::Modio::Error*  errorCause) ;

/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Run() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_CancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_CancellationToken() ;

constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<::Modio::Error*>*>* const& __cordl_internal_get_Operation() const;

constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<::Modio::Error*>*>*& __cordl_internal_get_Operation() ;

constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase const& __cordl_internal_get_Phase() const;

constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase& __cordl_internal_get_Phase() ;

constexpr ::GlobalNamespace::ModInstallationManagement_OperationType const& __cordl_internal_get_Type() const;

constexpr ::GlobalNamespace::ModInstallationManagement_OperationType& __cordl_internal_get_Type() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get__mod() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get__mod() ;

constexpr void __cordl_internal_set_CancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_Operation(::System::Func_1<::System::Threading::Tasks::Task_1<::Modio::Error*>*>*  value) ;

constexpr void __cordl_internal_set_Phase(::GlobalNamespace::ModInstallationManagement_OperationPhase  value) ;

constexpr void __cordl_internal_set_Type(::GlobalNamespace::ModInstallationManagement_OperationType  value) ;

constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__mod(::Modio::Mods::Mod*  value) ;

/// @brief Method .ctor, addr 0xa00bd5c, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::Modio::Mods::Mod*  mod, ::GlobalNamespace::ModInstallationManagement_OperationType  type) ;

/// @brief Method get_Mod, addr 0xa00bd4c, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::Mod* get_Mod() ;

/// @brief Method set_Mod, addr 0xa00bd54, size 0x8, virtual false, abstract: false, final false
inline void set_Mod(::Modio::Mods::Mod*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_Job() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_Job", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement_Job(ModInstallationManagement_Job && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_Job", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement_Job(ModInstallationManagement_Job const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17458};

/// @brief Field _cancellationTokenSource, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cancellationTokenSource;

/// @brief Field Operation, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<::System::Threading::Tasks::Task_1<::Modio::Error*>*>*  ___Operation;

/// @brief Field Type, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ModInstallationManagement_OperationType  ___Type;

/// @brief Field _mod, offset: 0x28, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ____mod;

/// @brief Field CancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___CancellationToken;

/// @brief Field Phase, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::ModInstallationManagement_OperationPhase  ___Phase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::ModInstallationManagement_Job, ____cancellationTokenSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::ModInstallationManagement_Job, ___Operation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::ModInstallationManagement_Job, ___Type) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::ModInstallationManagement_Job, ____mod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::ModInstallationManagement_Job, ___CancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::ModInstallationManagement_Job, ___Phase) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::ModInstallationManagement_Job) == 0x40, "Size mismatch!");

} // namespace end def Modio
// Dependencies System.MulticastDelegate
namespace Modio {
// Is value type: false
// CS Name: Modio.ModInstallationManagement/InstallationManagementEventDelegate
class CORDL_TYPE ModInstallationManagement_InstallationManagementEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa00bc6c, size 0xd4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa00bd40, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa00bc58, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase) ;

static inline ::Modio::ModInstallationManagement_InstallationManagementEventDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa00bb4c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModInstallationManagement_InstallationManagementEventDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_InstallationManagementEventDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModInstallationManagement_InstallationManagementEventDelegate(ModInstallationManagement_InstallationManagementEventDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModInstallationManagement_InstallationManagementEventDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModInstallationManagement_InstallationManagementEventDelegate(ModInstallationManagement_InstallationManagementEventDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17457};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::ModInstallationManagement_InstallationManagementEventDelegate) == 0x80, "Size mismatch!");

} // namespace end def Modio
