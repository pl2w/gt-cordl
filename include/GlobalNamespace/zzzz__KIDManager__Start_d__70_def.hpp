#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__Start_d__70.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDManager__Start_d__70)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDManager__Start_d__70;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDManager__Start_d__70);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDManager__Start_d__70, "", "KIDManager/<Start>d__70");
// [CompilerGenerated]
// Dependencies System.DateTime, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDManager/<Start>d__70
struct CORDL_TYPE KIDManager__Start_d__70 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a39f18, size 0x48c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a3a3a4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDManager__Start_d__70() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<::System::DateTime>>", modifiers: "", def_value: None, comment: None }]
constexpr KIDManager__Start_d__70(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<::System::DateTime>>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__2;

/// @brief Field <>u__3, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Nullable_1<::System::DateTime>>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDManager__Start_d__70, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Start_d__70, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Start_d__70, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Start_d__70, __u__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDManager__Start_d__70, __u__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDManager__Start_d__70) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
