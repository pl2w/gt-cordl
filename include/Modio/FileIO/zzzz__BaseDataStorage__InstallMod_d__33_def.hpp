#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__InstallMod_d__33.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage__InstallMod_d__33)
namespace Modio::FileIO {
class BaseDataStorage;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseDataStorage__InstallMod_d__33;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage__InstallMod_d__33);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, "Modio.FileIO", "BaseDataStorage/<InstallMod>d__33");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<InstallMod>d__33
struct CORDL_TYPE BaseDataStorage__InstallMod_d__33 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa04af10, size 0x794, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa04b6a4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__InstallMod_d__33() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "mod", ty: "::Modio::Mods::Mod*", modifiers: "", def_value: None, comment: None }, CppParam { name: "modfileId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_modFilePath_5__2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_error_5__3", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__InstallMod_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, ::Modio::Mods::Mod*  mod, int64_t  modfileId, ::System::Threading::CancellationToken  token, ::StringW  _modFilePath_5__2, ::Modio::Error*  _error_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17652};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

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

/// @brief Field token, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  token;

/// @brief Field <modFilePath>5__2, offset: 0x40, size: 0x8, def value: None
 ::StringW  _modFilePath_5__2;

/// @brief Field <error>5__3, offset: 0x48, size: 0x8, def value: None
 ::Modio::Error*  _error_5__3;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, mod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, modfileId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, token) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, _modFilePath_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, _error_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage__InstallMod_d__33) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
