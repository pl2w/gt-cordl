#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery__SaveToGallery_d__28.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_MediaType_impl.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_Permission_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery__SaveToGallery_d__28_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeGallery__SaveToGallery_d__28.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeGallery__SaveToGallery_d__28::*)()>(&::GlobalNamespace::NativeGallery__SaveToGallery_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0xa3697e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGallery__SaveToGallery_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeGallery__SaveToGallery_d__28.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeGallery__SaveToGallery_d__28::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::NativeGallery__SaveToGallery_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa369eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGallery__SaveToGallery_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NativeGallery__SaveToGallery_d__28::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGallery__SaveToGallery_d__28>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::NativeGallery__SaveToGallery_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGallery__SaveToGallery_d__28>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::NativeGallery__SaveToGallery_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::NativeGallery__SaveToGallery_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "existingMediaPath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mediaType", ty: "::GlobalNamespace::NativeGallery_MediaType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "album", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "callback", ty: "::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_result_5__2", ty: "::GlobalNamespace::NativeGallery_Permission", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeGallery__SaveToGallery_d__28::NativeGallery__SaveToGallery_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>  __t__builder, ::StringW  existingMediaPath, ::GlobalNamespace::NativeGallery_MediaType  mediaType, ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*  __8__1, ::StringW  album, ::StringW  filename, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback, ::GlobalNamespace::NativeGallery_Permission  _result_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->existingMediaPath = existingMediaPath;
this->mediaType = mediaType;
this->__8__1 = __8__1;
this->album = album;
this->filename = filename;
this->callback = callback;
this->_result_5__2 = _result_5__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeGallery__SaveToGallery_d__28::NativeGallery__SaveToGallery_d__28()   {
}
