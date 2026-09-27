#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCosmeticInfo_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_impl.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticsManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::*)()>(&::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x7f0;
  constexpr static std::size_t addrs = 0x9d69334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d6a384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cosmeticInfo", ty: "::Liv::Lck::Core::Cosmetics::LckCosmeticInfo", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Cosmetics::LckCosmeticsManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_cosmeticId_5__2", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bundlePath_5__3", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_bundleLoadRequest_5__4", ty: "::UnityEngine::AssetBundleCreateRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __t__builder, ::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  cosmeticInfo, ::Liv::Lck::Cosmetics::LckCosmeticsManager*  __4__this, ::StringW  _cosmeticId_5__2, ::StringW  _bundlePath_5__3, ::UnityEngine::AssetBundleCreateRequest*  _bundleLoadRequest_5__4, ::GlobalNamespace::Awaitable_Awaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->cosmeticInfo = cosmeticInfo;
this->__4__this = __4__this;
this->_cosmeticId_5__2 = _cosmeticId_5__2;
this->_bundlePath_5__3 = _bundlePath_5__3;
this->_bundleLoadRequest_5__4 = _bundleLoadRequest_5__4;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14()   {
}
