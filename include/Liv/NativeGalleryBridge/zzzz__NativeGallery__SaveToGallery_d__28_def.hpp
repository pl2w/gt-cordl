#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery__SaveToGallery_d__28.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_MediaType_def.hpp"
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_Permission_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeGallery__SaveToGallery_d__28)
namespace Liv::NativeGalleryBridge {
class NativeGallery_MediaSaveCallback;
}
namespace Liv::NativeGalleryBridge {
class NativeGallery___c__DisplayClass28_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct NativeGallery__SaveToGallery_d__28;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativeGallery__SaveToGallery_d__28);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, "Liv.NativeGalleryBridge", "NativeGallery/<SaveToGallery>d__28");
// [CompilerGenerated]
// Dependencies Liv.NativeGalleryBridge.NativeGallery::MediaType, Liv.NativeGalleryBridge.NativeGallery::Permission, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.NativeGalleryBridge.NativeGallery/<SaveToGallery>d__28
struct CORDL_TYPE NativeGallery__SaveToGallery_d__28 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa3697e8, size 0x6cc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa369eb4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeGallery__SaveToGallery_d__28() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: None, comment: None }, CppParam { name: "existingMediaPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "mediaType", ty: "::GlobalNamespace::NativeGallery_MediaType", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "album", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "callback", ty: "::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_result_5__2", ty: "::GlobalNamespace::NativeGallery_Permission", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr NativeGallery__SaveToGallery_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>  __t__builder, ::StringW  existingMediaPath, ::GlobalNamespace::NativeGallery_MediaType  mediaType, ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*  __8__1, ::StringW  album, ::StringW  filename, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback, ::GlobalNamespace::NativeGallery_Permission  _result_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32959};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>  __t__builder;

/// @brief Field existingMediaPath, offset: 0x20, size: 0x8, def value: None
 ::StringW  existingMediaPath;

/// @brief Field mediaType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::NativeGallery_MediaType  mediaType;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::Liv::NativeGalleryBridge::NativeGallery___c__DisplayClass28_0*  __8__1;

/// @brief Field album, offset: 0x38, size: 0x8, def value: None
 ::StringW  album;

/// @brief Field filename, offset: 0x40, size: 0x8, def value: None
 ::StringW  filename;

/// @brief Field callback, offset: 0x48, size: 0x8, def value: None
 ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback;

/// @brief Field <result>5__2, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::NativeGallery_Permission  _result_5__2;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, existingMediaPath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, mediaType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, album) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, filename) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, callback) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, _result_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeGallery__SaveToGallery_d__28) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
