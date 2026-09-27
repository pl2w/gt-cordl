#pragma once
// IWYU pragma private; include "Liv/Lck/Utilities/FileUtility__CopyToGallery_d__1.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_Permission_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Liv/Lck/Utilities/zzzz__FileUtility__CopyToGallery_d__1_def.hpp"
#include "Liv/Lck/Utilities/zzzz__FileUtility_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileUtility__CopyToGallery_d__1.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileUtility__CopyToGallery_d__1::*)()>(&::GlobalNamespace::FileUtility__CopyToGallery_d__1::MoveNext)> {
  constexpr static std::size_t size = 0xc24;
  constexpr static std::size_t addrs = 0x9d6cc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FileUtility__CopyToGallery_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileUtility__CopyToGallery_d__1.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileUtility__CopyToGallery_d__1::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::FileUtility__CopyToGallery_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d6d89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FileUtility__CopyToGallery_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FileUtility__CopyToGallery_d__1::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FileUtility__CopyToGallery_d__1>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::FileUtility__CopyToGallery_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::FileUtility__CopyToGallery_d__1>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::FileUtility__CopyToGallery_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::FileUtility__CopyToGallery_d__1::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "callback", ty: "::System::Action_2<bool,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceFilePath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "albumName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__2", ty: "::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FileUtility__CopyToGallery_d__1::FileUtility__CopyToGallery_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_2<bool,::StringW>*  callback, ::StringW  sourceFilePath, ::StringW  albumName, ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*  __8__1, ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*  __8__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->callback = callback;
this->sourceFilePath = sourceFilePath;
this->albumName = albumName;
this->__8__1 = __8__1;
this->__8__2 = __8__2;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileUtility__CopyToGallery_d__1::FileUtility__CopyToGallery_d__1()   {
}
