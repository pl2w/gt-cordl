#pragma once
// IWYU pragma private; include "System/Net/WebOperation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebOperation_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
#include "System/Net/zzzz__HttpWebRequest_def.hpp"
#include "System/Net/zzzz__ServicePoint_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Net/zzzz__WebConnection_def.hpp"
#include "System/Net/zzzz__WebOperation__GetRequestStream_d__50_def.hpp"
#include "System/Net/zzzz__WebOperation__Run_d__58_def.hpp"
#include "System/Net/zzzz__WebRequestStream_def.hpp"
#include "System/Net/zzzz__WebResponseStream_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::System::Net::WebOperation.get_Request
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::HttpWebRequest* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Request)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbd8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Request", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Connection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebConnection* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbd904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Connection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.set_Connection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::WebConnection*)>(&::System::Net::WebOperation::set_Connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbd90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"set_Connection", {}, {::i2c::type_of<::System::Net::WebConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_ServicePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ServicePoint* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbd914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_ServicePoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.set_ServicePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::ServicePoint*)>(&::System::Net::WebOperation::set_ServicePoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbd91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"set_ServicePoint", {}, {::i2c::type_of<::System::Net::ServicePoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_WriteBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::BufferOffsetSize* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_WriteBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbd924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_WriteBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_IsNtlmChallenge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_IsNtlmChallenge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbd92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_IsNtlmChallenge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_ME
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_ME)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbd934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_ME", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::HttpWebRequest*, ::System::Net::BufferOffsetSize*, bool, ::System::Threading::CancellationToken)>(&::System::Net::WebOperation::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xacbd93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Aborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Aborted)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xacb3698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Aborted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Closed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Closed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xacbdb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Closed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::Abort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xacb3658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"Abort", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::Close)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xacbdd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::SetCanceled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xacbdc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"SetCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Exception*)>(&::System::Net::WebOperation::SetError)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xacbdff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"SetError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*,bool> (::System::Net::WebOperation::*)(::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>)>(&::System::Net::WebOperation::SetDisposed)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xacbdb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"SetDisposed", {}, {::i2c::type_of<::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.CheckDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::System::Net::WebOperation::*)(::System::Threading::CancellationToken)>(&::System::Net::WebOperation::CheckDisposed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xacbe098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"CheckDisposed", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacbe178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"ThrowIfDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Threading::CancellationToken)>(&::System::Net::WebOperation::ThrowIfDisposed)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xacb9cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"ThrowIfDisposed", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfClosedOrDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::ThrowIfClosedOrDisposed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xacbb4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"ThrowIfClosedOrDisposed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.ThrowIfClosedOrDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Threading::CancellationToken)>(&::System::Net::WebOperation::ThrowIfClosedOrDisposed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xacbac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"ThrowIfClosedOrDisposed", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.CheckThrowDisposed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::System::Net::WebOperation::*)(bool, ::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>)>(&::System::Net::WebOperation::CheckThrowDisposed)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacbe120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"CheckThrowDisposed", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.RegisterRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::ServicePoint*, ::System::Net::WebConnection*)>(&::System::Net::WebOperation::RegisterRequest)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xacb8d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"RegisterRequest", {}, {::i2c::type_of<::System::Net::ServicePoint*>(), ::i2c::type_of<::System::Net::WebConnection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.SetPriorityRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::WebOperation*)>(&::System::Net::WebOperation::SetPriorityRequest)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xacbe1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"SetPriorityRequest", {}, {::i2c::type_of<::System::Net::WebOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.GetRequestStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::GetRequestStream)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xacbe358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"GetRequestStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.GetRequestStreamInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::GetRequestStreamInternal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xacbe470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"GetRequestStreamInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.WaitUntilRequestWritten
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::WaitUntilRequestWritten)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xacbe4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"WaitUntilRequestWritten", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_WriteStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequestStream* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_WriteStream)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xacbe510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_WriteStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.GetResponseStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream*>* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::GetResponseStream)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xacbe528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"GetResponseStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.get_Finished
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>* (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::get_Finished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacbe578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Finished", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::Run)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xacb8fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"Run", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.CompleteRequestWritten
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(::System::Net::WebRequestStream*, ::System::Exception*)>(&::System::Net::WebOperation::CompleteRequestWritten)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xacbe580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"CompleteRequestWritten", {}, {::i2c::type_of<::System::Net::WebRequestStream*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation.Finish
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)(bool, ::System::Exception*)>(&::System::Net::WebOperation::Finish)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xacbddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"Finish", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebOperation._RegisterRequest_b__48_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebOperation::*)()>(&::System::Net::WebOperation::_RegisterRequest_b__48_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xacbe600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"<RegisterRequest>b__48_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::HttpWebRequest*& System::Net::WebOperation::__cordl_internal_get__Request_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Request_k__BackingField;
}
constexpr ::System::Net::HttpWebRequest* const& System::Net::WebOperation::__cordl_internal_get__Request_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Request_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__Request_k__BackingField(::System::Net::HttpWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Request_k__BackingField = value;
}
constexpr ::System::Net::WebConnection*& System::Net::WebOperation::__cordl_internal_get__Connection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connection_k__BackingField;
}
constexpr ::System::Net::WebConnection* const& System::Net::WebOperation::__cordl_internal_get__Connection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Connection_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__Connection_k__BackingField(::System::Net::WebConnection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Connection_k__BackingField = value;
}
constexpr ::System::Net::ServicePoint*& System::Net::WebOperation::__cordl_internal_get__ServicePoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServicePoint_k__BackingField;
}
constexpr ::System::Net::ServicePoint* const& System::Net::WebOperation::__cordl_internal_get__ServicePoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServicePoint_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__ServicePoint_k__BackingField(::System::Net::ServicePoint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ServicePoint_k__BackingField = value;
}
constexpr ::System::Net::BufferOffsetSize*& System::Net::WebOperation::__cordl_internal_get__WriteBuffer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteBuffer_k__BackingField;
}
constexpr ::System::Net::BufferOffsetSize* const& System::Net::WebOperation::__cordl_internal_get__WriteBuffer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WriteBuffer_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__WriteBuffer_k__BackingField(::System::Net::BufferOffsetSize*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WriteBuffer_k__BackingField = value;
}
constexpr bool& System::Net::WebOperation::__cordl_internal_get__IsNtlmChallenge_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsNtlmChallenge_k__BackingField;
}
constexpr bool const& System::Net::WebOperation::__cordl_internal_get__IsNtlmChallenge_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsNtlmChallenge_k__BackingField;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__IsNtlmChallenge_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsNtlmChallenge_k__BackingField = value;
}
constexpr int32_t& System::Net::WebOperation::__cordl_internal_get__cordl_ID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr int32_t const& System::Net::WebOperation::__cordl_internal_get__cordl_ID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cordl_ID;
}
constexpr void System::Net::WebOperation::__cordl_internal_set__cordl_ID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cordl_ID = value;
}
constexpr ::System::Threading::CancellationTokenSource*& System::Net::WebOperation::__cordl_internal_get_cts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cts;
}
constexpr ::System::Threading::CancellationTokenSource* const& System::Net::WebOperation::__cordl_internal_get_cts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cts;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_cts(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cts = value;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*& System::Net::WebOperation::__cordl_internal_get_requestTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestTask;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* const& System::Net::WebOperation::__cordl_internal_get_requestTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestTask;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_requestTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestTask = value;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*& System::Net::WebOperation::__cordl_internal_get_requestWrittenTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestWrittenTask;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>* const& System::Net::WebOperation::__cordl_internal_get_requestWrittenTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestWrittenTask;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_requestWrittenTask(::System::Net::WebCompletionSource_1<::System::Net::WebRequestStream*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestWrittenTask = value;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>*& System::Net::WebOperation::__cordl_internal_get_responseTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseTask;
}
constexpr ::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>* const& System::Net::WebOperation::__cordl_internal_get_responseTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseTask;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_responseTask(::System::Net::WebCompletionSource_1<::System::Net::WebResponseStream*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseTask = value;
}
constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>*& System::Net::WebOperation::__cordl_internal_get_finishedTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedTask;
}
constexpr ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>* const& System::Net::WebOperation::__cordl_internal_get_finishedTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishedTask;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_finishedTask(::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishedTask = value;
}
constexpr ::System::Net::WebRequestStream*& System::Net::WebOperation::__cordl_internal_get_writeStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeStream;
}
constexpr ::System::Net::WebRequestStream* const& System::Net::WebOperation::__cordl_internal_get_writeStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writeStream;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_writeStream(::System::Net::WebRequestStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writeStream = value;
}
constexpr ::System::Net::WebResponseStream*& System::Net::WebOperation::__cordl_internal_get_responseStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseStream;
}
constexpr ::System::Net::WebResponseStream* const& System::Net::WebOperation::__cordl_internal_get_responseStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___responseStream;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_responseStream(::System::Net::WebResponseStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___responseStream = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Net::WebOperation::__cordl_internal_get_disposedInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposedInfo;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::Net::WebOperation::__cordl_internal_get_disposedInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposedInfo;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_disposedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposedInfo = value;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Net::WebOperation::__cordl_internal_get_closedInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedInfo;
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::Net::WebOperation::__cordl_internal_get_closedInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closedInfo;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_closedInfo(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closedInfo = value;
}
constexpr ::System::Net::WebOperation*& System::Net::WebOperation::__cordl_internal_get_priorityRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priorityRequest;
}
constexpr ::System::Net::WebOperation* const& System::Net::WebOperation::__cordl_internal_get_priorityRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priorityRequest;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_priorityRequest(::System::Net::WebOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priorityRequest = value;
}
constexpr int32_t& System::Net::WebOperation::__cordl_internal_get_requestSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestSent;
}
constexpr int32_t const& System::Net::WebOperation::__cordl_internal_get_requestSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestSent;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_requestSent(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestSent = value;
}
constexpr int32_t& System::Net::WebOperation::__cordl_internal_get_finished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finished;
}
constexpr int32_t const& System::Net::WebOperation::__cordl_internal_get_finished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finished;
}
constexpr void System::Net::WebOperation::__cordl_internal_set_finished(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finished = value;
}
inline ::System::Net::HttpWebRequest* System::Net::WebOperation::get_Request()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Request", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::HttpWebRequest*>(this, ___internal_method);
}
inline ::System::Net::WebConnection* System::Net::WebOperation::get_Connection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Connection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebConnection*>(this, ___internal_method);
}
inline void System::Net::WebOperation::set_Connection(::System::Net::WebConnection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"set_Connection", {}, {::i2c::type_of<::System::Net::WebConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ServicePoint* System::Net::WebOperation::get_ServicePoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_ServicePoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ServicePoint*>(this, ___internal_method);
}
inline void System::Net::WebOperation::set_ServicePoint(::System::Net::ServicePoint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"set_ServicePoint", {}, {::i2c::type_of<::System::Net::ServicePoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::BufferOffsetSize* System::Net::WebOperation::get_WriteBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_WriteBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::BufferOffsetSize*>(this, ___internal_method);
}
inline bool System::Net::WebOperation::get_IsNtlmChallenge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_IsNtlmChallenge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Net::WebOperation::get_ME()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_ME", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::WebOperation::_ctor(::System::Net::HttpWebRequest*  request, ::System::Net::BufferOffsetSize*  writeBuffer, bool  isNtlmChallenge, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Net::HttpWebRequest*>(), ::i2c::type_of<::System::Net::BufferOffsetSize*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, writeBuffer, isNtlmChallenge, cancellationToken);
}
inline bool System::Net::WebOperation::get_Aborted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Aborted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::WebOperation::get_Closed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Closed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebOperation::Abort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"Abort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::SetCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"SetCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::SetError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"SetError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*,bool> System::Net::WebOperation::SetDisposed(::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"SetDisposed", {}, {::i2c::type_of<::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*,bool>>(this, ___internal_method, field);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::WebOperation::CheckDisposed(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"CheckDisposed", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method, cancellationToken);
}
inline void System::Net::WebOperation::ThrowIfDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"ThrowIfDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::ThrowIfDisposed(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"ThrowIfDisposed", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
inline void System::Net::WebOperation::ThrowIfClosedOrDisposed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"ThrowIfClosedOrDisposed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::ThrowIfClosedOrDisposed(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"ThrowIfClosedOrDisposed", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::WebOperation::CheckThrowDisposed(bool  throwIt, ::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"CheckThrowDisposed", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method, throwIt, field);
}
inline void System::Net::WebOperation::RegisterRequest(::System::Net::ServicePoint*  servicePoint, ::System::Net::WebConnection*  connection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"RegisterRequest", {}, {::i2c::type_of<::System::Net::ServicePoint*>(), ::i2c::type_of<::System::Net::WebConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, servicePoint, connection);
}
inline void System::Net::WebOperation::SetPriorityRequest(::System::Net::WebOperation*  operation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"SetPriorityRequest", {}, {::i2c::type_of<::System::Net::WebOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operation);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebOperation::GetRequestStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"GetRequestStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>* System::Net::WebOperation::GetRequestStreamInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"GetRequestStreamInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebRequestStream*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebOperation::WaitUntilRequestWritten()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"WaitUntilRequestWritten", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Net::WebRequestStream* System::Net::WebOperation::get_WriteStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_WriteStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequestStream*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream*>* System::Net::WebOperation::GetResponseStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"GetResponseStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponseStream*>*>(this, ___internal_method);
}
inline ::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>* System::Net::WebOperation::get_Finished()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"get_Finished", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebCompletionSource_1<::System::ValueTuple_2<bool,::System::Net::WebOperation*>>*>(this, ___internal_method);
}
inline void System::Net::WebOperation::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebOperation::CompleteRequestWritten(::System::Net::WebRequestStream*  stream, ::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"CompleteRequestWritten", {}, {::i2c::type_of<::System::Net::WebRequestStream*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, error);
}
inline void System::Net::WebOperation::Finish(bool  ok, ::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"Finish", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ok, error);
}
inline void System::Net::WebOperation::_RegisterRequest_b__48_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebOperation*>(),
                        {"<RegisterRequest>b__48_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebOperation* System::Net::WebOperation::New_ctor(::System::Net::HttpWebRequest*  request, ::System::Net::BufferOffsetSize*  writeBuffer, bool  isNtlmChallenge, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebOperation*>(request, writeBuffer, isNtlmChallenge, cancellationToken));
}
// Ctor Parameters []
constexpr ::System::Net::WebOperation::WebOperation()   {
}
