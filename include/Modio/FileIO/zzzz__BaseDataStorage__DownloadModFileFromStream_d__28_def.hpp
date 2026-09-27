#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__DownloadModFileFromStream_d__28.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage__DownloadModFileFromStream_d__28)
namespace Modio::FileIO {
class BaseDataStorage;
}
namespace Modio::FileIO {
class ModInstallProgressTracker;
}
namespace Modio {
class Error;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Security::Cryptography {
class MD5;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseDataStorage__DownloadModFileFromStream_d__28;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, "Modio.FileIO", "BaseDataStorage/<DownloadModFileFromStream>d__28");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<DownloadModFileFromStream>d__28
struct CORDL_TYPE BaseDataStorage__DownloadModFileFromStream_d__28 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa048acc, size 0x1968, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa04a434, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__DownloadModFileFromStream_d__28() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "modId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "modfileId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "downloadStream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "progressTracker", ty: "::Modio::FileIO::ModInstallProgressTracker*", modifiers: "", def_value: None, comment: None }, CppParam { name: "md5Hash", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_filePath_5__2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_error_5__3", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_combinedCts_5__5", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_md5_5__6", ty: "::System::Security::Cryptography::MD5*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_writerStream_5__7", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_totalBytesWritten_5__8", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap8", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap9", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap10", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bytesRead_5__12", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__DownloadModFileFromStream_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, int64_t  modId, int64_t  modfileId, ::System::IO::Stream*  downloadStream, ::System::Threading::CancellationToken  token, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker, ::StringW  md5Hash, ::StringW  _filePath_5__2, ::Modio::Error*  _error_5__3, ::ArrayW<uint8_t>  _buffer_5__4, ::System::Threading::CancellationTokenSource*  _combinedCts_5__5, ::System::Security::Cryptography::MD5*  _md5_5__6, ::System::IO::Stream*  _writerStream_5__7, int64_t  _totalBytesWritten_5__8, ::System::IO::Stream*  __7__wrap8, ::System::Object*  __7__wrap9, int32_t  __7__wrap10, int32_t  _bytesRead_5__12, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__2, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17650};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xd0};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field modId, offset: 0x28, size: 0x8, def value: None
 int64_t  modId;

/// @brief Field modfileId, offset: 0x30, size: 0x8, def value: None
 int64_t  modfileId;

/// @brief Field downloadStream, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Stream*  downloadStream;

/// @brief Field token, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field progressTracker, offset: 0x48, size: 0x8, def value: None
 ::Modio::FileIO::ModInstallProgressTracker*  progressTracker;

/// @brief Field md5Hash, offset: 0x50, size: 0x8, def value: None
 ::StringW  md5Hash;

/// @brief Field <filePath>5__2, offset: 0x58, size: 0x8, def value: None
 ::StringW  _filePath_5__2;

/// @brief Field <error>5__3, offset: 0x60, size: 0x8, def value: None
 ::Modio::Error*  _error_5__3;

/// @brief Field <buffer>5__4, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _buffer_5__4;

/// @brief Field <combinedCts>5__5, offset: 0x70, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  _combinedCts_5__5;

/// @brief Field <md5>5__6, offset: 0x78, size: 0x8, def value: None
 ::System::Security::Cryptography::MD5*  _md5_5__6;

/// @brief Field <writerStream>5__7, offset: 0x80, size: 0x8, def value: None
 ::System::IO::Stream*  _writerStream_5__7;

/// @brief Field <totalBytesWritten>5__8, offset: 0x88, size: 0x8, def value: None
 int64_t  _totalBytesWritten_5__8;

/// @brief Field <>7__wrap8, offset: 0x90, size: 0x8, def value: None
 ::System::IO::Stream*  __7__wrap8;

/// @brief Field <>7__wrap9, offset: 0x98, size: 0x8, def value: None
 ::System::Object*  __7__wrap9;

/// @brief Field <>7__wrap10, offset: 0xa0, size: 0x4, def value: None
 int32_t  __7__wrap10;

/// @brief Field <bytesRead>5__12, offset: 0xa4, size: 0x4, def value: None
 int32_t  _bytesRead_5__12;

/// @brief Field <>u__1, offset: 0xa8, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0xb0, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__2;

/// @brief Field <>u__3, offset: 0xb8, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3;

/// @brief Field <>u__4, offset: 0xc8, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, modId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, modfileId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, downloadStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, token) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, progressTracker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, md5Hash) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, _filePath_5__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, _error_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, _buffer_5__4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, _combinedCts_5__5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, _md5_5__6) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, _writerStream_5__7) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, _totalBytesWritten_5__8) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __7__wrap8) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __7__wrap9) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __7__wrap10) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, _bytesRead_5__12) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __u__1) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __u__2) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __u__3) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28, __u__4) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage__DownloadModFileFromStream_d__28) == 0xd0, "Size mismatch!");

} // namespace end def GlobalNamespace
