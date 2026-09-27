#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__ExtractFileFromZipStream_d__36.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__ExtractFileFromZipStream_d__36_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipEntry_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipInputStream_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage_def.hpp"
#include "Modio/FileIO/zzzz__ModInstallProgressTracker_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::*)()>(&::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::MoveNext)> {
  constexpr static std::size_t size = 0x9e4;
  constexpr static std::size_t addrs = 0xa04a4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa04ae94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entry", ty: "::ICSharpCode::SharpZipLib::Zip::ZipEntry*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "zipStream", ty: "::ICSharpCode::SharpZipLib::Zip::ZipInputStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "progressTracker", ty: "::Modio::FileIO::ModInstallProgressTracker*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_writerStream_5__2", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buffer_5__3", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::BaseDataStorage__ExtractFileFromZipStream_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::Modio::FileIO::BaseDataStorage*  __4__this, ::StringW  filePath, ::ICSharpCode::SharpZipLib::Zip::ZipInputStream*  zipStream, ::System::Threading::CancellationToken  token, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker, ::System::IO::Stream*  _writerStream_5__2, ::ArrayW<uint8_t>  _buffer_5__3, ::System::IO::Stream*  __7__wrap3, ::System::Object*  __7__wrap4, int32_t  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->entry = entry;
this->__4__this = __4__this;
this->filePath = filePath;
this->zipStream = zipStream;
this->token = token;
this->progressTracker = progressTracker;
this->_writerStream_5__2 = _writerStream_5__2;
this->_buffer_5__3 = _buffer_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36::BaseDataStorage__ExtractFileFromZipStream_d__36()   {
}
