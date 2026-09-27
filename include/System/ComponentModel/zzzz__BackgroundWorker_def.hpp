#pragma once
// IWYU pragma private; include "System/ComponentModel/BackgroundWorker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__Component_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundWorker)
namespace System::ComponentModel {
class AsyncOperation;
}
namespace System::ComponentModel {
class DoWorkEventArgs;
}
namespace System::ComponentModel {
class DoWorkEventHandler;
}
namespace System::ComponentModel {
class ProgressChangedEventArgs;
}
namespace System::ComponentModel {
class ProgressChangedEventHandler;
}
namespace System::ComponentModel {
class RunWorkerCompletedEventArgs;
}
namespace System::ComponentModel {
class RunWorkerCompletedEventHandler;
}
namespace System::Threading {
class SendOrPostCallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class BackgroundWorker;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::BackgroundWorker*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::BackgroundWorker*, "System.ComponentModel", "BackgroundWorker");
// [DefaultEvent("DoWork")]
// Dependencies System.ComponentModel.Component
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.BackgroundWorker
class CORDL_TYPE BackgroundWorker : public ::System::ComponentModel::Component {
public:
// Declarations
 __declspec(property(get=get_CancellationPending)) bool  CancellationPending;

/// @brief Field DoWork, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_DoWork, put=__cordl_internal_set_DoWork)) ::System::ComponentModel::DoWorkEventHandler*  DoWork;

 __declspec(property(get=get_IsBusy)) bool  IsBusy;

/// @brief Field ProgressChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProgressChanged, put=__cordl_internal_set_ProgressChanged)) ::System::ComponentModel::ProgressChangedEventHandler*  ProgressChanged;

/// @brief Field RunWorkerCompleted, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_RunWorkerCompleted, put=__cordl_internal_set_RunWorkerCompleted)) ::System::ComponentModel::RunWorkerCompletedEventHandler*  RunWorkerCompleted;

 __declspec(property(get=get_WorkerReportsProgress, put=set_WorkerReportsProgress)) bool  WorkerReportsProgress;

 __declspec(property(get=get_WorkerSupportsCancellation, put=set_WorkerSupportsCancellation)) bool  WorkerSupportsCancellation;

/// @brief Field _asyncOperation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncOperation, put=__cordl_internal_set__asyncOperation)) ::System::ComponentModel::AsyncOperation*  _asyncOperation;

/// @brief Field _canCancelWorker, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__canCancelWorker, put=__cordl_internal_set__canCancelWorker)) bool  _canCancelWorker;

/// @brief Field _cancellationPending, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get__cancellationPending, put=__cordl_internal_set__cancellationPending)) bool  _cancellationPending;

/// @brief Field _isRunning, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRunning, put=__cordl_internal_set__isRunning)) bool  _isRunning;

/// @brief Field _operationCompleted, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__operationCompleted, put=__cordl_internal_set__operationCompleted)) ::System::Threading::SendOrPostCallback*  _operationCompleted;

/// @brief Field _progressReporter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressReporter, put=__cordl_internal_set__progressReporter)) ::System::Threading::SendOrPostCallback*  _progressReporter;

/// @brief Field _workerReportsProgress, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__workerReportsProgress, put=__cordl_internal_set__workerReportsProgress)) bool  _workerReportsProgress;

/// @brief Method AsyncOperationCompleted, addr 0xad4555c, size 0x94, virtual false, abstract: false, final false
inline void AsyncOperationCompleted(::System::Object*  arg) ;

/// @brief Method CancelAsync, addr 0xad455f8, size 0x60, virtual false, abstract: false, final false
inline void CancelAsync() ;

/// @brief Method Dispose, addr 0xad45fcc, size 0x4, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

static inline ::System::ComponentModel::BackgroundWorker* New_ctor() ;

/// @brief Method OnDoWork, addr 0xad45798, size 0x28, virtual true, abstract: false, final false
inline void OnDoWork(::System::ComponentModel::DoWorkEventArgs*  e) ;

/// @brief Method OnProgressChanged, addr 0xad457e8, size 0x28, virtual true, abstract: false, final false
inline void OnProgressChanged(::System::ComponentModel::ProgressChangedEventArgs*  e) ;

/// @brief Method OnRunWorkerCompleted, addr 0xad457c0, size 0x28, virtual true, abstract: false, final false
inline void OnRunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventArgs*  e) ;

