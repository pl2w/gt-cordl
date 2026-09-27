#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModBuilder__GalleryZipFromFilePaths_d__126.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModBuilder__GalleryZipFromFilePaths_d__126)
namespace ICSharpCode::SharpZipLib::Zip {
class ZipOutputStream;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModBuilder__GalleryZipFromFilePaths_d__126;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, "Modio.Mods.Builder", "ModBuilder/<GalleryZipFromFilePaths>d__126");
// [CompilerGenerated]
// Dependencies Modio.API.ModioAPIFileParameter, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.ValueTaskAwaiter, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Builder.ModBuilder/<GalleryZipFromFilePaths>d__126
struct CORDL_TYPE ModBuilder__GalleryZipFromFilePaths_d__126 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa03424c, size 0x15b8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa035804, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModBuilder__GalleryZipFromFilePaths_d__126() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "imageFilePaths", ty: "::System::Collections::Generic::ICollection_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_memStream_5__2", ty: "::System::IO::MemoryStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_zipStream_5__3", ty: "::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap6", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap7", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap8", ty: "::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap9", ty: "::System::Collections::Generic::IEnumerator_1<::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_readStream_5__11", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap11", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap12", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ModBuilder__GalleryZipFromFilePaths_d__126(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>  __t__builder, ::System::Collections::Generic::ICollection_1<::StringW>*  imageFilePaths, ::System::IO::MemoryStream*  _memStream_5__2, ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  _zipStream_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>  __7__wrap5, ::System::Object*  __7__wrap6, int32_t  __7__wrap7, ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>  __7__wrap8, ::System::Collections::Generic::IEnumerator_1<::StringW>*  __7__wrap9, ::System::IO::Stream*  _readStream_5__11, ::System::Object*  __7__wrap11, int32_t  __7__wrap12, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x100};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "file" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>>  __t__builder;

/// @brief Field imageFilePaths, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<::StringW>*  imageFilePaths;

/// @brief Field <memStream>5__2, offset: 0x28, size: 0x8, def value: None
 ::System::IO::MemoryStream*  _memStream_5__2;

/// @brief Field <zipStream>5__3, offset: 0x30, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  _zipStream_5__3;

/// @brief Field <>7__wrap3, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x40, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// [TupleElementNames(new[] { "error", "file" })]
/// @brief Field <>7__wrap5, offset: 0x48, size: 0x10, def value: None
 ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>  __7__wrap5;

/// @brief Field <>7__wrap6, offset: 0x58, size: 0x8, def value: None
 ::System::Object*  __7__wrap6;

/// @brief Field <>7__wrap7, offset: 0x60, size: 0x4, def value: None
 int32_t  __7__wrap7;

/// [TupleElementNames(new[] { "error", "file" })]
/// @brief Field <>7__wrap8, offset: 0x68, size: 0x10, def value: None
 ::System::ValueTuple_2<::Modio::Error*,::Modio::API::ModioAPIFileParameter>  __7__wrap8;

/// @brief Field <>7__wrap9, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::StringW>*  __7__wrap9;

/// @brief Field <readStream>5__11, offset: 0x80, size: 0x8, def value: None
 ::System::IO::Stream*  _readStream_5__11;

/// @brief Field <>7__wrap11, offset: 0x88, size: 0x8, def value: None
 ::System::Object*  __7__wrap11;

/// @brief Field <>7__wrap12, offset: 0x90, size: 0x4, def value: None
 int32_t  __7__wrap12;

/// @brief Field <>u__1, offset: 0x98, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0xa0, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2;

/// @brief Size padding 0x100 - 0xb0 = 0x50, packed as 0x50
 uint8_t  _cordl_size_padding[0x50];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, imageFilePaths) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, _memStream_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, _zipStream_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __7__wrap3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __7__wrap4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __7__wrap5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __7__wrap6) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __7__wrap7) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __7__wrap8) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __7__wrap9) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, _readStream_5__11) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __7__wrap11) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __7__wrap12) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __u__1) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126, __u__2) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModBuilder__GalleryZipFromFilePaths_d__126) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
