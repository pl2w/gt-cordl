#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipInputStream_def.hpp"
#include "Modio/FileIO/zzzz__BaseDataStorage_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::*)()>(&::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::MoveNext)> {
  constexpr static std::size_t size = 0xb0c;
  constexpr static std::size_t addrs = 0xa04d9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa04e4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "archiveFilePath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_fileStream_5__2", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_stream_5__3", ty: "::ICSharpCode::SharpZipLib::Zip::ZipInputStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap6", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap7", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap8", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, ::StringW  archiveFilePath, ::System::IO::Stream*  _fileStream_5__2, ::ICSharpCode::SharpZipLib::Zip::ZipInputStream*  _stream_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, bool  __7__wrap5, ::System::Object*  __7__wrap6, int32_t  __7__wrap7, bool  __7__wrap8, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->archiveFilePath = archiveFilePath;
this->_fileStream_5__2 = _fileStream_5__2;
this->_stream_5__3 = _stream_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__7__wrap6 = __7__wrap6;
this->__7__wrap7 = __7__wrap7;
this->__7__wrap8 = __7__wrap8;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50::BaseDataStorage__IsThereEnoughSpaceForExtracting_d__50()   {
}
