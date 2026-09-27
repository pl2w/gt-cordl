#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__WriteFile_d__59.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage__WriteFile_d__59)
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
struct BaseDataStorage__WriteFile_d__59;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage__WriteFile_d__59);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, "Modio.FileIO", "BaseDataStorage/<WriteFile>d__59");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.ValueTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<WriteFile>d__59
struct CORDL_TYPE BaseDataStorage__WriteFile_d__59 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa052c14, size 0x8d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa05356c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__WriteFile_d__59() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bytesToWrite", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fileStream_5__2", ty: "::System::IO::FileStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__WriteFile_d__59(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, ::StringW  path, ::ArrayW<uint8_t>  data, int32_t  bytesToWrite, ::System::IO::FileStream*  _fileStream_5__2, ::System::Object*  __7__wrap2, int32_t  __7__wrap3, ::Modio::Error*  __7__wrap4, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17666};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field path, offset: 0x28, size: 0x8, def value: None
 ::StringW  path;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  data;

/// @brief Field bytesToWrite, offset: 0x38, size: 0x4, def value: None
 int32_t  bytesToWrite;

/// @brief Field <fileStream>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::IO::FileStream*  _fileStream_5__2;

/// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x50, size: 0x4, def value: None
 int32_t  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x58, size: 0x8, def value: None
 ::Modio::Error*  __7__wrap4;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x68, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, path) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, bytesToWrite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, _fileStream_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, __7__wrap2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, __7__wrap3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, __7__wrap4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59, __u__2) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage__WriteFile_d__59) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
