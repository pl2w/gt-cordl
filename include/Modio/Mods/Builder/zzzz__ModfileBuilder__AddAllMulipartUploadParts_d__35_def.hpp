#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModfileBuilder__AddAllMulipartUploadParts_d__35.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__MultipartUploadPartObject_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModfileBuilder__AddAllMulipartUploadParts_d__35)
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
struct ModfileBuilder__AddAllMulipartUploadParts_d__35;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, "Modio.Mods.Builder", "ModfileBuilder/<AddAllMulipartUploadParts>d__35");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.MultipartUploadPartObject, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Builder.ModfileBuilder/<AddAllMulipartUploadParts>d__35
struct CORDL_TYPE ModfileBuilder__AddAllMulipartUploadParts_d__35 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa03a1c8, size 0x678, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa03a840, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModfileBuilder__AddAllMulipartUploadParts_d__35() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "partCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "readStream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "uploadId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::Builder::ModfileBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_chunkSize_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_endByte_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_startByte_5__4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer_5__5", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr ModfileBuilder__AddAllMulipartUploadParts_d__35(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, int32_t  partCount, ::System::IO::Stream*  readStream, ::StringW  uploadId, ::Modio::Mods::Builder::ModfileBuilder*  __4__this, int32_t  _chunkSize_5__2, int32_t  _endByte_5__3, int32_t  _startByte_5__4, ::ArrayW<uint8_t>  _buffer_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17619};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field partCount, offset: 0x20, size: 0x4, def value: None
 int32_t  partCount;

/// @brief Field readStream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  readStream;

/// @brief Field uploadId, offset: 0x30, size: 0x8, def value: None
 ::StringW  uploadId;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::Modio::Mods::Builder::ModfileBuilder*  __4__this;

/// @brief Field <chunkSize>5__2, offset: 0x40, size: 0x4, def value: None
 int32_t  _chunkSize_5__2;

/// @brief Field <endByte>5__3, offset: 0x44, size: 0x4, def value: None
 int32_t  _endByte_5__3;

/// @brief Field <startByte>5__4, offset: 0x48, size: 0x4, def value: None
 int32_t  _startByte_5__4;

/// @brief Field <buffer>5__5, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _buffer_5__5;

/// [TupleElementNames(new[] { "error", "multipartUploadPartObject" })]
/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::MultipartUploadPartObject>>>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<int32_t>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, partCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, readStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, uploadId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, _chunkSize_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, _endByte_5__3) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, _startByte_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, _buffer_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModfileBuilder__AddAllMulipartUploadParts_d__35) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
