#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer__StartImagePlayback_d__48.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_VODStreamChannel_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer__StartImagePlayback_d__48_def.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VODTarget_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandlerTexture_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VODPlayer__StartImagePlayback_d__48.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer__StartImagePlayback_d__48::*)()>(&::GlobalNamespace::VODPlayer__StartImagePlayback_d__48::MoveNext)> {
  constexpr static std::size_t size = 0xbb8;
  constexpr static std::size_t addrs = 0x5d05de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer__StartImagePlayback_d__48>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer__StartImagePlayback_d__48.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer__StartImagePlayback_d__48::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::VODPlayer__StartImagePlayback_d__48::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d069fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer__StartImagePlayback_d__48>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VODPlayer__StartImagePlayback_d__48::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer__StartImagePlayback_d__48>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::VODPlayer__StartImagePlayback_d__48::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer__StartImagePlayback_d__48>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::VODPlayer__StartImagePlayback_d__48::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::VODPlayer__StartImagePlayback_d__48::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "duration", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::VODPlayer>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ch", ty: "::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cachedUrl", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fileId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_imageTargets_5__2", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_www_5__3", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_downloadHandlerTexture_5__4", ty: "::UnityEngine::Networking::DownloadHandlerTexture*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VODPlayer__StartImagePlayback_d__48::VODPlayer__StartImagePlayback_d__48(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, int32_t  duration, double_t  time, ::UnityW<::GlobalNamespace::VODPlayer>  __4__this, ::GlobalNamespace::VODStream_VODPlayer_VODStreamChannel  ch, ::StringW  cachedUrl, ::StringW  url, ::StringW  fileId, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VODTarget>>*  _imageTargets_5__2, ::UnityEngine::Networking::UnityWebRequest*  _www_5__3, ::UnityEngine::Networking::DownloadHandlerTexture*  _downloadHandlerTexture_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->duration = duration;
this->time = time;
this->__4__this = __4__this;
this->ch = ch;
this->cachedUrl = cachedUrl;
this->url = url;
this->fileId = fileId;
this->_imageTargets_5__2 = _imageTargets_5__2;
this->_www_5__3 = _www_5__3;
this->_downloadHandlerTexture_5__4 = _downloadHandlerTexture_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODPlayer__StartImagePlayback_d__48::VODPlayer__StartImagePlayback_d__48()   {
}
