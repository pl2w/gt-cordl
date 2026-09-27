#pragma once
// IWYU pragma private; include "Backtrace/Unity/Services/BacktraceApi.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Services/zzzz__BacktraceApi_def.hpp"
#include "Backtrace/Unity/Interfaces/zzzz__IBacktraceApi_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceCredentials_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceData_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceHttpClient_def.hpp"
#include "Backtrace/Unity/Model/zzzz__BacktraceResult_def.hpp"
#include "Backtrace/Unity/Services/zzzz__BacktraceApi_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.get_RequestHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* (::Backtrace::Unity::Services::BacktraceApi::*)()>(&::Backtrace::Unity::Services::BacktraceApi::get_RequestHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_RequestHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.set_RequestHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi::*)(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Services::BacktraceApi::set_RequestHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"set_RequestHandler", {}, {::i2c::type_of<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.get_OnServerError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::System::Exception*>* (::Backtrace::Unity::Services::BacktraceApi::*)()>(&::Backtrace::Unity::Services::BacktraceApi::get_OnServerError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_OnServerError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.set_OnServerError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi::*)(::System::Action_1<::System::Exception*>*)>(&::Backtrace::Unity::Services::BacktraceApi::set_OnServerError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"set_OnServerError", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.get_OnServerResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* (::Backtrace::Unity::Services::BacktraceApi::*)()>(&::Backtrace::Unity::Services::BacktraceApi::get_OnServerResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_OnServerResponse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.set_OnServerResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi::*)(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Services::BacktraceApi::set_OnServerResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"set_OnServerResponse", {}, {::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.get_EnablePerformanceStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceApi::*)()>(&::Backtrace::Unity::Services::BacktraceApi::get_EnablePerformanceStatistics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_EnablePerformanceStatistics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.set_EnablePerformanceStatistics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi::*)(bool)>(&::Backtrace::Unity::Services::BacktraceApi::set_EnablePerformanceStatistics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"set_EnablePerformanceStatistics", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.get_ServerUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Backtrace::Unity::Services::BacktraceApi::*)()>(&::Backtrace::Unity::Services::BacktraceApi::get_ServerUrl)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f06660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_ServerUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi::*)(::Backtrace::Unity::Model::BacktraceCredentials*, bool)>(&::Backtrace::Unity::Services::BacktraceApi::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5efe488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceCredentials*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.SendMinidump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::Services::BacktraceApi::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Services::BacktraceApi::SendMinidump)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f06880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"SendMinidump", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::Services::BacktraceApi::*)(::Backtrace::Unity::Model::BacktraceData*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Services::BacktraceApi::Send)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f06974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"Send", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::Services::BacktraceApi::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, int32_t, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Services::BacktraceApi::Send)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f06a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"Send", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Backtrace::Unity::Services::BacktraceApi::*)(::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*)>(&::Backtrace::Unity::Services::BacktraceApi::Send)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f06b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"Send", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi.PrintLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi::*)(::UnityEngine::Networking::UnityWebRequest*)>(&::Backtrace::Unity::Services::BacktraceApi::PrintLog)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5f06c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"PrintLog", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Backtrace::Unity::Model::BacktraceHttpClient*& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__httpClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____httpClient;
}
constexpr ::Backtrace::Unity::Model::BacktraceHttpClient* const& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__httpClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____httpClient;
}
constexpr void Backtrace::Unity::Services::BacktraceApi::__cordl_internal_set__httpClient(::Backtrace::Unity::Model::BacktraceHttpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____httpClient = value;
}
constexpr ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__RequestHandler_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestHandler_k__BackingField;
}
constexpr ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* const& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__RequestHandler_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequestHandler_k__BackingField;
}
constexpr void Backtrace::Unity::Services::BacktraceApi::__cordl_internal_set__RequestHandler_k__BackingField(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequestHandler_k__BackingField = value;
}
constexpr bool& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__shouldDisplayFailureMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDisplayFailureMessage;
}
constexpr bool const& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__shouldDisplayFailureMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldDisplayFailureMessage;
}
constexpr void Backtrace::Unity::Services::BacktraceApi::__cordl_internal_set__shouldDisplayFailureMessage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldDisplayFailureMessage = value;
}
constexpr ::System::Action_1<::System::Exception*>*& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__OnServerError_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnServerError_k__BackingField;
}
constexpr ::System::Action_1<::System::Exception*>* const& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__OnServerError_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnServerError_k__BackingField;
}
constexpr void Backtrace::Unity::Services::BacktraceApi::__cordl_internal_set__OnServerError_k__BackingField(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnServerError_k__BackingField = value;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__OnServerResponse_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnServerResponse_k__BackingField;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__OnServerResponse_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnServerResponse_k__BackingField;
}
constexpr void Backtrace::Unity::Services::BacktraceApi::__cordl_internal_set__OnServerResponse_k__BackingField(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnServerResponse_k__BackingField = value;
}
constexpr ::System::Uri*& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__serverUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverUrl;
}
constexpr ::System::Uri* const& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__serverUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverUrl;
}
constexpr void Backtrace::Unity::Services::BacktraceApi::__cordl_internal_set__serverUrl(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serverUrl = value;
}
constexpr bool& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__EnablePerformanceStatistics_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnablePerformanceStatistics_k__BackingField;
}
constexpr bool const& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__EnablePerformanceStatistics_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnablePerformanceStatistics_k__BackingField;
}
constexpr void Backtrace::Unity::Services::BacktraceApi::__cordl_internal_set__EnablePerformanceStatistics_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnablePerformanceStatistics_k__BackingField = value;
}
constexpr ::StringW& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__minidumpUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minidumpUrl;
}
constexpr ::StringW const& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__minidumpUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minidumpUrl;
}
constexpr void Backtrace::Unity::Services::BacktraceApi::__cordl_internal_set__minidumpUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minidumpUrl = value;
}
constexpr ::Backtrace::Unity::Model::BacktraceCredentials*& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__credentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentials;
}
constexpr ::Backtrace::Unity::Model::BacktraceCredentials* const& Backtrace::Unity::Services::BacktraceApi::__cordl_internal_get__credentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentials;
}
constexpr void Backtrace::Unity::Services::BacktraceApi::__cordl_internal_set__credentials(::Backtrace::Unity::Model::BacktraceCredentials*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____credentials = value;
}
inline ::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>* Backtrace::Unity::Services::BacktraceApi::get_RequestHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_RequestHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi::set_RequestHandler(::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"set_RequestHandler", {}, {::i2c::type_of<::System::Func_3<::StringW,::Backtrace::Unity::Model::BacktraceData*,::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::System::Exception*>* Backtrace::Unity::Services::BacktraceApi::get_OnServerError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_OnServerError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::System::Exception*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi::set_OnServerError(::System::Action_1<::System::Exception*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"set_OnServerError", {}, {::i2c::type_of<::System::Action_1<::System::Exception*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* Backtrace::Unity::Services::BacktraceApi::get_OnServerResponse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_OnServerResponse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi::set_OnServerResponse(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"set_OnServerResponse", {}, {::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Backtrace::Unity::Services::BacktraceApi::get_EnablePerformanceStatistics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_EnablePerformanceStatistics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi::set_EnablePerformanceStatistics(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"set_EnablePerformanceStatistics", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Backtrace::Unity::Services::BacktraceApi::get_ServerUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"get_ServerUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi::_ctor(::Backtrace::Unity::Model::BacktraceCredentials*  credentials, bool  ignoreSslValidation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {".ctor", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceCredentials*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, credentials, ignoreSslValidation);
}
inline ::System::Collections::IEnumerator* Backtrace::Unity::Services::BacktraceApi::SendMinidump(::StringW  minidumpPath, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  attributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"SendMinidump", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, minidumpPath, attachments, attributes, callback);
}
inline ::System::Collections::IEnumerator* Backtrace::Unity::Services::BacktraceApi::Send(::Backtrace::Unity::Model::BacktraceData*  data, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"Send", {}, {::i2c::type_of<::Backtrace::Unity::Model::BacktraceData*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, data, callback);
}
inline ::System::Collections::IEnumerator* Backtrace::Unity::Services::BacktraceApi::Send(::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, int32_t  deduplication, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"Send", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, json, attachments, deduplication, callback);
}
inline ::System::Collections::IEnumerator* Backtrace::Unity::Services::BacktraceApi::Send(::StringW  json, ::System::Collections::Generic::IEnumerable_1<::StringW>*  attachments, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  attributes, ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"Send", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(), ::i2c::type_of<::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, json, attachments, attributes, callback);
}
inline void Backtrace::Unity::Services::BacktraceApi::PrintLog(::UnityEngine::Networking::UnityWebRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi*>(),
                        {"PrintLog", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::Backtrace::Unity::Services::BacktraceApi* Backtrace::Unity::Services::BacktraceApi::New_ctor(::Backtrace::Unity::Model::BacktraceCredentials*  credentials, bool  ignoreSslValidation)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceApi*>(credentials, ignoreSslValidation));
}
/// @brief Convert operator to "::Backtrace::Unity::Interfaces::IBacktraceApi"
constexpr  Backtrace::Unity::Services::BacktraceApi::operator ::Backtrace::Unity::Interfaces::IBacktraceApi*() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceApi*>(static_cast<void*>(this));
}
/// @brief Convert to "::Backtrace::Unity::Interfaces::IBacktraceApi"
constexpr ::Backtrace::Unity::Interfaces::IBacktraceApi* Backtrace::Unity::Services::BacktraceApi::i___Backtrace__Unity__Interfaces__IBacktraceApi() noexcept {
return static_cast<::Backtrace::Unity::Interfaces::IBacktraceApi*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceApi::BacktraceApi()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::*)(int32_t)>(&::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f0694c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::*)()>(&::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f07878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::*)()>(&::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x5f078a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::*)()>(&::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f07d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::*)()>(&::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::*)()>(&::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f07dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::*)()>(&::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get_attachments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachments;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get_attachments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachments;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_set_attachments(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachments = value;
}
constexpr ::Backtrace::Unity::Services::BacktraceApi*& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Backtrace::Unity::Services::BacktraceApi* const& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_set___4__this(::Backtrace::Unity::Services::BacktraceApi*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get_minidumpPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minidumpPath;
}
constexpr ::StringW const& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get_minidumpPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minidumpPath;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_set_minidumpPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minidumpPath = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* const& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_set_attributes(::System::Collections::Generic::IDictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_set_callback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get__stopWatch_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopWatch_5__2;
}
constexpr ::System::Diagnostics::Stopwatch* const& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get__stopWatch_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopWatch_5__2;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_set__stopWatch_5__2(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopWatch_5__2 = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get__request_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__3;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_get__request_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__3;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__cordl_internal_set__request_5__3(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__3 = value;
}
inline void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24* Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceApi__SendMinidump_d__24::BacktraceApi__SendMinidump_d__24()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__27._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__27::*)(int32_t)>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__27::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f06bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__27.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__27::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5f07020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceApi__Send_d__27::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x5f0704c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__27.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__27::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__27::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5f07780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__27.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::Services::BacktraceApi__Send_d__27::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__27.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__27::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f07838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__27.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::Services::BacktraceApi__Send_d__27::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Backtrace::Unity::Services::BacktraceApi*& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Backtrace::Unity::Services::BacktraceApi* const& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_set___4__this(::Backtrace::Unity::Services::BacktraceApi*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get_json()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr ::StringW const& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get_json() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_set_json(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___json = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get_attachments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachments;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get_attachments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachments;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_set_attachments(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachments = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_set_attributes(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_set_callback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::System::Diagnostics::Stopwatch*& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get__stopWatch_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopWatch_5__2;
}
constexpr ::System::Diagnostics::Stopwatch* const& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get__stopWatch_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopWatch_5__2;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_set__stopWatch_5__2(::System::Diagnostics::Stopwatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopWatch_5__2 = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get__request_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__3;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_get__request_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____request_5__3;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__cordl_internal_set__request_5__3(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____request_5__3 = value;
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__27::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__27::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Services::BacktraceApi__Send_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__27::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::Services::BacktraceApi__Send_d__27::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__27::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::Services::BacktraceApi__Send_d__27::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Backtrace::Unity::Services::BacktraceApi__Send_d__27* Backtrace::Unity::Services::BacktraceApi__Send_d__27::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceApi__Send_d__27*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Backtrace::Unity::Services::BacktraceApi__Send_d__27::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Backtrace::Unity::Services::BacktraceApi__Send_d__27::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Backtrace::Unity::Services::BacktraceApi__Send_d__27::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Backtrace::Unity::Services::BacktraceApi__Send_d__27::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Backtrace::Unity::Services::BacktraceApi__Send_d__27::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Backtrace::Unity::Services::BacktraceApi__Send_d__27::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceApi__Send_d__27::BacktraceApi__Send_d__27()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__26._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__26::*)(int32_t)>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__26::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f06af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__26.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__26::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__26::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f06e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceApi__Send_d__26::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5f06e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__26.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::Services::BacktraceApi__Send_d__26::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__26::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__26.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__26::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__26::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f06fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__26.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::Services::BacktraceApi__Send_d__26::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__26::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f07018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get_deduplication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deduplication;
}
constexpr int32_t const& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get_deduplication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deduplication;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_set_deduplication(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deduplication = value;
}
constexpr ::Backtrace::Unity::Services::BacktraceApi*& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Backtrace::Unity::Services::BacktraceApi* const& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_set___4__this(::Backtrace::Unity::Services::BacktraceApi*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get_json()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr ::StringW const& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get_json() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___json;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_set_json(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___json = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get_attachments()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachments;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>* const& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get_attachments() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachments;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_set_attachments(::System::Collections::Generic::IEnumerable_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachments = value;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__26::__cordl_internal_set_callback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__26::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__26::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Services::BacktraceApi__Send_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::Services::BacktraceApi__Send_d__26::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__26::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::Services::BacktraceApi__Send_d__26::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Backtrace::Unity::Services::BacktraceApi__Send_d__26* Backtrace::Unity::Services::BacktraceApi__Send_d__26::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceApi__Send_d__26*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Backtrace::Unity::Services::BacktraceApi__Send_d__26::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Backtrace::Unity::Services::BacktraceApi__Send_d__26::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Backtrace::Unity::Services::BacktraceApi__Send_d__26::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Backtrace::Unity::Services::BacktraceApi__Send_d__26::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Backtrace::Unity::Services::BacktraceApi__Send_d__26::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Backtrace::Unity::Services::BacktraceApi__Send_d__26::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceApi__Send_d__26::BacktraceApi__Send_d__26()   {
}
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__25._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__25::*)(int32_t)>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f06a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__25.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__25::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f06d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Backtrace::Unity::Services::BacktraceApi__Send_d__25::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__25::MoveNext)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f06d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::Services::BacktraceApi__Send_d__25::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__25.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Backtrace::Unity::Services::BacktraceApi__Send_d__25::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f06e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Services::BacktraceApi__Send_d__25.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Backtrace::Unity::Services::BacktraceApi__Send_d__25::*)()>(&::Backtrace::Unity::Services::BacktraceApi__Send_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f06e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Backtrace::Unity::Services::BacktraceApi*& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Backtrace::Unity::Services::BacktraceApi* const& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_set___4__this(::Backtrace::Unity::Services::BacktraceApi*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Backtrace::Unity::Model::BacktraceData*& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::Backtrace::Unity::Model::BacktraceData* const& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_set_data(::Backtrace::Unity::Model::BacktraceData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>* const& Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Backtrace::Unity::Services::BacktraceApi__Send_d__25::__cordl_internal_set_callback(::System::Action_1<::Backtrace::Unity::Model::BacktraceResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__25::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Backtrace::Unity::Services::BacktraceApi__Send_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::Services::BacktraceApi__Send_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Backtrace::Unity::Services::BacktraceApi__Send_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Backtrace::Unity::Services::BacktraceApi__Send_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Backtrace::Unity::Services::BacktraceApi__Send_d__25* Backtrace::Unity::Services::BacktraceApi__Send_d__25::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Backtrace::Unity::Services::BacktraceApi__Send_d__25*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Backtrace::Unity::Services::BacktraceApi__Send_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Backtrace::Unity::Services::BacktraceApi__Send_d__25::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Backtrace::Unity::Services::BacktraceApi__Send_d__25::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Backtrace::Unity::Services::BacktraceApi__Send_d__25::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Backtrace::Unity::Services::BacktraceApi__Send_d__25::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Backtrace::Unity::Services::BacktraceApi__Send_d__25::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Services::BacktraceApi__Send_d__25::BacktraceApi__Send_d__25()   {
}
