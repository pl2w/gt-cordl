#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticsManager_<>c__DisplayClass11_1___HandleCosmeticAvailable_b__2_d.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckCosmeticsManager_<>c__DisplayClass11_1___HandleCosmeticAvailable_b__2_d)
namespace Liv::Lck::Cosmetics {
class LckCosmeticsManager___c__DisplayClass11_1;
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
struct __c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::__c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d, "Liv.Lck.Cosmetics", "LckCosmeticsManager/<>c__DisplayClass11_1/<<HandleCosmeticAvailable>b__2>d");
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Cosmetics.LckCosmeticsManager/<>c__DisplayClass11_1/<<HandleCosmeticAvailable>b__2>d
struct CORDL_TYPE __c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d67e90, size 0x330, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d681c0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr __c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>", modifiers: "", def_value: None, comment: None }]
constexpr __c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24983};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Cosmetics::LckCosmeticsManager___c__DisplayClass11_1*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::__c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::__c__DisplayClass11_1_LckCosmeticsManager___HandleCosmeticAvailable_b__2_d) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
