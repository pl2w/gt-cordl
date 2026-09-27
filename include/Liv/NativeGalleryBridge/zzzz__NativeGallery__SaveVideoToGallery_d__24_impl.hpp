#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery__SaveVideoToGallery_d__24.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_Permission_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery__SaveVideoToGallery_d__24_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::*)()>(&::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa369f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa36a188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "existingMediaPath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "album", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "callback", ty: "::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::NativeGallery__SaveVideoToGallery_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>  __t__builder, ::StringW  existingMediaPath, ::StringW  album, ::StringW  filename, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->existingMediaPath = existingMediaPath;
this->album = album;
this->filename = filename;
this->callback = callback;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24::NativeGallery__SaveVideoToGallery_d__24()   {
}
