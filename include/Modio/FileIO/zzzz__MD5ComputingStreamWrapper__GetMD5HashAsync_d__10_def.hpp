#pragma once
// IWYU pragma private; include "Modio/FileIO/MD5ComputingStreamWrapper__GetMD5HashAsync_d__10.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MD5ComputingStreamWrapper__GetMD5HashAsync_d__10)
namespace Modio::FileIO {
class MD5ComputingStreamWrapper;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MD5ComputingStreamWrapper__GetMD5HashAsync_d__10;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MD5ComputingStreamWrapper__GetMD5HashAsync_d__10);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MD5ComputingStreamWrapper__GetMD5HashAsync_d__10, "Modio.FileIO", "MD5ComputingStreamWrapper/<GetMD5HashAsync>d__10");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.MD5ComputingStreamWrapper/<GetMD5HashAsync>d__10
struct CORDL_TYPE MD5ComputingStreamWrapper__GetMD5HashAsync_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa054158, size 0x334, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa05448c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MD5ComputingStreamWrapper__GetMD5HashAsync_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::MD5ComputingStreamWrapper*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr MD5ComputingStreamWrapper__GetMD5HashAsync_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::Modio::FileIO::MD5ComputingStreamWrapper*  __4__this, ::ArrayW<uint8_t>  _buffer_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17676};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::FileIO::MD5ComputingStreamWrapper*  __4__this;

/// @brief Field <buffer>5__2, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _buffer_5__2;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MD5ComputingStreamWrapper__GetMD5HashAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MD5ComputingStreamWrapper__GetMD5HashAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MD5ComputingStreamWrapper__GetMD5HashAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MD5ComputingStreamWrapper__GetMD5HashAsync_d__10, _buffer_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MD5ComputingStreamWrapper__GetMD5HashAsync_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MD5ComputingStreamWrapper__GetMD5HashAsync_d__10) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
