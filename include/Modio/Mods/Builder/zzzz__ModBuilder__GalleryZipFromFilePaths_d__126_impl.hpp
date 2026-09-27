#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModBuilder__GalleryZipFromFilePaths_d__126.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Modio/Mods/Builder/zzzz__ModBuilder__GalleryZipFromFilePaths_d__126_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/zzzz__ZipOutputStream_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::*)()>(&::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::MoveNext)> {
  constexpr static std::size_t size = 0x15b8;
  constexpr static std::size_t addrs = 0xa03424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa035804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "imageFilePaths", ty: "::System::Collections::Generic::ICollection_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_memStream_5__2", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_zipStream_5__3", ty: "::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap6", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap7", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap8", ty: "::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap9", ty: "::System::Collections::Generic::IEnumerator_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_readStream_5__11", ty: "::System::IO::Stream*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap11", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap12", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::ModBuilder__GalleryZipFromFilePaths_d__126(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>  __t__builder, ::System::Collections::Generic::ICollection_1<::StringW>*  imageFilePaths, ::System::IO::MemoryStream*  _memStream_5__2, ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  _zipStream_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>  __7__wrap5, ::System::Object*  __7__wrap6, int32_t  __7__wrap7, ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>  __7__wrap8, ::System::Collections::Generic::IEnumerator_1<::StringW>*  __7__wrap9, ::System::IO::Stream*  _readStream_5__11, ::System::Object*  __7__wrap11, int32_t  __7__wrap12, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->imageFilePaths = imageFilePaths;
this->_memStream_5__2 = _memStream_5__2;
this->_zipStream_5__3 = _zipStream_5__3;
this->__7__wrap3 = __7__wrap3;
this->__7__wrap4 = __7__wrap4;
this->__7__wrap5 = __7__wrap5;
this->__7__wrap6 = __7__wrap6;
this->__7__wrap7 = __7__wrap7;
this->__7__wrap8 = __7__wrap8;
this->__7__wrap9 = __7__wrap9;
this->_readStream_5__11 = _readStream_5__11;
this->__7__wrap11 = __7__wrap11;
this->__7__wrap12 = __7__wrap12;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126::ModBuilder__GalleryZipFromFilePaths_d__126()   {
}
