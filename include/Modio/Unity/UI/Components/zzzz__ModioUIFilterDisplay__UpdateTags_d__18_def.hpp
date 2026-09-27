#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/ModioUIFilterDisplay__UpdateTags_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUIFilterDisplay__UpdateTags_d__18)
namespace Modio::Mods {
class GameTagCategory;
}
namespace Modio::Unity::UI::Components {
class ModioUIFilterDisplay;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioUIFilterDisplay__UpdateTags_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioUIFilterDisplay__UpdateTags_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioUIFilterDisplay__UpdateTags_d__18, "Modio.Unity.UI.Components", "ModioUIFilterDisplay/<UpdateTags>d__18");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Components.ModioUIFilterDisplay/<UpdateTags>d__18
struct CORDL_TYPE ModioUIFilterDisplay__UpdateTags_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fb834c, size 0xaac, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fb8e34, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioUIFilterDisplay__UpdateTags_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::GameTagCategory*>>>", modifiers: "", def_value: None, comment: None }]
constexpr ModioUIFilterDisplay__UpdateTags_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::GameTagCategory*>>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27142};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::ArrayW<::Modio::Mods::GameTagCategory*>>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioUIFilterDisplay__UpdateTags_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUIFilterDisplay__UpdateTags_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUIFilterDisplay__UpdateTags_d__18, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioUIFilterDisplay__UpdateTags_d__18, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioUIFilterDisplay__UpdateTags_d__18) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
