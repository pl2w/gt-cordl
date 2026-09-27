#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__CalculateMd5Hash_d__30.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage__CalculateMd5Hash_d__30)
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Security::Cryptography {
class MD5;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseDataStorage__CalculateMd5Hash_d__30;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, "Modio.FileIO", "BaseDataStorage/<CalculateMd5Hash>d__30");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<CalculateMd5Hash>d__30
struct CORDL_TYPE BaseDataStorage__CalculateMd5Hash_d__30 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa04708c, size 0x848, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa0478d4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__CalculateMd5Hash_d__30() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_md5_5__2", ty: "::System::Security::Cryptography::MD5*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stream_5__3", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__CalculateMd5Hash_d__30(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>  __t__builder, ::StringW  filePath, ::ArrayW<uint8_t>  buffer, ::System::Security::Cryptography::MD5*  _md5_5__2, ::System::IO::Stream*  _stream_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::ArrayW<uint8_t>  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17647};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<uint8_t>>  __t__builder;

/// @brief Field filePath, offset: 0x20, size: 0x8, def value: None
 ::StringW  filePath;

/// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  buffer;

/// @brief Field <md5>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Security::Cryptography::MD5*  _md5_5__2;

/// @brief Field <stream>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Stream*  _stream_5__3;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  __7__wrap5;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, filePath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, _md5_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, _stream_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, __7__wrap5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage__CalculateMd5Hash_d__30) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
