#pragma once
// IWYU pragma private; include "Liv/Lck/Utilities/FileUtility__CopyToGallery_d__1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/NativeGalleryBridge/zzzz__NativeGallery_Permission_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FileUtility__CopyToGallery_d__1)
namespace Liv::Lck::Utilities {
class FileUtility___c__DisplayClass1_0;
}
namespace Liv::Lck::Utilities {
class FileUtility___c__DisplayClass1_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct FileUtility__CopyToGallery_d__1;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FileUtility__CopyToGallery_d__1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FileUtility__CopyToGallery_d__1, "Liv.Lck.Utilities", "FileUtility/<CopyToGallery>d__1");
// [CompilerGenerated]
// Dependencies Liv.NativeGalleryBridge.NativeGallery::Permission, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Utilities.FileUtility/<CopyToGallery>d__1
struct CORDL_TYPE FileUtility__CopyToGallery_d__1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d6cc78, size 0xc24, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d6d89c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr FileUtility__CopyToGallery_d__1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "callback", ty: "::System::Action_2<bool,::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceFilePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "albumName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__2", ty: "::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr FileUtility__CopyToGallery_d__1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Action_2<bool,::StringW>*  callback, ::StringW  sourceFilePath, ::StringW  albumName, ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*  __8__1, ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*  __8__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25000};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field callback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_2<bool,::StringW>*  callback;

/// @brief Field sourceFilePath, offset: 0x28, size: 0x8, def value: None
 ::StringW  sourceFilePath;

/// @brief Field albumName, offset: 0x30, size: 0x8, def value: None
 ::StringW  albumName;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_0*  __8__1;

/// @brief Field <>8__2, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::Utilities::FileUtility___c__DisplayClass1_1*  __8__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NativeGallery_Permission>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FileUtility__CopyToGallery_d__1, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileUtility__CopyToGallery_d__1, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileUtility__CopyToGallery_d__1, callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileUtility__CopyToGallery_d__1, sourceFilePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileUtility__CopyToGallery_d__1, albumName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileUtility__CopyToGallery_d__1, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileUtility__CopyToGallery_d__1, __8__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileUtility__CopyToGallery_d__1, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileUtility__CopyToGallery_d__1, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FileUtility__CopyToGallery_d__1) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
