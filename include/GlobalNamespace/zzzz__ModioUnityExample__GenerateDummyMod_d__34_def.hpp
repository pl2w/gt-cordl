#pragma once
// IWYU pragma private; include "GlobalNamespace/ModioUnityExample__GenerateDummyMod_d__34.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ModioUnityExample_DummyModData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUnityExample__GenerateDummyMod_d__34)
namespace GlobalNamespace {
class ModioUnityExample;
}
namespace System::IO {
class FileStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioUnityExample__GenerateDummyMod_d__34;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, "", "ModioUnityExample/<GenerateDummyMod>d__34");
// [CompilerGenerated]
// Dependencies ModioUnityExample::DummyModData, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ModioUnityExample/<GenerateDummyMod>d__34
struct CORDL_TYPE ModioUnityExample__GenerateDummyMod_d__34 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f99728, size 0x77c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f99ea4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioUnityExample__GenerateDummyMod_d__34() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::ModioUnityExample_DummyModData>", modifiers: "", def_value: None, comment: None }, CppParam { name: "dummyName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "megabytes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "summary", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ModioUnityExample>", modifiers: "", def_value: None, comment: None }, CppParam { name: "backgroundColor", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "textColor", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_path_5__2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fs_5__3", ty: "::System::IO::FileStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>", modifiers: "", def_value: None, comment: None }]
constexpr ModioUnityExample__GenerateDummyMod_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::ModioUnityExample_DummyModData>  __t__builder, ::StringW  dummyName, int32_t  megabytes, ::StringW  summary, ::UnityW<::GlobalNamespace::ModioUnityExample>  __4__this, ::StringW  backgroundColor, ::StringW  textColor, ::StringW  _path_5__2, ::System::IO::FileStream*  _fs_5__3, int32_t  _i_5__4, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::StringW  __7__wrap4, ::StringW  __7__wrap5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32491};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::ModioUnityExample_DummyModData>  __t__builder;

/// @brief Field dummyName, offset: 0x20, size: 0x8, def value: None
 ::StringW  dummyName;

/// @brief Field megabytes, offset: 0x28, size: 0x4, def value: None
 int32_t  megabytes;

/// @brief Field summary, offset: 0x30, size: 0x8, def value: None
 ::StringW  summary;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ModioUnityExample>  __4__this;

/// @brief Field backgroundColor, offset: 0x40, size: 0x8, def value: None
 ::StringW  backgroundColor;

/// @brief Field textColor, offset: 0x48, size: 0x8, def value: None
 ::StringW  textColor;

/// @brief Field <path>5__2, offset: 0x50, size: 0x8, def value: None
 ::StringW  _path_5__2;

/// @brief Field <fs>5__3, offset: 0x58, size: 0x8, def value: None
 ::System::IO::FileStream*  _fs_5__3;

/// @brief Field <i>5__4, offset: 0x60, size: 0x4, def value: None
 int32_t  _i_5__4;

/// @brief Field <>u__1, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>7__wrap4, offset: 0x70, size: 0x8, def value: None
 ::StringW  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x78, size: 0x8, def value: None
 ::StringW  __7__wrap5;

/// @brief Field <>u__2, offset: 0x80, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::UnityEngine::Texture2D>>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, dummyName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, megabytes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, summary) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, backgroundColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, textColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, _path_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, _fs_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, _i_5__4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, __7__wrap4) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, __7__wrap5) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34, __u__2) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUnityExample__GenerateDummyMod_d__34) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
