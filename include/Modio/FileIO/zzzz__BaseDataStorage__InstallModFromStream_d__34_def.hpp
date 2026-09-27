#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__InstallModFromStream_d__34.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/FileIO/zzzz__BaseDataStorage___c__DisplayClass34_0_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage__InstallModFromStream_d__34)
namespace ICSharpCode::SharpZipLib::Zip {
class ZipInputStream;
}
namespace Modio::FileIO {
class BaseDataStorage;
}
namespace Modio::FileIO {
class BaseDataStorage___c__DisplayClass34_1;
}
namespace Modio::FileIO {
class ModInstallProgressTracker;
}
namespace Modio::Mods {
class Mod;
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
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseDataStorage__InstallModFromStream_d__34;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, "Modio.FileIO", "BaseDataStorage/<InstallModFromStream>d__34");
// [CompilerGenerated]
// Dependencies Modio.FileIO.BaseDataStorage::<>c__DisplayClass34_0, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<InstallModFromStream>d__34
struct CORDL_TYPE BaseDataStorage__InstallModFromStream_d__34 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa04b720, size 0x2240, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa04d960, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__InstallModFromStream_d__34() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "mod", ty: "::Modio::Mods::Mod*", modifiers: "", def_value: None, comment: None }, CppParam { name: "modfileId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__2", ty: "::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*", modifiers: "", def_value: None, comment: None }, CppParam { name: "md5Hash", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "_combinedCts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_zipStream_5__3", ty: "::ICSharpCode::SharpZipLib::Zip::ZipInputStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tracker_5__4", ty: "::Modio::FileIO::ModInstallProgressTracker*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_numEntries_5__5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap6", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap7", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap8", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap9", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap10", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__InstallModFromStream_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, ::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::IO::Stream*  stream, ::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0  __8__1, ::System::Threading::CancellationToken  token, ::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*  __8__2, ::StringW  md5Hash, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__1, ::System::Threading::CancellationTokenSource*  _combinedCts_5__2, ::ICSharpCode::SharpZipLib::Zip::ZipInputStream*  _zipStream_5__3, ::Modio::FileIO::ModInstallProgressTracker*  _tracker_5__4, int32_t  _numEntries_5__5, ::System::Object*  __7__wrap5, int32_t  __7__wrap6, ::Modio::Error*  __7__wrap7, ::System::Object*  __7__wrap8, int32_t  __7__wrap9, ::Modio::Error*  __7__wrap10, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17653};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xe8};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field mod, offset: 0x28, size: 0x8, def value: None
 ::Modio::Mods::Mod*  mod;

/// @brief Field modfileId, offset: 0x30, size: 0x8, def value: None
 int64_t  modfileId;

/// @brief Field stream, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Stream*  stream;

/// @brief Field <>8__1, offset: 0x40, size: 0x20, def value: None
 ::GlobalNamespace::BaseDataStorage___c__DisplayClass34_0  __8__1;

/// @brief Field token, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field <>8__2, offset: 0x68, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage___c__DisplayClass34_1*  __8__2;

/// @brief Field md5Hash, offset: 0x70, size: 0x8, def value: None
 ::StringW  md5Hash;

/// @brief Field <>u__1, offset: 0x78, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__1;

/// @brief Field <combinedCts>5__2, offset: 0x88, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  _combinedCts_5__2;

/// @brief Field <zipStream>5__3, offset: 0x90, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipInputStream*  _zipStream_5__3;

/// @brief Field <tracker>5__4, offset: 0x98, size: 0x8, def value: None
 ::Modio::FileIO::ModInstallProgressTracker*  _tracker_5__4;

/// @brief Field <numEntries>5__5, offset: 0xa0, size: 0x4, def value: None
 int32_t  _numEntries_5__5;

/// @brief Field <>7__wrap5, offset: 0xa8, size: 0x8, def value: None
 ::System::Object*  __7__wrap5;

/// @brief Field <>7__wrap6, offset: 0xb0, size: 0x4, def value: None
 int32_t  __7__wrap6;

/// @brief Field <>7__wrap7, offset: 0xb8, size: 0x8, def value: None
 ::Modio::Error*  __7__wrap7;

/// @brief Field <>7__wrap8, offset: 0xc0, size: 0x8, def value: None
 ::System::Object*  __7__wrap8;

/// @brief Field <>7__wrap9, offset: 0xc8, size: 0x4, def value: None
 int32_t  __7__wrap9;

/// @brief Field <>7__wrap10, offset: 0xd0, size: 0x8, def value: None
 ::Modio::Error*  __7__wrap10;

/// @brief Field <>u__2, offset: 0xd8, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2;

/// @brief Field <>u__3, offset: 0xe0, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, mod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, modfileId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, stream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, token) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __8__2) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, md5Hash) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __u__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, _combinedCts_5__2) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, _zipStream_5__3) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, _tracker_5__4) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, _numEntries_5__5) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __7__wrap5) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __7__wrap6) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __7__wrap7) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __7__wrap8) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __7__wrap9) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __7__wrap10) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __u__2) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34, __u__3) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage__InstallModFromStream_d__34) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
