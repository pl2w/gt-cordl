#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest__DecodeText_d__121.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRequest__DecodeText_d__121)
namespace Meta::WitAi::Requests {
class VRequest;
}
namespace Meta::WitAi::Requests {
class VRequest___c__DisplayClass121_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GlobalNamespace {
struct VRequest__DecodeText_d__121;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRequest__DecodeText_d__121);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRequest__DecodeText_d__121, "Meta.WitAi.Requests", "VRequest/<DecodeText>d__121");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.Requests.VRequest/<DecodeText>d__121
struct CORDL_TYPE VRequest__DecodeText_d__121 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9e8a93c, size 0x350, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9e8ac8c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr VRequest__DecodeText_d__121() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "request", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr VRequest__DecodeText_d__121(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::UnityEngine::Networking::UnityWebRequest*  request, ::Meta::WitAi::Requests::VRequest*  __4__this, ::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25609};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder;

/// @brief Field request, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  request;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest*  __4__this;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VRequest___c__DisplayClass121_0*  __8__1;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRequest__DecodeText_d__121, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__DecodeText_d__121, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__DecodeText_d__121, request) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__DecodeText_d__121, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__DecodeText_d__121, __8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRequest__DecodeText_d__121, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRequest__DecodeText_d__121) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
