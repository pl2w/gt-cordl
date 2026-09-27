#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWit__RequestStreamFromWeb_d__25.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSWit__RequestStreamFromWeb_d__25)
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWit___c__DisplayClass25_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct TTSWit__RequestStreamFromWeb_d__25;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25, "Meta.WitAi.TTS.Integrations", "TTSWit/<RequestStreamFromWeb>d__25");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.TTS.Integrations.TTSWit/<RequestStreamFromWeb>d__25
struct CORDL_TYPE TTSWit__RequestStreamFromWeb_d__25 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e5a574, size 0x940, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e5aeb4, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr TTSWit__RequestStreamFromWeb_d__25() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "clipData", ty: "::Meta::WitAi::TTS::Data::TTSClipData*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onReady", ty: "::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr TTSWit__RequestStreamFromWeb_d__25(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady, ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  __4__this, ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field clipData, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  clipData;

/// @brief Field onReady, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onReady;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  __4__this;

/// @brief Field <>8__1, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass25_0*  __8__1;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25, clipData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25, onReady) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25, __8__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TTSWit__RequestStreamFromWeb_d__25) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