/// @brief Method ProgressReporter, addr 0xad45948, size 0x90, virtual false, abstract: false, final false
inline void ProgressReporter(::System::Object*  arg) ;

/// @brief Method ReportProgress, addr 0xad459d8, size 0x8, virtual false, abstract: false, final false
inline void ReportProgress(int32_t  percentProgress) ;

/// @brief Method ReportProgress, addr 0xad459e0, size 0xf8, virtual false, abstract: false, final false
inline void ReportProgress(int32_t  percentProgress, ::System::Object*  userState) ;

/// @brief Method RunWorkerAsync, addr 0xad45ad8, size 0x8, virtual false, abstract: false, final false
inline void RunWorkerAsync() ;

/// @brief Method RunWorkerAsync, addr 0xad45ae0, size 0x210, virtual false, abstract: false, final false
inline void RunWorkerAsync(::System::Object*  argument) ;

/// @brief Method WorkerThreadStart, addr 0xad45e48, size 0x184, virtual false, abstract: false, final false
inline void WorkerThreadStart(::System::Object*  argument) ;

/// [CompilerGenerated]
/// @brief Method <RunWorkerAsync>b__27_0, addr 0xad45fd0, size 0x4, virtual false, abstract: false, final false
inline void _RunWorkerAsync_b__27_0(::System::Object*  arg) ;

constexpr ::System::ComponentModel::DoWorkEventHandler* const& __cordl_internal_get_DoWork() const;

constexpr ::System::ComponentModel::DoWorkEventHandler*& __cordl_internal_get_DoWork() ;

constexpr ::System::ComponentModel::ProgressChangedEventHandler* const& __cordl_internal_get_ProgressChanged() const;

constexpr ::System::ComponentModel::ProgressChangedEventHandler*& __cordl_internal_get_ProgressChanged() ;

constexpr ::System::ComponentModel::RunWorkerCompletedEventHandler* const& __cordl_internal_get_RunWorkerCompleted() const;

constexpr ::System::ComponentModel::RunWorkerCompletedEventHandler*& __cordl_internal_get_RunWorkerCompleted() ;

constexpr ::System::ComponentModel::AsyncOperation* const& __cordl_internal_get__asyncOperation() const;

constexpr ::System::ComponentModel::AsyncOperation*& __cordl_internal_get__asyncOperation() ;

constexpr bool const& __cordl_internal_get__canCancelWorker() const;

constexpr bool& __cordl_internal_get__canCancelWorker() ;

constexpr bool const& __cordl_internal_get__cancellationPending() const;

constexpr bool& __cordl_internal_get__cancellationPending() ;

constexpr bool const& __cordl_internal_get__isRunning() const;

constexpr bool& __cordl_internal_get__isRunning() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__operationCompleted() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__operationCompleted() ;

constexpr ::System::Threading::SendOrPostCallback* const& __cordl_internal_get__progressReporter() const;

constexpr ::System::Threading::SendOrPostCallback*& __cordl_internal_get__progressReporter() ;

constexpr bool const& __cordl_internal_get__workerReportsProgress() const;

constexpr bool& __cordl_internal_get__workerReportsProgress() ;

constexpr void __cordl_internal_set_DoWork(::System::ComponentModel::DoWorkEventHandler*  value) ;

constexpr void __cordl_internal_set_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler*  value) ;

constexpr void __cordl_internal_set_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler*  value) ;

constexpr void __cordl_internal_set__asyncOperation(::System::ComponentModel::AsyncOperation*  value) ;

constexpr void __cordl_internal_set__canCancelWorker(bool  value) ;

constexpr void __cordl_internal_set__cancellationPending(bool  value) ;

constexpr void __cordl_internal_set__isRunning(bool  value) ;

