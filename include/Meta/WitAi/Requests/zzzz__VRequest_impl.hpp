#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestMethod_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestDecodeDelegate_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestMethod_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestProgressDelegate_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponseDelegate_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__DecodeFileHeaders_d__110_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__DecodeFile_d__112_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__DecodeText_d__121_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__GetDownloadedText_d__104_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__GetError_d__103_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestFileDownload_d__113_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestFileExists_d__116_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestFileHeaders_d__109_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestFile_d__111_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestJsonGet_d__124_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestJsonPost_d__125_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestJsonPost_d__126_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestJsonPost_d__127_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestJson_d__122_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestText_d__120_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__Request_d__92_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__WaitForTimeout_d__97_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__WaitForTurn_d__5_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__WaitWhileRunning_d__102_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e877d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.WaitForTurn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::Meta::WitAi::Requests::VRequest*)>(&::Meta::WitAi::Requests::VRequest::WaitForTurn)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e877e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"WaitForTurn", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e878b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Url", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_Url
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::set_Url)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e878c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_UrlParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_UrlParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e878c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_UrlParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_UrlParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::WitAi::Requests::VRequest::set_UrlParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e878d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_UrlParameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e878d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_ContentType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_ContentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::set_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e878e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_ContentType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Requests::VRequestMethod (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e878e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_Method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::Meta::WitAi::Requests::VRequestMethod)>(&::Meta::WitAi::Requests::VRequest::set_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e878f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_Method", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_Downloader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::DownloadHandler* (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_Downloader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e878f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Downloader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_Downloader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::UnityEngine::Networking::DownloadHandler*)>(&::Meta::WitAi::Requests::VRequest::set_Downloader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_Downloader", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_Uploader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UploadHandler* (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_Uploader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Uploader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_Uploader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::UnityEngine::Networking::UploadHandler*)>(&::Meta::WitAi::Requests::VRequest::set_Uploader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_Uploader", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.add_OnDownloadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::Meta::WitAi::Requests::VRequestProgressDelegate*)>(&::Meta::WitAi::Requests::VRequest::add_OnDownloadProgress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e87918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"add_OnDownloadProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.remove_OnDownloadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::Meta::WitAi::Requests::VRequestProgressDelegate*)>(&::Meta::WitAi::Requests::VRequest::remove_OnDownloadProgress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e879b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"remove_OnDownloadProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_TimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_TimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_TimeoutMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_TimeoutMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(int32_t)>(&::Meta::WitAi::Requests::VRequest::set_TimeoutMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_TimeoutMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_IsQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_IsQueued)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsQueued", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_IsQueued
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(bool)>(&::Meta::WitAi::Requests::VRequest::set_IsQueued)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_IsQueued", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_IsRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_IsRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(bool)>(&::Meta::WitAi::Requests::VRequest::set_IsRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_IsRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_IsDecoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_IsDecoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsDecoding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_IsDecoding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(bool)>(&::Meta::WitAi::Requests::VRequest::set_IsDecoding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_IsDecoding", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_IsPerforming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_IsPerforming)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e87a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsPerforming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_HasFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_HasFirstResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_HasFirstResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_HasFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(bool)>(&::Meta::WitAi::Requests::VRequest::set_HasFirstResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_HasFirstResponse", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_IsComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(bool)>(&::Meta::WitAi::Requests::VRequest::set_IsComplete)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_Completion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<bool>* (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_Completion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Completion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_ResponseCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_ResponseCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_ResponseCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_ResponseCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(int32_t)>(&::Meta::WitAi::Requests::VRequest::set_ResponseCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_ResponseCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_ResponseError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_ResponseError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_ResponseError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_ResponseError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::set_ResponseError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_ResponseError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_UploadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(float_t)>(&::Meta::WitAi::Requests::VRequest::set_UploadProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_UploadProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.get_DownloadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::get_DownloadProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_DownloadProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.set_DownloadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(float_t)>(&::Meta::WitAi::Requests::VRequest::set_DownloadProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e87b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_DownloadProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::Reset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e87b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.GetUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::GetUri)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x9e87b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::GetMethod)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9e87f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.GetHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::GetHeaders)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e88058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.WaitForTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::WaitForTimeout)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e880c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"WaitForTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.UpdateLastResponseTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::UpdateLastResponseTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e88198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"UpdateLastResponseTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.GetLastResponseTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::GetLastResponseTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e881f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"GetLastResponseTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.CreateRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Meta::WitAi::Requests::VRequest::*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::WitAi::Requests::VRequest::CreateRequest)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x9e881fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.MarkRequestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(::UnityEngine::AsyncOperation*)>(&::Meta::WitAi::Requests::VRequest::MarkRequestComplete)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e88730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"MarkRequestComplete", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.WaitWhileRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::WaitWhileRunning)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e887c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.GetError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Tuple_2<int32_t,::StringW>*>* (::Meta::WitAi::Requests::VRequest::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Meta::WitAi::Requests::VRequest::GetError)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e8889c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.GetDownloadedText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::Requests::VRequest::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Meta::WitAi::Requests::VRequest::GetDownloadedText)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e889bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"GetDownloadedText", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.Cancel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::Cancel)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9e88ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::Dispose)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x9e88be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.RaiseFirstResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::RaiseFirstResponse)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e88e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.UpdateDownloadProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)(float_t)>(&::Meta::WitAi::Requests::VRequest::UpdateDownloadProgress)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e88e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.RequestFileHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>* (::Meta::WitAi::Requests::VRequest::*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::RequestFileHeaders)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e88ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestFileHeaders", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.DecodeFileHeaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* (::Meta::WitAi::Requests::VRequest::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Meta::WitAi::Requests::VRequest::DecodeFileHeaders)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e88fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"DecodeFileHeaders", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.RequestFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::ArrayW<uint8_t>>>* (::Meta::WitAi::Requests::VRequest::*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::RequestFile)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e890fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.DecodeFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* (::Meta::WitAi::Requests::VRequest::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Meta::WitAi::Requests::VRequest::DecodeFile)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e89218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"DecodeFile", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.RequestFileDownload
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* (::Meta::WitAi::Requests::VRequest::*)(::StringW, ::StringW)>(&::Meta::WitAi::Requests::VRequest::RequestFileDownload)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9e89334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestFileDownload", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.DecodeSuccess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::Meta::WitAi::Requests::VRequest::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Meta::WitAi::Requests::VRequest::DecodeSuccess)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e89470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"DecodeSuccess", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.GetTmpDownloadPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::WitAi::Requests::VRequest::*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::GetTmpDownloadPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9e894d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"GetTmpDownloadPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.RequestFileExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* (::Meta::WitAi::Requests::VRequest::*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::RequestFileExists)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e89524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestFileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.IsWebUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::IsWebUrl)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e89644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"IsWebUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.IsJarPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::IsJarPath)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e896b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"IsJarPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.HasUriSchema
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::HasUriSchema)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e87f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"HasUriSchema", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.RequestText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>* (::Meta::WitAi::Requests::VRequest::*)(::System::Action_1<::StringW>*)>(&::Meta::WitAi::Requests::VRequest::RequestText)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e89724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestText", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.DecodeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::WitAi::Requests::VRequest::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Meta::WitAi::Requests::VRequest::DecodeText)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e89840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"DecodeText", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest.EncodeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::Meta::WitAi::Requests::VRequest::EncodeText)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e8995c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"EncodeText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::_ctor)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x9e8998c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest._Cancel_b__105_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::_Cancel_b__105_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9e89bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"<Cancel>b__105_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest._Dispose_b__106_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::_Dispose_b__106_0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e89be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"<Dispose>b__106_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest._RequestFile_b__111_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest::*)()>(&::Meta::WitAi::Requests::VRequest::_RequestFile_b__111_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e89c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"<RequestFile>b__111_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Url_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Url_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Url_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__Url_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Url_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::WitAi::Requests::VRequest::__cordl_internal_get__UrlParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UrlParameters_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__UrlParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UrlParameters_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__UrlParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UrlParameters_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VRequest::__cordl_internal_get__ContentType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContentType_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__ContentType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ContentType_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__ContentType_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ContentType_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::VRequestMethod& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Method_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr ::Meta::WitAi::Requests::VRequestMethod const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Method_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Method_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__Method_k__BackingField(::Meta::WitAi::Requests::VRequestMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Method_k__BackingField = value;
}
constexpr ::UnityEngine::Networking::DownloadHandler*& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Downloader_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Downloader_k__BackingField;
}
constexpr ::UnityEngine::Networking::DownloadHandler* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Downloader_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Downloader_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__Downloader_k__BackingField(::UnityEngine::Networking::DownloadHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Downloader_k__BackingField = value;
}
constexpr ::UnityEngine::Networking::UploadHandler*& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Uploader_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Uploader_k__BackingField;
}
constexpr ::UnityEngine::Networking::UploadHandler* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Uploader_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Uploader_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__Uploader_k__BackingField(::UnityEngine::Networking::UploadHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Uploader_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate*& Meta::WitAi::Requests::VRequest::__cordl_internal_get_OnUploadProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUploadProgress;
}
constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get_OnUploadProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUploadProgress;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set_OnUploadProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnUploadProgress = value;
}
constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate*& Meta::WitAi::Requests::VRequest::__cordl_internal_get_OnDownloadProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadProgress;
}
constexpr ::Meta::WitAi::Requests::VRequestProgressDelegate* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get_OnDownloadProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDownloadProgress;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set_OnDownloadProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDownloadProgress = value;
}
constexpr int32_t& Meta::WitAi::Requests::VRequest::__cordl_internal_get__TimeoutMs_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeoutMs_k__BackingField;
}
constexpr int32_t const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__TimeoutMs_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TimeoutMs_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__TimeoutMs_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TimeoutMs_k__BackingField = value;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate*& Meta::WitAi::Requests::VRequest::__cordl_internal_get_OnFirstResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFirstResponse;
}
constexpr ::Meta::WitAi::Requests::VRequestResponseDelegate* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get_OnFirstResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnFirstResponse;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set_OnFirstResponse(::Meta::WitAi::Requests::VRequestResponseDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnFirstResponse = value;
}
constexpr bool& Meta::WitAi::Requests::VRequest::__cordl_internal_get__IsQueued_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsQueued_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__IsQueued_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsQueued_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__IsQueued_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsQueued_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::VRequest::__cordl_internal_get__IsRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRunning_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__IsRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRunning_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__IsRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRunning_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::VRequest::__cordl_internal_get__IsDecoding_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDecoding_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__IsDecoding_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsDecoding_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__IsDecoding_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsDecoding_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::VRequest::__cordl_internal_get__HasFirstResponse_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasFirstResponse_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__HasFirstResponse_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasFirstResponse_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__HasFirstResponse_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasFirstResponse_k__BackingField = value;
}
constexpr bool& Meta::WitAi::Requests::VRequest::__cordl_internal_get__IsComplete_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr bool const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__IsComplete_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsComplete_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__IsComplete_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsComplete_k__BackingField = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Completion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__Completion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Completion_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__Completion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Completion_k__BackingField = value;
}
constexpr int32_t& Meta::WitAi::Requests::VRequest::__cordl_internal_get__ResponseCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResponseCode_k__BackingField;
}
constexpr int32_t const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__ResponseCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResponseCode_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__ResponseCode_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResponseCode_k__BackingField = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VRequest::__cordl_internal_get__ResponseError_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResponseError_k__BackingField;
}
constexpr ::StringW const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__ResponseError_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResponseError_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__ResponseError_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResponseError_k__BackingField = value;
}
constexpr float_t& Meta::WitAi::Requests::VRequest::__cordl_internal_get__UploadProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UploadProgress_k__BackingField;
}
constexpr float_t const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__UploadProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UploadProgress_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__UploadProgress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UploadProgress_k__BackingField = value;
}
constexpr float_t& Meta::WitAi::Requests::VRequest::__cordl_internal_get__DownloadProgress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownloadProgress_k__BackingField;
}
constexpr float_t const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__DownloadProgress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DownloadProgress_k__BackingField;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__DownloadProgress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DownloadProgress_k__BackingField = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& Meta::WitAi::Requests::VRequest::__cordl_internal_get__request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::WitAi::Requests::VRequest::__cordl_internal_get__unityRequestComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityRequestComplete;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__unityRequestComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityRequestComplete;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__unityRequestComplete(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unityRequestComplete = value;
}
constexpr ::System::DateTime& Meta::WitAi::Requests::VRequest::__cordl_internal_get__lastResponseReceivedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastResponseReceivedTime;
}
constexpr ::System::DateTime const& Meta::WitAi::Requests::VRequest::__cordl_internal_get__lastResponseReceivedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastResponseReceivedTime;
}
constexpr void Meta::WitAi::Requests::VRequest::__cordl_internal_set__lastResponseReceivedTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastResponseReceivedTime = value;
}
inline void Meta::WitAi::Requests::VRequest::setStaticF_MaxConcurrentRequests(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MaxConcurrentRequests", ::Meta::WitAi::Requests::VRequest*>(std::forward<int32_t>(value));
}
inline int32_t Meta::WitAi::Requests::VRequest::getStaticF_MaxConcurrentRequests()  {
return ::cordl_internals::getStaticField<int32_t, "MaxConcurrentRequests", ::Meta::WitAi::Requests::VRequest*>();
}
inline void Meta::WitAi::Requests::VRequest::setStaticF__activeRequests(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*, "_activeRequests", ::Meta::WitAi::Requests::VRequest*>(std::forward<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* Meta::WitAi::Requests::VRequest::getStaticF__activeRequests()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*, "_activeRequests", ::Meta::WitAi::Requests::VRequest*>();
}
inline ::Meta::Voice::Logging::IVLogger* Meta::WitAi::Requests::VRequest::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::Requests::VRequest::WaitForTurn(::Meta::WitAi::Requests::VRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"WaitForTurn", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, request);
}
inline ::StringW Meta::WitAi::Requests::VRequest::get_Url()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Url", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_Url(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_Url", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::Requests::VRequest::get_UrlParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_UrlParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_UrlParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_UrlParameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Requests::VRequest::get_ContentType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_ContentType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_ContentType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_ContentType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::WitAi::Requests::VRequestMethod Meta::WitAi::Requests::VRequest::get_Method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Requests::VRequestMethod>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_Method(::Meta::WitAi::Requests::VRequestMethod  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_Method", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::DownloadHandler* Meta::WitAi::Requests::VRequest::get_Downloader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Downloader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::DownloadHandler*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_Downloader(::UnityEngine::Networking::DownloadHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_Downloader", {}, {::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Networking::UploadHandler* Meta::WitAi::Requests::VRequest::get_Uploader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Uploader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UploadHandler*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_Uploader(::UnityEngine::Networking::UploadHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_Uploader", {}, {::i2c::type_of<::UnityEngine::Networking::UploadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::VRequest::add_OnDownloadProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"add_OnDownloadProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::VRequest::remove_OnDownloadProgress(::Meta::WitAi::Requests::VRequestProgressDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"remove_OnDownloadProgress", {}, {::i2c::type_of<::Meta::WitAi::Requests::VRequestProgressDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::WitAi::Requests::VRequest::get_TimeoutMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_TimeoutMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_TimeoutMs(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_TimeoutMs", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::VRequest::get_IsQueued()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsQueued", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_IsQueued(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_IsQueued", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::VRequest::get_IsRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_IsRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_IsRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::VRequest::get_IsDecoding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsDecoding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_IsDecoding(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_IsDecoding", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::VRequest::get_IsPerforming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsPerforming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::WitAi::Requests::VRequest::get_HasFirstResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_HasFirstResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_HasFirstResponse(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_HasFirstResponse", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::WitAi::Requests::VRequest::get_IsComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_IsComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_IsComplete(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_IsComplete", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* Meta::WitAi::Requests::VRequest::get_Completion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_Completion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(this, ___internal_method);
}
inline int32_t Meta::WitAi::Requests::VRequest::get_ResponseCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_ResponseCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_ResponseCode(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_ResponseCode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::WitAi::Requests::VRequest::get_ResponseError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_ResponseError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_ResponseError(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_ResponseError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::VRequest::set_UploadProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_UploadProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Meta::WitAi::Requests::VRequest::get_DownloadProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"get_DownloadProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::set_DownloadProgress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"set_DownloadProgress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::WitAi::Requests::VRequest::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TValue>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>* Meta::WitAi::Requests::VRequest::Request(::Meta::WitAi::Requests::VRequestDecodeDelegate_1<TValue>*  decoder)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 6}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TValue>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>*>(this, ___internal_method, decoder);
}
inline ::System::Uri* Meta::WitAi::Requests::VRequest::GetUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::StringW Meta::WitAi::Requests::VRequest::GetMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Meta::WitAi::Requests::VRequest::GetHeaders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::Requests::VRequest::WaitForTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"WaitForTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::UpdateLastResponseTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"UpdateLastResponseTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTime Meta::WitAi::Requests::VRequest::GetLastResponseTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"GetLastResponseTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::UnityEngine::Networking::UnityWebRequest* Meta::WitAi::Requests::VRequest::CreateRequest(::StringW  url, ::StringW  method, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, url, method, headers);
}
inline void Meta::WitAi::Requests::VRequest::MarkRequestComplete(::UnityEngine::AsyncOperation*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"MarkRequestComplete", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOperation);
}
inline ::System::Threading::Tasks::Task* Meta::WitAi::Requests::VRequest::WaitWhileRunning()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Tuple_2<int32_t,::StringW>*>* Meta::WitAi::Requests::VRequest::GetError(::UnityEngine::Networking::UnityWebRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Tuple_2<int32_t,::StringW>*>*>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::Requests::VRequest::GetDownloadedText(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"GetDownloadedText", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, request);
}
inline void Meta::WitAi::Requests::VRequest::Cancel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::RaiseFirstResponse()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::UpdateDownloadProgress(float_t  progress)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progress);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>* Meta::WitAi::Requests::VRequest::RequestFileHeaders(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestFileHeaders", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>>*>(this, ___internal_method, url);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* Meta::WitAi::Requests::VRequest::DecodeFileHeaders(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"DecodeFileHeaders", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::ArrayW<uint8_t>>>* Meta::WitAi::Requests::VRequest::RequestFile(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestFile", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::ArrayW<uint8_t>>>*>(this, ___internal_method, url);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* Meta::WitAi::Requests::VRequest::DecodeFile(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"DecodeFile", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>*>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* Meta::WitAi::Requests::VRequest::RequestFileDownload(::StringW  url, ::StringW  downloadPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestFileDownload", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>*>(this, ___internal_method, url, downloadPath);
}
inline ::System::Threading::Tasks::Task_1<bool>* Meta::WitAi::Requests::VRequest::DecodeSuccess(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"DecodeSuccess", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, request);
}
inline ::StringW Meta::WitAi::Requests::VRequest::GetTmpDownloadPath(::StringW  downloadPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"GetTmpDownloadPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, downloadPath);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>* Meta::WitAi::Requests::VRequest::RequestFileExists(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestFileExists", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>*>(this, ___internal_method, url);
}
inline bool Meta::WitAi::Requests::VRequest::IsWebUrl(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"IsWebUrl", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, url);
}
inline bool Meta::WitAi::Requests::VRequest::IsJarPath(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"IsJarPath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, url);
}
inline bool Meta::WitAi::Requests::VRequest::HasUriSchema(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"HasUriSchema", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, url);
}
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>* Meta::WitAi::Requests::VRequest::RequestText(::System::Action_1<::StringW>*  onPartial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"RequestText", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>*>(this, ___internal_method, onPartial);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::WitAi::Requests::VRequest::DecodeText(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"DecodeText", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, request);
}
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* Meta::WitAi::Requests::VRequest::RequestJson(::System::Action_1<TData>*  onPartial)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {"RequestJson", {::i2c::class_of<TData>()}, {::i2c::type_of<::System::Action_1<TData>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TData>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>*>(this, ___internal_method, onPartial);
}
template<typename TData>
inline TData Meta::WitAi::Requests::VRequest::DecodeJson(::StringW  json)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {"DecodeJson", {::i2c::class_of<TData>()}, {::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TData>()}
                )));
return ::cordl_internals::RunMethodRethrow<TData>(this, ___internal_method, json);
}
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* Meta::WitAi::Requests::VRequest::RequestJsonGet(::System::Action_1<TData>*  onPartial)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {"RequestJsonGet", {::i2c::class_of<TData>()}, {::i2c::type_of<::System::Action_1<TData>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TData>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>*>(this, ___internal_method, onPartial);
}
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* Meta::WitAi::Requests::VRequest::RequestJsonPost(::System::Action_1<TData>*  onPartial)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {"RequestJsonPost", {::i2c::class_of<TData>()}, {::i2c::type_of<::System::Action_1<TData>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TData>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>*>(this, ___internal_method, onPartial);
}
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* Meta::WitAi::Requests::VRequest::RequestJsonPost(::ArrayW<uint8_t>  postData, ::System::Action_1<TData>*  onPartial)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {"RequestJsonPost", {::i2c::class_of<TData>()}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Action_1<TData>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TData>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>*>(this, ___internal_method, postData, onPartial);
}
template<typename TData>
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>* Meta::WitAi::Requests::VRequest::RequestJsonPost(::StringW  postText, ::System::Action_1<TData>*  onPartial)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                    {"RequestJsonPost", {::i2c::class_of<TData>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<TData>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TData>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>*>(this, ___internal_method, postText, onPartial);
}
inline ::ArrayW<uint8_t> Meta::WitAi::Requests::VRequest::EncodeText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"EncodeText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, text);
}
inline void Meta::WitAi::Requests::VRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::_Cancel_b__105_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"<Cancel>b__105_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::_Dispose_b__106_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"<Dispose>b__106_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest::_RequestFile_b__111_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest*>(),
                        {"<RequestFile>b__111_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VRequest* Meta::WitAi::Requests::VRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequest::VRequest()   {
}
template<typename TValue>
constexpr ::Meta::WitAi::Requests::VRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TValue>
constexpr ::Meta::WitAi::Requests::VRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TValue>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TValue>
constexpr ::StringW& Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_get_url()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
template<typename TValue>
constexpr ::StringW const& Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_get_url() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___url;
}
template<typename TValue>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_set_url(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___url = value;
}
template<typename TValue>
constexpr ::StringW& Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
template<typename TValue>
constexpr ::StringW const& Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
template<typename TValue>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_set_method(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
template<typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_get_headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
template<typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_get_headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
template<typename TValue>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::__cordl_internal_set_headers(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headers = value;
}
template<typename TValue>
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TValue>
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::_Request_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>*>(),
                        {"<Request>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TValue>
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>* Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>*>());
}
// Ctor Parameters []
template<typename TValue>
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass92_0_1<TValue>::VRequest___c__DisplayClass92_0_1()   {
}
template<typename TData>
constexpr ::Meta::WitAi::Requests::VRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TData>
constexpr ::Meta::WitAi::Requests::VRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TData>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::__cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TData>
constexpr ::ArrayW<uint8_t>& Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::__cordl_internal_get_postData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postData;
}
template<typename TData>
constexpr ::ArrayW<uint8_t> const& Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::__cordl_internal_get_postData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postData;
}
template<typename TData>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::__cordl_internal_set_postData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postData = value;
}
template<typename TData>
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::_RequestJsonPost_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>*>(),
                        {"<RequestJsonPost>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>* Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>*>());
}
// Ctor Parameters []
template<typename TData>
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass126_0_1<TData>::VRequest___c__DisplayClass126_0_1()   {
}
template<typename TData>
constexpr ::Meta::WitAi::Requests::VRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TData>
constexpr ::Meta::WitAi::Requests::VRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename TData>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename TData>
constexpr bool& Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_get_decoded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoded;
}
template<typename TData>
constexpr bool const& Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_get_decoded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___decoded;
}
template<typename TData>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_set_decoded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___decoded = value;
}
template<typename TData>
constexpr TData& Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_get_lastPartial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPartial;
}
template<typename TData>
constexpr TData const& Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_get_lastPartial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPartial;
}
template<typename TData>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_set_lastPartial(TData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPartial = value;
}
template<typename TData>
constexpr ::System::Action_1<TData>*& Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_get_onPartial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartial;
}
template<typename TData>
constexpr ::System::Action_1<TData>* const& Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_get_onPartial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartial;
}
template<typename TData>
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::__cordl_internal_set_onPartial(::System::Action_1<TData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPartial = value;
}
template<typename TData>
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TData>
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::_RequestJson_b__0(::StringW  partialText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>*>(),
                        {"<RequestJson>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, partialText);
}
template<typename TData>
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>* Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>*>());
}
// Ctor Parameters []
template<typename TData>
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass122_0_1<TData>::VRequest___c__DisplayClass122_0_1()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8a160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0._DecodeText_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::_DecodeText_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9e8a168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*>(),
                        {"<DecodeText>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::_DecodeText_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*>(),
                        {"<DecodeText>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0* Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0::VRequest___c__DisplayClass121_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8a03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0._RequestText_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::_RequestText_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e8a044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0*>(),
                        {"<RequestText>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::StringW>*& Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::__cordl_internal_get_onPartial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartial;
}
constexpr ::System::Action_1<::StringW>* const& Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::__cordl_internal_get_onPartial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartial;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::__cordl_internal_set_onPartial(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPartial = value;
}
constexpr ::Meta::WitAi::Requests::VRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Requests::VRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::__cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::_RequestText_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0*>(),
                        {"<RequestText>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0* Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass120_0::VRequest___c__DisplayClass120_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e8a008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0._RequestFileExists_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::_RequestFileExists_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e8a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*>(),
                        {"<RequestFileExists>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::VRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Requests::VRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::__cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::__cordl_internal_get_exists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exists;
}
constexpr bool const& Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::__cordl_internal_get_exists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exists;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::__cordl_internal_set_exists(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exists = value;
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::_RequestFileExists_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*>(),
                        {"<RequestFileExists>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0* Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass116_0::VRequest___c__DisplayClass116_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e89f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0._RequestFileDownload_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::_RequestFileDownload_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e89f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*>(),
                        {"<RequestFileDownload>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::WitAi::Requests::VRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Requests::VRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::__cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::__cordl_internal_get_downloadTempPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadTempPath;
}
constexpr ::StringW const& Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::__cordl_internal_get_downloadTempPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downloadTempPath;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::__cordl_internal_set_downloadTempPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downloadTempPath = value;
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::_RequestFileDownload_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*>(),
                        {"<RequestFileDownload>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0* Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass113_0::VRequest___c__DisplayClass113_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e89f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0._DecodeFile_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::_DecodeFile_b__0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9e89f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0*>(),
                        {"<DecodeFile>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::ArrayW<uint8_t> const& Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::__cordl_internal_set_data(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::_DecodeFile_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0*>(),
                        {"<DecodeFile>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0* Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass112_0::VRequest___c__DisplayClass112_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e89f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0._DecodeFileHeaders_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::_DecodeFileHeaders_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e89f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0*>(),
                        {"<DecodeFileHeaders>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::__cordl_internal_get_results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::__cordl_internal_get_results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___results;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::__cordl_internal_set_results(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___results = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::_DecodeFileHeaders_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0*>(),
                        {"<DecodeFileHeaders>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0* Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass110_0::VRequest___c__DisplayClass110_0()   {
}
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e89cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0._GetDownloadedText_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::*)()>(&::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::_GetDownloadedText_b__0)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x9e89cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0*>(),
                        {"<GetDownloadedText>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::__cordl_internal_set_request(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::StringW& Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::__cordl_internal_get_text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr ::StringW const& Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::__cordl_internal_get_text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___text;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::__cordl_internal_set_text(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___text = value;
}
constexpr ::Meta::WitAi::Requests::VRequest*& Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::WitAi::Requests::VRequest* const& Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::__cordl_internal_set___4__this(::Meta::WitAi::Requests::VRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::_GetDownloadedText_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0*>(),
                        {"<GetDownloadedText>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0* Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0*>());
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VRequest___c__DisplayClass104_0::VRequest___c__DisplayClass104_0()   {
}
