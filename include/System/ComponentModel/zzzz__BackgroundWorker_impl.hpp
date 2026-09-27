#pragma once
// IWYU pragma private; include "System/ComponentModel/BackgroundWorker.hpp"
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/ComponentModel/zzzz__BackgroundWorker_def.hpp"
#include "System/ComponentModel/zzzz__AsyncOperation_def.hpp"
#include "System/ComponentModel/zzzz__DoWorkEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__DoWorkEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__ProgressChangedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__ProgressChangedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__RunWorkerCompletedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__RunWorkerCompletedEventHandler_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xad45468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.AsyncOperationCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(&::System::ComponentModel::BackgroundWorker::AsyncOperationCompleted)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xad4555c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"AsyncOperationCompleted", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.get_CancellationPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::get_CancellationPending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad455f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"get_CancellationPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.CancelAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::CancelAsync)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xad455f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"CancelAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.add_DoWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::DoWorkEventHandler*)>(&::System::ComponentModel::BackgroundWorker::add_DoWork)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad45658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"add_DoWork", {}, {::i2c::type_of<::System::ComponentModel::DoWorkEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.remove_DoWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::DoWorkEventHandler*)>(&::System::ComponentModel::BackgroundWorker::remove_DoWork)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad456f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"remove_DoWork", {}, {::i2c::type_of<::System::ComponentModel::DoWorkEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.get_IsBusy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::get_IsBusy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad45790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"get_IsBusy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.OnDoWork
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::DoWorkEventArgs*)>(&::System::ComponentModel::BackgroundWorker::OnDoWork)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad45798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                    {::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.OnRunWorkerCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::RunWorkerCompletedEventArgs*)>(&::System::ComponentModel::BackgroundWorker::OnRunWorkerCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad457c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                    {::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.OnProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::ProgressChangedEventArgs*)>(&::System::ComponentModel::BackgroundWorker::OnProgressChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xad457e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                    {::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.add_ProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::ProgressChangedEventHandler*)>(&::System::ComponentModel::BackgroundWorker::add_ProgressChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad45810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"add_ProgressChanged", {}, {::i2c::type_of<::System::ComponentModel::ProgressChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.remove_ProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::ProgressChangedEventHandler*)>(&::System::ComponentModel::BackgroundWorker::remove_ProgressChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad458ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"remove_ProgressChanged", {}, {::i2c::type_of<::System::ComponentModel::ProgressChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.ProgressReporter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(&::System::ComponentModel::BackgroundWorker::ProgressReporter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xad45948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"ProgressReporter", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.ReportProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(int32_t)>(&::System::ComponentModel::BackgroundWorker::ReportProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad459d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"ReportProgress", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.ReportProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(int32_t, ::System::Object*)>(&::System::ComponentModel::BackgroundWorker::ReportProgress)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xad459e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"ReportProgress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.RunWorkerAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::RunWorkerAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad45ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"RunWorkerAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.RunWorkerAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(&::System::ComponentModel::BackgroundWorker::RunWorkerAsync)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xad45ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"RunWorkerAsync", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.add_RunWorkerCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::RunWorkerCompletedEventHandler*)>(&::System::ComponentModel::BackgroundWorker::add_RunWorkerCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad45cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"add_RunWorkerCompleted", {}, {::i2c::type_of<::System::ComponentModel::RunWorkerCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.remove_RunWorkerCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::ComponentModel::RunWorkerCompletedEventHandler*)>(&::System::ComponentModel::BackgroundWorker::remove_RunWorkerCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xad45d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"remove_RunWorkerCompleted", {}, {::i2c::type_of<::System::ComponentModel::RunWorkerCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.get_WorkerReportsProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::get_WorkerReportsProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad45e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"get_WorkerReportsProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.set_WorkerReportsProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(bool)>(&::System::ComponentModel::BackgroundWorker::set_WorkerReportsProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad45e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"set_WorkerReportsProgress", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.get_WorkerSupportsCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::ComponentModel::BackgroundWorker::*)()>(&::System::ComponentModel::BackgroundWorker::get_WorkerSupportsCancellation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad45e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"get_WorkerSupportsCancellation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.set_WorkerSupportsCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(bool)>(&::System::ComponentModel::BackgroundWorker::set_WorkerSupportsCancellation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xad45e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"set_WorkerSupportsCancellation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.WorkerThreadStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(&::System::ComponentModel::BackgroundWorker::WorkerThreadStart)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xad45e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"WorkerThreadStart", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(bool)>(&::System::ComponentModel::BackgroundWorker::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad45fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                    {::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::BackgroundWorker._RunWorkerAsync_b__27_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::ComponentModel::BackgroundWorker::*)(::System::Object*)>(&::System::ComponentModel::BackgroundWorker::_RunWorkerAsync_b__27_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xad45fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"<RunWorkerAsync>b__27_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::BackgroundWorker::__cordl_internal_get__canCancelWorker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canCancelWorker;
}
constexpr bool const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__canCancelWorker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canCancelWorker;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__canCancelWorker(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canCancelWorker = value;
}
constexpr bool& System::ComponentModel::BackgroundWorker::__cordl_internal_get__workerReportsProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workerReportsProgress;
}
constexpr bool const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__workerReportsProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workerReportsProgress;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__workerReportsProgress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____workerReportsProgress = value;
}
constexpr bool& System::ComponentModel::BackgroundWorker::__cordl_internal_get__cancellationPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationPending;
}
constexpr bool const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__cancellationPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationPending;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__cancellationPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellationPending = value;
}
constexpr bool& System::ComponentModel::BackgroundWorker::__cordl_internal_get__isRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr bool const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__isRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRunning;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__isRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRunning = value;
}
constexpr ::System::ComponentModel::AsyncOperation*& System::ComponentModel::BackgroundWorker::__cordl_internal_get__asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncOperation;
}
constexpr ::System::ComponentModel::AsyncOperation* const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncOperation;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__asyncOperation(::System::ComponentModel::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncOperation = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::ComponentModel::BackgroundWorker::__cordl_internal_get__operationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__operationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____operationCompleted;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__operationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____operationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::ComponentModel::BackgroundWorker::__cordl_internal_get__progressReporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressReporter;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::ComponentModel::BackgroundWorker::__cordl_internal_get__progressReporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressReporter;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set__progressReporter(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressReporter = value;
}
constexpr ::System::ComponentModel::DoWorkEventHandler*& System::ComponentModel::BackgroundWorker::__cordl_internal_get_DoWork()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DoWork;
}
constexpr ::System::ComponentModel::DoWorkEventHandler* const& System::ComponentModel::BackgroundWorker::__cordl_internal_get_DoWork() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DoWork;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set_DoWork(::System::ComponentModel::DoWorkEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DoWork = value;
}
constexpr ::System::ComponentModel::ProgressChangedEventHandler*& System::ComponentModel::BackgroundWorker::__cordl_internal_get_ProgressChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProgressChanged;
}
constexpr ::System::ComponentModel::ProgressChangedEventHandler* const& System::ComponentModel::BackgroundWorker::__cordl_internal_get_ProgressChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProgressChanged;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProgressChanged = value;
}
constexpr ::System::ComponentModel::RunWorkerCompletedEventHandler*& System::ComponentModel::BackgroundWorker::__cordl_internal_get_RunWorkerCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunWorkerCompleted;
}
constexpr ::System::ComponentModel::RunWorkerCompletedEventHandler* const& System::ComponentModel::BackgroundWorker::__cordl_internal_get_RunWorkerCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunWorkerCompleted;
}
constexpr void System::ComponentModel::BackgroundWorker::__cordl_internal_set_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RunWorkerCompleted = value;
}
inline void System::ComponentModel::BackgroundWorker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::AsyncOperationCompleted(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"AsyncOperationCompleted", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline bool System::ComponentModel::BackgroundWorker::get_CancellationPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"get_CancellationPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::CancelAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"CancelAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::add_DoWork(::System::ComponentModel::DoWorkEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"add_DoWork", {}, {::i2c::type_of<::System::ComponentModel::DoWorkEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::remove_DoWork(::System::ComponentModel::DoWorkEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"remove_DoWork", {}, {::i2c::type_of<::System::ComponentModel::DoWorkEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::ComponentModel::BackgroundWorker::get_IsBusy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"get_IsBusy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::OnDoWork(::System::ComponentModel::DoWorkEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::ComponentModel::BackgroundWorker::OnRunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::ComponentModel::BackgroundWorker::OnProgressChanged(::System::ComponentModel::ProgressChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::ComponentModel::BackgroundWorker::add_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"add_ProgressChanged", {}, {::i2c::type_of<::System::ComponentModel::ProgressChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::remove_ProgressChanged(::System::ComponentModel::ProgressChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"remove_ProgressChanged", {}, {::i2c::type_of<::System::ComponentModel::ProgressChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::ProgressReporter(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"ProgressReporter", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::ComponentModel::BackgroundWorker::ReportProgress(int32_t  percentProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"ReportProgress", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, percentProgress);
}
inline void System::ComponentModel::BackgroundWorker::ReportProgress(int32_t  percentProgress, ::System::Object*  userState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"ReportProgress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, percentProgress, userState);
}
inline void System::ComponentModel::BackgroundWorker::RunWorkerAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"RunWorkerAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::RunWorkerAsync(::System::Object*  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"RunWorkerAsync", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, argument);
}
inline void System::ComponentModel::BackgroundWorker::add_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"add_RunWorkerCompleted", {}, {::i2c::type_of<::System::ComponentModel::RunWorkerCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::remove_RunWorkerCompleted(::System::ComponentModel::RunWorkerCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"remove_RunWorkerCompleted", {}, {::i2c::type_of<::System::ComponentModel::RunWorkerCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::ComponentModel::BackgroundWorker::get_WorkerReportsProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"get_WorkerReportsProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::set_WorkerReportsProgress(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"set_WorkerReportsProgress", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::ComponentModel::BackgroundWorker::get_WorkerSupportsCancellation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"get_WorkerSupportsCancellation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::ComponentModel::BackgroundWorker::set_WorkerSupportsCancellation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"set_WorkerSupportsCancellation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::ComponentModel::BackgroundWorker::WorkerThreadStart(::System::Object*  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"WorkerThreadStart", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, argument);
}
inline void System::ComponentModel::BackgroundWorker::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::ComponentModel::BackgroundWorker::_RunWorkerAsync_b__27_0(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::ComponentModel::BackgroundWorker*>(),
                        {"<RunWorkerAsync>b__27_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline ::System::ComponentModel::BackgroundWorker* System::ComponentModel::BackgroundWorker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::ComponentModel::BackgroundWorker*>());
}
// Ctor Parameters []
constexpr ::System::ComponentModel::BackgroundWorker::BackgroundWorker()   {
}
