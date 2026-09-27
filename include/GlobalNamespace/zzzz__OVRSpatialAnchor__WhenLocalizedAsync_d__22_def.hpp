#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor__WhenLocalizedAsync_d__22.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpatialAnchor__WhenLocalizedAsync_d__22)
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpatialAnchor__WhenLocalizedAsync_d__22;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, "", "OVRSpatialAnchor/<WhenLocalizedAsync>d__22");
// [CompilerGenerated]
// Dependencies OVRTaskBuilder`1<T>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpatialAnchor/<WhenLocalizedAsync>d__22
struct CORDL_TYPE OVRSpatialAnchor__WhenLocalizedAsync_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa64aba4, size 0x40c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa64afb0, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRSpatialAnchor__WhenLocalizedAsync_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr OVRSpatialAnchor__WhenLocalizedAsync_d__22(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool>  __t__builder, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  __4__this, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::GlobalNamespace::OVRTaskBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x38, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__2;

/// @brief Size padding 0x48 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpatialAnchor__WhenLocalizedAsync_d__22) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
