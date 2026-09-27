#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__InstallModFromStream_d__34.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage___c__DisplayClass34_0_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__InstallModFromStream_d__34_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipInputStream_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage_def.hpp"
#include "Modio/FileIO/zzzz__ModInstallProgressTracker_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::*)()>(&::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x2240;
  constexpr static std::size_t addrs = 0xa04b720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa04d960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mod", ty: "::Modio::Mods::Mod*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "modfileId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__2", ty: "::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "md5Hash", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_combinedCts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_zipStream_5__3", ty: "::ICSharpCode::SharpZipLib::Zip::ZipInputStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_tracker_5__4", ty: "::Modio::FileIO::ModInstallProgressTracker*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_numEntries_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap6", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap7", ty: "::Modio::Error*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap8", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap9", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap10", ty: "::Modio::Error*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::BaseDataStorage__InstallModFromStream_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, ::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::IO::Stream*  stream, ::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0  __8__1, ::System::Threading::CancellationToken  token, ::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*  __8__2, ::StringW  md5Hash, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__1, ::System::Threading::CancellationTokenSource*  _combinedCts_5__2, ::ICSharpCode::SharpZipLib::Zip::ZipInputStream*  _zipStream_5__3, ::Modio::FileIO::ModInstallProgressTracker*  _tracker_5__4, int32_t  _numEntries_5__5, ::System::Object*  __7__wrap5, int32_t  __7__wrap6, ::Modio::Error*  __7__wrap7, ::System::Object*  __7__wrap8, int32_t  __7__wrap9, ::Modio::Error*  __7__wrap10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->mod = mod;
this->modfileId = modfileId;
this->stream = stream;
this->__8__1 = __8__1;
this->token = token;
this->__8__2 = __8__2;
this->md5Hash = md5Hash;
this->__u__1 = __u__1;
this->_combinedCts_5__2 = _combinedCts_5__2;
this->_zipStream_5__3 = _zipStream_5__3;
this->_tracker_5__4 = _tracker_5__4;
this->_numEntries_5__5 = _numEntries_5__5;
this->__7__wrap5 = __7__wrap5;
this->__7__wrap6 = __7__wrap6;
this->__7__wrap7 = __7__wrap7;
this->__7__wrap8 = __7__wrap8;
this->__7__wrap9 = __7__wrap9;
this->__7__wrap10 = __7__wrap10;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34::BaseDataStorage__InstallModFromStream_d__34()   {
}
