#pragma once
// IWYU pragma private; include "Fusion/FusionAddressablePrefabsPreloader__Start_d__1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionAddressablePrefabsPreloader__Start_d__1)
namespace Fusion {
class FusionAddressablePrefabsPreloader;
}
namespace Fusion {
class INetworkPrefabSource;
}
namespace Fusion {
struct NetworkPrefabId;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct FusionAddressablePrefabsPreloader__Start_d__1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1, "Fusion", "FusionAddressablePrefabsPreloader/<Start>d__1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.FusionAddressablePrefabsPreloader/<Start>d__1
struct CORDL_TYPE FusionAddressablePrefabsPreloader__Start_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x60e99c0, size 0x6b8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x60ea078, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FusionAddressablePrefabsPreloader__Start_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Fusion::FusionAddressablePrefabsPreloader>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handle_5__3", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>>", modifiers: "", def_value: None, comment: None }]
constexpr FusionAddressablePrefabsPreloader__Start_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Fusion::FusionAddressablePrefabsPreloader>  __4__this, ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*  __7__wrap1, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  _handle_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23455};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Fusion::FusionAddressablePrefabsPreloader>  __4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Fusion::NetworkPrefabId,::Fusion::INetworkPrefabSource*>>*  __7__wrap1;

/// @brief Field <handle>5__3, offset: 0x38, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  _handle_5__3;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::GameObject>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1, _handle_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionAddressablePrefabsPreloader__Start_d__1) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
