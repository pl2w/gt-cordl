#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__CompressToZip_d__74.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage__CompressToZip_d__74)
namespace ICSharpCode::SharpZipLib::Zip {
class ZipOutputStream;
}
namespace Modio::FileIO {
class BaseDataStorage;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::IO {
class FileStream;
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
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct BaseDataStorage__CompressToZip_d__74;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, "Modio.FileIO", "BaseDataStorage/<CompressToZip>d__74");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.ValueTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<CompressToZip>d__74
struct CORDL_TYPE BaseDataStorage__CompressToZip_d__74 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa047c2c, size 0xe24, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa048a50, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__CompressToZip_d__74() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "outputTo", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_returnError_5__2", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_zipStream_5__3", ty: "::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::Modio::Error*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap6", ty: "::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fileStream_5__8", ty: "::System::IO::FileStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap8", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap9", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__CompressToZip_d__74(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, ::StringW  filePath, ::System::IO::Stream*  outputTo, ::Modio::Error*  _returnError_5__2, ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  _zipStream_5__3, ::System::Object*  __7__wrap3, int32_t  __7__wrap4, ::Modio::Error*  __7__wrap5, ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*  __7__wrap6, ::System::IO::FileStream*  _fileStream_5__8, ::System::Object*  __7__wrap8, int32_t  __7__wrap9, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17649};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field filePath, offset: 0x28, size: 0x8, def value: None
 ::StringW  filePath;

/// @brief Field outputTo, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  outputTo;

/// @brief Field <returnError>5__2, offset: 0x38, size: 0x8, def value: None
 ::Modio::Error*  _returnError_5__2;

/// @brief Field <zipStream>5__3, offset: 0x40, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::ZipOutputStream*  _zipStream_5__3;

/// @brief Field <>7__wrap3, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x50, size: 0x4, def value: None
 int32_t  __7__wrap4;

/// @brief Field <>7__wrap5, offset: 0x58, size: 0x8, def value: None
 ::Modio::Error*  __7__wrap5;

/// [TupleElementNames(new[] { "error", "fileName" })]
/// @brief Field <>7__wrap6, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>*  __7__wrap6;

/// @brief Field <fileStream>5__8, offset: 0x68, size: 0x8, def value: None
 ::System::IO::FileStream*  _fileStream_5__8;

/// @brief Field <>7__wrap8, offset: 0x70, size: 0x8, def value: None
 ::System::Object*  __7__wrap8;

/// @brief Field <>7__wrap9, offset: 0x78, size: 0x4, def value: None
 int32_t  __7__wrap9;

/// @brief Field <>u__1, offset: 0x80, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x88, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, filePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, outputTo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, _returnError_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, _zipStream_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __7__wrap3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __7__wrap4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __7__wrap5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __7__wrap6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, _fileStream_5__8) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __7__wrap8) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __7__wrap9) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __u__1) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74, __u__2) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseDataStorage__CompressToZip_d__74) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
