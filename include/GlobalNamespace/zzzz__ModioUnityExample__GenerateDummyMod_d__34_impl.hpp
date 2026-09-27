#pragma once
// IWYU pragma private; include "GlobalNamespace/ModioUnityExample__GenerateDummyMod_d__34.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample_DummyModData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample__GenerateDummyMod_d__34_def.hpp"
#include "GlobalNamespace/zzzz__ModioUnityExample_def.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::*)()>(&::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x9f99728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9f99ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::ModioUnityExample_DummyModData>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dummyName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "megabytes", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "summary", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ModioUnityExample>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "backgroundColor", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textColor", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_path_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_fs_5__3", ty: "::System::IO::FileStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::ModioUnityExample__GenerateDummyMod_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::ModioUnityExample_DummyModData>  __t__builder, ::StringW  dummyName, int32_t  megabytes, ::StringW  summary, ::UnityW<::GlobalNamespace::ModioUnityExample>  __4__this, ::StringW  backgroundColor, ::StringW  textColor, ::StringW  _path_5__2, ::System::IO::FileStream*  _fs_5__3, int32_t  _i_5__4, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::StringW  __7__wrap4, ::StringW  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->dummyName = dummyName;
this->megabytes = megabytes;
this->summary = summary;
this->__4__this = __4__this;
this->backgroundColor = backgroundColor;
this->textColor = textColor;
this->_path_5__2 = _path_5__2;
this->_fs_5__3 = _fs_5__3;
this->_i_5__4 = _i_5__4;
this->__u__1 = __u__1;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34::ModioUnityExample__GenerateDummyMod_d__34()   {
}
