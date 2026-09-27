#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__WriteCachedImage_d__43.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage__WriteCachedImage_d__43)
namespace Modio::FileIO {
class BaseDataStorage;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseDataStorage__WriteCachedImage_d__43;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43, "Modio.FileIO", "BaseDataStorage/<WriteCachedImage>d__43");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<WriteCachedImage>d__43
struct CORDL_TYPE BaseDataStorage__WriteCachedImage_d__43 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa0526ec, size 0x4ac, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa052b98, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__WriteCachedImage_d__43() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "serverPath", ty: "::System::Uri*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_path_5__2", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__WriteCachedImage_d__43(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::System::Uri*  serverPath, ::Modio::FileIO::BaseDataStorage*  __4__this, ::ArrayW<uint8_t>  data, ::StringW  _path_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17664};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field serverPath, offset: 0x20, size: 0x8, def value: None
 ::System::Uri*  serverPath;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  data;

/// @brief Field <path>5__2, offset: 0x38, size: 0x8, def value: None
 ::StringW  _path_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43, serverPath) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43, data) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43, _path_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage__WriteCachedImage_d__43) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
