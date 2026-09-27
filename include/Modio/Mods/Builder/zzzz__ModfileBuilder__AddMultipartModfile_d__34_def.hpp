#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModfileBuilder__AddMultipartModfile_d__34.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MultipartUploadObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModfileBuilder__AddMultipartModfile_d__34)
namespace Modio::Mods::Builder {
class ModfileBuilder;
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
// Forward declare root types
namespace GlobalNamespace {
struct ModfileBuilder__AddMultipartModfile_d__34;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, "Modio.Mods.Builder", "ModfileBuilder/<AddMultipartModfile>d__34");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.ModfileObject, Modio.API.SchemaDefinitions.MultipartUploadObject, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Builder.ModfileBuilder/<AddMultipartModfile>d__34
struct CORDL_TYPE ModfileBuilder__AddMultipartModfile_d__34 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa03a8bc, size 0xa80, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa03b33c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModfileBuilder__AddMultipartModfile_d__34() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::Builder::ModfileBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "readStream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_session_5__2", ty: "::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_uploadId_5__3", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>", modifiers: "", def_value: None, comment: None }]
constexpr ModfileBuilder__AddMultipartModfile_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Mods::Builder::ModfileBuilder*  __4__this, ::System::IO::Stream*  readStream, ::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>  _session_5__2, ::StringW  _uploadId_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17620};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Mods::Builder::ModfileBuilder*  __4__this;

/// @brief Field readStream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  readStream;

/// [TupleElementNames(new[] { "error", "multipartUploadObject" })]
/// @brief Field <session>5__2, offset: 0x30, size: 0x10, def value: None
 ::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>  _session_5__2;

/// @brief Field <uploadId>5__3, offset: 0x40, size: 0x8, def value: None
 ::StringW  _uploadId_5__3;

/// [TupleElementNames(new[] { "error", "multipartUploadObject" })]
/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2;

/// [TupleElementNames(new[] { "error", "modfileObject" })]
/// @brief Field <>u__3, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>  __u__3;

/// @brief Size padding 0x70 - 0x60 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, readStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, _session_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, _uploadId_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, __u__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34, __u__3) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModfileBuilder__AddMultipartModfile_d__34) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
