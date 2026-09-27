#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequest__SimulateResponse_d__10.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceServiceRequest__SimulateResponse_d__10)
namespace Meta::WitAi::Data {
class SimulatedResponseMessage;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct VoiceServiceRequest__SimulateResponse_d__10;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10, "Meta.WitAi.Requests", "VoiceServiceRequest/<SimulateResponse>d__10");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.Requests.VoiceServiceRequest/<SimulateResponse>d__10
struct CORDL_TYPE VoiceServiceRequest__SimulateResponse_d__10 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e91788, size 0x5e4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e91d6c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceRequest__SimulateResponse_d__10() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VoiceServiceRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_lastMessage_5__2", ty: "::Meta::WitAi::Data::SimulatedResponseMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_message_5__4", ty: "::Meta::WitAi::Data::SimulatedResponseMessage*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr VoiceServiceRequest__SimulateResponse_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Meta::WitAi::Requests::VoiceServiceRequest*  __4__this, ::Meta::WitAi::Data::SimulatedResponseMessage*  _lastMessage_5__2, int32_t  _i_5__3, ::Meta::WitAi::Data::SimulatedResponseMessage*  _message_5__4, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25641};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequest*  __4__this;

/// @brief Field <lastMessage>5__2, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Data::SimulatedResponseMessage*  _lastMessage_5__2;

/// @brief Field <i>5__3, offset: 0x38, size: 0x4, def value: None
 int32_t  _i_5__3;

/// @brief Field <message>5__4, offset: 0x40, size: 0x8, def value: None
 ::Meta::WitAi::Data::SimulatedResponseMessage*  _message_5__4;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10, _lastMessage_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10, _i_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10, _message_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
