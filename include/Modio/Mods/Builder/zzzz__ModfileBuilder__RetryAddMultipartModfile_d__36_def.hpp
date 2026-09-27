#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModfileBuilder__RetryAddMultipartModfile_d__36.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__ModfileObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__MultipartUploadObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__Pagination_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModfileBuilder__RetryAddMultipartModfile_d__36)
namespace Modio::API::SchemaDefinitions {
struct MultipartUploadPartObject;
}
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
struct ModfileBuilder__RetryAddMultipartModfile_d__36;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, "Modio.Mods.Builder", "ModfileBuilder/<RetryAddMultipartModfile>d__36");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.ModfileObject, Modio.API.SchemaDefinitions.MultipartUploadObject, Modio.API.SchemaDefinitions.Pagination`1<T>, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Builder.ModfileBuilder/<RetryAddMultipartModfile>d__36
struct CORDL_TYPE ModfileBuilder__RetryAddMultipartModfile_d__36 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa03c5f4, size 0xa1c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa03d010, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModfileBuilder__RetryAddMultipartModfile_d__36() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uploadId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::Builder::ModfileBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "readStream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "changelog", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "metadataBlob", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "platforms", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__4", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>", modifiers: "", def_value: None, comment: None }]
constexpr ModfileBuilder__RetryAddMultipartModfile_d__36(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>  __t__builder, ::StringW  uploadId, ::Modio::Mods::Builder::ModfileBuilder*  __4__this, ::System::IO::Stream*  readStream, ::StringW  version, ::StringW  changelog, ::StringW  metadataBlob, ::ArrayW<::StringW>  platforms, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>>  __u__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>  __u__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>  __t__builder;

/// @brief Field uploadId, offset: 0x20, size: 0x8, def value: None
 ::StringW  uploadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Modio::Mods::Builder::ModfileBuilder*  __4__this;

/// @brief Field readStream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  readStream;

/// @brief Field version, offset: 0x38, size: 0x8, def value: None
 ::StringW  version;

/// @brief Field changelog, offset: 0x40, size: 0x8, def value: None
 ::StringW  changelog;

/// @brief Field metadataBlob, offset: 0x48, size: 0x8, def value: None
 ::StringW  metadataBlob;

/// @brief Field platforms, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::StringW>  platforms;

/// [TupleElementNames(new[] { "error", "multipartUploadPartObjects" })]
/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>>>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__2;

/// [TupleElementNames(new[] { "error", "multipartUploadObject" })]
/// @brief Field <>u__3, offset: 0x68, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadObject>>>  __u__3;

/// [TupleElementNames(new[] { "error", "modfileObject" })]
/// @brief Field <>u__4, offset: 0x70, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::ModfileObject>>>  __u__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, uploadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, readStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, version) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, changelog) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, metadataBlob) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, platforms) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, __u__2) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, __u__3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36, __u__4) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModfileBuilder__RetryAddMultipartModfile_d__36) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
