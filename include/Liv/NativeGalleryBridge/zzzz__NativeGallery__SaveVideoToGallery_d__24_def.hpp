#pragma once
// IWYU pragma private; include "Liv/NativeGalleryBridge/NativeGallery__SaveVideoToGallery_d__24.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_Permission_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeGallery__SaveVideoToGallery_d__24)
namespace Liv::NativeGalleryBridge {
class NativeGallery_MediaSaveCallback;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct NativeGallery__SaveVideoToGallery_d__24;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24, "Liv.NativeGalleryBridge", "NativeGallery/<SaveVideoToGallery>d__24");
// [CompilerGenerated]
// Dependencies Liv.NativeGalleryBridge.NativeGallery::Permission, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.NativeGalleryBridge.NativeGallery/<SaveVideoToGallery>d__24
struct CORDL_TYPE NativeGallery__SaveVideoToGallery_d__24 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa369f30, size 0x258, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa36a188, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeGallery__SaveVideoToGallery_d__24() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: None, comment: None }, CppParam { name: "existingMediaPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "album", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "filename", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "callback", ty: "::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: None, comment: None }]
constexpr NativeGallery__SaveVideoToGallery_d__24(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>  __t__builder, ::StringW  existingMediaPath, ::StringW  album, ::StringW  filename, ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32960};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::NativeGallery_Permission>  __t__builder;

/// @brief Field existingMediaPath, offset: 0x20, size: 0x8, def value: None
 ::StringW  existingMediaPath;

/// @brief Field album, offset: 0x28, size: 0x8, def value: None
 ::StringW  album;

/// @brief Field filename, offset: 0x30, size: 0x8, def value: None
 ::StringW  filename;

/// @brief Field callback, offset: 0x38, size: 0x8, def value: None
 ::Liv::NativeGalleryBridge::NativeGallery_MediaSaveCallback*  callback;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24, existingMediaPath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24, album) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24, filename) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24, callback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NativeGallery__SaveVideoToGallery_d__24) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
