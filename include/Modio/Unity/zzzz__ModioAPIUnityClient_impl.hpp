#pragma once
// IWYU pragma private; include "Modio/Unity/ModioAPIUnityClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/zzzz__ModioAPIUnityClient_def.hpp"
#include "Modio/API/Interfaces/zzzz__IModioAPIInterface_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequestMethod_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequestOptions_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequest_def.hpp"
#include "Modio/API/zzzz__ModioAPITestSettings_def.hpp"
#include "Modio/Unity/zzzz__ModioAPIUnityClient_<>c__DisplayClass14_0___CheckFakeErrorsForTest_g__FakeConnectionError|0_d_def.hpp"
#include "Modio/Unity/zzzz__ModioAPIUnityClient__DownloadFile_d__13_def.hpp"
#include "Modio/Unity/zzzz__ModioAPIUnityClient__GetJson_d__19_1_def.hpp"
#include "Modio/Unity/zzzz__ModioAPIUnityClient__SendRequest_d__29_def.hpp"
#include "Modio/Unity/zzzz__ModioAPIUnityClient_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Networking/zzzz__UploadHandler_def.hpp"
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.SetBasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)(::StringW)>(&::Modio::Unity::ModioAPIUnityClient::SetBasePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f8fe34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"SetBasePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.AddDefaultPathParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)(::StringW, ::StringW)>(&::Modio::Unity::ModioAPIUnityClient::AddDefaultPathParameter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9f8fe3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"AddDefaultPathParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.RemoveDefaultPathParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)(::StringW)>(&::Modio::Unity::ModioAPIUnityClient::RemoveDefaultPathParameter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f8fea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"RemoveDefaultPathParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.AddDefaultParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)(::StringW)>(&::Modio::Unity::ModioAPIUnityClient::AddDefaultParameter)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9f8fefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"AddDefaultParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.RemoveDefaultParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)(::StringW)>(&::Modio::Unity::ModioAPIUnityClient::RemoveDefaultParameter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f8ffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"RemoveDefaultParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.ResetConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)()>(&::Modio::Unity::ModioAPIUnityClient::ResetConfiguration)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x9f90000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"ResetConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)()>(&::Modio::Unity::ModioAPIUnityClient::Shutdown)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9f90184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.DownloadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>* (::Modio::Unity::ModioAPIUnityClient::*)(::StringW, ::System::Threading::CancellationToken)>(&::Modio::Unity::ModioAPIUnityClient::DownloadFile)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9f90198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"DownloadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.CheckFakeErrorsForTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Unity::ModioAPIUnityClient::*)(::StringW)>(&::Modio::Unity::ModioAPIUnityClient::CheckFakeErrorsForTest)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9f902d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"CheckFakeErrorsForTest", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.SetDefaultHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)(::StringW, ::StringW)>(&::Modio::Unity::ModioAPIUnityClient::SetDefaultHeader)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9f9057c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"SetDefaultHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.RemoveDefaultHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)(::StringW)>(&::Modio::Unity::ModioAPIUnityClient::RemoveDefaultHeader)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9f905e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"RemoveDefaultHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.CreateWebRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Modio::Unity::ModioAPIUnityClient::*)(::Modio::API::ModioAPIRequest*, ::StringW, ::UnityEngine::Networking::DownloadHandler*)>(&::Modio::Unity::ModioAPIUnityClient::CreateWebRequest)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x9f9063c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"CreateWebRequest", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.EnforceAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (*)(::Modio::API::ModioAPIRequest*, ::UnityEngine::Networking::UnityWebRequest*)>(&::Modio::Unity::ModioAPIUnityClient::EnforceAuthentication)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9f90cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"EnforceAuthentication", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>(), ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.GetErrorAndLogBadResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (*)(::StringW)>(&::Modio::Unity::ModioAPIUnityClient::GetErrorAndLogBadResponse)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x9f90e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"GetErrorAndLogBadResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.GetJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* (::Modio::Unity::ModioAPIUnityClient::*)(::Modio::API::ModioAPIRequest*)>(&::Modio::Unity::ModioAPIUnityClient::GetJson)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f91488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"GetJson", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.MapUploadHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UploadHandler* (::Modio::Unity::ModioAPIUnityClient::*)(::Modio::API::ModioAPIRequest*)>(&::Modio::Unity::ModioAPIUnityClient::MapUploadHandler)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x9f90b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"MapUploadHandler", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.CreateMultipartFormDataUploadHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UploadHandler* (::Modio::Unity::ModioAPIUnityClient::*)(::Modio::API::ModioAPIRequestOptions*)>(&::Modio::Unity::ModioAPIUnityClient::CreateMultipartFormDataUploadHandler)> {
  constexpr static std::size_t size = 0xb24;
  constexpr static std::size_t addrs = 0x9f917d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"CreateMultipartFormDataUploadHandler", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.PrepareByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UploadHandler* (*)(::Modio::API::ModioAPIRequestOptions*)>(&::Modio::Unity::ModioAPIUnityClient::PrepareByteArray)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9f922f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"PrepareByteArray", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.CreateFormUrlEncodedContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::ModioAPIUnityClient::*)(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Modio::Unity::ModioAPIUnityClient::CreateFormUrlEncodedContent)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x9f91590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"CreateFormUrlEncodedContent", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.MapMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::ModioAPIUnityClient::*)(::Modio::API::ModioAPIRequestMethod)>(&::Modio::Unity::ModioAPIUnityClient::MapMethod)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9f90a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"MapMethod", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.BuildPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Unity::ModioAPIUnityClient::*)(::Modio::API::ModioAPIRequest*)>(&::Modio::Unity::ModioAPIUnityClient::BuildPath)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x9f923d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"BuildPath", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.SendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Unity::ModioAPIUnityClient::*)(::UnityEngine::Networking::UnityWebRequest*, ::System::Threading::CancellationToken, ::System::Threading::CancellationToken)>(&::Modio::Unity::ModioAPIUnityClient::SendRequest)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9f925e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"SendRequest", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)()>(&::Modio::Unity::ModioAPIUnityClient::Dispose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9f92724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.LogRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Unity::ModioAPIUnityClient::*)(::UnityEngine::Networking::UnityWebRequest*, ::Modio::API::ModioAPIRequest*)>(&::Modio::Unity::ModioAPIUnityClient::LogRequest)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x9f9284c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"LogRequest", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.IsResponseConnectionFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::Modio::Unity::ModioAPIUnityClient::IsResponseConnectionFailure)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9f92ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"IsResponseConnectionFailure", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.get_UseUnityClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Modio::Unity::ModioAPIUnityClient::get_UseUnityClient)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f92efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"get_UseUnityClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient.set_UseUnityClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Modio::Unity::ModioAPIUnityClient::set_UseUnityClient)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9f92fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"set_UseUnityClient", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient::*)()>(&::Modio::Unity::ModioAPIUnityClient::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9f9314c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__basePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basePath;
}
constexpr ::StringW const& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__basePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basePath;
}
constexpr void Modio::Unity::ModioAPIUnityClient::__cordl_internal_set__basePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____basePath = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__defaultParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultParameters;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__defaultParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultParameters;
}
constexpr void Modio::Unity::ModioAPIUnityClient::__cordl_internal_set__defaultParameters(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultParameters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__pathParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathParameters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__pathParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathParameters;
}
constexpr void Modio::Unity::ModioAPIUnityClient::__cordl_internal_set__pathParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pathParameters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__defaultHeaders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultHeaders;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__defaultHeaders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultHeaders;
}
constexpr void Modio::Unity::ModioAPIUnityClient::__cordl_internal_set__defaultHeaders(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultHeaders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequest*>*& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__webRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webRequests;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequest*>* const& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__webRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webRequests;
}
constexpr void Modio::Unity::ModioAPIUnityClient::__cordl_internal_set__webRequests(::System::Collections::Generic::List_1<::UnityEngine::Networking::UnityWebRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webRequests = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Modio::Unity::ModioAPIUnityClient::__cordl_internal_get__cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr void Modio::Unity::ModioAPIUnityClient::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellationTokenSource = value;
}
inline void Modio::Unity::ModioAPIUnityClient::SetBasePath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"SetBasePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::ModioAPIUnityClient::AddDefaultPathParameter(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"AddDefaultPathParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void Modio::Unity::ModioAPIUnityClient::RemoveDefaultPathParameter(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"RemoveDefaultPathParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Modio::Unity::ModioAPIUnityClient::AddDefaultParameter(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"AddDefaultParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::ModioAPIUnityClient::RemoveDefaultParameter(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"RemoveDefaultParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Unity::ModioAPIUnityClient::ResetConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"ResetConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::ModioAPIUnityClient::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>* Modio::Unity::ModioAPIUnityClient::DownloadFile(::StringW  url, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"DownloadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>*>(this, ___internal_method, url, token);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Unity::ModioAPIUnityClient::CheckFakeErrorsForTest(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"CheckFakeErrorsForTest", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, url);
}
inline void Modio::Unity::ModioAPIUnityClient::SetDefaultHeader(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"SetDefaultHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void Modio::Unity::ModioAPIUnityClient::RemoveDefaultHeader(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"RemoveDefaultHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::UnityEngine::Networking::UnityWebRequest* Modio::Unity::ModioAPIUnityClient::CreateWebRequest(::Modio::API::ModioAPIRequest*  request, ::StringW  target, ::UnityEngine::Networking::DownloadHandler*  downloadHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"CreateWebRequest", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Networking::DownloadHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, request, target, downloadHandler);
}
inline ::Modio::Error* Modio::Unity::ModioAPIUnityClient::EnforceAuthentication(::Modio::API::ModioAPIRequest*  downloadRequest, ::UnityEngine::Networking::UnityWebRequest*  webRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"EnforceAuthentication", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>(), ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(nullptr, ___internal_method, downloadRequest, webRequest);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* Modio::Unity::ModioAPIUnityClient::GetJson(::Modio::API::ModioAPIRequest*  request, ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                    {"GetJson", {::i2c::class_of<T>()}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>(), ::i2c::type_of<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>(this, ___internal_method, request, reader);
}
inline ::Modio::Error* Modio::Unity::ModioAPIUnityClient::GetErrorAndLogBadResponse(::StringW  jsonResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"GetErrorAndLogBadResponse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(nullptr, ___internal_method, jsonResponse);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<T>>>* Modio::Unity::ModioAPIUnityClient::GetJson(::Modio::API::ModioAPIRequest*  request)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                    {"GetJson", {::i2c::class_of<T>()}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<T>>>*>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* Modio::Unity::ModioAPIUnityClient::GetJson(::Modio::API::ModioAPIRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"GetJson", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>*>(this, ___internal_method, request);
}
inline ::UnityEngine::Networking::UploadHandler* Modio::Unity::ModioAPIUnityClient::MapUploadHandler(::Modio::API::ModioAPIRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"MapUploadHandler", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UploadHandler*>(this, ___internal_method, request);
}
inline ::UnityEngine::Networking::UploadHandler* Modio::Unity::ModioAPIUnityClient::CreateMultipartFormDataUploadHandler(::Modio::API::ModioAPIRequestOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"CreateMultipartFormDataUploadHandler", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UploadHandler*>(this, ___internal_method, options);
}
inline ::UnityEngine::Networking::UploadHandler* Modio::Unity::ModioAPIUnityClient::PrepareByteArray(::Modio::API::ModioAPIRequestOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"PrepareByteArray", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UploadHandler*>(nullptr, ___internal_method, options);
}
inline ::StringW Modio::Unity::ModioAPIUnityClient::CreateFormUrlEncodedContent(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  formParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"CreateFormUrlEncodedContent", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, formParameters);
}
inline ::StringW Modio::Unity::ModioAPIUnityClient::MapMethod(::Modio::API::ModioAPIRequestMethod  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"MapMethod", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, method);
}
inline ::StringW Modio::Unity::ModioAPIUnityClient::BuildPath(::Modio::API::ModioAPIRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"BuildPath", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Unity::ModioAPIUnityClient::SendRequest(::UnityEngine::Networking::UnityWebRequest*  webRequest, ::System::Threading::CancellationToken  shutdownToken, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"SendRequest", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, webRequest, shutdownToken, token);
}
inline void Modio::Unity::ModioAPIUnityClient::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::Unity::ModioAPIUnityClient::LogRequest(::UnityEngine::Networking::UnityWebRequest*  request, ::Modio::API::ModioAPIRequest*  modioRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"LogRequest", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>(), ::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, request, modioRequest);
}
inline bool Modio::Unity::ModioAPIUnityClient::IsResponseConnectionFailure(int64_t  responseCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"IsResponseConnectionFailure", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, responseCode);
}
inline bool Modio::Unity::ModioAPIUnityClient::get_UseUnityClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"get_UseUnityClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Modio::Unity::ModioAPIUnityClient::set_UseUnityClient(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {"set_UseUnityClient", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Unity::ModioAPIUnityClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::ModioAPIUnityClient* Modio::Unity::ModioAPIUnityClient::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ModioAPIUnityClient*>());
}
/// @brief Convert operator to "::Modio::API::Interfaces::IModioAPIInterface"
constexpr  Modio::Unity::ModioAPIUnityClient::operator ::Modio::API::Interfaces::IModioAPIInterface*() noexcept {
return static_cast<::Modio::API::Interfaces::IModioAPIInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::API::Interfaces::IModioAPIInterface"
constexpr ::Modio::API::Interfaces::IModioAPIInterface* Modio::Unity::ModioAPIUnityClient::i___Modio__API__Interfaces__IModioAPIInterface() noexcept {
return static_cast<::Modio::API::Interfaces::IModioAPIInterface*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::Unity::ModioAPIUnityClient::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::Unity::ModioAPIUnityClient::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::ModioAPIUnityClient::ModioAPIUnityClient()   {
}
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::*)()>(&::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9046c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0._CheckFakeErrorsForTest_g__FakeConnectionError_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::*)()>(&::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::_CheckFakeErrorsForTest_g__FakeConnectionError_0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9f90474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0*>(),
                        {"<CheckFakeErrorsForTest>g__FakeConnectionError|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::API::ModioAPITestSettings*& Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::__cordl_internal_get_testSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testSettings;
}
constexpr ::Modio::API::ModioAPITestSettings* const& Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::__cordl_internal_get_testSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testSettings;
}
constexpr void Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::__cordl_internal_set_testSettings(::Modio::API::ModioAPITestSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testSettings = value;
}
inline void Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::_CheckFakeErrorsForTest_g__FakeConnectionError_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0*>(),
                        {"<CheckFakeErrorsForTest>g__FakeConnectionError|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0* Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::ModioAPIUnityClient___c__DisplayClass14_0::ModioAPIUnityClient___c__DisplayClass14_0()   {
}
template<typename T>
inline void Modio::Unity::ModioAPIUnityClient___c__21_1<T>::setStaticF___9(::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*, "<>9", ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*>(std::forward<::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*>(value));
}
template<typename T>
inline ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>* Modio::Unity::ModioAPIUnityClient___c__21_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*, "<>9", ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*>();
}
template<typename T>
inline void Modio::Unity::ModioAPIUnityClient___c__21_1<T>::setStaticF___9__21_0(::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*, "<>9__21_0", ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*>(std::forward<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*>(value));
}
template<typename T>
inline ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>* Modio::Unity::ModioAPIUnityClient___c__21_1<T>::getStaticF___9__21_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*, "<>9__21_0", ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*>();
}
template<typename T>
inline void Modio::Unity::ModioAPIUnityClient___c__21_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>* Modio::Unity::ModioAPIUnityClient___c__21_1<T>::_GetJson_b__21_0(::Newtonsoft::Json::JsonTextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*>(),
                        {"<GetJson>b__21_0", {}, {::i2c::type_of<::Newtonsoft::Json::JsonTextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>(this, ___internal_method, reader);
}
template<typename T>
inline ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>* Modio::Unity::ModioAPIUnityClient___c__21_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ModioAPIUnityClient___c__21_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::Unity::ModioAPIUnityClient___c__21_1<T>::ModioAPIUnityClient___c__21_1()   {
}
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioAPIUnityClient___c::*)()>(&::Modio::Unity::ModioAPIUnityClient___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f93328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioAPIUnityClient___c._GetJson_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* (::Modio::Unity::ModioAPIUnityClient___c::*)(::Newtonsoft::Json::JsonTextReader*)>(&::Modio::Unity::ModioAPIUnityClient___c::_GetJson_b__22_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f93330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c*>(),
                        {"<GetJson>b__22_0", {}, {::i2c::type_of<::Newtonsoft::Json::JsonTextReader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Unity::ModioAPIUnityClient___c::setStaticF___9(::Modio::Unity::ModioAPIUnityClient___c*  value)  {
::cordl_internals::setStaticField<::Modio::Unity::ModioAPIUnityClient___c*, "<>9", ::Modio::Unity::ModioAPIUnityClient___c*>(std::forward<::Modio::Unity::ModioAPIUnityClient___c*>(value));
}
inline ::Modio::Unity::ModioAPIUnityClient___c* Modio::Unity::ModioAPIUnityClient___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Unity::ModioAPIUnityClient___c*, "<>9", ::Modio::Unity::ModioAPIUnityClient___c*>();
}
inline void Modio::Unity::ModioAPIUnityClient___c::setStaticF___9__22_0(::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__22_0", ::Modio::Unity::ModioAPIUnityClient___c*>(std::forward<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>* Modio::Unity::ModioAPIUnityClient___c::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__22_0", ::Modio::Unity::ModioAPIUnityClient___c*>();
}
inline void Modio::Unity::ModioAPIUnityClient___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* Modio::Unity::ModioAPIUnityClient___c::_GetJson_b__22_0(::Newtonsoft::Json::JsonTextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioAPIUnityClient___c*>(),
                        {"<GetJson>b__22_0", {}, {::i2c::type_of<::Newtonsoft::Json::JsonTextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, reader);
}
inline ::Modio::Unity::ModioAPIUnityClient___c* Modio::Unity::ModioAPIUnityClient___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ModioAPIUnityClient___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::ModioAPIUnityClient___c::ModioAPIUnityClient___c()   {
}
