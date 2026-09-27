#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/LckRecorder__StartRecordingAsync_d__33.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckRecorder__StartRecordingAsync_d__33)
namespace Liv::Lck::Recorder {
class LckRecorder;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckRecorder__StartRecordingAsync_d__33;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33, "Liv.Lck.Recorder", "LckRecorder/<StartRecordingAsync>d__33");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Recorder.LckRecorder/<StartRecordingAsync>d__33
struct CORDL_TYPE LckRecorder__StartRecordingAsync_d__33 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d63190, size 0xdc8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d63f58, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckRecorder__StartRecordingAsync_d__33() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Recorder::LckRecorder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_e_5__4", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }]
constexpr LckRecorder__StartRecordingAsync_d__33(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Liv::Lck::Recorder::LckRecorder*  __4__this, ::System::Object*  __7__wrap1, int32_t  __7__wrap2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1, ::System::Exception*  _e_5__4) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24967};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Recorder::LckRecorder*  __4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
 ::System::Object*  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x30, size: 0x4, def value: None
 int32_t  __7__wrap2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Liv::Lck::LckResult*>  __u__1;

/// @brief Field <e>5__4, offset: 0x40, size: 0x8, def value: None
 ::System::Exception*  _e_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33, __7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33, __7__wrap2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33, _e_5__4) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
