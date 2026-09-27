#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Reverse`1__Reverse__MoveNextAsync_d__9.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Reverse`1__Reverse__MoveNextAsync_d__9)
namespace Cysharp::Threading::Tasks::Linq {
template<typename TSource>
class Reverse_1__Reverse;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TSource>
struct _Reverse_Reverse_1__MoveNextAsync_d__9;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::_Reverse_Reverse_1__MoveNextAsync_d__9);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::_Reverse_Reverse_1__MoveNextAsync_d__9, "Cysharp.Threading.Tasks.Linq", "Reverse`1/_Reverse/<MoveNextAsync>d__9");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>
namespace GlobalNamespace {
// cpp template
template<typename TSource>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.Reverse`1/_Reverse/<MoveNextAsync>d__9<TSource>
struct CORDL_TYPE _Reverse_Reverse_1__MoveNextAsync_d__9 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr _Reverse_Reverse_1__MoveNextAsync_d__9() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<TSource>>", modifiers: "", def_value: None, comment: None }]
constexpr _Reverse_Reverse_1__MoveNextAsync_d__9(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder, ::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>*  __4__this, ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<TSource>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20720};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<TSource>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
