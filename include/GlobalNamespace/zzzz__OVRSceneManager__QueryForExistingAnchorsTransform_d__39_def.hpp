#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneManager__QueryForExistingAnchorsTransform_d__39.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSceneManager__QueryForExistingAnchorsTransform_d__39)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSceneManager__QueryForExistingAnchorsTransform_d__39;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, "", "OVRSceneManager/<QueryForExistingAnchorsTransform>d__39");
// [CompilerGenerated]
// Dependencies OVRAnchor, OVRObjectPool::ListScope`1<T>, OVRTask`1::Awaiter<TResult>, System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSceneManager/<QueryForExistingAnchorsTransform>d__39
struct CORDL_TYPE OVRSceneManager__QueryForExistingAnchorsTransform_d__39 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa636c08, size 0x634, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa63723c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSceneManager__QueryForExistingAnchorsTransform_d__39() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr OVRSceneManager__QueryForExistingAnchorsTransform_d__39(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap1, ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12428};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::System::Guid>  __7__wrap2;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSceneManager__QueryForExistingAnchorsTransform_d__39) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
