#pragma once
// IWYU pragma private; include "Meta/WitAi/WitRequest__StartThreadedRequest_d__91.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitRequest__StartThreadedRequest_d__91)
namespace Meta::WitAi {
class WitRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WitRequest__StartThreadedRequest_d__91;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WitRequest__StartThreadedRequest_d__91);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WitRequest__StartThreadedRequest_d__91, "Meta.WitAi", "WitRequest/<StartThreadedRequest>d__91");
// [CompilerGenerated]
// Dependencies Meta.Voice.Logging.CorrelationID, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.WitRequest/<StartThreadedRequest>d__91
struct CORDL_TYPE WitRequest__StartThreadedRequest_d__91 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e7c654, size 0xbc8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e7d21c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WitRequest__StartThreadedRequest_d__91() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::WitRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "correlationID", ty: "::Meta::Voice::Logging::CorrelationID", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr WitRequest__StartThreadedRequest_d__91(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Meta::WitAi::WitRequest*  __4__this, ::Meta::Voice::Logging::CorrelationID  correlationID, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25558};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::WitRequest*  __4__this;

/// @brief Field correlationID, offset: 0x28, size: 0x8, def value: None
 ::Meta::Voice::Logging::CorrelationID  correlationID;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WitRequest__StartThreadedRequest_d__91, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitRequest__StartThreadedRequest_d__91, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitRequest__StartThreadedRequest_d__91, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitRequest__StartThreadedRequest_d__91, correlationID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitRequest__StartThreadedRequest_d__91, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WitRequest__StartThreadedRequest_d__91) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
