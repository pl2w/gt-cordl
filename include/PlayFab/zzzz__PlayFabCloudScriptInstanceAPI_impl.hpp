#pragma once
// IWYU pragma private; include "PlayFab/PlayFabCloudScriptInstanceAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabCloudScriptInstanceAPI_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__EmptyResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteCloudScriptResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteEntityCloudScriptRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ExecuteFunctionResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ListFunctionsRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ListFunctionsResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ListHttpFunctionsResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ListQueuedFunctionsResult_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PostFunctionResultForEntityTriggeredActionRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PostFunctionResultForFunctionExecutionRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PostFunctionResultForPlayerTriggeredActionRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PostFunctionResultForScheduledTaskRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__RegisterHttpFunctionRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__RegisterQueuedFunctionRequest_def.hpp"
#include "PlayFab/CloudScriptModels/zzzz__UnregisterFunctionRequest_def.hpp"
#include "PlayFab/SharedModels/zzzz__IPlayFabInstanceApi_def.hpp"
#include "PlayFab/zzzz__PlayFabApiSettings_def.hpp"
#include "PlayFab/zzzz__PlayFabAuthenticationContext_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa7c2d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::PlayFabApiSettings*, ::PlayFab::PlayFabAuthenticationContext*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7c2e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::PlayFabCloudScriptInstanceAPI::*)()>(&::PlayFab::PlayFabCloudScriptInstanceAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa7c2e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)()>(&::PlayFab::PlayFabCloudScriptInstanceAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7c2ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.ExecuteEntityCloudScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::ExecuteEntityCloudScript)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c2ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ExecuteEntityCloudScript", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.ExecuteFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::ExecuteFunctionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::ExecuteFunction)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c3060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ExecuteFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.ListFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::ListFunctionsRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::ListFunctions)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c31ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ListFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.ListHttpFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::ListFunctionsRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::ListHttpFunctions)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c3378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ListHttpFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.ListQueuedFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::ListFunctionsRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::ListQueuedFunctions)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c3504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ListQueuedFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.PostFunctionResultForEntityTriggeredAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::PostFunctionResultForEntityTriggeredAction)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c3690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"PostFunctionResultForEntityTriggeredAction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.PostFunctionResultForFunctionExecution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::PostFunctionResultForFunctionExecution)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c381c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"PostFunctionResultForFunctionExecution", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.PostFunctionResultForPlayerTriggeredAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::PostFunctionResultForPlayerTriggeredAction)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c39a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"PostFunctionResultForPlayerTriggeredAction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.PostFunctionResultForScheduledTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::PostFunctionResultForScheduledTask)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c3b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"PostFunctionResultForScheduledTask", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.RegisterHttpFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::RegisterHttpFunction)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c3cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"RegisterHttpFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.RegisterQueuedFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::RegisterQueuedFunction)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c3e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"RegisterQueuedFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptInstanceAPI.UnregisterFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::PlayFabCloudScriptInstanceAPI::*)(::PlayFab::CloudScriptModels::UnregisterFunctionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptInstanceAPI::UnregisterFunction)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa7c3fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"UnregisterFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::UnregisterFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::PlayFabApiSettings*& PlayFab::PlayFabCloudScriptInstanceAPI::__cordl_internal_get_apiSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr ::PlayFab::PlayFabApiSettings* const& PlayFab::PlayFabCloudScriptInstanceAPI::__cordl_internal_get_apiSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apiSettings;
}
constexpr void PlayFab::PlayFabCloudScriptInstanceAPI::__cordl_internal_set_apiSettings(::PlayFab::PlayFabApiSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apiSettings = value;
}
constexpr ::PlayFab::PlayFabAuthenticationContext*& PlayFab::PlayFabCloudScriptInstanceAPI::__cordl_internal_get_authenticationContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr ::PlayFab::PlayFabAuthenticationContext* const& PlayFab::PlayFabCloudScriptInstanceAPI::__cordl_internal_get_authenticationContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___authenticationContext;
}
constexpr void PlayFab::PlayFabCloudScriptInstanceAPI::__cordl_internal_set_authenticationContext(::PlayFab::PlayFabAuthenticationContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___authenticationContext = value;
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::PlayFabApiSettings*>(), ::i2c::type_of<::PlayFab::PlayFabAuthenticationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings, context);
}
inline bool PlayFab::PlayFabCloudScriptInstanceAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::ExecuteEntityCloudScript(::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ExecuteEntityCloudScript", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::ExecuteFunction(::PlayFab::CloudScriptModels::ExecuteFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ExecuteFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::ListFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ListFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::ListHttpFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ListHttpFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::ListQueuedFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"ListQueuedFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::PostFunctionResultForEntityTriggeredAction(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"PostFunctionResultForEntityTriggeredAction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::PostFunctionResultForFunctionExecution(::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"PostFunctionResultForFunctionExecution", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::PostFunctionResultForPlayerTriggeredAction(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"PostFunctionResultForPlayerTriggeredAction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::PostFunctionResultForScheduledTask(::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"PostFunctionResultForScheduledTask", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::RegisterHttpFunction(::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"RegisterHttpFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::RegisterQueuedFunction(::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"RegisterQueuedFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptInstanceAPI::UnregisterFunction(::PlayFab::CloudScriptModels::UnregisterFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptInstanceAPI*>(),
                        {"UnregisterFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::UnregisterFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline ::PlayFab::PlayFabCloudScriptInstanceAPI* PlayFab::PlayFabCloudScriptInstanceAPI::New_ctor(::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabCloudScriptInstanceAPI*>(context));
}
inline ::PlayFab::PlayFabCloudScriptInstanceAPI* PlayFab::PlayFabCloudScriptInstanceAPI::New_ctor(::PlayFab::PlayFabApiSettings*  settings, ::PlayFab::PlayFabAuthenticationContext*  context)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::PlayFabCloudScriptInstanceAPI*>(settings, context));
}
/// @brief Convert operator to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr  PlayFab::PlayFabCloudScriptInstanceAPI::operator ::PlayFab::SharedModels::IPlayFabInstanceApi*() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::SharedModels::IPlayFabInstanceApi"
constexpr ::PlayFab::SharedModels::IPlayFabInstanceApi* PlayFab::PlayFabCloudScriptInstanceAPI::i___PlayFab__SharedModels__IPlayFabInstanceApi() noexcept {
return static_cast<::PlayFab::SharedModels::IPlayFabInstanceApi*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabCloudScriptInstanceAPI::PlayFabCloudScriptInstanceAPI()   {
}
