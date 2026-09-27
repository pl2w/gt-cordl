#pragma once
// IWYU pragma private; include "PlayFab/PlayFabCloudScriptAPI.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__PlayFabCloudScriptAPI_def.hpp"
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
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.IsEntityLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::PlayFab::PlayFabCloudScriptAPI::IsEntityLoggedIn)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa7c1728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::PlayFab::PlayFabCloudScriptAPI::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa7c17bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.ExecuteEntityCloudScript
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::ExecuteEntityCloudScript)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c1874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ExecuteEntityCloudScript", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.ExecuteFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::ExecuteFunctionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::ExecuteFunction)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa7c1a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ExecuteFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.ListFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::ListFunctionsRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::ListFunctions)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c1dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ListFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.ListHttpFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::ListFunctionsRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::ListHttpFunctions)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c1f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ListHttpFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.ListQueuedFunctions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::ListFunctionsRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::ListQueuedFunctions)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c20f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ListQueuedFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.PostFunctionResultForEntityTriggeredAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::PostFunctionResultForEntityTriggeredAction)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c2284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"PostFunctionResultForEntityTriggeredAction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.PostFunctionResultForFunctionExecution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::PostFunctionResultForFunctionExecution)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c2418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"PostFunctionResultForFunctionExecution", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.PostFunctionResultForPlayerTriggeredAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::PostFunctionResultForPlayerTriggeredAction)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c25ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"PostFunctionResultForPlayerTriggeredAction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.PostFunctionResultForScheduledTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::PostFunctionResultForScheduledTask)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c2740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"PostFunctionResultForScheduledTask", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.RegisterHttpFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::RegisterHttpFunction)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c28d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"RegisterHttpFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.RegisterQueuedFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::RegisterQueuedFunction)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c2a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"RegisterQueuedFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::PlayFabCloudScriptAPI.UnregisterFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::PlayFab::CloudScriptModels::UnregisterFunctionRequest*, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::System::Object*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::PlayFab::PlayFabCloudScriptAPI::UnregisterFunction)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7c2bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"UnregisterFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::UnregisterFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool PlayFab::PlayFabCloudScriptAPI::IsEntityLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"IsEntityLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabCloudScriptAPI::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void PlayFab::PlayFabCloudScriptAPI::ExecuteEntityCloudScript(::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ExecuteEntityCloudScript", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteCloudScriptResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::ExecuteFunction(::PlayFab::CloudScriptModels::ExecuteFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ExecuteFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ExecuteFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ExecuteFunctionResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::ListFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ListFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::ListHttpFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ListHttpFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListHttpFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::ListQueuedFunctions(::PlayFab::CloudScriptModels::ListFunctionsRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"ListQueuedFunctions", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::ListFunctionsRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::ListQueuedFunctionsResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::PostFunctionResultForEntityTriggeredAction(::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"PostFunctionResultForEntityTriggeredAction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::PostFunctionResultForFunctionExecution(::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"PostFunctionResultForFunctionExecution", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::PostFunctionResultForPlayerTriggeredAction(::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"PostFunctionResultForPlayerTriggeredAction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::PostFunctionResultForScheduledTask(::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"PostFunctionResultForScheduledTask", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::RegisterHttpFunction(::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"RegisterHttpFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::RegisterHttpFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::RegisterQueuedFunction(::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"RegisterQueuedFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
inline void PlayFab::PlayFabCloudScriptAPI::UnregisterFunction(::PlayFab::CloudScriptModels::UnregisterFunctionRequest*  request, ::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*  resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>*  errorCallback, ::System::Object*  customData, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  extraHeaders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::PlayFabCloudScriptAPI*>(),
                        {"UnregisterFunction", {}, {::i2c::type_of<::PlayFab::CloudScriptModels::UnregisterFunctionRequest*>(), ::i2c::type_of<::System::Action_1<::PlayFab::CloudScriptModels::EmptyResult*>*>(), ::i2c::type_of<::System::Action_1<::PlayFab::PlayFabError*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, request, resultCallback, errorCallback, customData, extraHeaders);
}
// Ctor Parameters []
constexpr ::PlayFab::PlayFabCloudScriptAPI::PlayFabCloudScriptAPI()   {
}
