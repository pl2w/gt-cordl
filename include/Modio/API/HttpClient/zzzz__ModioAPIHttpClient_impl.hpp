#pragma once
// IWYU pragma private; include "Modio/API/HttpClient/ModioAPIHttpClient.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/API/HttpClient/zzzz__ModioAPIHttpClient_def.hpp"
#include "Modio/API/HttpClient/zzzz__ModioAPIHttpClient_<>c__DisplayClass17_0___CheckFakeErrorsForTest_g__FakeConnectionError|0_d_def.hpp"
#include "Modio/API/HttpClient/zzzz__ModioAPIHttpClient__DownloadFile_d__15_def.hpp"
#include "Modio/API/HttpClient/zzzz__ModioAPIHttpClient__GetErrorAndLogBadResponse_d__21_def.hpp"
#include "Modio/API/HttpClient/zzzz__ModioAPIHttpClient__GetJson_d__20_1_def.hpp"
#include "Modio/API/HttpClient/zzzz__ModioAPIHttpClient__LogRequest_d__27_def.hpp"
#include "Modio/API/HttpClient/zzzz__ModioAPIHttpClient_def.hpp"
#include "Modio/API/Interfaces/zzzz__IModioAPIInterface_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequestMethod_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequestOptions_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequest_def.hpp"
#include "Modio/API/zzzz__ModioAPITestSettings_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpContent_def.hpp"
#include "System/Net/Http/zzzz__HttpMethod_def.hpp"
#include "System/Net/Http/zzzz__HttpRequestMessage_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.CancelledOrShutDownError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::System::Threading::CancellationToken)>(&::Modio::API::HttpClient::ModioAPIHttpClient::CancelledOrShutDownError)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9fdee20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"CancelledOrShutDownError", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.SetBasePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::StringW)>(&::Modio::API::HttpClient::ModioAPIHttpClient::SetBasePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdeec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"SetBasePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.AddDefaultPathParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::StringW, ::StringW)>(&::Modio::API::HttpClient::ModioAPIHttpClient::AddDefaultPathParameter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9fdeec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"AddDefaultPathParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.RemoveDefaultPathParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::StringW)>(&::Modio::API::HttpClient::ModioAPIHttpClient::RemoveDefaultPathParameter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fdef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"RemoveDefaultPathParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.SetDefaultHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::StringW, ::StringW)>(&::Modio::API::HttpClient::ModioAPIHttpClient::SetDefaultHeader)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9fdef88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"SetDefaultHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.RemoveDefaultHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::StringW)>(&::Modio::API::HttpClient::ModioAPIHttpClient::RemoveDefaultHeader)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9fdefd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"RemoveDefaultHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.AddDefaultParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::StringW)>(&::Modio::API::HttpClient::ModioAPIHttpClient::AddDefaultParameter)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9fdf000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"AddDefaultParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.RemoveDefaultParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::StringW)>(&::Modio::API::HttpClient::ModioAPIHttpClient::RemoveDefaultParameter)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9fdf0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"RemoveDefaultParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.ResetConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)()>(&::Modio::API::HttpClient::ModioAPIHttpClient::ResetConfiguration)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9fdf104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"ResetConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.Shutdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)()>(&::Modio::API::HttpClient::ModioAPIHttpClient::Shutdown)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9fdf298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"Shutdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.DownloadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>* (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::StringW, ::System::Threading::CancellationToken)>(&::Modio::API::HttpClient::ModioAPIHttpClient::DownloadFile)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x9fdf2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"DownloadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.EnforceAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Error* (*)(::Modio::API::ModioAPIRequest*, ::System::Net::Http::HttpRequestMessage*)>(&::Modio::API::HttpClient::ModioAPIHttpClient::EnforceAuthentication)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9fdf3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"EnforceAuthentication", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>(), ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.CheckFakeErrorsForTest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::StringW)>(&::Modio::API::HttpClient::ModioAPIHttpClient::CheckFakeErrorsForTest)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9fdf5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"CheckFakeErrorsForTest", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.MapContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpContent* (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::Modio::API::ModioAPIRequest*)>(&::Modio::API::HttpClient::ModioAPIHttpClient::MapContent)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x9fdf83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"MapContent", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.MapMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpMethod* (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::Modio::API::ModioAPIRequestMethod)>(&::Modio::API::HttpClient::ModioAPIHttpClient::MapMethod)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x9fdff74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"MapMethod", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestMethod>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.GetErrorAndLogBadResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)(::System::IO::StreamReader*)>(&::Modio::API::HttpClient::ModioAPIHttpClient::GetErrorAndLogBadResponse)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fe0160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"GetErrorAndLogBadResponse", {}, {::i2c::type_of<::System::IO::StreamReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.GetJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::Modio::API::ModioAPIRequest*)>(&::Modio::API::HttpClient::ModioAPIHttpClient::GetJson)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fe0268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"GetJson", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.BuildPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::Modio::API::ModioAPIRequest*)>(&::Modio::API::HttpClient::ModioAPIHttpClient::BuildPath)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9fe0370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"BuildPath", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.PrepareMultipartFormDataContent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpContent* (*)(::Modio::API::ModioAPIRequestOptions*)>(&::Modio::API::HttpClient::ModioAPIHttpClient::PrepareMultipartFormDataContent)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x9fdfa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"PrepareMultipartFormDataContent", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.PrepareByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Http::HttpContent* (*)(::Modio::API::ModioAPIRequestOptions*)>(&::Modio::API::HttpClient::ModioAPIHttpClient::PrepareByteArray)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9fdfea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"PrepareByteArray", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.LogRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::API::HttpClient::ModioAPIHttpClient::*)(::System::Net::Http::HttpRequestMessage*)>(&::Modio::API::HttpClient::ModioAPIHttpClient::LogRequest)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9fe05a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"LogRequest", {}, {::i2c::type_of<::System::Net::Http::HttpRequestMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)()>(&::Modio::API::HttpClient::ModioAPIHttpClient::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fe06a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient::*)()>(&::Modio::API::HttpClient::ModioAPIHttpClient::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9fe06b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::Http::HttpClient*& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr ::System::Net::Http::HttpClient* const& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr void Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_set__client(::System::Net::Http::HttpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____client = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__defaultParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultParameters;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__defaultParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultParameters;
}
constexpr void Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_set__defaultParameters(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultParameters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__pathParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathParameters;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__pathParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathParameters;
}
constexpr void Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_set__pathParameters(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pathParameters = value;
}
constexpr ::StringW& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__basePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basePath;
}
constexpr ::StringW const& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__basePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____basePath;
}
constexpr void Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_set__basePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____basePath = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_get__cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellationTokenSource;
}
constexpr void Modio::API::HttpClient::ModioAPIHttpClient::__cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellationTokenSource = value;
}
inline ::Modio::Error* Modio::API::HttpClient::ModioAPIHttpClient::CancelledOrShutDownError(::System::Threading::CancellationToken  shutdownCancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"CancelledOrShutDownError", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(this, ___internal_method, shutdownCancellationToken);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::SetBasePath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"SetBasePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::AddDefaultPathParameter(::StringW  key, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"AddDefaultPathParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::RemoveDefaultPathParameter(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"RemoveDefaultPathParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::SetDefaultHeader(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"SetDefaultHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::RemoveDefaultHeader(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"RemoveDefaultHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::AddDefaultParameter(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"AddDefaultParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::RemoveDefaultParameter(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"RemoveDefaultParameter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::ResetConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"ResetConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::Shutdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"Shutdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>* Modio::API::HttpClient::ModioAPIHttpClient::DownloadFile(::StringW  url, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"DownloadFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>*>(this, ___internal_method, url, token);
}
inline ::Modio::Error* Modio::API::HttpClient::ModioAPIHttpClient::EnforceAuthentication(::Modio::API::ModioAPIRequest*  downloadRequest, ::System::Net::Http::HttpRequestMessage*  httpRequest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"EnforceAuthentication", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>(), ::i2c::type_of<::System::Net::Http::HttpRequestMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Error*>(nullptr, ___internal_method, downloadRequest, httpRequest);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::API::HttpClient::ModioAPIHttpClient::CheckFakeErrorsForTest(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"CheckFakeErrorsForTest", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method, url);
}
inline ::System::Net::Http::HttpContent* Modio::API::HttpClient::ModioAPIHttpClient::MapContent(::Modio::API::ModioAPIRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"MapContent", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpContent*>(this, ___internal_method, request);
}
inline ::System::Net::Http::HttpMethod* Modio::API::HttpClient::ModioAPIHttpClient::MapMethod(::Modio::API::ModioAPIRequestMethod  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"MapMethod", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestMethod>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpMethod*>(this, ___internal_method, method);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* Modio::API::HttpClient::ModioAPIHttpClient::GetJson(::Modio::API::ModioAPIRequest*  request, ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                    {"GetJson", {::i2c::class_of<T>()}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>(), ::i2c::type_of<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>*>(this, ___internal_method, request, reader);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::API::HttpClient::ModioAPIHttpClient::GetErrorAndLogBadResponse(::System::IO::StreamReader*  streamReader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"GetErrorAndLogBadResponse", {}, {::i2c::type_of<::System::IO::StreamReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method, streamReader);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<T>>>* Modio::API::HttpClient::ModioAPIHttpClient::GetJson(::Modio::API::ModioAPIRequest*  request)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                    {"GetJson", {::i2c::class_of<T>()}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<T>>>*>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>* Modio::API::HttpClient::ModioAPIHttpClient::GetJson(::Modio::API::ModioAPIRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"GetJson", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Newtonsoft::Json::Linq::JToken*>>*>(this, ___internal_method, request);
}
inline ::StringW Modio::API::HttpClient::ModioAPIHttpClient::BuildPath(::Modio::API::ModioAPIRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"BuildPath", {}, {::i2c::type_of<::Modio::API::ModioAPIRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, request);
}
inline ::System::Net::Http::HttpContent* Modio::API::HttpClient::ModioAPIHttpClient::PrepareMultipartFormDataContent(::Modio::API::ModioAPIRequestOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"PrepareMultipartFormDataContent", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpContent*>(nullptr, ___internal_method, options);
}
inline ::System::Net::Http::HttpContent* Modio::API::HttpClient::ModioAPIHttpClient::PrepareByteArray(::Modio::API::ModioAPIRequestOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"PrepareByteArray", {}, {::i2c::type_of<::Modio::API::ModioAPIRequestOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Http::HttpContent*>(nullptr, ___internal_method, options);
}
inline ::System::Threading::Tasks::Task* Modio::API::HttpClient::ModioAPIHttpClient::LogRequest(::System::Net::Http::HttpRequestMessage*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"LogRequest", {}, {::i2c::type_of<::System::Net::Http::HttpRequestMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, request);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::API::HttpClient::ModioAPIHttpClient::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::API::HttpClient::ModioAPIHttpClient* Modio::API::HttpClient::ModioAPIHttpClient::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::HttpClient::ModioAPIHttpClient*>());
}
/// @brief Convert operator to "::Modio::API::Interfaces::IModioAPIInterface"
constexpr  Modio::API::HttpClient::ModioAPIHttpClient::operator ::Modio::API::Interfaces::IModioAPIInterface*() noexcept {
return static_cast<::Modio::API::Interfaces::IModioAPIInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::API::Interfaces::IModioAPIInterface"
constexpr ::Modio::API::Interfaces::IModioAPIInterface* Modio::API::HttpClient::ModioAPIHttpClient::i___Modio__API__Interfaces__IModioAPIInterface() noexcept {
return static_cast<::Modio::API::Interfaces::IModioAPIInterface*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::API::HttpClient::ModioAPIHttpClient::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::API::HttpClient::ModioAPIHttpClient::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::API::HttpClient::ModioAPIHttpClient::ModioAPIHttpClient()   {
}
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::*)()>(&::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdf72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0._CheckFakeErrorsForTest_g__FakeConnectionError_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::*)()>(&::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::_CheckFakeErrorsForTest_g__FakeConnectionError_0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9fdf734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0*>(),
                        {"<CheckFakeErrorsForTest>g__FakeConnectionError|0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::API::ModioAPITestSettings*& Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::__cordl_internal_get_testSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testSettings;
}
constexpr ::Modio::API::ModioAPITestSettings* const& Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::__cordl_internal_get_testSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testSettings;
}
constexpr void Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::__cordl_internal_set_testSettings(::Modio::API::ModioAPITestSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testSettings = value;
}
inline void Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::_CheckFakeErrorsForTest_g__FakeConnectionError_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0*>(),
                        {"<CheckFakeErrorsForTest>g__FakeConnectionError|0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0* Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::Modio::API::HttpClient::ModioAPIHttpClient___c__DisplayClass17_0::ModioAPIHttpClient___c__DisplayClass17_0()   {
}
template<typename T>
inline void Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>::setStaticF___9(::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*  value)  {
::cordl_internals::setStaticField<::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*, "<>9", ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*>(std::forward<::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*>(value));
}
template<typename T>
inline ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>* Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*, "<>9", ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*>();
}
template<typename T>
inline void Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>::setStaticF___9__22_0(::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*, "<>9__22_0", ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*>(std::forward<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*>(value));
}
template<typename T>
inline ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>* Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>::getStaticF___9__22_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>*, "<>9__22_0", ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*>();
}
template<typename T>
inline void Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>* Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>::_GetJson_b__22_0(::Newtonsoft::Json::JsonTextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*>(),
                        {"<GetJson>b__22_0", {}, {::i2c::type_of<::Newtonsoft::Json::JsonTextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Nullable_1<T>>*>(this, ___internal_method, reader);
}
template<typename T>
inline ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>* Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Modio::API::HttpClient::ModioAPIHttpClient___c__22_1<T>::ModioAPIHttpClient___c__22_1()   {
}
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::HttpClient::ModioAPIHttpClient___c::*)()>(&::Modio::API::HttpClient::ModioAPIHttpClient___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fe0854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::HttpClient::ModioAPIHttpClient___c._GetJson_b__23_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* (::Modio::API::HttpClient::ModioAPIHttpClient___c::*)(::Newtonsoft::Json::JsonTextReader*)>(&::Modio::API::HttpClient::ModioAPIHttpClient___c::_GetJson_b__23_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fe085c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c*>(),
                        {"<GetJson>b__23_0", {}, {::i2c::type_of<::Newtonsoft::Json::JsonTextReader*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::HttpClient::ModioAPIHttpClient___c::setStaticF___9(::Modio::API::HttpClient::ModioAPIHttpClient___c*  value)  {
::cordl_internals::setStaticField<::Modio::API::HttpClient::ModioAPIHttpClient___c*, "<>9", ::Modio::API::HttpClient::ModioAPIHttpClient___c*>(std::forward<::Modio::API::HttpClient::ModioAPIHttpClient___c*>(value));
}
inline ::Modio::API::HttpClient::ModioAPIHttpClient___c* Modio::API::HttpClient::ModioAPIHttpClient___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::API::HttpClient::ModioAPIHttpClient___c*, "<>9", ::Modio::API::HttpClient::ModioAPIHttpClient___c*>();
}
inline void Modio::API::HttpClient::ModioAPIHttpClient___c::setStaticF___9__23_0(::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__23_0", ::Modio::API::HttpClient::ModioAPIHttpClient___c*>(std::forward<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*>(value));
}
inline ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>* Modio::API::HttpClient::ModioAPIHttpClient___c::getStaticF___9__23_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>*, "<>9__23_0", ::Modio::API::HttpClient::ModioAPIHttpClient___c*>();
}
inline void Modio::API::HttpClient::ModioAPIHttpClient___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>* Modio::API::HttpClient::ModioAPIHttpClient___c::_GetJson_b__23_0(::Newtonsoft::Json::JsonTextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::HttpClient::ModioAPIHttpClient___c*>(),
                        {"<GetJson>b__23_0", {}, {::i2c::type_of<::Newtonsoft::Json::JsonTextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Newtonsoft::Json::Linq::JToken*>*>(this, ___internal_method, reader);
}
inline ::Modio::API::HttpClient::ModioAPIHttpClient___c* Modio::API::HttpClient::ModioAPIHttpClient___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::HttpClient::ModioAPIHttpClient___c*>());
}
// Ctor Parameters []
constexpr ::Modio::API::HttpClient::ModioAPIHttpClient___c::ModioAPIHttpClient___c()   {
}
