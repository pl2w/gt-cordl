#pragma once
// IWYU pragma private; include "System/IO/Stream___ReadAsync_g__FinishReadAsync|44_0_d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Stream___ReadAsync_g__FinishReadAsync|44_0_d)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct Stream___ReadAsync_g__FinishReadAsync_44_0_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d, "System.IO", "Stream/<<ReadAsync>g__FinishReadAsync|44_0>d");
// [CompilerGenerated]
// Dependencies System.Memory`1<T>, System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.Stream/<<ReadAsync>g__FinishReadAsync|44_0>d
struct CORDL_TYPE Stream___ReadAsync_g__FinishReadAsync_44_0_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa2a759c, size 0x38c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa2a7928, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Stream___ReadAsync_g__FinishReadAsync_44_0_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "readTask", ty: "::System::Threading::Tasks::Task_1<int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "localBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localDestination", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr Stream___ReadAsync_g__FinishReadAsync_44_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::Tasks::Task_1<int32_t>*  readTask, ::ArrayW<uint8_t>  localBuffer, ::System::Memory_1<uint8_t>  localDestination, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x28, def value: None
 ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field readTask, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<int32_t>*  readTask;

/// @brief Field localBuffer, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint8_t>  localBuffer;

/// @brief Field localDestination, offset: 0x40, size: 0x10, def value: None
 ::System::Memory_1<uint8_t>  localDestination;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1;

/// @brief Size padding 0x58 - 0x60 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d, readTask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d, localBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d, localDestination) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Stream___ReadAsync_g__FinishReadAsync_44_0_d) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
