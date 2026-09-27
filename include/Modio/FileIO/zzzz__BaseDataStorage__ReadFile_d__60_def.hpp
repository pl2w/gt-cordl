#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__ReadFile_d__60.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage__ReadFile_d__60)
namespace Modio::FileIO {
class BaseDataStorage;
}
namespace Modio {
class Error;
}
namespace System::IO {
class FileStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseDataStorage__ReadFile_d__60;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage__ReadFile_d__60);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, "Modio.FileIO", "BaseDataStorage/<ReadFile>d__60");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<ReadFile>d__60
struct CORDL_TYPE BaseDataStorage__ReadFile_d__60 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa050514, size 0xa68, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa050f7c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__ReadFile_d__60() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_output_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fileStream_5__3", ty: "::System::IO::FileStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__ReadFile_d__60(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, ::StringW  path, ::ArrayW<uint8_t>  _output_5__2, ::System::IO::FileStream*  _fileStream_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17660};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field path, offset: 0x28, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field <output>5__2, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _output_5__2;

/// @brief Field <fileStream>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::IO::FileStream*  _fileStream_5__3;

/// @brief Field <>7__wrap3, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>7__wrap5, offset: 0x50, size: 0x10, def value: None
 ::System::ValueTuple_2<::Modio::Error*,::ArrayW<uint8_t>>  __7__wrap5;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1;

/// @brief Field <>u__2, offset: 0x68, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, _output_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, _fileStream_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, __7__wrap3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, __7__wrap5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60, __u__2) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage__ReadFile_d__60) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
