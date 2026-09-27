#pragma once
// IWYU pragma private; include "PlayFab/PlayFabInsightsInstanceAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabInsightsInstanceAPI_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsEmptyRequest_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetDetailsResponse_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetLimitsResponse_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetOperationStatusRequest_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetOperationStatusResponse_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetPendingOperationsRequest_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsGetPendingOperationsResponse_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsOperationResponse_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsSetPerformanceRequest_def.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsSetStorageRetentionRequest_def.hpp"
#include "PlayFab/SharedModels/zzzz__IPlayFabInstanceApi_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabInsightsInstanceAPI::*)(::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabInsightsInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa7cd764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabInsightsInstanceAPI::*)(::PlayFab::PlayFabApiSettings*, ::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabInsightsInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7cd7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::PlayFabInsightsInstanceAPI::*)()>(&::PlayFab::PlayFabInsightsInstanceAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa7cd870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabInsightsInstanceAPI::*)()>(&::PlayFab::PlayFabInsightsInstanceAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7cd898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI.GetDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabInsightsInstanceAPI::*)(::PlayFab::InsightsModels::InsightsEmptyRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsInstanceAPI::GetDetails)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cd8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"GetDetails", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI.GetLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabInsightsInstanceAPI::*)(::PlayFab::InsightsModels::InsightsEmptyRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsInstanceAPI::GetLimits)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cda34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"GetLimits", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI.GetOperationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabInsightsInstanceAPI::*)(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsInstanceAPI::GetOperationStatus)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"GetOperationStatus", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI.GetPendingOperations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabInsightsInstanceAPI::*)(::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsInstanceAPI::GetPendingOperations)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cdd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"GetPendingOperations", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI.SetPerformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabInsightsInstanceAPI::*)(::PlayFab::InsightsModels::InsightsSetPerformanceRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsInstanceAPI::SetPerformance)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7cded8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"SetPerformance", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsSetPerformanceRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsInstanceAPI.SetStorageRetention
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabInsightsInstanceAPI::*)(::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsInstanceAPI::SetStorageRetention)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7ce064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"SetStorageRetention", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabApiSettings*& PlayFab::PlayFabInsightsInstanceAPI::__cordl_internal_get_apiSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr ::PlayFab::PlayFabApiSettings* const& PlayFab::PlayFabInsightsInstanceAPI::__cordl_internal_get_apiSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr void PlayFab::PlayFabInsightsInstanceAPI::__cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apiSettings = value;
}
constexpr ::PlayFab::PlayFabAuthenticationContext*& PlayFab::PlayFabInsightsInstanceAPI::__cordl_internal_get_authenticationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr ::PlayFab::PlayFabAuthenticationContext* const& PlayFab::PlayFabInsightsInstanceAPI::__cordl_internal_get_authenticationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr void PlayFab::PlayFabInsightsInstanceAPI::__cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authenticationContext = value;
}
inline void PlayFab::PlayFabInsightsInstanceAPI::_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void PlayFab::PlayFabInsightsInstanceAPI::_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, context);
}
inline bool PlayFab::PlayFabInsightsInstanceAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::PlayFabInsightsInstanceAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::PlayFabInsightsInstanceAPI::GetDetails(::PlayFab::InsightsModels::InsightsEmptyRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"GetDetails", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsInstanceAPI::GetLimits(::PlayFab::InsightsModels::InsightsEmptyRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"GetLimits", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsInstanceAPI::GetOperationStatus(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"GetOperationStatus", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsInstanceAPI::GetPendingOperations(::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"GetPendingOperations", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsInstanceAPI::SetPerformance(::PlayFab::InsightsModels::InsightsSetPerformanceRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"SetPerformance", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsSetPerformanceRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsInstanceAPI::SetStorageRetention(::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsInstanceAPI*>(),
                        {"SetStorageRetention", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline ::PlayFab::PlayFabInsightsInstanceAPI* PlayFab::PlayFabInsightsInstanceAPI::New_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabInsightsInstanceAPI*>(context));
}
inline ::PlayFab::PlayFabInsightsInstanceAPI* PlayFab::PlayFabInsightsInstanceAPI::New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabInsightsInstanceAPI*>(settings, context));
}
/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr  PlayFab::PlayFabInsightsInstanceAPI::operator ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* PlayFab::PlayFabInsightsInstanceAPI::i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabInsightsInstanceAPI::PlayFabInsightsInstanceAPI()   {
}