constexpr void __cordl_internal_set__operationCompleted(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__progressReporter(::System::Threading::SendOrPostCallback*  value) ;

constexpr void __cordl_internal_set__workerReportsProgress(bool  value) ;

/// @brief Method .ctor, addr 0xad45468, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_DoWork, addr 0xad45658, size 0x9c, virtual false, abstract: false, final false
inline void add_DoWork(::System::ComponentModel::DoWorkEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_ProgressChanged, addr 0xad45810, size 0x9c, virtual false, abstract: false, final false
inline void add_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method add_RunWorkerCompleted, addr 0xad45cf0, size 0x9c, virtual false, abstract: false, final false
inline void add_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler*  value) ;

/// @brief Method get_CancellationPending, addr 0xad455f0, size 0x8, virtual false, abstract: false, final false
inline bool get_CancellationPending() ;

/// @brief Method get_IsBusy, addr 0xad45790, size 0x8, virtual false, abstract: false, final false
inline bool get_IsBusy() ;

/// @brief Method get_WorkerReportsProgress, addr 0xad45e28, size 0x8, virtual false, abstract: false, final false
inline bool get_WorkerReportsProgress() ;

/// @brief Method get_WorkerSupportsCancellation, addr 0xad45e38, size 0x8, virtual false, abstract: false, final false
inline bool get_WorkerSupportsCancellation() ;

/// [CompilerGenerated]
/// @brief Method remove_DoWork, addr 0xad456f4, size 0x9c, virtual false, abstract: false, final false
inline void remove_DoWork(::System::ComponentModel::DoWorkEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_ProgressChanged, addr 0xad458ac, size 0x9c, virtual false, abstract: false, final false
inline void remove_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_RunWorkerCompleted, addr 0xad45d8c, size 0x9c, virtual false, abstract: false, final false
inline void remove_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler*  value) ;

/// @brief Method set_WorkerReportsProgress, addr 0xad45e30, size 0x8, virtual false, abstract: false, final false
inline void set_WorkerReportsProgress(bool  value) ;

/// @brief Method set_WorkerSupportsCancellation, addr 0xad45e40, size 0x8, virtual false, abstract: false, final false
inline void set_WorkerSupportsCancellation(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BackgroundWorker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BackgroundWorker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BackgroundWorker(BackgroundWorker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BackgroundWorker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BackgroundWorker(BackgroundWorker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10091};

/// @brief Field _canCancelWorker, offset: 0x28, size: 0x1, def value: None
 bool  ____canCancelWorker;

/// @brief Field _workerReportsProgress, offset: 0x29, size: 0x1, def value: None
 bool  ____workerReportsProgress;

/// @brief Field _cancellationPending, offset: 0x2a, size: 0x1, def value: None
 bool  ____cancellationPending;

/// @brief Field _isRunning, offset: 0x2b, size: 0x1, def value: None
 bool  ____isRunning;

/// @brief Field _asyncOperation, offset: 0x30, size: 0x8, def value: None
 ::System::ComponentModel::AsyncOperation*  ____asyncOperation;

/// @brief Field _operationCompleted, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____operationCompleted;

/// @brief Field _progressReporter, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::SendOrPostCallback*  ____progressReporter;

/// [CompilerGenerated]
/// @brief Field DoWork, offset: 0x48, size: 0x8, def value: None
 ::System::ComponentModel::DoWorkEventHandler*  ___DoWork;

/// [CompilerGenerated]
/// @brief Field ProgressChanged, offset: 0x50, size: 0x8, def value: None
 ::System::ComponentModel::ProgressChangedEventHandler*  ___ProgressChanged;

/// [CompilerGenerated]
/// @brief Field RunWorkerCompleted, offset: 0x58, size: 0x8, def value: None
 ::System::ComponentModel::RunWorkerCompletedEventHandler*  ___RunWorkerCompleted;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____canCancelWorker) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____workerReportsProgress) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____cancellationPending) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____isRunning) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____asyncOperation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____operationCompleted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ____progressReporter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ___DoWork) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ___ProgressChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::BackgroundWorker, ___RunWorkerCompleted) == 0x58, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::BackgroundWorker) == 0x60, "Size mismatch!");

} // namespace end def System::ComponentModel
