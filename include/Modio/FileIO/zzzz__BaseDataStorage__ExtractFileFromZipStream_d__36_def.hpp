#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__ExtractFileFromZipStream_d__36.hpp"
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
CORDL_MODULE_EXPORT(BaseDataStorage__ExtractFileFromZipStream_d__36)
namespace ICSharpCode::SharpZipLib::Zip {
class ZipEntry;
}
namespace ICSharpCode::SharpZipLib::Zip {
class ZipInputStream;
}
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
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseDataStorage__ExtractFileFromZipStream_d__36;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, "Modio.FileIO", "BaseDataStorage/<ExtractFileFromZipStream>d__36");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<ExtractFileFromZipStream>d__36
struct CORDL_TYPE BaseDataStorage__ExtractFileFromZipStream_d__36 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa04a4b0, size 0x9e4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa04ae94, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__ExtractFileFromZipStream_d__36() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "entry", ty: "::ICSharpCode::SharpZipLib::Zip::ZipEntry*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "zipStream", ty: "::ICSharpCode::SharpZipLib::Zip::ZipInputStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "progressTracker", ty: "::Modio::FileIO::ModInstallProgressTracker*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_writerStream_5__2", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer_5__3", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__ExtractFileFromZipStream_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry, ::Modio::FileIO::BaseDataStorage*  __4__this, ::StringW  filePath, ::ICSharpCode::SharpZipLib::Zip::ZipInputStream*  zipStream, ::System::Threading::CancellationToken  token, ::Modio::FileIO::ModInstallProgressTracker*  progressTracker, ::System::IO::Stream*  _writerStream_5__2, ::ArrayW<uint8_t>  _buffer_5__3, ::System::IO::Stream*  __7__wrap3, ::System::Object*  __7__wrap4, int32_t  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17651};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field entry, offset: 0x20, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipEntry*  entry;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field filePath, offset: 0x30, size: 0x8, def value: None
 ::StringW  filePath;

/// @brief Field zipStream, offset: 0x38, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipInputStream*  zipStream;

/// @brief Field token, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field progressTracker, offset: 0x48, size: 0x8, def value: None
 ::Modio::FileIO::ModInstallProgressTracker*  progressTracker;

/// @brief Field <writerStream>5__2, offset: 0x50, size: 0x8, def value: None
 ::System::IO::Stream*  _writerStream_5__2;

/// @brief Field <buffer>5__3, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _buffer_5__3;

/// @brief Field <>7__wrap3, offset: 0x60, size: 0x8, def value: None
 ::System::IO::Stream*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x68, size: 0x8, def value: None
 ::System::Object*  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x70, size: 0x4, def value: None
 int32_t  __7__wrap5;

/// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__1;

/// @brief Field <>u__2, offset: 0x80, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

/// @brief Field <>u__3, offset: 0x88, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, entry) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, filePath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, zipStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, token) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, progressTracker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, _writerStream_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, _buffer_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, __7__wrap3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, __7__wrap4) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, __7__wrap5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, __u__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, __u__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36, __u__3) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage__ExtractFileFromZipStream_d__36) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
