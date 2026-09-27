#pragma once
// IWYU pragma private; include "Modio/FileIO/BaseDataStorage__ReadData_d__13_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDataStorage__ReadData_d__13_1)
namespace Modio::FileIO {
class BaseDataStorage;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct BaseDataStorage__ReadData_d__13_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::BaseDataStorage__ReadData_d__13_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::BaseDataStorage__ReadData_d__13_1, "Modio.FileIO", "BaseDataStorage/<ReadData>d__13`1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Modio.FileIO.BaseDataStorage/<ReadData>d__13`1<T>
struct CORDL_TYPE BaseDataStorage__ReadData_d__13_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BaseDataStorage__ReadData_d__13_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::FileIO::BaseDataStorage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "filePath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>", modifiers: "", def_value: None, comment: None }]
constexpr BaseDataStorage__ReadData_d__13_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>  __t__builder, ::Modio::FileIO::BaseDataStorage*  __4__this, ::StringW  filePath, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17659};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::Modio::Error*,T>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::FileIO::BaseDataStorage*  __4__this;

/// @brief Field filePath, offset: 0x28, size: 0x8, def value: None
 ::StringW  filePath;

/// [TupleElementNames(new[] { "error", "result" })]
/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::StringW>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
