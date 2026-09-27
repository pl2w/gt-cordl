#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticUtils__LoadRootsFromBundleAsync_d__3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckCosmeticUtils__LoadRootsFromBundleAsync_d__3)
namespace GlobalNamespace {
struct LckCosmeticUtils_CosmeticRootInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckCosmeticUtils__LoadRootsFromBundleAsync_d__3;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3, "Liv.Lck.Cosmetics", "LckCosmeticUtils/<LoadRootsFromBundleAsync>d__3");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Cosmetics.LckCosmeticUtils/<LoadRootsFromBundleAsync>d__3
struct CORDL_TYPE LckCosmeticUtils__LoadRootsFromBundleAsync_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d6b8ac, size 0x9a4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d6c250, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticUtils__LoadRootsFromBundleAsync_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rootInfos", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cosmeticIdForLogging", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "bundle", ty: "::UnityW<::UnityEngine::AssetBundle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_loadingRequests_5__2", ty: "::System::Collections::Generic::List_1<::UnityEngine::AssetBundleRequest*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr LckCosmeticUtils__LoadRootsFromBundleAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*  rootInfos, ::StringW  cosmeticIdForLogging, ::UnityW<::UnityEngine::AssetBundle>  bundle, ::System::Collections::Generic::List_1<::UnityEngine::AssetBundleRequest*>*  _loadingRequests_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24994};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __t__builder;

/// @brief Field rootInfos, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LckCosmeticUtils_CosmeticRootInfo>*  rootInfos;

/// @brief Field cosmeticIdForLogging, offset: 0x28, size: 0x8, def value: None
 ::StringW  cosmeticIdForLogging;

/// @brief Field bundle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AssetBundle>  bundle;

/// @brief Field <loadingRequests>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::AssetBundleRequest*>*  _loadingRequests_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3, rootInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3, cosmeticIdForLogging) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3, bundle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3, _loadingRequests_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCosmeticUtils__LoadRootsFromBundleAsync_d__3) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
