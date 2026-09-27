#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement_DownloadJob__Run_d__1.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/zzzz__ModInstallationManagement_DownloadJob__Run_d__1_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModInstallationManagement_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::*)()>(&::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x17d0;
  constexpr static std::size_t addrs = 0xa00c0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa00d918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::ModInstallationManagement_DownloadJob*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_error_5__2", ty: "::Modio::Error*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_modfileId_5__3", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_filehashMd5_5__4", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_attempt_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__5", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::DownloadJob_ModInstallationManagement__Run_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::ModInstallationManagement_DownloadJob*  __4__this, ::Modio::Error*  _error_5__2, int64_t  _modfileId_5__3, ::StringW  _filehashMd5_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2, int32_t  _attempt_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::IO::Stream*>>  __u__3, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__5) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_error_5__2 = _error_5__2;
this->_modfileId_5__3 = _modfileId_5__3;
this->_filehashMd5_5__4 = _filehashMd5_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->_attempt_5__5 = _attempt_5__5;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
this->__u__5 = __u__5;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DownloadJob_ModInstallationManagement__Run_d__1::DownloadJob_ModInstallationManagement__Run_d__1()   {
}
