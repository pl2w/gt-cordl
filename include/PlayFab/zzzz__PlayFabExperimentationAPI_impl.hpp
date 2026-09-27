#pragma once
// IWYU pragma private; include "PlayFab/PlayFabExperimentationAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabExperimentationAPI_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__CreateExperimentRequest_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__CreateExperimentResult_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__DeleteExperimentRequest_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__EmptyResponse_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetExperimentsRequest_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetExperimentsResult_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetLatestScorecardRequest_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetLatestScorecardResult_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetTreatmentAssignmentRequest_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__GetTreatmentAssignmentResult_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__StartExperimentRequest_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__StopExperimentRequest_def.hpp"
#include "PlayFab/ExperimentationModels/zzzz__UpdateExperimentRequest_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabExperimentationAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7c61c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::PlayFabExperimentationAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7c6234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.CreateExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ExperimentationModels::CreateExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationAPI::CreateExperiment)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c6294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"CreateExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::CreateExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.DeleteExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ExperimentationModels::DeleteExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationAPI::DeleteExperiment)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c6428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"DeleteExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::DeleteExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.GetExperiments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ExperimentationModels::GetExperimentsRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationAPI::GetExperiments)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c65bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"GetExperiments", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetExperimentsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.GetLatestScorecard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ExperimentationModels::GetLatestScorecardRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationAPI::GetLatestScorecard)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c6750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"GetLatestScorecard", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetLatestScorecardRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.GetTreatmentAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationAPI::GetTreatmentAssignment)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c68e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"GetTreatmentAssignment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.StartExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ExperimentationModels::StartExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationAPI::StartExperiment)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c6a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"StartExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::StartExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.StopExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ExperimentationModels::StopExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationAPI::StopExperiment)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c6c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"StopExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::StopExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationAPI.UpdateExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::ExperimentationModels::UpdateExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationAPI::UpdateExperiment)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c6da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"UpdateExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::UpdateExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayFab::PlayFabExperimentationAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabExperimentationAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabExperimentationAPI::CreateExperiment(::PlayFab::ExperimentationModels::CreateExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"CreateExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::CreateExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationAPI::DeleteExperiment(::PlayFab::ExperimentationModels::DeleteExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"DeleteExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::DeleteExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationAPI::GetExperiments(::PlayFab::ExperimentationModels::GetExperimentsRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"GetExperiments", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetExperimentsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationAPI::GetLatestScorecard(::PlayFab::ExperimentationModels::GetLatestScorecardRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"GetLatestScorecard", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetLatestScorecardRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationAPI::GetTreatmentAssignment(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"GetTreatmentAssignment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationAPI::StartExperiment(::PlayFab::ExperimentationModels::StartExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"StartExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::StartExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationAPI::StopExperiment(::PlayFab::ExperimentationModels::StopExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"StopExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::StopExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationAPI::UpdateExperiment(::PlayFab::ExperimentationModels::UpdateExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationAPI*>(),
                        {"UpdateExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::UpdateExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabExperimentationAPI::PlayFabExperimentationAPI()   {
}
