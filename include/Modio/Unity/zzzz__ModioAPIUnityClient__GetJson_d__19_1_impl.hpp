#pragma once
// IWYU pragma private; include "Modio/Unity/ModioAPIUnityClient__GetJson_d__19_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Unity/zzzz__ModioAPIUnityClient__GetJson_d__19_1_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequest_def.hpp"
#include "Modio/Unity/zzzz__ModioAPIUnityClient_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextReader_def.hpp"
#include "System/IO/zzzz__StringReader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
template<typename T>
inline void GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1<T>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1<T>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr  GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::Unity::ModioAPIUnityClient*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "request", ty: "::Modio::API::ModioAPIRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reader", ty: "::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_target_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_webRequest_5__3", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cachedShutdownToken_5__4", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_stringReader_5__5", ty: "::System::IO::StringReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_jsonTextReader_5__6", ty: "::Newtonsoft::Json::JsonTextReader*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1<T>::ModioAPIUnityClient__GetJson_d__19_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>  __t__builder, ::Modio::Unity::ModioAPIUnityClient*  __4__this, ::Modio::API::ModioAPIRequest*  request, ::System::Func_2<::Newtonsoft::Json::JsonTextReader*,::System::Threading::Tasks::Task_1<T>*>*  reader, ::StringW  _target_5__2, ::UnityEngine::Networking::UnityWebRequest*  _webRequest_5__3, ::System::Threading::CancellationToken  _cachedShutdownToken_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1, ::System::IO::StringReader*  _stringReader_5__5, ::Newtonsoft::Json::JsonTextReader*  _jsonTextReader_5__6, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->request = request;
this->reader = reader;
this->_target_5__2 = _target_5__2;
this->_webRequest_5__3 = _webRequest_5__3;
this->_cachedShutdownToken_5__4 = _cachedShutdownToken_5__4;
this->__u__1 = __u__1;
this->_stringReader_5__5 = _stringReader_5__5;
this->_jsonTextReader_5__6 = _jsonTextReader_5__6;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ModioAPIUnityClient__GetJson_d__19_1<T>::ModioAPIUnityClient__GetJson_d__19_1()   {
}
