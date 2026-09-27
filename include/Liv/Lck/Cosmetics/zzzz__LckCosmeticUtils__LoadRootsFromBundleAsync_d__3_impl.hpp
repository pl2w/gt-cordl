#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticUtils__LoadRootsFromBundleAsync_d__3.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticUtils__LoadRootsFromBundleAsync_d__3_def.hpp"
#include "Liv/Lck/Cosmetics/zzzz__LckCosmeticUtils_CosmeticRootInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::*)()>(&::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x9a4;
  constexpr static std::size_t addrs = 0x9d6b8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d6c250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rootInfos", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cosmeticIdForLogging", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bundle", ty: "::UnityW<::UnityEngine::AssetBundle>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_loadingRequests_5__2", ty: "::System::Collections::Generic::List_1<::UnityEngine::AssetBundleRequest*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*  rootInfos, ::StringW  cosmeticIdForLogging, ::UnityW<::UnityEngine::AssetBundle>  bundle, ::System::Collections::Generic::List_1<::UnityEngine::AssetBundleRequest*>*  _loadingRequests_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->rootInfos = rootInfos;
this->cosmeticIdForLogging = cosmeticIdForLogging;
this->bundle = bundle;
this->_loadingRequests_5__2 = _loadingRequests_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3()   {
}
