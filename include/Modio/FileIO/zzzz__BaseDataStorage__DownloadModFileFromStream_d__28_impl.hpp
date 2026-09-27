#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__DownloadModFileFromStream_d__28.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__DownloadModFileFromStream_d__28_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage_def.hpp"
#include "Modio/FileIO/zzzz__ModInstallProgressTracker_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Security/Cryptography/zzzz__MD5_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::*)()>(&::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x1968;
  constexpr static std::size_t addrs = 0xa048acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa04a434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "modId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "modfileId", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "downloadStream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "progressTracker", ty: "::Modio::FileIO::ModInstallProgressTracker*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "md5Hash", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_filePath_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_error_5__3", ty: "::Modio::Error*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_combinedCts_5__5", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_md5_5__6", ty: "::System::Security::Cryptography::MD5*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_writerStream_5__7", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_totalBytesWritten_5__8", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap8", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap9", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap10", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bytesRead_5__12", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::BaseDataStorage__DownloadModFileFromStream_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, int64_t  modId, int64_t  modfileId, ::System::IO::Stream*  downloadStream, ::System::Threading::CancellationToken  token, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker, ::StringW  md5Hash, ::StringW  _filePath_5__2, ::Modio::Error*  _error_5__3, ::ArrayW<uint8_t>  _buffer_5__4, ::System::Threading::CancellationTokenSource*  _combinedCts_5__5, ::System::Security::Cryptography::MD5*  _md5_5__6, ::System::IO::Stream*  _writerStream_5__7, int64_t  _totalBytesWritten_5__8, ::System::IO::Stream*  __7__wrap8, ::System::Object*  __7__wrap9, int32_t  __7__wrap10, int32_t  _bytesRead_5__12, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__2, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__4) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->modId = modId;
this->modfileId = modfileId;
this->downloadStream = downloadStream;
this->token = token;
this->progressTracker = progressTracker;
this->md5Hash = md5Hash;
this->_filePath_5__2 = _filePath_5__2;
this->_error_5__3 = _error_5__3;
this->_buffer_5__4 = _buffer_5__4;
this->_combinedCts_5__5 = _combinedCts_5__5;
this->_md5_5__6 = _md5_5__6;
this->_writerStream_5__7 = _writerStream_5__7;
this->_totalBytesWritten_5__8 = _totalBytesWritten_5__8;
this->__7__wrap8 = __7__wrap8;
this->__7__wrap9 = __7__wrap9;
this->__7__wrap10 = __7__wrap10;
this->_bytesRead_5__12 = _bytesRead_5__12;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
this->__u__4 = __u__4;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28::BaseDataStorage__DownloadModFileFromStream_d__28()   {
}
