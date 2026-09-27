#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModfileBuilder__AddAllMulipartUploadParts_d__35.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MultipartUploadPartObject_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder__AddAllMulipartUploadParts_d__35_def.hpp"
#include "Modio/Mods/Builder/zzzz__ModfileBuilder_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::*)()>(&::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0xa03a1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa03a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "partCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "readStream", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uploadId", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::Builder::ModfileBuilder*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_chunkSize_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_endByte_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_startByte_5__4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_buffer_5__5", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::ModfileBuilder__AddAllMulipartUploadParts_d__35(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, int32_t  partCount, ::System::IO::Stream*  readStream, ::StringW  uploadId, ::Modio::Mods::Builder::ModfileBuilder*  __4__this, int32_t  _chunkSize_5__2, int32_t  _endByte_5__3, int32_t  _startByte_5__4, ::ArrayW<uint8_t>  _buffer_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->partCount = partCount;
this->readStream = readStream;
this->uploadId = uploadId;
this->__4__this = __4__this;
this->_chunkSize_5__2 = _chunkSize_5__2;
this->_endByte_5__3 = _endByte_5__3;
this->_startByte_5__4 = _startByte_5__4;
this->_buffer_5__5 = _buffer_5__5;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35::ModfileBuilder__AddAllMulipartUploadParts_d__35()   {
}
