#pragma once
// IWYU pragma private; include "PlayFab/PlayFabExperimentationInstanceAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabExperimentationInstanceAPI_def.hpp"
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
#include "PlayFab/SharedModels/zzzz__IPlayFabInstanceApi_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa7c6f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::PlayFabApiSettings*, ::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7c6fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::PlayFabExperimentationInstanceAPI::*)()>(&::PlayFab::PlayFabExperimentationInstanceAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa7c7040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)()>(&::PlayFab::PlayFabExperimentationInstanceAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7c7068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.CreateExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::ExperimentationModels::CreateExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::CreateExperiment)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c7078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"CreateExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::CreateExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.DeleteExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::ExperimentationModels::DeleteExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::DeleteExperiment)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c7204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"DeleteExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::DeleteExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.GetExperiments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::ExperimentationModels::GetExperimentsRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::GetExperiments)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c7390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"GetExperiments", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetExperimentsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.GetLatestScorecard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::ExperimentationModels::GetLatestScorecardRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::GetLatestScorecard)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c751c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"GetLatestScorecard", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetLatestScorecardRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.GetTreatmentAssignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::GetTreatmentAssignment)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c76a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"GetTreatmentAssignment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.StartExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::ExperimentationModels::StartExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::StartExperiment)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"StartExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::StartExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.StopExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::ExperimentationModels::StopExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::StopExperiment)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"StopExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::StopExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabExperimentationInstanceAPI.UpdateExperiment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabExperimentationInstanceAPI::*)(::PlayFab::ExperimentationModels::UpdateExperimentRequest*, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabExperimentationInstanceAPI::UpdateExperiment)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c7b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"UpdateExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::UpdateExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabApiSettings*& PlayFab::PlayFabExperimentationInstanceAPI::__cordl_internal_get_apiSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr ::PlayFab::PlayFabApiSettings* const& PlayFab::PlayFabExperimentationInstanceAPI::__cordl_internal_get_apiSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr void PlayFab::PlayFabExperimentationInstanceAPI::__cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apiSettings = value;
}
constexpr ::PlayFab::PlayFabAuthenticationContext*& PlayFab::PlayFabExperimentationInstanceAPI::__cordl_internal_get_authenticationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr ::PlayFab::PlayFabAuthenticationContext* const& PlayFab::PlayFabExperimentationInstanceAPI::__cordl_internal_get_authenticationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr void PlayFab::PlayFabExperimentationInstanceAPI::__cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authenticationContext = value;
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, context);
}
inline bool PlayFab::PlayFabExperimentationInstanceAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::CreateExperiment(::PlayFab::ExperimentationModels::CreateExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"CreateExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::CreateExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::CreateExperimentResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::DeleteExperiment(::PlayFab::ExperimentationModels::DeleteExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"DeleteExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::DeleteExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::GetExperiments(::PlayFab::ExperimentationModels::GetExperimentsRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"GetExperiments", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetExperimentsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetExperimentsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::GetLatestScorecard(::PlayFab::ExperimentationModels::GetLatestScorecardRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"GetLatestScorecard", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetLatestScorecardRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetLatestScorecardResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::GetTreatmentAssignment(::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"GetTreatmentAssignment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::GetTreatmentAssignmentResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::StartExperiment(::PlayFab::ExperimentationModels::StartExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"StartExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::StartExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::StopExperiment(::PlayFab::ExperimentationModels::StopExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"StopExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::StopExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabExperimentationInstanceAPI::UpdateExperiment(::PlayFab::ExperimentationModels::UpdateExperimentRequest*  request, ::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabExperimentationInstanceAPI*>(),
                        {"UpdateExperiment", {}, {::i2c::type_of<::PlayFab::ExperimentationModels::UpdateExperimentRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::ExperimentationModels::EmptyResponse*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline ::PlayFab::PlayFabExperimentationInstanceAPI* PlayFab::PlayFabExperimentationInstanceAPI::New_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabExperimentationInstanceAPI*>(context));
}
inline ::PlayFab::PlayFabExperimentationInstanceAPI* PlayFab::PlayFabExperimentationInstanceAPI::New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabExperimentationInstanceAPI*>(settings, context));
}
/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr  PlayFab::PlayFabExperimentationInstanceAPI::operator ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* PlayFab::PlayFabExperimentationInstanceAPI::i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabExperimentationInstanceAPI::PlayFabExperimentationInstanceAPI()   {
}
