#pragma once
// IWYU pragma private; include "PlayFab/PlayFabInsightsAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabInsightsAPI_def.hpp"
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
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabInsightsAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabInsightsAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7ccd18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::PlayFabInsightsAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7ccd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsAPI.GetDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::InsightsModels::InsightsEmptyRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsAPI::GetDetails)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7ccdec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"GetDetails", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsAPI.GetLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::InsightsModels::InsightsEmptyRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsAPI::GetLimits)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7ccf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"GetLimits", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsAPI.GetOperationStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsAPI::GetOperationStatus)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7cd114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"GetOperationStatus", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsAPI.GetPendingOperations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsAPI::GetPendingOperations)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7cd2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"GetPendingOperations", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsAPI.SetPerformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::InsightsModels::InsightsSetPerformanceRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsAPI::SetPerformance)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7cd43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"SetPerformance", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsSetPerformanceRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabInsightsAPI.SetStorageRetention
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabInsightsAPI::SetStorageRetention)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7cd5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"SetStorageRetention", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayFab::PlayFabInsightsAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabInsightsAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabInsightsAPI::GetDetails(::PlayFab::InsightsModels::InsightsEmptyRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"GetDetails", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetDetailsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsAPI::GetLimits(::PlayFab::InsightsModels::InsightsEmptyRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"GetLimits", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetLimitsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsAPI::GetOperationStatus(::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"GetOperationStatus", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsGetOperationStatusRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetOperationStatusResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsAPI::GetPendingOperations(::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"GetPendingOperations", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsGetPendingOperationsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsGetPendingOperationsResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsAPI::SetPerformance(::PlayFab::InsightsModels::InsightsSetPerformanceRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"SetPerformance", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsSetPerformanceRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabInsightsAPI::SetStorageRetention(::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*  request, ::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabInsightsAPI*>(),
                        {"SetStorageRetention", {}, {::i2c::type_of<::PlayFab::InsightsModels::InsightsSetStorageRetentionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::InsightsModels::InsightsOperationResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabInsightsAPI::PlayFabInsightsAPI()   {
}
