#pragma once
// IWYU pragma private; include "System/Net/WebClient.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_impl.hpp"
#include "System/ComponentModel/zzzz__Component_impl.hpp"
#include "System/Net/Http/zzzz__DelegatingStream_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebClient_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
#include "System/ComponentModel/zzzz__AsyncCompletedEventHandler_def.hpp"
#include "System/ComponentModel/zzzz__AsyncOperation_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Cache/zzzz__RequestCachePolicy_def.hpp"
#include "System/Net/zzzz__DownloadDataCompletedEventArgs_def.hpp"
#include "System/Net/zzzz__DownloadDataCompletedEventHandler_def.hpp"
#include "System/Net/zzzz__DownloadProgressChangedEventArgs_def.hpp"
#include "System/Net/zzzz__DownloadProgressChangedEventHandler_def.hpp"
#include "System/Net/zzzz__DownloadStringCompletedEventArgs_def.hpp"
#include "System/Net/zzzz__DownloadStringCompletedEventHandler_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__OpenReadCompletedEventArgs_def.hpp"
#include "System/Net/zzzz__OpenReadCompletedEventHandler_def.hpp"
#include "System/Net/zzzz__OpenWriteCompletedEventArgs_def.hpp"
#include "System/Net/zzzz__OpenWriteCompletedEventHandler_def.hpp"
#include "System/Net/zzzz__UploadDataCompletedEventArgs_def.hpp"
#include "System/Net/zzzz__UploadDataCompletedEventHandler_def.hpp"
#include "System/Net/zzzz__UploadFileCompletedEventArgs_def.hpp"
#include "System/Net/zzzz__UploadFileCompletedEventHandler_def.hpp"
#include "System/Net/zzzz__UploadProgressChangedEventArgs_def.hpp"
#include "System/Net/zzzz__UploadProgressChangedEventHandler_def.hpp"
#include "System/Net/zzzz__UploadStringCompletedEventArgs_def.hpp"
#include "System/Net/zzzz__UploadStringCompletedEventHandler_def.hpp"
#include "System/Net/zzzz__UploadValuesCompletedEventArgs_def.hpp"
#include "System/Net/zzzz__UploadValuesCompletedEventHandler_def.hpp"
#include "System/Net/zzzz__WebClient__DownloadBitsAsync_d__150_def.hpp"
#include "System/Net/zzzz__WebClient__GetWebResponseTaskAsync_d__112_def.hpp"
#include "System/Net/zzzz__WebClient__UploadBitsAsync_d__152_def.hpp"
#include "System/Net/zzzz__WebClient_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebRequest_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Net/zzzz__WriteStreamClosedEventArgs_def.hpp"
#include "System/Net/zzzz__WriteStreamClosedEventHandler_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)()>(&::System::Net::WebClient::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xac4488c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_DownloadStringCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::DownloadStringCompletedEventHandler*)>(&::System::Net::WebClient::add_DownloadStringCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac449b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_DownloadStringCompleted", {}, {::i2c::type_of<::System::Net::DownloadStringCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_DownloadStringCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::DownloadStringCompletedEventHandler*)>(&::System::Net::WebClient::remove_DownloadStringCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_DownloadStringCompleted", {}, {::i2c::type_of<::System::Net::DownloadStringCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_DownloadDataCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::DownloadDataCompletedEventHandler*)>(&::System::Net::WebClient::add_DownloadDataCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_DownloadDataCompleted", {}, {::i2c::type_of<::System::Net::DownloadDataCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_DownloadDataCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::DownloadDataCompletedEventHandler*)>(&::System::Net::WebClient::remove_DownloadDataCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_DownloadDataCompleted", {}, {::i2c::type_of<::System::Net::DownloadDataCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_DownloadFileCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::ComponentModel::AsyncCompletedEventHandler*)>(&::System::Net::WebClient::add_DownloadFileCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_DownloadFileCompleted", {}, {::i2c::type_of<::System::ComponentModel::AsyncCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_DownloadFileCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::ComponentModel::AsyncCompletedEventHandler*)>(&::System::Net::WebClient::remove_DownloadFileCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_DownloadFileCompleted", {}, {::i2c::type_of<::System::ComponentModel::AsyncCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_UploadStringCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadStringCompletedEventHandler*)>(&::System::Net::WebClient::add_UploadStringCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadStringCompleted", {}, {::i2c::type_of<::System::Net::UploadStringCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_UploadStringCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadStringCompletedEventHandler*)>(&::System::Net::WebClient::remove_UploadStringCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadStringCompleted", {}, {::i2c::type_of<::System::Net::UploadStringCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_UploadDataCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadDataCompletedEventHandler*)>(&::System::Net::WebClient::add_UploadDataCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadDataCompleted", {}, {::i2c::type_of<::System::Net::UploadDataCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_UploadDataCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadDataCompletedEventHandler*)>(&::System::Net::WebClient::remove_UploadDataCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadDataCompleted", {}, {::i2c::type_of<::System::Net::UploadDataCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_UploadFileCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadFileCompletedEventHandler*)>(&::System::Net::WebClient::add_UploadFileCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac44fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadFileCompleted", {}, {::i2c::type_of<::System::Net::UploadFileCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_UploadFileCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadFileCompletedEventHandler*)>(&::System::Net::WebClient::remove_UploadFileCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac45068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadFileCompleted", {}, {::i2c::type_of<::System::Net::UploadFileCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_UploadValuesCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadValuesCompletedEventHandler*)>(&::System::Net::WebClient::add_UploadValuesCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac45104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadValuesCompleted", {}, {::i2c::type_of<::System::Net::UploadValuesCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_UploadValuesCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadValuesCompletedEventHandler*)>(&::System::Net::WebClient::remove_UploadValuesCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac451a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadValuesCompleted", {}, {::i2c::type_of<::System::Net::UploadValuesCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_OpenReadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::OpenReadCompletedEventHandler*)>(&::System::Net::WebClient::add_OpenReadCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac4523c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_OpenReadCompleted", {}, {::i2c::type_of<::System::Net::OpenReadCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_OpenReadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::OpenReadCompletedEventHandler*)>(&::System::Net::WebClient::remove_OpenReadCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac452d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_OpenReadCompleted", {}, {::i2c::type_of<::System::Net::OpenReadCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_OpenWriteCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::OpenWriteCompletedEventHandler*)>(&::System::Net::WebClient::add_OpenWriteCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac45374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_OpenWriteCompleted", {}, {::i2c::type_of<::System::Net::OpenWriteCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_OpenWriteCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::OpenWriteCompletedEventHandler*)>(&::System::Net::WebClient::remove_OpenWriteCompleted)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac45410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_OpenWriteCompleted", {}, {::i2c::type_of<::System::Net::OpenWriteCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_DownloadProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::DownloadProgressChangedEventHandler*)>(&::System::Net::WebClient::add_DownloadProgressChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac454ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_DownloadProgressChanged", {}, {::i2c::type_of<::System::Net::DownloadProgressChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_DownloadProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::DownloadProgressChangedEventHandler*)>(&::System::Net::WebClient::remove_DownloadProgressChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac45548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_DownloadProgressChanged", {}, {::i2c::type_of<::System::Net::DownloadProgressChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_UploadProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadProgressChangedEventHandler*)>(&::System::Net::WebClient::add_UploadProgressChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac455e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadProgressChanged", {}, {::i2c::type_of<::System::Net::UploadProgressChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_UploadProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadProgressChangedEventHandler*)>(&::System::Net::WebClient::remove_UploadProgressChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac45680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadProgressChanged", {}, {::i2c::type_of<::System::Net::UploadProgressChangedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnDownloadStringCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::DownloadStringCompletedEventArgs*)>(&::System::Net::WebClient::OnDownloadStringCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac4571c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnDownloadDataCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::DownloadDataCompletedEventArgs*)>(&::System::Net::WebClient::OnDownloadDataCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac45744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnDownloadFileCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::ComponentModel::AsyncCompletedEventArgs*)>(&::System::Net::WebClient::OnDownloadFileCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac4576c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnDownloadProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::DownloadProgressChangedEventArgs*)>(&::System::Net::WebClient::OnDownloadProgressChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac45794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnUploadStringCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadStringCompletedEventArgs*)>(&::System::Net::WebClient::OnUploadStringCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac457bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnUploadDataCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadDataCompletedEventArgs*)>(&::System::Net::WebClient::OnUploadDataCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac457e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnUploadFileCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadFileCompletedEventArgs*)>(&::System::Net::WebClient::OnUploadFileCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac4580c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnUploadValuesCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadValuesCompletedEventArgs*)>(&::System::Net::WebClient::OnUploadValuesCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac45834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnUploadProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::UploadProgressChangedEventArgs*)>(&::System::Net::WebClient::OnUploadProgressChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac4585c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnOpenReadCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::OpenReadCompletedEventArgs*)>(&::System::Net::WebClient::OnOpenReadCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac45884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnOpenWriteCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::OpenWriteCompletedEventArgs*)>(&::System::Net::WebClient::OnOpenWriteCompleted)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac458ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.StartOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)()>(&::System::Net::WebClient::StartOperation)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xac458d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"StartOperation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.StartAsyncOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ComponentModel::AsyncOperation* (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::StartAsyncOperation)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xac459bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"StartAsyncOperation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.EndOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)()>(&::System::Net::WebClient::EndOperation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac4599c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"EndOperation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_Encoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::Encoding* (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_Encoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac45d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_Encoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_Encoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Text::Encoding*)>(&::System::Net::WebClient::set_Encoding)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xac45d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_Encoding", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_BaseAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_BaseAddress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xac45e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_BaseAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_BaseAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::set_BaseAddress)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xac45ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_BaseAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4603c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_Credentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::ICredentials*)>(&::System::Net::WebClient::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac46044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xac4604c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_UseDefaultCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_UseDefaultCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(bool)>(&::System::Net::WebClient::set_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xac460b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_UseDefaultCredentials", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_Headers)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xac46128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_Headers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_Headers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::WebHeaderCollection*)>(&::System::Net::WebClient::set_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac461f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_Headers", {}, {::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_QueryString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameValueCollection* (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_QueryString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xac46200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_QueryString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_QueryString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::set_QueryString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac46270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_QueryString", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_ResponseHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_ResponseHeaders)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac46278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_ResponseHeaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_Proxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_Proxy)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xac46294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_Proxy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_Proxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::IWebProxy*)>(&::System::Net::WebClient::set_Proxy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xac46300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_Proxy", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_CachePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Cache::RequestCachePolicy* (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_CachePolicy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac46324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_CachePolicy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_CachePolicy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::Cache::RequestCachePolicy*)>(&::System::Net::WebClient::set_CachePolicy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac4632c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_CachePolicy", {}, {::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_IsBusy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_IsBusy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac4633c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_IsBusy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetWebRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebRequest* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::GetWebRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xac4634c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetWebResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebResponse* (::System::Net::WebClient::*)(::System::Net::WebRequest*)>(&::System::Net::WebClient::GetWebResponse)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xac46850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetWebResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebResponse* (::System::Net::WebClient::*)(::System::Net::WebRequest*, ::System::IAsyncResult*)>(&::System::Net::WebClient::GetWebResponse)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xac468a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetWebResponseTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* (::System::Net::WebClient::*)(::System::Net::WebRequest*)>(&::System::Net::WebClient::GetWebResponseTaskAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xac468f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetWebResponseTaskAsync", {}, {::i2c::type_of<::System::Net::WebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::DownloadData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac46a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::DownloadData)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xac46bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadData", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadDataInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Uri*, ::by_ref<::System::Net::WebRequest*>)>(&::System::Net::WebClient::DownloadDataInternal)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xac46cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataInternal", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Net::WebRequest*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::StringW, ::StringW)>(&::System::Net::WebClient::DownloadFile)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xac478bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::DownloadFile)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xac478e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFile", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::OpenRead)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac47d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenRead", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::OpenRead)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0xac47d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenRead", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::OpenWrite)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac48128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::OpenWrite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac48548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebClient::*)(::StringW, ::StringW)>(&::System::Net::WebClient::OpenWrite)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xac48550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::OpenWrite)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xac48148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::StringW, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadData)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac486e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Uri*, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac48884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadData", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::StringW, ::StringW, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac48890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadData)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xac48718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadData", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadDataInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::ArrayW<uint8_t>, ::by_ref<::System::Net::WebRequest*>)>(&::System::Net::WebClient::UploadDataInternal)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xac488c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataInternal", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Net::WebRequest*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenFileInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(bool, ::StringW, ::by_ref<::System::IO::FileStream*>, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<::ArrayW<uint8_t>>, ::by_ref<::ArrayW<uint8_t>>)>(&::System::Net::WebClient::OpenFileInternal)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0xac49184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenFileInternal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IO::FileStream*>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::StringW, ::StringW)>(&::System::Net::WebClient::UploadFile)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac498a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::UploadFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac498d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFile", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadFile)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac49d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadFile)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0xac498e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFile", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetValuesToUpload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::GetValuesToUpload)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xac49d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetValuesToUpload", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::StringW, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValues)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac4a0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValues", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Uri*, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValues)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac4a4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValues", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::StringW, ::StringW, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValues)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac4a500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValues", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValues)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0xac4a0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValues", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient::*)(::StringW, ::StringW)>(&::System::Net::WebClient::UploadString)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac4a534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::UploadString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac4a70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadString", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac4a718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xac4a564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadString", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::DownloadString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac4abac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::DownloadString)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xac4abc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadString", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.AbortRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Net::WebRequest*)>(&::System::Net::WebClient::AbortRequest)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xac47794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"AbortRequest", {}, {::i2c::type_of<::System::Net::WebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.CopyHeadersTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::WebRequest*)>(&::System::Net::WebClient::CopyHeadersTo)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0xac4646c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"CopyHeadersTo", {}, {::i2c::type_of<::System::Net::WebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::GetUri)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xac46a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::GetUri)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xac46f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetUri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Net::WebRequest*, ::System::IO::Stream*)>(&::System::Net::WebClient::DownloadBits)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0xac47250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadBits", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadBitsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::WebRequest*, ::System::IO::Stream*, ::System::ComponentModel::AsyncOperation*, ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*)>(&::System::Net::WebClient::DownloadBitsAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xac4ad10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadBitsAsync", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient::*)(::System::Net::WebRequest*, ::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadBits)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0xac48b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadBits", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadBitsAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::WebRequest*, ::System::IO::Stream*, ::ArrayW<uint8_t>, int32_t, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::System::ComponentModel::AsyncOperation*, ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*)>(&::System::Net::WebClient::UploadBitsAsync)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xac4ae20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadBitsAsync", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.ByteArrayHasPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::ByteArrayHasPrefix)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xac4af7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"ByteArrayHasPrefix", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetStringUsingEncoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient::*)(::System::Net::WebRequest*, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::GetStringUsingEncoding)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0xac4a74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetStringUsingEncoding", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.MapToDefaultMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::MapToDefaultMethod)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xac4857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"MapToDefaultMethod", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UrlEncode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Net::WebClient::UrlEncode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xac49ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UrlEncode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UrlEncodeBytesToBytesInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::System::Net::WebClient::UrlEncodeBytesToBytesInternal)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xac4aff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UrlEncodeBytesToBytesInternal", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.IntToHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::System::Net::WebClient::IntToHex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac4b368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"IntToHex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.IsSafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Net::WebClient::IsSafe)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xac4b2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"IsSafe", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.InvokeOperationCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::ComponentModel::AsyncOperation*, ::System::Threading::SendOrPostCallback*, ::System::ComponentModel::AsyncCompletedEventArgs*)>(&::System::Net::WebClient::InvokeOperationCompleted)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xac4b380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"InvokeOperationCompleted", {}, {::i2c::type_of<::System::ComponentModel::AsyncOperation*>(), ::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::ComponentModel::AsyncCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::OpenReadAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4b3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenReadAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenReadAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::System::Object*)>(&::System::Net::WebClient::OpenReadAsync)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xac4b400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenReadAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::OpenWriteAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac4b864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::OpenWriteAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4bbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWriteAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::System::Object*)>(&::System::Net::WebClient::OpenWriteAsync)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xac4b870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadStringAsyncCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::ArrayW<uint8_t>, ::System::Exception*, ::System::Object*)>(&::System::Net::WebClient::DownloadStringAsyncCallback)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xac4bc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringAsyncCallback", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::DownloadStringAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4be60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::System::Object*)>(&::System::Net::WebClient::DownloadStringAsync)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xac4be68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadDataAsyncCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::ArrayW<uint8_t>, ::System::Exception*, ::System::Object*)>(&::System::Net::WebClient::DownloadDataAsyncCallback)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xac4c0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataAsyncCallback", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::DownloadDataAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4c208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::System::Object*)>(&::System::Net::WebClient::DownloadDataAsync)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xac4c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadFileAsyncCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::ArrayW<uint8_t>, ::System::Exception*, ::System::Object*)>(&::System::Net::WebClient::DownloadFileAsyncCallback)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xac4c49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileAsyncCallback", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadFileAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::DownloadFileAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4c560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadFileAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::System::Object*)>(&::System::Net::WebClient::DownloadFileAsync)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xac4c568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::UploadStringAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac4c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadStringAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4cbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadStringAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::StringW, ::System::Object*)>(&::System::Net::WebClient::UploadStringAsync)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xac4c860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadDataAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac4cc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadDataAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4d004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadDataAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::ArrayW<uint8_t>, ::System::Object*)>(&::System::Net::WebClient::UploadDataAsync)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xac4cc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFileAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::UploadFileAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac4d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFileAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadFileAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4d4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFileAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::StringW, ::System::Object*)>(&::System::Net::WebClient::UploadFileAsync)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xac4d060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValuesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValuesAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xac4d508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValuesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValuesAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4d908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValuesAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::System::Collections::Specialized::NameValueCollection*, ::System::Object*)>(&::System::Net::WebClient::UploadValuesAsync)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0xac4d518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.GetExceptionToPropagate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::System::Exception*)>(&::System::Net::WebClient::GetExceptionToPropagate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xac4b744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetExceptionToPropagate", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.CancelAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)()>(&::System::Net::WebClient::CancelAsync)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xac4d954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"CancelAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadStringTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::DownloadStringTaskAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac4d9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringTaskAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadStringTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::DownloadStringTaskAsync)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xac4d9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringTaskAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenReadTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::OpenReadTaskAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac4dcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenReadTaskAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenReadTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::OpenReadTaskAsync)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xac4dcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenReadTaskAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWriteTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::OpenWriteTaskAsync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xac4e004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteTaskAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWriteTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::OpenWriteTaskAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4e22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteTaskAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWriteTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebClient::*)(::StringW, ::StringW)>(&::System::Net::WebClient::OpenWriteTaskAsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xac4e234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OpenWriteTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::IO::Stream*>* (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::OpenWriteTaskAsync)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xac4e024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadStringTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::Net::WebClient::*)(::StringW, ::StringW)>(&::System::Net::WebClient::UploadStringTaskAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac4e374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadStringTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::UploadStringTaskAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac4e3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadStringTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::Net::WebClient::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadStringTaskAsync)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac4e3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadStringTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadStringTaskAsync)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xac4e3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadDataTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::StringW)>(&::System::Net::WebClient::DownloadDataTaskAsync)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xac4e708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataTaskAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadDataTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::System::Uri*)>(&::System::Net::WebClient::DownloadDataTaskAsync)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xac4e724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataTaskAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadFileTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebClient::*)(::StringW, ::StringW)>(&::System::Net::WebClient::DownloadFileTaskAsync)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xac4ea30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.DownloadFileTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::DownloadFileTaskAsync)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xac4ea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadDataTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::StringW, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadDataTaskAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac4ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadDataTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::System::Uri*, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadDataTaskAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac4eeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadDataTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::StringW, ::StringW, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadDataTaskAsync)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac4eebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadDataTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::ArrayW<uint8_t>)>(&::System::Net::WebClient::UploadDataTaskAsync)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xac4eca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFileTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::StringW, ::StringW)>(&::System::Net::WebClient::UploadFileTaskAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac4f004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFileTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::System::Uri*, ::StringW)>(&::System::Net::WebClient::UploadFileTaskAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac4f244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFileTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::StringW, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadFileTaskAsync)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac4f250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadFileTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::StringW)>(&::System::Net::WebClient::UploadFileTaskAsync)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xac4f034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValuesTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::StringW, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValuesTaskAsync)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xac4f398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValuesTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::StringW, ::StringW, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValuesTaskAsync)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xac4f5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValuesTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::System::Uri*, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValuesTaskAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xac4f60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.UploadValuesTaskAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::System::Net::WebClient::*)(::System::Uri*, ::StringW, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Net::WebClient::UploadValuesTaskAsync)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xac4f3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.PostProgressChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::ComponentModel::AsyncOperation*, ::System::Net::WebClient_ProgressData*)>(&::System::Net::WebClient::PostProgressChanged)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xac4f72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"PostProgressChanged", {}, {::i2c::type_of<::System::ComponentModel::AsyncOperation*>(), ::i2c::type_of<::System::Net::WebClient_ProgressData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.ThrowIfNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::StringW)>(&::System::Net::WebClient::ThrowIfNull)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xac45df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"ThrowIfNull", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_AllowReadStreamBuffering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_AllowReadStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4f970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_AllowReadStreamBuffering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_AllowReadStreamBuffering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(bool)>(&::System::Net::WebClient::set_AllowReadStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4f978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_AllowReadStreamBuffering", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.get_AllowWriteStreamBuffering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebClient::*)()>(&::System::Net::WebClient::get_AllowWriteStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4f980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_AllowWriteStreamBuffering", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.set_AllowWriteStreamBuffering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(bool)>(&::System::Net::WebClient::set_AllowWriteStreamBuffering)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4f988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_AllowWriteStreamBuffering", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.add_WriteStreamClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::WriteStreamClosedEventHandler*)>(&::System::Net::WebClient::add_WriteStreamClosed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac4f990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_WriteStreamClosed", {}, {::i2c::type_of<::System::Net::WriteStreamClosedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.remove_WriteStreamClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::WriteStreamClosedEventHandler*)>(&::System::Net::WebClient::remove_WriteStreamClosed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac4f994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_WriteStreamClosed", {}, {::i2c::type_of<::System::Net::WriteStreamClosedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient.OnWriteStreamClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Net::WriteStreamClosedEventArgs*)>(&::System::Net::WebClient::OnWriteStreamClosed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xac4f998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {::i2c::class_of<::System::Net::WebClient*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac4fb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac4fc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_2)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac4fca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_3)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac4fd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_3", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_4)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac4fdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_4", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_5)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac4fe58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_5", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_6)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac4fee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_6", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_7)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac4ff78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_7", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_8)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac50008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_8", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_9)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac50098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_9", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._StartAsyncOperation_b__78_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::System::Object*)>(&::System::Net::WebClient::_StartAsyncOperation_b__78_10)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xac50128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_10", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient._UploadStringAsync_b__179_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient::*)(::ArrayW<uint8_t>, ::System::Exception*, ::System::ComponentModel::AsyncOperation*)>(&::System::Net::WebClient::_UploadStringAsync_b__179_0)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xac501b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<UploadStringAsync>b__179_0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Uri*& System::Net::WebClient::__cordl_internal_get__baseAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseAddress;
}
constexpr ::System::Uri* const& System::Net::WebClient::__cordl_internal_get__baseAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseAddress;
}
constexpr void System::Net::WebClient::__cordl_internal_set__baseAddress(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseAddress = value;
}
constexpr ::System::Net::ICredentials*& System::Net::WebClient::__cordl_internal_get__credentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentials;
}
constexpr ::System::Net::ICredentials* const& System::Net::WebClient::__cordl_internal_get__credentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentials;
}
constexpr void System::Net::WebClient::__cordl_internal_set__credentials(::System::Net::ICredentials*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____credentials = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::WebClient::__cordl_internal_get__headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headers;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::WebClient::__cordl_internal_get__headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headers;
}
constexpr void System::Net::WebClient::__cordl_internal_set__headers(::System::Net::WebHeaderCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headers = value;
}
constexpr ::System::Collections::Specialized::NameValueCollection*& System::Net::WebClient::__cordl_internal_get__requestParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestParameters;
}
constexpr ::System::Collections::Specialized::NameValueCollection* const& System::Net::WebClient::__cordl_internal_get__requestParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestParameters;
}
constexpr void System::Net::WebClient::__cordl_internal_set__requestParameters(::System::Collections::Specialized::NameValueCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestParameters = value;
}
constexpr ::System::Net::WebResponse*& System::Net::WebClient::__cordl_internal_get__webResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webResponse;
}
constexpr ::System::Net::WebResponse* const& System::Net::WebClient::__cordl_internal_get__webResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webResponse;
}
constexpr void System::Net::WebClient::__cordl_internal_set__webResponse(::System::Net::WebResponse*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webResponse = value;
}
constexpr ::System::Net::WebRequest*& System::Net::WebClient::__cordl_internal_get__webRequest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webRequest;
}
constexpr ::System::Net::WebRequest* const& System::Net::WebClient::__cordl_internal_get__webRequest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webRequest;
}
constexpr void System::Net::WebClient::__cordl_internal_set__webRequest(::System::Net::WebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webRequest = value;
}
constexpr ::System::Text::Encoding*& System::Net::WebClient::__cordl_internal_get__encoding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr ::System::Text::Encoding* const& System::Net::WebClient::__cordl_internal_get__encoding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoding;
}
constexpr void System::Net::WebClient::__cordl_internal_set__encoding(::System::Text::Encoding*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoding = value;
}
constexpr ::StringW& System::Net::WebClient::__cordl_internal_get__method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____method;
}
constexpr ::StringW const& System::Net::WebClient::__cordl_internal_get__method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____method;
}
constexpr void System::Net::WebClient::__cordl_internal_set__method(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____method = value;
}
constexpr int64_t& System::Net::WebClient::__cordl_internal_get__contentLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentLength;
}
constexpr int64_t const& System::Net::WebClient::__cordl_internal_get__contentLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentLength;
}
constexpr void System::Net::WebClient::__cordl_internal_set__contentLength(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contentLength = value;
}
constexpr bool& System::Net::WebClient::__cordl_internal_get__initWebClientAsync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initWebClientAsync;
}
constexpr bool const& System::Net::WebClient::__cordl_internal_get__initWebClientAsync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initWebClientAsync;
}
constexpr void System::Net::WebClient::__cordl_internal_set__initWebClientAsync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initWebClientAsync = value;
}
constexpr bool& System::Net::WebClient::__cordl_internal_get__canceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled;
}
constexpr bool const& System::Net::WebClient::__cordl_internal_get__canceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canceled;
}
constexpr void System::Net::WebClient::__cordl_internal_set__canceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canceled = value;
}
constexpr ::System::Net::WebClient_ProgressData*& System::Net::WebClient::__cordl_internal_get__progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr ::System::Net::WebClient_ProgressData* const& System::Net::WebClient::__cordl_internal_get__progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progress;
}
constexpr void System::Net::WebClient::__cordl_internal_set__progress(::System::Net::WebClient_ProgressData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progress = value;
}
constexpr ::System::Net::IWebProxy*& System::Net::WebClient::__cordl_internal_get__proxy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr ::System::Net::IWebProxy* const& System::Net::WebClient::__cordl_internal_get__proxy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxy;
}
constexpr void System::Net::WebClient::__cordl_internal_set__proxy(::System::Net::IWebProxy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____proxy = value;
}
constexpr bool& System::Net::WebClient::__cordl_internal_get__proxySet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxySet;
}
constexpr bool const& System::Net::WebClient::__cordl_internal_get__proxySet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxySet;
}
constexpr void System::Net::WebClient::__cordl_internal_set__proxySet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____proxySet = value;
}
constexpr int32_t& System::Net::WebClient::__cordl_internal_get__callNesting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callNesting;
}
constexpr int32_t const& System::Net::WebClient::__cordl_internal_get__callNesting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callNesting;
}
constexpr void System::Net::WebClient::__cordl_internal_set__callNesting(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callNesting = value;
}
constexpr ::System::ComponentModel::AsyncOperation*& System::Net::WebClient::__cordl_internal_get__asyncOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncOp;
}
constexpr ::System::ComponentModel::AsyncOperation* const& System::Net::WebClient::__cordl_internal_get__asyncOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____asyncOp;
}
constexpr void System::Net::WebClient::__cordl_internal_set__asyncOp(::System::ComponentModel::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____asyncOp = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__downloadDataOperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadDataOperationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__downloadDataOperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadDataOperationCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set__downloadDataOperationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____downloadDataOperationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__openReadOperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openReadOperationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__openReadOperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openReadOperationCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set__openReadOperationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openReadOperationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__openWriteOperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openWriteOperationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__openWriteOperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openWriteOperationCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set__openWriteOperationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openWriteOperationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__downloadStringOperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadStringOperationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__downloadStringOperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadStringOperationCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set__downloadStringOperationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____downloadStringOperationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__downloadFileOperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadFileOperationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__downloadFileOperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadFileOperationCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set__downloadFileOperationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____downloadFileOperationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__uploadStringOperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadStringOperationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__uploadStringOperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadStringOperationCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set__uploadStringOperationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uploadStringOperationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__uploadDataOperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadDataOperationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__uploadDataOperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadDataOperationCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set__uploadDataOperationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uploadDataOperationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__uploadFileOperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadFileOperationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__uploadFileOperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadFileOperationCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set__uploadFileOperationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uploadFileOperationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__uploadValuesOperationCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadValuesOperationCompleted;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__uploadValuesOperationCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadValuesOperationCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set__uploadValuesOperationCompleted(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uploadValuesOperationCompleted = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__reportDownloadProgressChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportDownloadProgressChanged;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__reportDownloadProgressChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportDownloadProgressChanged;
}
constexpr void System::Net::WebClient::__cordl_internal_set__reportDownloadProgressChanged(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reportDownloadProgressChanged = value;
}
constexpr ::System::Threading::SendOrPostCallback*& System::Net::WebClient::__cordl_internal_get__reportUploadProgressChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportUploadProgressChanged;
}
constexpr ::System::Threading::SendOrPostCallback* const& System::Net::WebClient::__cordl_internal_get__reportUploadProgressChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reportUploadProgressChanged;
}
constexpr void System::Net::WebClient::__cordl_internal_set__reportUploadProgressChanged(::System::Threading::SendOrPostCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reportUploadProgressChanged = value;
}
constexpr ::System::Net::DownloadStringCompletedEventHandler*& System::Net::WebClient::__cordl_internal_get_DownloadStringCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadStringCompleted;
}
constexpr ::System::Net::DownloadStringCompletedEventHandler* const& System::Net::WebClient::__cordl_internal_get_DownloadStringCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadStringCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set_DownloadStringCompleted(::System::Net::DownloadStringCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DownloadStringCompleted = value;
}
constexpr ::System::Net::DownloadDataCompletedEventHandler*& System::Net::WebClient::__cordl_internal_get_DownloadDataCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadDataCompleted;
}
constexpr ::System::Net::DownloadDataCompletedEventHandler* const& System::Net::WebClient::__cordl_internal_get_DownloadDataCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadDataCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set_DownloadDataCompleted(::System::Net::DownloadDataCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DownloadDataCompleted = value;
}
constexpr ::System::ComponentModel::AsyncCompletedEventHandler*& System::Net::WebClient::__cordl_internal_get_DownloadFileCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadFileCompleted;
}
constexpr ::System::ComponentModel::AsyncCompletedEventHandler* const& System::Net::WebClient::__cordl_internal_get_DownloadFileCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadFileCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set_DownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DownloadFileCompleted = value;
}
constexpr ::System::Net::UploadStringCompletedEventHandler*& System::Net::WebClient::__cordl_internal_get_UploadStringCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadStringCompleted;
}
constexpr ::System::Net::UploadStringCompletedEventHandler* const& System::Net::WebClient::__cordl_internal_get_UploadStringCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadStringCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set_UploadStringCompleted(::System::Net::UploadStringCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UploadStringCompleted = value;
}
constexpr ::System::Net::UploadDataCompletedEventHandler*& System::Net::WebClient::__cordl_internal_get_UploadDataCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadDataCompleted;
}
constexpr ::System::Net::UploadDataCompletedEventHandler* const& System::Net::WebClient::__cordl_internal_get_UploadDataCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadDataCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set_UploadDataCompleted(::System::Net::UploadDataCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UploadDataCompleted = value;
}
constexpr ::System::Net::UploadFileCompletedEventHandler*& System::Net::WebClient::__cordl_internal_get_UploadFileCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadFileCompleted;
}
constexpr ::System::Net::UploadFileCompletedEventHandler* const& System::Net::WebClient::__cordl_internal_get_UploadFileCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadFileCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set_UploadFileCompleted(::System::Net::UploadFileCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UploadFileCompleted = value;
}
constexpr ::System::Net::UploadValuesCompletedEventHandler*& System::Net::WebClient::__cordl_internal_get_UploadValuesCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadValuesCompleted;
}
constexpr ::System::Net::UploadValuesCompletedEventHandler* const& System::Net::WebClient::__cordl_internal_get_UploadValuesCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadValuesCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set_UploadValuesCompleted(::System::Net::UploadValuesCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UploadValuesCompleted = value;
}
constexpr ::System::Net::OpenReadCompletedEventHandler*& System::Net::WebClient::__cordl_internal_get_OpenReadCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenReadCompleted;
}
constexpr ::System::Net::OpenReadCompletedEventHandler* const& System::Net::WebClient::__cordl_internal_get_OpenReadCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenReadCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set_OpenReadCompleted(::System::Net::OpenReadCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OpenReadCompleted = value;
}
constexpr ::System::Net::OpenWriteCompletedEventHandler*& System::Net::WebClient::__cordl_internal_get_OpenWriteCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenWriteCompleted;
}
constexpr ::System::Net::OpenWriteCompletedEventHandler* const& System::Net::WebClient::__cordl_internal_get_OpenWriteCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenWriteCompleted;
}
constexpr void System::Net::WebClient::__cordl_internal_set_OpenWriteCompleted(::System::Net::OpenWriteCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OpenWriteCompleted = value;
}
constexpr ::System::Net::DownloadProgressChangedEventHandler*& System::Net::WebClient::__cordl_internal_get_DownloadProgressChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadProgressChanged;
}
constexpr ::System::Net::DownloadProgressChangedEventHandler* const& System::Net::WebClient::__cordl_internal_get_DownloadProgressChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DownloadProgressChanged;
}
constexpr void System::Net::WebClient::__cordl_internal_set_DownloadProgressChanged(::System::Net::DownloadProgressChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DownloadProgressChanged = value;
}
constexpr ::System::Net::UploadProgressChangedEventHandler*& System::Net::WebClient::__cordl_internal_get_UploadProgressChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadProgressChanged;
}
constexpr ::System::Net::UploadProgressChangedEventHandler* const& System::Net::WebClient::__cordl_internal_get_UploadProgressChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UploadProgressChanged;
}
constexpr void System::Net::WebClient::__cordl_internal_set_UploadProgressChanged(::System::Net::UploadProgressChangedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UploadProgressChanged = value;
}
constexpr ::System::Net::Cache::RequestCachePolicy*& System::Net::WebClient::__cordl_internal_get__CachePolicy_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachePolicy_k__BackingField;
}
constexpr ::System::Net::Cache::RequestCachePolicy* const& System::Net::WebClient::__cordl_internal_get__CachePolicy_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CachePolicy_k__BackingField;
}
constexpr void System::Net::WebClient::__cordl_internal_set__CachePolicy_k__BackingField(::System::Net::Cache::RequestCachePolicy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CachePolicy_k__BackingField = value;
}
constexpr bool& System::Net::WebClient::__cordl_internal_get__AllowReadStreamBuffering_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowReadStreamBuffering_k__BackingField;
}
constexpr bool const& System::Net::WebClient::__cordl_internal_get__AllowReadStreamBuffering_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowReadStreamBuffering_k__BackingField;
}
constexpr void System::Net::WebClient::__cordl_internal_set__AllowReadStreamBuffering_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowReadStreamBuffering_k__BackingField = value;
}
constexpr bool& System::Net::WebClient::__cordl_internal_get__AllowWriteStreamBuffering_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowWriteStreamBuffering_k__BackingField;
}
constexpr bool const& System::Net::WebClient::__cordl_internal_get__AllowWriteStreamBuffering_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllowWriteStreamBuffering_k__BackingField;
}
constexpr void System::Net::WebClient::__cordl_internal_set__AllowWriteStreamBuffering_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllowWriteStreamBuffering_k__BackingField = value;
}
inline void System::Net::WebClient::setStaticF_s_parseContentTypeSeparators(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_parseContentTypeSeparators", ::System::Net::WebClient*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Net::WebClient::getStaticF_s_parseContentTypeSeparators()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_parseContentTypeSeparators", ::System::Net::WebClient*>();
}
inline void System::Net::WebClient::setStaticF_s_knownEncodings(::ArrayW<::System::Text::Encoding*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Text::Encoding*>, "s_knownEncodings", ::System::Net::WebClient*>(std::forward<::ArrayW<::System::Text::Encoding*>>(value));
}
inline ::ArrayW<::System::Text::Encoding*> System::Net::WebClient::getStaticF_s_knownEncodings()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Text::Encoding*>, "s_knownEncodings", ::System::Net::WebClient*>();
}
inline void System::Net::WebClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient::add_DownloadStringCompleted(::System::Net::DownloadStringCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_DownloadStringCompleted", {}, {::i2c::type_of<::System::Net::DownloadStringCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_DownloadStringCompleted(::System::Net::DownloadStringCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_DownloadStringCompleted", {}, {::i2c::type_of<::System::Net::DownloadStringCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_DownloadDataCompleted(::System::Net::DownloadDataCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_DownloadDataCompleted", {}, {::i2c::type_of<::System::Net::DownloadDataCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_DownloadDataCompleted(::System::Net::DownloadDataCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_DownloadDataCompleted", {}, {::i2c::type_of<::System::Net::DownloadDataCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_DownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_DownloadFileCompleted", {}, {::i2c::type_of<::System::ComponentModel::AsyncCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_DownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_DownloadFileCompleted", {}, {::i2c::type_of<::System::ComponentModel::AsyncCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_UploadStringCompleted(::System::Net::UploadStringCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadStringCompleted", {}, {::i2c::type_of<::System::Net::UploadStringCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_UploadStringCompleted(::System::Net::UploadStringCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadStringCompleted", {}, {::i2c::type_of<::System::Net::UploadStringCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_UploadDataCompleted(::System::Net::UploadDataCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadDataCompleted", {}, {::i2c::type_of<::System::Net::UploadDataCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_UploadDataCompleted(::System::Net::UploadDataCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadDataCompleted", {}, {::i2c::type_of<::System::Net::UploadDataCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_UploadFileCompleted(::System::Net::UploadFileCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadFileCompleted", {}, {::i2c::type_of<::System::Net::UploadFileCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_UploadFileCompleted(::System::Net::UploadFileCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadFileCompleted", {}, {::i2c::type_of<::System::Net::UploadFileCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_UploadValuesCompleted(::System::Net::UploadValuesCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadValuesCompleted", {}, {::i2c::type_of<::System::Net::UploadValuesCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_UploadValuesCompleted(::System::Net::UploadValuesCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadValuesCompleted", {}, {::i2c::type_of<::System::Net::UploadValuesCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_OpenReadCompleted(::System::Net::OpenReadCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_OpenReadCompleted", {}, {::i2c::type_of<::System::Net::OpenReadCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_OpenReadCompleted(::System::Net::OpenReadCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_OpenReadCompleted", {}, {::i2c::type_of<::System::Net::OpenReadCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_OpenWriteCompleted(::System::Net::OpenWriteCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_OpenWriteCompleted", {}, {::i2c::type_of<::System::Net::OpenWriteCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_OpenWriteCompleted(::System::Net::OpenWriteCompletedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_OpenWriteCompleted", {}, {::i2c::type_of<::System::Net::OpenWriteCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_DownloadProgressChanged(::System::Net::DownloadProgressChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_DownloadProgressChanged", {}, {::i2c::type_of<::System::Net::DownloadProgressChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_DownloadProgressChanged(::System::Net::DownloadProgressChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_DownloadProgressChanged", {}, {::i2c::type_of<::System::Net::DownloadProgressChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_UploadProgressChanged(::System::Net::UploadProgressChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_UploadProgressChanged", {}, {::i2c::type_of<::System::Net::UploadProgressChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_UploadProgressChanged(::System::Net::UploadProgressChangedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_UploadProgressChanged", {}, {::i2c::type_of<::System::Net::UploadProgressChangedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::OnDownloadStringCompleted(::System::Net::DownloadStringCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnDownloadDataCompleted(::System::Net::DownloadDataCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnDownloadFileCompleted(::System::ComponentModel::AsyncCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnDownloadProgressChanged(::System::Net::DownloadProgressChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnUploadStringCompleted(::System::Net::UploadStringCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnUploadDataCompleted(::System::Net::UploadDataCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnUploadFileCompleted(::System::Net::UploadFileCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnUploadValuesCompleted(::System::Net::UploadValuesCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnUploadProgressChanged(::System::Net::UploadProgressChangedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnOpenReadCompleted(::System::Net::OpenReadCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::OnOpenWriteCompleted(::System::Net::OpenWriteCompletedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::StartOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"StartOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ComponentModel::AsyncOperation* System::Net::WebClient::StartAsyncOperation(::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"StartAsyncOperation", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::AsyncOperation*>(this, ___internal_method, userToken);
}
inline void System::Net::WebClient::EndOperation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"EndOperation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Text::Encoding* System::Net::WebClient::get_Encoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_Encoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoding*>(this, ___internal_method);
}
inline void System::Net::WebClient::set_Encoding(::System::Text::Encoding*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_Encoding", {}, {::i2c::type_of<::System::Text::Encoding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::WebClient::get_BaseAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_BaseAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::WebClient::set_BaseAddress(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_BaseAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ICredentials* System::Net::WebClient::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_Credentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
inline void System::Net::WebClient::set_Credentials(::System::Net::ICredentials*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebClient::get_UseDefaultCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_UseDefaultCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebClient::set_UseDefaultCredentials(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_UseDefaultCredentials", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebClient::get_Headers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_Headers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline void System::Net::WebClient::set_Headers(::System::Net::WebHeaderCollection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_Headers", {}, {::i2c::type_of<::System::Net::WebHeaderCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Net::WebClient::get_QueryString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_QueryString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*>(this, ___internal_method);
}
inline void System::Net::WebClient::set_QueryString(::System::Collections::Specialized::NameValueCollection*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_QueryString", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::WebClient::get_ResponseHeaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_ResponseHeaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline ::System::Net::IWebProxy* System::Net::WebClient::get_Proxy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_Proxy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(this, ___internal_method);
}
inline void System::Net::WebClient::set_Proxy(::System::Net::IWebProxy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_Proxy", {}, {::i2c::type_of<::System::Net::IWebProxy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Cache::RequestCachePolicy* System::Net::WebClient::get_CachePolicy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_CachePolicy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cache::RequestCachePolicy*>(this, ___internal_method);
}
inline void System::Net::WebClient::set_CachePolicy(::System::Net::Cache::RequestCachePolicy*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_CachePolicy", {}, {::i2c::type_of<::System::Net::Cache::RequestCachePolicy*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebClient::get_IsBusy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_IsBusy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::WebRequest* System::Net::WebClient::GetWebRequest(::System::Uri*  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebRequest*>(this, ___internal_method, address);
}
inline ::System::Net::WebResponse* System::Net::WebClient::GetWebResponse(::System::Net::WebRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*>(this, ___internal_method, request);
}
inline ::System::Net::WebResponse* System::Net::WebClient::GetWebResponse(::System::Net::WebRequest*  request, ::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*>(this, ___internal_method, request, result);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>* System::Net::WebClient::GetWebResponseTaskAsync(::System::Net::WebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetWebResponseTaskAsync", {}, {::i2c::type_of<::System::Net::WebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebResponse*>*>(this, ___internal_method, request);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::DownloadData(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::DownloadData(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadData", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::DownloadDataInternal(::System::Uri*  address, ::by_ref<::System::Net::WebRequest*>  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataInternal", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::by_ref<::System::Net::WebRequest*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, request);
}
inline void System::Net::WebClient::DownloadFile(::StringW  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, fileName);
}
inline void System::Net::WebClient::DownloadFile(::System::Uri*  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFile", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, fileName);
}
inline ::System::IO::Stream* System::Net::WebClient::OpenRead(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenRead", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, address);
}
inline ::System::IO::Stream* System::Net::WebClient::OpenRead(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenRead", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, address);
}
inline ::System::IO::Stream* System::Net::WebClient::OpenWrite(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, address);
}
inline ::System::IO::Stream* System::Net::WebClient::OpenWrite(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, address);
}
inline ::System::IO::Stream* System::Net::WebClient::OpenWrite(::StringW  address, ::StringW  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, address, method);
}
inline ::System::IO::Stream* System::Net::WebClient::OpenWrite(::System::Uri*  address, ::StringW  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWrite", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, address, method);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadData(::StringW  address, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, data);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadData(::System::Uri*  address, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadData", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, data);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadData(::StringW  address, ::StringW  method, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, method, data);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadData(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadData", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, method, data);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadDataInternal(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data, ::by_ref<::System::Net::WebRequest*>  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataInternal", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Net::WebRequest*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, method, data, request);
}
inline void System::Net::WebClient::OpenFileInternal(bool  needsHeaderAndBoundary, ::StringW  fileName, ::by_ref<::System::IO::FileStream*>  fs, ::by_ref<::ArrayW<uint8_t>>  buffer, ::by_ref<::ArrayW<uint8_t>>  formHeaderBytes, ::by_ref<::ArrayW<uint8_t>>  boundaryBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenFileInternal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::IO::FileStream*>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, needsHeaderAndBoundary, fileName, fs, buffer, formHeaderBytes, boundaryBytes);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadFile(::StringW  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, fileName);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadFile(::System::Uri*  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFile", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, fileName);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadFile(::StringW  address, ::StringW  method, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, method, fileName);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadFile(::System::Uri*  address, ::StringW  method, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFile", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, method, fileName);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::GetValuesToUpload(::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetValuesToUpload", {}, {::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadValues(::StringW  address, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValues", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, data);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadValues(::System::Uri*  address, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValues", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, data);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadValues(::StringW  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValues", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, method, data);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadValues(::System::Uri*  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValues", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, address, method, data);
}
inline ::StringW System::Net::WebClient::UploadString(::StringW  address, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address, data);
}
inline ::StringW System::Net::WebClient::UploadString(::System::Uri*  address, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadString", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address, data);
}
inline ::StringW System::Net::WebClient::UploadString(::StringW  address, ::StringW  method, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address, method, data);
}
inline ::StringW System::Net::WebClient::UploadString(::System::Uri*  address, ::StringW  method, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadString", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address, method, data);
}
inline ::StringW System::Net::WebClient::DownloadString(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address);
}
inline ::StringW System::Net::WebClient::DownloadString(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadString", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address);
}
inline void System::Net::WebClient::AbortRequest(::System::Net::WebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"AbortRequest", {}, {::i2c::type_of<::System::Net::WebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request);
}
inline void System::Net::WebClient::CopyHeadersTo(::System::Net::WebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"CopyHeadersTo", {}, {::i2c::type_of<::System::Net::WebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::System::Uri* System::Net::WebClient::GetUri(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetUri", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, address);
}
inline ::System::Uri* System::Net::WebClient::GetUri(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetUri", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, address);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::DownloadBits(::System::Net::WebRequest*  request, ::System::IO::Stream*  writeStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadBits", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, request, writeStream);
}
inline void System::Net::WebClient::DownloadBitsAsync(::System::Net::WebRequest*  request, ::System::IO::Stream*  writeStream, ::System::ComponentModel::AsyncOperation*  asyncOp, ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadBitsAsync", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, writeStream, asyncOp, completionDelegate);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UploadBits(::System::Net::WebRequest*  request, ::System::IO::Stream*  readStream, ::ArrayW<uint8_t>  buffer, int32_t  chunkSize, ::ArrayW<uint8_t>  header, ::ArrayW<uint8_t>  footer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadBits", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, request, readStream, buffer, chunkSize, header, footer);
}
inline void System::Net::WebClient::UploadBitsAsync(::System::Net::WebRequest*  request, ::System::IO::Stream*  readStream, ::ArrayW<uint8_t>  buffer, int32_t  chunkSize, ::ArrayW<uint8_t>  header, ::ArrayW<uint8_t>  footer, ::System::ComponentModel::AsyncOperation*  asyncOp, ::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadBitsAsync", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>(), ::i2c::type_of<::System::Action_3<::ArrayW<uint8_t>,::System::Exception*,::System::ComponentModel::AsyncOperation*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, readStream, buffer, chunkSize, header, footer, asyncOp, completionDelegate);
}
inline bool System::Net::WebClient::ByteArrayHasPrefix(::ArrayW<uint8_t>  prefix, ::ArrayW<uint8_t>  byteArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"ByteArrayHasPrefix", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, prefix, byteArray);
}
inline ::StringW System::Net::WebClient::GetStringUsingEncoding(::System::Net::WebRequest*  request, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetStringUsingEncoding", {}, {::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, request, data);
}
inline ::StringW System::Net::WebClient::MapToDefaultMethod(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"MapToDefaultMethod", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, address);
}
inline ::StringW System::Net::WebClient::UrlEncode(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UrlEncode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline ::ArrayW<uint8_t> System::Net::WebClient::UrlEncodeBytesToBytesInternal(::ArrayW<uint8_t>  bytes, int32_t  offset, int32_t  count, bool  alwaysCreateReturnValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UrlEncodeBytesToBytesInternal", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, bytes, offset, count, alwaysCreateReturnValue);
}
inline char16_t System::Net::WebClient::IntToHex(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"IntToHex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, n);
}
inline bool System::Net::WebClient::IsSafe(char16_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"IsSafe", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline void System::Net::WebClient::InvokeOperationCompleted(::System::ComponentModel::AsyncOperation*  asyncOp, ::System::Threading::SendOrPostCallback*  callback, ::System::ComponentModel::AsyncCompletedEventArgs*  eventArgs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"InvokeOperationCompleted", {}, {::i2c::type_of<::System::ComponentModel::AsyncOperation*>(), ::i2c::type_of<::System::Threading::SendOrPostCallback*>(), ::i2c::type_of<::System::ComponentModel::AsyncCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOp, callback, eventArgs);
}
inline void System::Net::WebClient::OpenReadAsync(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenReadAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void System::Net::WebClient::OpenReadAsync(::System::Uri*  address, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenReadAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, userToken);
}
inline void System::Net::WebClient::OpenWriteAsync(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void System::Net::WebClient::OpenWriteAsync(::System::Uri*  address, ::StringW  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method);
}
inline void System::Net::WebClient::OpenWriteAsync(::System::Uri*  address, ::StringW  method, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method, userToken);
}
inline void System::Net::WebClient::DownloadStringAsyncCallback(::ArrayW<uint8_t>  returnBytes, ::System::Exception*  exception, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringAsyncCallback", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnBytes, exception, state);
}
inline void System::Net::WebClient::DownloadStringAsync(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void System::Net::WebClient::DownloadStringAsync(::System::Uri*  address, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, userToken);
}
inline void System::Net::WebClient::DownloadDataAsyncCallback(::ArrayW<uint8_t>  returnBytes, ::System::Exception*  exception, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataAsyncCallback", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnBytes, exception, state);
}
inline void System::Net::WebClient::DownloadDataAsync(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void System::Net::WebClient::DownloadDataAsync(::System::Uri*  address, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, userToken);
}
inline void System::Net::WebClient::DownloadFileAsyncCallback(::ArrayW<uint8_t>  returnBytes, ::System::Exception*  exception, ::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileAsyncCallback", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnBytes, exception, state);
}
inline void System::Net::WebClient::DownloadFileAsync(::System::Uri*  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, fileName);
}
inline void System::Net::WebClient::DownloadFileAsync(::System::Uri*  address, ::StringW  fileName, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, fileName, userToken);
}
inline void System::Net::WebClient::UploadStringAsync(::System::Uri*  address, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, data);
}
inline void System::Net::WebClient::UploadStringAsync(::System::Uri*  address, ::StringW  method, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method, data);
}
inline void System::Net::WebClient::UploadStringAsync(::System::Uri*  address, ::StringW  method, ::StringW  data, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method, data, userToken);
}
inline void System::Net::WebClient::UploadDataAsync(::System::Uri*  address, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, data);
}
inline void System::Net::WebClient::UploadDataAsync(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method, data);
}
inline void System::Net::WebClient::UploadDataAsync(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method, data, userToken);
}
inline void System::Net::WebClient::UploadFileAsync(::System::Uri*  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, fileName);
}
inline void System::Net::WebClient::UploadFileAsync(::System::Uri*  address, ::StringW  method, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method, fileName);
}
inline void System::Net::WebClient::UploadFileAsync(::System::Uri*  address, ::StringW  method, ::StringW  fileName, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method, fileName, userToken);
}
inline void System::Net::WebClient::UploadValuesAsync(::System::Uri*  address, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, data);
}
inline void System::Net::WebClient::UploadValuesAsync(::System::Uri*  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method, data);
}
inline void System::Net::WebClient::UploadValuesAsync(::System::Uri*  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data, ::System::Object*  userToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, method, data, userToken);
}
inline ::System::Exception* System::Net::WebClient::GetExceptionToPropagate(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"GetExceptionToPropagate", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, e);
}
inline void System::Net::WebClient::CancelAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"CancelAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::WebClient::DownloadStringTaskAsync(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringTaskAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, address);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::WebClient::DownloadStringTaskAsync(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadStringTaskAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, address);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebClient::OpenReadTaskAsync(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenReadTaskAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, address);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebClient::OpenReadTaskAsync(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenReadTaskAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, address);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebClient::OpenWriteTaskAsync(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteTaskAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, address);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebClient::OpenWriteTaskAsync(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteTaskAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, address);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebClient::OpenWriteTaskAsync(::StringW  address, ::StringW  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, address, method);
}
inline ::System::Threading::Tasks::Task_1<::System::IO::Stream*>* System::Net::WebClient::OpenWriteTaskAsync(::System::Uri*  address, ::StringW  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"OpenWriteTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::IO::Stream*>*>(this, ___internal_method, address, method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::WebClient::UploadStringTaskAsync(::StringW  address, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, address, data);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::WebClient::UploadStringTaskAsync(::System::Uri*  address, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, address, data);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::WebClient::UploadStringTaskAsync(::StringW  address, ::StringW  method, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, address, method, data);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* System::Net::WebClient::UploadStringTaskAsync(::System::Uri*  address, ::StringW  method, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadStringTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, address, method, data);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::DownloadDataTaskAsync(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataTaskAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::DownloadDataTaskAsync(::System::Uri*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadDataTaskAsync", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address);
}
inline ::System::Threading::Tasks::Task* System::Net::WebClient::DownloadFileTaskAsync(::StringW  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, address, fileName);
}
inline ::System::Threading::Tasks::Task* System::Net::WebClient::DownloadFileTaskAsync(::System::Uri*  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"DownloadFileTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, address, fileName);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadDataTaskAsync(::StringW  address, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, data);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadDataTaskAsync(::System::Uri*  address, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, data);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadDataTaskAsync(::StringW  address, ::StringW  method, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, method, data);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadDataTaskAsync(::System::Uri*  address, ::StringW  method, ::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadDataTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, method, data);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadFileTaskAsync(::StringW  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, fileName);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadFileTaskAsync(::System::Uri*  address, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, fileName);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadFileTaskAsync(::StringW  address, ::StringW  method, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, method, fileName);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadFileTaskAsync(::System::Uri*  address, ::StringW  method, ::StringW  fileName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadFileTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, method, fileName);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadValuesTaskAsync(::StringW  address, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, data);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadValuesTaskAsync(::StringW  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesTaskAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, method, data);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadValuesTaskAsync(::System::Uri*  address, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, data);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* System::Net::WebClient::UploadValuesTaskAsync(::System::Uri*  address, ::StringW  method, ::System::Collections::Specialized::NameValueCollection*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"UploadValuesTaskAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Specialized::NameValueCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, address, method, data);
}
template<typename TAsyncCompletedEventArgs,typename TCompletionDelegate,typename T>
requires(::cordl_internals::type_constraint<TAsyncCompletedEventArgs, ::System::ComponentModel::AsyncCompletedEventArgs*>)
inline void System::Net::WebClient::HandleCompletion(::System::Threading::Tasks::TaskCompletionSource_1<T>*  tcs, TAsyncCompletedEventArgs  e, ::System::Func_2<TAsyncCompletedEventArgs,T>*  getResult, TCompletionDelegate  handler, ::System::Action_2<::System::Net::WebClient*,TCompletionDelegate>*  unregisterHandler)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient*>(),
                    {"HandleCompletion", {::i2c::class_of<TAsyncCompletedEventArgs>(), ::i2c::class_of<TCompletionDelegate>(), ::i2c::class_of<T>()}, {::i2c::type_of<::System::Threading::Tasks::TaskCompletionSource_1<T>*>(), ::i2c::type_of<TAsyncCompletedEventArgs>(), ::i2c::type_of<::System::Func_2<TAsyncCompletedEventArgs,T>*>(), ::i2c::type_of<TCompletionDelegate>(), ::i2c::type_of<::System::Action_2<::System::Net::WebClient*,TCompletionDelegate>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAsyncCompletedEventArgs>(), ::i2c::class_of<TCompletionDelegate>(), ::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tcs, e, getResult, handler, unregisterHandler);
}
inline void System::Net::WebClient::PostProgressChanged(::System::ComponentModel::AsyncOperation*  asyncOp, ::System::Net::WebClient_ProgressData*  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"PostProgressChanged", {}, {::i2c::type_of<::System::ComponentModel::AsyncOperation*>(), ::i2c::type_of<::System::Net::WebClient_ProgressData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOp, progress);
}
inline void System::Net::WebClient::ThrowIfNull(::System::Object*  argument, ::StringW  parameterName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"ThrowIfNull", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, argument, parameterName);
}
inline bool System::Net::WebClient::get_AllowReadStreamBuffering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_AllowReadStreamBuffering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebClient::set_AllowReadStreamBuffering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_AllowReadStreamBuffering", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::WebClient::get_AllowWriteStreamBuffering()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"get_AllowWriteStreamBuffering", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::WebClient::set_AllowWriteStreamBuffering(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"set_AllowWriteStreamBuffering", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::add_WriteStreamClosed(::System::Net::WriteStreamClosedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"add_WriteStreamClosed", {}, {::i2c::type_of<::System::Net::WriteStreamClosedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::remove_WriteStreamClosed(::System::Net::WriteStreamClosedEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"remove_WriteStreamClosed", {}, {::i2c::type_of<::System::Net::WriteStreamClosedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::WebClient::OnWriteStreamClosed(::System::Net::WriteStreamClosedEventArgs*  e)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_0(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_1(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_2(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_3(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_3", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_4(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_4", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_5(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_5", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_6(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_6", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_7(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_7", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_8(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_8", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_9(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_9", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_StartAsyncOperation_b__78_10(::System::Object*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<StartAsyncOperation>b__78_10", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg);
}
inline void System::Net::WebClient::_UploadStringAsync_b__179_0(::ArrayW<uint8_t>  bytesResult, ::System::Exception*  error, ::System::ComponentModel::AsyncOperation*  uploadAsyncOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient*>(),
                        {"<UploadStringAsync>b__179_0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytesResult, error, uploadAsyncOp);
}
inline ::System::Net::WebClient* System::Net::WebClient::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient::WebClient()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass218_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass218_0::*)()>(&::System::Net::WebClient___c__DisplayClass218_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4f618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass218_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass218_0._UploadValuesTaskAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass218_0::*)(::System::Object*, ::System::Net::UploadValuesCompletedEventArgs*)>(&::System::Net::WebClient___c__DisplayClass218_0::_UploadValuesTaskAsync_b__0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac540a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass218_0*>(),
                        {"<UploadValuesTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::UploadValuesCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass218_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass218_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass218_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*& System::Net::WebClient___c__DisplayClass218_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>* const& System::Net::WebClient___c__DisplayClass218_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void System::Net::WebClient___c__DisplayClass218_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::System::Net::UploadValuesCompletedEventHandler*& System::Net::WebClient___c__DisplayClass218_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::System::Net::UploadValuesCompletedEventHandler* const& System::Net::WebClient___c__DisplayClass218_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void System::Net::WebClient___c__DisplayClass218_0::__cordl_internal_set_handler(::System::Net::UploadValuesCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void System::Net::WebClient___c__DisplayClass218_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass218_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass218_0::_UploadValuesTaskAsync_b__0(::System::Object*  sender, ::System::Net::UploadValuesCompletedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass218_0*>(),
                        {"<UploadValuesTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::UploadValuesCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Net::WebClient___c__DisplayClass218_0* System::Net::WebClient___c__DisplayClass218_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass218_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass218_0::WebClient___c__DisplayClass218_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass214_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass214_0::*)()>(&::System::Net::WebClient___c__DisplayClass214_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4f284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass214_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass214_0._UploadFileTaskAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass214_0::*)(::System::Object*, ::System::Net::UploadFileCompletedEventArgs*)>(&::System::Net::WebClient___c__DisplayClass214_0::_UploadFileTaskAsync_b__0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac53eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass214_0*>(),
                        {"<UploadFileTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::UploadFileCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass214_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass214_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass214_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*& System::Net::WebClient___c__DisplayClass214_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>* const& System::Net::WebClient___c__DisplayClass214_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void System::Net::WebClient___c__DisplayClass214_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::System::Net::UploadFileCompletedEventHandler*& System::Net::WebClient___c__DisplayClass214_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::System::Net::UploadFileCompletedEventHandler* const& System::Net::WebClient___c__DisplayClass214_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void System::Net::WebClient___c__DisplayClass214_0::__cordl_internal_set_handler(::System::Net::UploadFileCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void System::Net::WebClient___c__DisplayClass214_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass214_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass214_0::_UploadFileTaskAsync_b__0(::System::Object*  sender, ::System::Net::UploadFileCompletedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass214_0*>(),
                        {"<UploadFileTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::UploadFileCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Net::WebClient___c__DisplayClass214_0* System::Net::WebClient___c__DisplayClass214_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass214_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass214_0::WebClient___c__DisplayClass214_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass210_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass210_0::*)()>(&::System::Net::WebClient___c__DisplayClass210_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4eef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass210_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass210_0._UploadDataTaskAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass210_0::*)(::System::Object*, ::System::Net::UploadDataCompletedEventArgs*)>(&::System::Net::WebClient___c__DisplayClass210_0::_UploadDataTaskAsync_b__0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac53d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass210_0*>(),
                        {"<UploadDataTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::UploadDataCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass210_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass210_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass210_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*& System::Net::WebClient___c__DisplayClass210_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>* const& System::Net::WebClient___c__DisplayClass210_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void System::Net::WebClient___c__DisplayClass210_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::System::Net::UploadDataCompletedEventHandler*& System::Net::WebClient___c__DisplayClass210_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::System::Net::UploadDataCompletedEventHandler* const& System::Net::WebClient___c__DisplayClass210_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void System::Net::WebClient___c__DisplayClass210_0::__cordl_internal_set_handler(::System::Net::UploadDataCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void System::Net::WebClient___c__DisplayClass210_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass210_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass210_0::_UploadDataTaskAsync_b__0(::System::Object*  sender, ::System::Net::UploadDataCompletedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass210_0*>(),
                        {"<UploadDataTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::UploadDataCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Net::WebClient___c__DisplayClass210_0* System::Net::WebClient___c__DisplayClass210_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass210_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass210_0::WebClient___c__DisplayClass210_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass206_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass206_0::*)()>(&::System::Net::WebClient___c__DisplayClass206_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4ec68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass206_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass206_0._DownloadFileTaskAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass206_0::*)(::System::Object*, ::System::ComponentModel::AsyncCompletedEventArgs*)>(&::System::Net::WebClient___c__DisplayClass206_0::_DownloadFileTaskAsync_b__0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac53b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass206_0*>(),
                        {"<DownloadFileTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::AsyncCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass206_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass206_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass206_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& System::Net::WebClient___c__DisplayClass206_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& System::Net::WebClient___c__DisplayClass206_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void System::Net::WebClient___c__DisplayClass206_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::System::ComponentModel::AsyncCompletedEventHandler*& System::Net::WebClient___c__DisplayClass206_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::System::ComponentModel::AsyncCompletedEventHandler* const& System::Net::WebClient___c__DisplayClass206_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void System::Net::WebClient___c__DisplayClass206_0::__cordl_internal_set_handler(::System::ComponentModel::AsyncCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void System::Net::WebClient___c__DisplayClass206_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass206_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass206_0::_DownloadFileTaskAsync_b__0(::System::Object*  sender, ::System::ComponentModel::AsyncCompletedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass206_0*>(),
                        {"<DownloadFileTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::ComponentModel::AsyncCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Net::WebClient___c__DisplayClass206_0* System::Net::WebClient___c__DisplayClass206_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass206_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass206_0::WebClient___c__DisplayClass206_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass204_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass204_0::*)()>(&::System::Net::WebClient___c__DisplayClass204_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4e91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass204_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass204_0._DownloadDataTaskAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass204_0::*)(::System::Object*, ::System::Net::DownloadDataCompletedEventArgs*)>(&::System::Net::WebClient___c__DisplayClass204_0::_DownloadDataTaskAsync_b__0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac539b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass204_0*>(),
                        {"<DownloadDataTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::DownloadDataCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass204_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass204_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass204_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*& System::Net::WebClient___c__DisplayClass204_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>* const& System::Net::WebClient___c__DisplayClass204_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void System::Net::WebClient___c__DisplayClass204_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::System::Net::DownloadDataCompletedEventHandler*& System::Net::WebClient___c__DisplayClass204_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::System::Net::DownloadDataCompletedEventHandler* const& System::Net::WebClient___c__DisplayClass204_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void System::Net::WebClient___c__DisplayClass204_0::__cordl_internal_set_handler(::System::Net::DownloadDataCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void System::Net::WebClient___c__DisplayClass204_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass204_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass204_0::_DownloadDataTaskAsync_b__0(::System::Object*  sender, ::System::Net::DownloadDataCompletedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass204_0*>(),
                        {"<DownloadDataTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::DownloadDataCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Net::WebClient___c__DisplayClass204_0* System::Net::WebClient___c__DisplayClass204_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass204_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass204_0::WebClient___c__DisplayClass204_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass202_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass202_0::*)()>(&::System::Net::WebClient___c__DisplayClass202_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4e5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass202_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass202_0._UploadStringTaskAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass202_0::*)(::System::Object*, ::System::Net::UploadStringCompletedEventArgs*)>(&::System::Net::WebClient___c__DisplayClass202_0::_UploadStringTaskAsync_b__0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac537fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass202_0*>(),
                        {"<UploadStringTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::UploadStringCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass202_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass202_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass202_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& System::Net::WebClient___c__DisplayClass202_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* const& System::Net::WebClient___c__DisplayClass202_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void System::Net::WebClient___c__DisplayClass202_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::System::Net::UploadStringCompletedEventHandler*& System::Net::WebClient___c__DisplayClass202_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::System::Net::UploadStringCompletedEventHandler* const& System::Net::WebClient___c__DisplayClass202_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void System::Net::WebClient___c__DisplayClass202_0::__cordl_internal_set_handler(::System::Net::UploadStringCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void System::Net::WebClient___c__DisplayClass202_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass202_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass202_0::_UploadStringTaskAsync_b__0(::System::Object*  sender, ::System::Net::UploadStringCompletedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass202_0*>(),
                        {"<UploadStringTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::UploadStringCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Net::WebClient___c__DisplayClass202_0* System::Net::WebClient___c__DisplayClass202_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass202_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass202_0::WebClient___c__DisplayClass202_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass198_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass198_0::*)()>(&::System::Net::WebClient___c__DisplayClass198_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4e260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass198_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass198_0._OpenWriteTaskAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass198_0::*)(::System::Object*, ::System::Net::OpenWriteCompletedEventArgs*)>(&::System::Net::WebClient___c__DisplayClass198_0::_OpenWriteTaskAsync_b__0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac53640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass198_0*>(),
                        {"<OpenWriteTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::OpenWriteCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass198_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass198_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass198_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*& System::Net::WebClient___c__DisplayClass198_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>* const& System::Net::WebClient___c__DisplayClass198_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void System::Net::WebClient___c__DisplayClass198_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::System::Net::OpenWriteCompletedEventHandler*& System::Net::WebClient___c__DisplayClass198_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::System::Net::OpenWriteCompletedEventHandler* const& System::Net::WebClient___c__DisplayClass198_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void System::Net::WebClient___c__DisplayClass198_0::__cordl_internal_set_handler(::System::Net::OpenWriteCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void System::Net::WebClient___c__DisplayClass198_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass198_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass198_0::_OpenWriteTaskAsync_b__0(::System::Object*  sender, ::System::Net::OpenWriteCompletedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass198_0*>(),
                        {"<OpenWriteTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::OpenWriteCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Net::WebClient___c__DisplayClass198_0* System::Net::WebClient___c__DisplayClass198_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass198_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass198_0::WebClient___c__DisplayClass198_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass194_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass194_0::*)()>(&::System::Net::WebClient___c__DisplayClass194_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4def0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass194_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass194_0._OpenReadTaskAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass194_0::*)(::System::Object*, ::System::Net::OpenReadCompletedEventArgs*)>(&::System::Net::WebClient___c__DisplayClass194_0::_OpenReadTaskAsync_b__0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac53484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass194_0*>(),
                        {"<OpenReadTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::OpenReadCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass194_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass194_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass194_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*& System::Net::WebClient___c__DisplayClass194_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>* const& System::Net::WebClient___c__DisplayClass194_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void System::Net::WebClient___c__DisplayClass194_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::System::IO::Stream*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::System::Net::OpenReadCompletedEventHandler*& System::Net::WebClient___c__DisplayClass194_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::System::Net::OpenReadCompletedEventHandler* const& System::Net::WebClient___c__DisplayClass194_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void System::Net::WebClient___c__DisplayClass194_0::__cordl_internal_set_handler(::System::Net::OpenReadCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void System::Net::WebClient___c__DisplayClass194_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass194_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass194_0::_OpenReadTaskAsync_b__0(::System::Object*  sender, ::System::Net::OpenReadCompletedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass194_0*>(),
                        {"<OpenReadTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::OpenReadCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Net::WebClient___c__DisplayClass194_0* System::Net::WebClient___c__DisplayClass194_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass194_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass194_0::WebClient___c__DisplayClass194_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)()>(&::System::Net::WebClient___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac5317c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._DownloadStringTaskAsync_b__192_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient___c::*)(::System::Net::DownloadStringCompletedEventArgs*)>(&::System::Net::WebClient___c::_DownloadStringTaskAsync_b__192_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac53184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadStringTaskAsync>b__192_1", {}, {::i2c::type_of<::System::Net::DownloadStringCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._DownloadStringTaskAsync_b__192_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)(::System::Net::WebClient*, ::System::Net::DownloadStringCompletedEventHandler*)>(&::System::Net::WebClient___c::_DownloadStringTaskAsync_b__192_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac531c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadStringTaskAsync>b__192_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::DownloadStringCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._OpenReadTaskAsync_b__194_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebClient___c::*)(::System::Net::OpenReadCompletedEventArgs*)>(&::System::Net::WebClient___c::_OpenReadTaskAsync_b__194_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac531e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<OpenReadTaskAsync>b__194_1", {}, {::i2c::type_of<::System::Net::OpenReadCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._OpenReadTaskAsync_b__194_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)(::System::Net::WebClient*, ::System::Net::OpenReadCompletedEventHandler*)>(&::System::Net::WebClient___c::_OpenReadTaskAsync_b__194_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac53224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<OpenReadTaskAsync>b__194_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::OpenReadCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._OpenWriteTaskAsync_b__198_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::WebClient___c::*)(::System::Net::OpenWriteCompletedEventArgs*)>(&::System::Net::WebClient___c::_OpenWriteTaskAsync_b__198_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac5323c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<OpenWriteTaskAsync>b__198_1", {}, {::i2c::type_of<::System::Net::OpenWriteCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._OpenWriteTaskAsync_b__198_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)(::System::Net::WebClient*, ::System::Net::OpenWriteCompletedEventHandler*)>(&::System::Net::WebClient___c::_OpenWriteTaskAsync_b__198_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac53280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<OpenWriteTaskAsync>b__198_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::OpenWriteCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._UploadStringTaskAsync_b__202_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebClient___c::*)(::System::Net::UploadStringCompletedEventArgs*)>(&::System::Net::WebClient___c::_UploadStringTaskAsync_b__202_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac53298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadStringTaskAsync>b__202_1", {}, {::i2c::type_of<::System::Net::UploadStringCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._UploadStringTaskAsync_b__202_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)(::System::Net::WebClient*, ::System::Net::UploadStringCompletedEventHandler*)>(&::System::Net::WebClient___c::_UploadStringTaskAsync_b__202_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac532dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadStringTaskAsync>b__202_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::UploadStringCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._DownloadDataTaskAsync_b__204_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient___c::*)(::System::Net::DownloadDataCompletedEventArgs*)>(&::System::Net::WebClient___c::_DownloadDataTaskAsync_b__204_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac532f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadDataTaskAsync>b__204_1", {}, {::i2c::type_of<::System::Net::DownloadDataCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._DownloadDataTaskAsync_b__204_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)(::System::Net::WebClient*, ::System::Net::DownloadDataCompletedEventHandler*)>(&::System::Net::WebClient___c::_DownloadDataTaskAsync_b__204_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac53338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadDataTaskAsync>b__204_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::DownloadDataCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._DownloadFileTaskAsync_b__206_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Net::WebClient___c::*)(::System::ComponentModel::AsyncCompletedEventArgs*)>(&::System::Net::WebClient___c::_DownloadFileTaskAsync_b__206_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac53350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadFileTaskAsync>b__206_1", {}, {::i2c::type_of<::System::ComponentModel::AsyncCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._DownloadFileTaskAsync_b__206_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)(::System::Net::WebClient*, ::System::ComponentModel::AsyncCompletedEventHandler*)>(&::System::Net::WebClient___c::_DownloadFileTaskAsync_b__206_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac53358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadFileTaskAsync>b__206_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::ComponentModel::AsyncCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._UploadDataTaskAsync_b__210_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient___c::*)(::System::Net::UploadDataCompletedEventArgs*)>(&::System::Net::WebClient___c::_UploadDataTaskAsync_b__210_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac53370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadDataTaskAsync>b__210_1", {}, {::i2c::type_of<::System::Net::UploadDataCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._UploadDataTaskAsync_b__210_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)(::System::Net::WebClient*, ::System::Net::UploadDataCompletedEventHandler*)>(&::System::Net::WebClient___c::_UploadDataTaskAsync_b__210_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac533b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadDataTaskAsync>b__210_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::UploadDataCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._UploadFileTaskAsync_b__214_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient___c::*)(::System::Net::UploadFileCompletedEventArgs*)>(&::System::Net::WebClient___c::_UploadFileTaskAsync_b__214_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac533cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadFileTaskAsync>b__214_1", {}, {::i2c::type_of<::System::Net::UploadFileCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._UploadFileTaskAsync_b__214_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)(::System::Net::WebClient*, ::System::Net::UploadFileCompletedEventHandler*)>(&::System::Net::WebClient___c::_UploadFileTaskAsync_b__214_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac53410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadFileTaskAsync>b__214_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::UploadFileCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._UploadValuesTaskAsync_b__218_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::WebClient___c::*)(::System::Net::UploadValuesCompletedEventArgs*)>(&::System::Net::WebClient___c::_UploadValuesTaskAsync_b__218_1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xac53428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadValuesTaskAsync>b__218_1", {}, {::i2c::type_of<::System::Net::UploadValuesCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c._UploadValuesTaskAsync_b__218_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c::*)(::System::Net::WebClient*, ::System::Net::UploadValuesCompletedEventHandler*)>(&::System::Net::WebClient___c::_UploadValuesTaskAsync_b__218_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xac5346c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadValuesTaskAsync>b__218_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::UploadValuesCompletedEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WebClient___c::setStaticF___9(::System::Net::WebClient___c*  value)  {
::cordl_internals::setStaticField<::System::Net::WebClient___c*, "<>9", ::System::Net::WebClient___c*>(std::forward<::System::Net::WebClient___c*>(value));
}
inline ::System::Net::WebClient___c* System::Net::WebClient___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Net::WebClient___c*, "<>9", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__192_1(::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*,::StringW>*, "<>9__192_1", ::System::Net::WebClient___c*>(std::forward<::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*,::StringW>*>(value));
}
inline ::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*,::StringW>* System::Net::WebClient___c::getStaticF___9__192_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*,::StringW>*, "<>9__192_1", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__192_2(::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadStringCompletedEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadStringCompletedEventHandler*>*, "<>9__192_2", ::System::Net::WebClient___c*>(std::forward<::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadStringCompletedEventHandler*>*>(value));
}
inline ::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadStringCompletedEventHandler*>* System::Net::WebClient___c::getStaticF___9__192_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadStringCompletedEventHandler*>*, "<>9__192_2", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__194_1(::System::Func_2<::System::Net::OpenReadCompletedEventArgs*,::System::IO::Stream*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::OpenReadCompletedEventArgs*,::System::IO::Stream*>*, "<>9__194_1", ::System::Net::WebClient___c*>(std::forward<::System::Func_2<::System::Net::OpenReadCompletedEventArgs*,::System::IO::Stream*>*>(value));
}
inline ::System::Func_2<::System::Net::OpenReadCompletedEventArgs*,::System::IO::Stream*>* System::Net::WebClient___c::getStaticF___9__194_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::OpenReadCompletedEventArgs*,::System::IO::Stream*>*, "<>9__194_1", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__194_2(::System::Action_2<::System::Net::WebClient*,::System::Net::OpenReadCompletedEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::OpenReadCompletedEventHandler*>*, "<>9__194_2", ::System::Net::WebClient___c*>(std::forward<::System::Action_2<::System::Net::WebClient*,::System::Net::OpenReadCompletedEventHandler*>*>(value));
}
inline ::System::Action_2<::System::Net::WebClient*,::System::Net::OpenReadCompletedEventHandler*>* System::Net::WebClient___c::getStaticF___9__194_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::OpenReadCompletedEventHandler*>*, "<>9__194_2", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__198_1(::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*,::System::IO::Stream*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*,::System::IO::Stream*>*, "<>9__198_1", ::System::Net::WebClient___c*>(std::forward<::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*,::System::IO::Stream*>*>(value));
}
inline ::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*,::System::IO::Stream*>* System::Net::WebClient___c::getStaticF___9__198_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*,::System::IO::Stream*>*, "<>9__198_1", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__198_2(::System::Action_2<::System::Net::WebClient*,::System::Net::OpenWriteCompletedEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::OpenWriteCompletedEventHandler*>*, "<>9__198_2", ::System::Net::WebClient___c*>(std::forward<::System::Action_2<::System::Net::WebClient*,::System::Net::OpenWriteCompletedEventHandler*>*>(value));
}
inline ::System::Action_2<::System::Net::WebClient*,::System::Net::OpenWriteCompletedEventHandler*>* System::Net::WebClient___c::getStaticF___9__198_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::OpenWriteCompletedEventHandler*>*, "<>9__198_2", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__202_1(::System::Func_2<::System::Net::UploadStringCompletedEventArgs*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::UploadStringCompletedEventArgs*,::StringW>*, "<>9__202_1", ::System::Net::WebClient___c*>(std::forward<::System::Func_2<::System::Net::UploadStringCompletedEventArgs*,::StringW>*>(value));
}
inline ::System::Func_2<::System::Net::UploadStringCompletedEventArgs*,::StringW>* System::Net::WebClient___c::getStaticF___9__202_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::UploadStringCompletedEventArgs*,::StringW>*, "<>9__202_1", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__202_2(::System::Action_2<::System::Net::WebClient*,::System::Net::UploadStringCompletedEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadStringCompletedEventHandler*>*, "<>9__202_2", ::System::Net::WebClient___c*>(std::forward<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadStringCompletedEventHandler*>*>(value));
}
inline ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadStringCompletedEventHandler*>* System::Net::WebClient___c::getStaticF___9__202_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadStringCompletedEventHandler*>*, "<>9__202_2", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__204_1(::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*,::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*,::ArrayW<uint8_t>>*, "<>9__204_1", ::System::Net::WebClient___c*>(std::forward<::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*,::ArrayW<uint8_t>>*>(value));
}
inline ::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*,::ArrayW<uint8_t>>* System::Net::WebClient___c::getStaticF___9__204_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*,::ArrayW<uint8_t>>*, "<>9__204_1", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__204_2(::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadDataCompletedEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadDataCompletedEventHandler*>*, "<>9__204_2", ::System::Net::WebClient___c*>(std::forward<::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadDataCompletedEventHandler*>*>(value));
}
inline ::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadDataCompletedEventHandler*>* System::Net::WebClient___c::getStaticF___9__204_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::DownloadDataCompletedEventHandler*>*, "<>9__204_2", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__206_1(::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*,::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*,::System::Object*>*, "<>9__206_1", ::System::Net::WebClient___c*>(std::forward<::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*,::System::Object*>*>(value));
}
inline ::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*,::System::Object*>* System::Net::WebClient___c::getStaticF___9__206_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*,::System::Object*>*, "<>9__206_1", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__206_2(::System::Action_2<::System::Net::WebClient*,::System::ComponentModel::AsyncCompletedEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Net::WebClient*,::System::ComponentModel::AsyncCompletedEventHandler*>*, "<>9__206_2", ::System::Net::WebClient___c*>(std::forward<::System::Action_2<::System::Net::WebClient*,::System::ComponentModel::AsyncCompletedEventHandler*>*>(value));
}
inline ::System::Action_2<::System::Net::WebClient*,::System::ComponentModel::AsyncCompletedEventHandler*>* System::Net::WebClient___c::getStaticF___9__206_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Net::WebClient*,::System::ComponentModel::AsyncCompletedEventHandler*>*, "<>9__206_2", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__210_1(::System::Func_2<::System::Net::UploadDataCompletedEventArgs*,::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::UploadDataCompletedEventArgs*,::ArrayW<uint8_t>>*, "<>9__210_1", ::System::Net::WebClient___c*>(std::forward<::System::Func_2<::System::Net::UploadDataCompletedEventArgs*,::ArrayW<uint8_t>>*>(value));
}
inline ::System::Func_2<::System::Net::UploadDataCompletedEventArgs*,::ArrayW<uint8_t>>* System::Net::WebClient___c::getStaticF___9__210_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::UploadDataCompletedEventArgs*,::ArrayW<uint8_t>>*, "<>9__210_1", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__210_2(::System::Action_2<::System::Net::WebClient*,::System::Net::UploadDataCompletedEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadDataCompletedEventHandler*>*, "<>9__210_2", ::System::Net::WebClient___c*>(std::forward<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadDataCompletedEventHandler*>*>(value));
}
inline ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadDataCompletedEventHandler*>* System::Net::WebClient___c::getStaticF___9__210_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadDataCompletedEventHandler*>*, "<>9__210_2", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__214_1(::System::Func_2<::System::Net::UploadFileCompletedEventArgs*,::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::UploadFileCompletedEventArgs*,::ArrayW<uint8_t>>*, "<>9__214_1", ::System::Net::WebClient___c*>(std::forward<::System::Func_2<::System::Net::UploadFileCompletedEventArgs*,::ArrayW<uint8_t>>*>(value));
}
inline ::System::Func_2<::System::Net::UploadFileCompletedEventArgs*,::ArrayW<uint8_t>>* System::Net::WebClient___c::getStaticF___9__214_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::UploadFileCompletedEventArgs*,::ArrayW<uint8_t>>*, "<>9__214_1", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__214_2(::System::Action_2<::System::Net::WebClient*,::System::Net::UploadFileCompletedEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadFileCompletedEventHandler*>*, "<>9__214_2", ::System::Net::WebClient___c*>(std::forward<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadFileCompletedEventHandler*>*>(value));
}
inline ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadFileCompletedEventHandler*>* System::Net::WebClient___c::getStaticF___9__214_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadFileCompletedEventHandler*>*, "<>9__214_2", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__218_1(::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*,::ArrayW<uint8_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*,::ArrayW<uint8_t>>*, "<>9__218_1", ::System::Net::WebClient___c*>(std::forward<::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*,::ArrayW<uint8_t>>*>(value));
}
inline ::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*,::ArrayW<uint8_t>>* System::Net::WebClient___c::getStaticF___9__218_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*,::ArrayW<uint8_t>>*, "<>9__218_1", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::setStaticF___9__218_2(::System::Action_2<::System::Net::WebClient*,::System::Net::UploadValuesCompletedEventHandler*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadValuesCompletedEventHandler*>*, "<>9__218_2", ::System::Net::WebClient___c*>(std::forward<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadValuesCompletedEventHandler*>*>(value));
}
inline ::System::Action_2<::System::Net::WebClient*,::System::Net::UploadValuesCompletedEventHandler*>* System::Net::WebClient___c::getStaticF___9__218_2()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Net::WebClient*,::System::Net::UploadValuesCompletedEventHandler*>*, "<>9__218_2", ::System::Net::WebClient___c*>();
}
inline void System::Net::WebClient___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::WebClient___c::_DownloadStringTaskAsync_b__192_1(::System::Net::DownloadStringCompletedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadStringTaskAsync>b__192_1", {}, {::i2c::type_of<::System::Net::DownloadStringCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, args);
}
inline void System::Net::WebClient___c::_DownloadStringTaskAsync_b__192_2(::System::Net::WebClient*  webClient, ::System::Net::DownloadStringCompletedEventHandler*  completion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadStringTaskAsync>b__192_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::DownloadStringCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webClient, completion);
}
inline ::System::IO::Stream* System::Net::WebClient___c::_OpenReadTaskAsync_b__194_1(::System::Net::OpenReadCompletedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<OpenReadTaskAsync>b__194_1", {}, {::i2c::type_of<::System::Net::OpenReadCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, args);
}
inline void System::Net::WebClient___c::_OpenReadTaskAsync_b__194_2(::System::Net::WebClient*  webClient, ::System::Net::OpenReadCompletedEventHandler*  completion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<OpenReadTaskAsync>b__194_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::OpenReadCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webClient, completion);
}
inline ::System::IO::Stream* System::Net::WebClient___c::_OpenWriteTaskAsync_b__198_1(::System::Net::OpenWriteCompletedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<OpenWriteTaskAsync>b__198_1", {}, {::i2c::type_of<::System::Net::OpenWriteCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, args);
}
inline void System::Net::WebClient___c::_OpenWriteTaskAsync_b__198_2(::System::Net::WebClient*  webClient, ::System::Net::OpenWriteCompletedEventHandler*  completion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<OpenWriteTaskAsync>b__198_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::OpenWriteCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webClient, completion);
}
inline ::StringW System::Net::WebClient___c::_UploadStringTaskAsync_b__202_1(::System::Net::UploadStringCompletedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadStringTaskAsync>b__202_1", {}, {::i2c::type_of<::System::Net::UploadStringCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, args);
}
inline void System::Net::WebClient___c::_UploadStringTaskAsync_b__202_2(::System::Net::WebClient*  webClient, ::System::Net::UploadStringCompletedEventHandler*  completion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadStringTaskAsync>b__202_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::UploadStringCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webClient, completion);
}
inline ::ArrayW<uint8_t> System::Net::WebClient___c::_DownloadDataTaskAsync_b__204_1(::System::Net::DownloadDataCompletedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadDataTaskAsync>b__204_1", {}, {::i2c::type_of<::System::Net::DownloadDataCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, args);
}
inline void System::Net::WebClient___c::_DownloadDataTaskAsync_b__204_2(::System::Net::WebClient*  webClient, ::System::Net::DownloadDataCompletedEventHandler*  completion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadDataTaskAsync>b__204_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::DownloadDataCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webClient, completion);
}
inline ::System::Object* System::Net::WebClient___c::_DownloadFileTaskAsync_b__206_1(::System::ComponentModel::AsyncCompletedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadFileTaskAsync>b__206_1", {}, {::i2c::type_of<::System::ComponentModel::AsyncCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, args);
}
inline void System::Net::WebClient___c::_DownloadFileTaskAsync_b__206_2(::System::Net::WebClient*  webClient, ::System::ComponentModel::AsyncCompletedEventHandler*  completion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<DownloadFileTaskAsync>b__206_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::ComponentModel::AsyncCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webClient, completion);
}
inline ::ArrayW<uint8_t> System::Net::WebClient___c::_UploadDataTaskAsync_b__210_1(::System::Net::UploadDataCompletedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadDataTaskAsync>b__210_1", {}, {::i2c::type_of<::System::Net::UploadDataCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, args);
}
inline void System::Net::WebClient___c::_UploadDataTaskAsync_b__210_2(::System::Net::WebClient*  webClient, ::System::Net::UploadDataCompletedEventHandler*  completion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadDataTaskAsync>b__210_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::UploadDataCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webClient, completion);
}
inline ::ArrayW<uint8_t> System::Net::WebClient___c::_UploadFileTaskAsync_b__214_1(::System::Net::UploadFileCompletedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadFileTaskAsync>b__214_1", {}, {::i2c::type_of<::System::Net::UploadFileCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, args);
}
inline void System::Net::WebClient___c::_UploadFileTaskAsync_b__214_2(::System::Net::WebClient*  webClient, ::System::Net::UploadFileCompletedEventHandler*  completion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadFileTaskAsync>b__214_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::UploadFileCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webClient, completion);
}
inline ::ArrayW<uint8_t> System::Net::WebClient___c::_UploadValuesTaskAsync_b__218_1(::System::Net::UploadValuesCompletedEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadValuesTaskAsync>b__218_1", {}, {::i2c::type_of<::System::Net::UploadValuesCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, args);
}
inline void System::Net::WebClient___c::_UploadValuesTaskAsync_b__218_2(::System::Net::WebClient*  webClient, ::System::Net::UploadValuesCompletedEventHandler*  completion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c*>(),
                        {"<UploadValuesTaskAsync>b__218_2", {}, {::i2c::type_of<::System::Net::WebClient*>(), ::i2c::type_of<::System::Net::UploadValuesCompletedEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webClient, completion);
}
inline ::System::Net::WebClient___c* System::Net::WebClient___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c::WebClient___c()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass192_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass192_0::*)()>(&::System::Net::WebClient___c__DisplayClass192_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4dbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass192_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass192_0._DownloadStringTaskAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass192_0::*)(::System::Object*, ::System::Net::DownloadStringCompletedEventArgs*)>(&::System::Net::WebClient___c__DisplayClass192_0::_DownloadStringTaskAsync_b__0)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xac52f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass192_0*>(),
                        {"<DownloadStringTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::DownloadStringCompletedEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass192_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass192_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass192_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& System::Net::WebClient___c__DisplayClass192_0::__cordl_internal_get_tcs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* const& System::Net::WebClient___c__DisplayClass192_0::__cordl_internal_get_tcs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tcs;
}
constexpr void System::Net::WebClient___c__DisplayClass192_0::__cordl_internal_set_tcs(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tcs = value;
}
constexpr ::System::Net::DownloadStringCompletedEventHandler*& System::Net::WebClient___c__DisplayClass192_0::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr ::System::Net::DownloadStringCompletedEventHandler* const& System::Net::WebClient___c__DisplayClass192_0::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
constexpr void System::Net::WebClient___c__DisplayClass192_0::__cordl_internal_set_handler(::System::Net::DownloadStringCompletedEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
inline void System::Net::WebClient___c__DisplayClass192_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass192_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass192_0::_DownloadStringTaskAsync_b__0(::System::Object*  sender, ::System::Net::DownloadStringCompletedEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass192_0*>(),
                        {"<DownloadStringTaskAsync>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Net::DownloadStringCompletedEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, e);
}
inline ::System::Net::WebClient___c__DisplayClass192_0* System::Net::WebClient___c__DisplayClass192_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass192_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass192_0::WebClient___c__DisplayClass192_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass188_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass188_0::*)()>(&::System::Net::WebClient___c__DisplayClass188_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass188_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass188_0._UploadValuesAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass188_0::*)(::ArrayW<uint8_t>, ::System::Exception*, ::System::ComponentModel::AsyncOperation*)>(&::System::Net::WebClient___c__DisplayClass188_0::_UploadValuesAsync_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xac52e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass188_0*>(),
                        {"<UploadValuesAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass188_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass188_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass188_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::ComponentModel::AsyncOperation*& System::Net::WebClient___c__DisplayClass188_0::__cordl_internal_get_asyncOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr ::System::ComponentModel::AsyncOperation* const& System::Net::WebClient___c__DisplayClass188_0::__cordl_internal_get_asyncOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr void System::Net::WebClient___c__DisplayClass188_0::__cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOp = value;
}
inline void System::Net::WebClient___c__DisplayClass188_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass188_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass188_0::_UploadValuesAsync_b__0(::ArrayW<uint8_t>  result, ::System::Exception*  error, ::System::ComponentModel::AsyncOperation*  uploadAsyncOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass188_0*>(),
                        {"<UploadValuesAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, error, uploadAsyncOp);
}
inline ::System::Net::WebClient___c__DisplayClass188_0* System::Net::WebClient___c__DisplayClass188_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass188_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass188_0::WebClient___c__DisplayClass188_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass185_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass185_0::*)()>(&::System::Net::WebClient___c__DisplayClass185_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4d4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass185_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass185_0._UploadFileAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass185_0::*)(::ArrayW<uint8_t>, ::System::Exception*, ::System::ComponentModel::AsyncOperation*)>(&::System::Net::WebClient___c__DisplayClass185_0::_UploadFileAsync_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xac52dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass185_0*>(),
                        {"<UploadFileAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass185_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass185_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass185_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::ComponentModel::AsyncOperation*& System::Net::WebClient___c__DisplayClass185_0::__cordl_internal_get_asyncOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr ::System::ComponentModel::AsyncOperation* const& System::Net::WebClient___c__DisplayClass185_0::__cordl_internal_get_asyncOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr void System::Net::WebClient___c__DisplayClass185_0::__cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOp = value;
}
inline void System::Net::WebClient___c__DisplayClass185_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass185_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass185_0::_UploadFileAsync_b__0(::ArrayW<uint8_t>  result, ::System::Exception*  error, ::System::ComponentModel::AsyncOperation*  uploadAsyncOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass185_0*>(),
                        {"<UploadFileAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, error, uploadAsyncOp);
}
inline ::System::Net::WebClient___c__DisplayClass185_0* System::Net::WebClient___c__DisplayClass185_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass185_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass185_0::WebClient___c__DisplayClass185_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass182_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass182_0::*)()>(&::System::Net::WebClient___c__DisplayClass182_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4d00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass182_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass182_0._UploadDataAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass182_0::*)(::ArrayW<uint8_t>, ::System::Exception*, ::System::ComponentModel::AsyncOperation*)>(&::System::Net::WebClient___c__DisplayClass182_0::_UploadDataAsync_b__0)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xac52d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass182_0*>(),
                        {"<UploadDataAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass182_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass182_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass182_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::ComponentModel::AsyncOperation*& System::Net::WebClient___c__DisplayClass182_0::__cordl_internal_get_asyncOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr ::System::ComponentModel::AsyncOperation* const& System::Net::WebClient___c__DisplayClass182_0::__cordl_internal_get_asyncOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr void System::Net::WebClient___c__DisplayClass182_0::__cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOp = value;
}
inline void System::Net::WebClient___c__DisplayClass182_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass182_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass182_0::_UploadDataAsync_b__0(::ArrayW<uint8_t>  result, ::System::Exception*  error, ::System::ComponentModel::AsyncOperation*  uploadAsyncOp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass182_0*>(),
                        {"<UploadDataAsync>b__0", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::ComponentModel::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result, error, uploadAsyncOp);
}
inline ::System::Net::WebClient___c__DisplayClass182_0* System::Net::WebClient___c__DisplayClass182_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass182_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass182_0::WebClient___c__DisplayClass182_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass167_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass167_0::*)()>(&::System::Net::WebClient___c__DisplayClass167_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4bbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass167_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass167_0._OpenWriteAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass167_0::*)(::System::IAsyncResult*)>(&::System::Net::WebClient___c__DisplayClass167_0::_OpenWriteAsync_b__0)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xac52acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass167_0*>(),
                        {"<OpenWriteAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass167_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass167_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass167_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::ComponentModel::AsyncOperation*& System::Net::WebClient___c__DisplayClass167_0::__cordl_internal_get_asyncOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr ::System::ComponentModel::AsyncOperation* const& System::Net::WebClient___c__DisplayClass167_0::__cordl_internal_get_asyncOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr void System::Net::WebClient___c__DisplayClass167_0::__cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOp = value;
}
constexpr ::System::Net::WebRequest*& System::Net::WebClient___c__DisplayClass167_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::System::Net::WebRequest* const& System::Net::WebClient___c__DisplayClass167_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void System::Net::WebClient___c__DisplayClass167_0::__cordl_internal_set_request(::System::Net::WebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void System::Net::WebClient___c__DisplayClass167_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass167_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass167_0::_OpenWriteAsync_b__0(::System::IAsyncResult*  iar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass167_0*>(),
                        {"<OpenWriteAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iar);
}
inline ::System::Net::WebClient___c__DisplayClass167_0* System::Net::WebClient___c__DisplayClass167_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass167_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass167_0::WebClient___c__DisplayClass167_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass164_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass164_0::*)()>(&::System::Net::WebClient___c__DisplayClass164_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xac4b73c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass164_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient___c__DisplayClass164_0._OpenReadAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient___c__DisplayClass164_0::*)(::System::IAsyncResult*)>(&::System::Net::WebClient___c__DisplayClass164_0::_OpenReadAsync_b__0)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xac52884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass164_0*>(),
                        {"<OpenReadAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebClient*& System::Net::WebClient___c__DisplayClass164_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient___c__DisplayClass164_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void System::Net::WebClient___c__DisplayClass164_0::__cordl_internal_set___4__this(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::ComponentModel::AsyncOperation*& System::Net::WebClient___c__DisplayClass164_0::__cordl_internal_get_asyncOp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr ::System::ComponentModel::AsyncOperation* const& System::Net::WebClient___c__DisplayClass164_0::__cordl_internal_get_asyncOp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOp;
}
constexpr void System::Net::WebClient___c__DisplayClass164_0::__cordl_internal_set_asyncOp(::System::ComponentModel::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOp = value;
}
constexpr ::System::Net::WebRequest*& System::Net::WebClient___c__DisplayClass164_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::System::Net::WebRequest* const& System::Net::WebClient___c__DisplayClass164_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void System::Net::WebClient___c__DisplayClass164_0::__cordl_internal_set_request(::System::Net::WebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void System::Net::WebClient___c__DisplayClass164_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass164_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient___c__DisplayClass164_0::_OpenReadAsync_b__0(::System::IAsyncResult*  iar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient___c__DisplayClass164_0*>(),
                        {"<OpenReadAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, iar);
}
inline ::System::Net::WebClient___c__DisplayClass164_0* System::Net::WebClient___c__DisplayClass164_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient___c__DisplayClass164_0*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient___c__DisplayClass164_0::WebClient___c__DisplayClass164_0()   {
}
//  Writing Method size for method: ::System::Net::WebClient_WebClientWriteStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient_WebClientWriteStream::*)(::System::IO::Stream*, ::System::Net::WebRequest*, ::System::Net::WebClient*)>(&::System::Net::WebClient_WebClientWriteStream::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xac486a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient_WebClientWriteStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::WebClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient_WebClientWriteStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient_WebClientWriteStream::*)(bool)>(&::System::Net::WebClient_WebClientWriteStream::Dispose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xac503a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebClient_WebClientWriteStream*>(),
                    {::i2c::class_of<::System::Net::WebClient_WebClientWriteStream*>(), 22}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebRequest*& System::Net::WebClient_WebClientWriteStream::__cordl_internal_get__request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr ::System::Net::WebRequest* const& System::Net::WebClient_WebClientWriteStream::__cordl_internal_get__request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr void System::Net::WebClient_WebClientWriteStream::__cordl_internal_set__request(::System::Net::WebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request = value;
}
constexpr ::System::Net::WebClient*& System::Net::WebClient_WebClientWriteStream::__cordl_internal_get__webClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webClient;
}
constexpr ::System::Net::WebClient* const& System::Net::WebClient_WebClientWriteStream::__cordl_internal_get__webClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webClient;
}
constexpr void System::Net::WebClient_WebClientWriteStream::__cordl_internal_set__webClient(::System::Net::WebClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webClient = value;
}
inline void System::Net::WebClient_WebClientWriteStream::_ctor(::System::IO::Stream*  stream, ::System::Net::WebRequest*  request, ::System::Net::WebClient*  webClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient_WebClientWriteStream*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Net::WebRequest*>(), ::i2c::type_of<::System::Net::WebClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, request, webClient);
}
inline void System::Net::WebClient_WebClientWriteStream::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebClient_WebClientWriteStream*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::System::Net::WebClient_WebClientWriteStream* System::Net::WebClient_WebClientWriteStream::New_ctor(::System::IO::Stream*  stream, ::System::Net::WebRequest*  request, ::System::Net::WebClient*  webClient)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient_WebClientWriteStream*>(stream, request, webClient));
}
// Ctor Parameters []
constexpr ::System::Net::WebClient_WebClientWriteStream::WebClient_WebClientWriteStream()   {
}
//  Writing Method size for method: ::System::Net::WebClient_ProgressData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient_ProgressData::*)()>(&::System::Net::WebClient_ProgressData::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac459a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient_ProgressData*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebClient_ProgressData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebClient_ProgressData::*)()>(&::System::Net::WebClient_ProgressData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xac45d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient_ProgressData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& System::Net::WebClient_ProgressData::__cordl_internal_get_BytesSent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesSent;
}
constexpr int64_t const& System::Net::WebClient_ProgressData::__cordl_internal_get_BytesSent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesSent;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_BytesSent(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BytesSent = value;
}
constexpr int64_t& System::Net::WebClient_ProgressData::__cordl_internal_get_TotalBytesToSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesToSend;
}
constexpr int64_t const& System::Net::WebClient_ProgressData::__cordl_internal_get_TotalBytesToSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesToSend;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_TotalBytesToSend(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalBytesToSend = value;
}
constexpr int64_t& System::Net::WebClient_ProgressData::__cordl_internal_get_BytesReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesReceived;
}
constexpr int64_t const& System::Net::WebClient_ProgressData::__cordl_internal_get_BytesReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BytesReceived;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_BytesReceived(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BytesReceived = value;
}
constexpr int64_t& System::Net::WebClient_ProgressData::__cordl_internal_get_TotalBytesToReceive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesToReceive;
}
constexpr int64_t const& System::Net::WebClient_ProgressData::__cordl_internal_get_TotalBytesToReceive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalBytesToReceive;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_TotalBytesToReceive(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalBytesToReceive = value;
}
constexpr bool& System::Net::WebClient_ProgressData::__cordl_internal_get_HasUploadPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasUploadPhase;
}
constexpr bool const& System::Net::WebClient_ProgressData::__cordl_internal_get_HasUploadPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HasUploadPhase;
}
constexpr void System::Net::WebClient_ProgressData::__cordl_internal_set_HasUploadPhase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HasUploadPhase = value;
}
inline void System::Net::WebClient_ProgressData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient_ProgressData*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebClient_ProgressData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebClient_ProgressData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebClient_ProgressData* System::Net::WebClient_ProgressData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebClient_ProgressData*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebClient_ProgressData::WebClient_ProgressData()   {
}
