#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitTTSVRequest__SetupTts_d__26.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitTTSVRequest__SetupTts_d__26)
namespace Meta::Voice::Audio::Decoding {
class AudioJsonDecodeDelegate;
}
namespace Meta::Voice::Audio::Decoding {
class AudioSampleDecodeDelegate;
}
namespace Meta::WitAi::Requests {
class WitTTSVRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct WitTTSVRequest__SetupTts_d__26;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26, "Meta.WitAi.Requests", "WitTTSVRequest/<SetupTts>d__26");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.Requests.WitTTSVRequest/<SetupTts>d__26
struct CORDL_TYPE WitTTSVRequest__SetupTts_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e90404, size 0x4f8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e908fc, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr WitTTSVRequest__SetupTts_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::WitTTSVRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "download", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "onSamplesDecoded", ty: "::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "onJsonDecoded", ty: "::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr WitTTSVRequest__SetupTts_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::Meta::WitAi::Requests::WitTTSVRequest*  __4__this, bool  download, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25633};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Requests::WitTTSVRequest*  __4__this;

/// @brief Field download, offset: 0x28, size: 0x1, def value: None
 bool  download;

/// @brief Field onSamplesDecoded, offset: 0x30, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded;

/// @brief Field onJsonDecoded, offset: 0x38, size: 0x8, def value: None
 ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26, download) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26, onSamplesDecoded) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26, onJsonDecoded) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WitTTSVRequest__SetupTts_d__26) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
