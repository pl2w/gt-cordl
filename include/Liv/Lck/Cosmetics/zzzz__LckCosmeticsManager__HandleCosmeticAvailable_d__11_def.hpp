#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticsManager__HandleCosmeticAvailable_d__11.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Core/Cosmetics/zzzz__LckAvailableCosmeticInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckCosmeticsManager__HandleCosmeticAvailable_d__11)
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager;
}
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c__DisplayClass11_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckCosmeticsManager__HandleCosmeticAvailable_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11, "Liv.Lck.Cosmetics", "LckCosmeticsManager/<HandleCosmeticAvailable>d__11");
// [CompilerGenerated]
// Dependencies Liv.Lck.Core.Cosmetics.LckAvailableCosmeticInfo, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Cosmetics.LckCosmeticsManager/<HandleCosmeticAvailable>d__11
struct CORDL_TYPE LckCosmeticsManager__HandleCosmeticAvailable_d__11 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d68298, size 0x844, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d68adc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsManager__HandleCosmeticAvailable_d__11() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Cosmetics::LckCosmeticsManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "incomingCosmeticInfo", ty: "::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>", modifiers: "", def_value: None, comment: None }]
constexpr LckCosmeticsManager__HandleCosmeticAvailable_d__11(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Liv::Lck::Cosmetics::LckCosmeticsManager*  __4__this, ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  incomingCosmeticInfo, ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24986};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::LckCosmeticsManager*  __4__this;

/// @brief Field incomingCosmeticInfo, offset: 0x30, size: 0x20, def value: None
 ::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo  incomingCosmeticInfo;

/// @brief Field <>8__1, offset: 0x50, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_0*  __8__1;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11, incomingCosmeticInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11, __8__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCosmeticsManager__HandleCosmeticAvailable_d__11) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
