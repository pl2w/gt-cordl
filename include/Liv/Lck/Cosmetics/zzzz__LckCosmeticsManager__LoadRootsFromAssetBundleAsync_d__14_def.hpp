#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCosmeticInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14)
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, "Liv.Lck.Cosmetics", "LckCosmeticsManager/<LoadRootsFromAssetBundleAsync>d__14");
// [CompilerGenerated]
// Dependencies Liv.Lck.Core.Cosmetics.LckCosmeticInfo, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, UnityEngine.Awaitable::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Cosmetics.LckCosmeticsManager/<LoadRootsFromAssetBundleAsync>d__14
struct CORDL_TYPE LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d69334, size 0x7f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d6a384, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cosmeticInfo", ty: "::Liv::Lck::Core::Cosmetics::LckCosmeticInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Cosmetics::LckCosmeticsManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cosmeticId_5__2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bundlePath_5__3", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bundleLoadRequest_5__4", ty: "::UnityEngine::AssetBundleCreateRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>", modifiers: "", def_value: None, comment: None }]
constexpr LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __t__builder, ::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  cosmeticInfo, ::Liv::Lck::Cosmetics::LckCosmeticsManager*  __4__this, ::StringW  _cosmeticId_5__2, ::StringW  _bundlePath_5__3, ::UnityEngine::AssetBundleCreateRequest*  _bundleLoadRequest_5__4, ::GlobalNamespace::Awaitable_Awaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24988};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __t__builder;

/// @brief Field cosmeticInfo, offset: 0x20, size: 0x18, def value: None
 ::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  cosmeticInfo;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::LckCosmeticsManager*  __4__this;

/// @brief Field <cosmeticId>5__2, offset: 0x40, size: 0x8, def value: None
 ::StringW  _cosmeticId_5__2;

/// @brief Field <bundlePath>5__3, offset: 0x48, size: 0x8, def value: None
 ::StringW  _bundlePath_5__3;

/// @brief Field <bundleLoadRequest>5__4, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::AssetBundleCreateRequest*  _bundleLoadRequest_5__4;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::Awaitable_Awaiter  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, cosmeticInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, _cosmeticId_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, _bundlePath_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, _bundleLoadRequest_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCosmeticsManager__LoadRootsFromAssetBundleAsync_d__14) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
