#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModBuilder__PublishRemainingChanges_d__115.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/Builder/zzzz__ChangeFlags_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModBuilder__PublishRemainingChanges_d__115)
namespace Modio::Mods::Builder {
class ModBuilder;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModBuilder__PublishRemainingChanges_d__115;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115, "Modio.Mods.Builder", "ModBuilder/<PublishRemainingChanges>d__115");
// [CompilerGenerated]
// Dependencies Modio.Mods.Builder.ChangeFlags, System.Collections.Generic.List`1::Enumerator<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Builder.ModBuilder/<PublishRemainingChanges>d__115
struct CORDL_TYPE ModBuilder__PublishRemainingChanges_d__115 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa039248, size 0x610, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa039858, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModBuilder__PublishRemainingChanges_d__115() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::Builder::ModBuilder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::List_1_Enumerator<::Modio::Mods::Builder::ChangeFlags>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_change_5__3", ty: "::Modio::Mods::Builder::ChangeFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }]
constexpr ModBuilder__PublishRemainingChanges_d__115(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Modio::Mods::Builder::ModBuilder*  __4__this, ::GlobalNamespace::List_1_Enumerator<::Modio::Mods::Builder::ChangeFlags>  __7__wrap1, ::Modio::Mods::Builder::ChangeFlags  _change_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17615};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Mods::Builder::ModBuilder*  __4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::Modio::Mods::Builder::ChangeFlags>  __7__wrap1;

/// @brief Field <change>5__3, offset: 0x40, size: 0x4, def value: None
 ::Modio::Mods::Builder::ChangeFlags  _change_5__3;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115, __7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115, _change_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModBuilder__PublishRemainingChanges_d__115) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
