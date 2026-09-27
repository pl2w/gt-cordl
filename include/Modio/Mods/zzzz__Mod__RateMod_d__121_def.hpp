#pragma once
// IWYU pragma private; include "Modio/Mods/Mod__RateMod_d__121.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__AddRatingResponse_def.hpp"
#include "Modio/Mods/zzzz__ModRating_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mod__RateMod_d__121)
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct Mod__RateMod_d__121;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Mod__RateMod_d__121);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Mod__RateMod_d__121, "Modio.Mods", "Mod/<RateMod>d__121");
// [CompilerGenerated]
// Dependencies Modio.API.SchemaDefinitions.AddRatingResponse, Modio.Mods.ModRating, System.Nullable`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Mod/<RateMod>d__121
struct CORDL_TYPE Mod__RateMod_d__121 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa02daac, size 0x480, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa02df2c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Mod__RateMod_d__121() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Modio::Mods::Mod*", modifiers: "", def_value: None, comment: None }, CppParam { name: "rating", ty: "::Modio::Mods::ModRating", modifiers: "", def_value: None, comment: None }, CppParam { name: "_previousRating_5__2", ty: "::Modio::Mods::ModRating", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddRatingResponse>>>", modifiers: "", def_value: None, comment: None }]
constexpr Mod__RateMod_d__121(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder, ::Modio::Mods::Mod*  __4__this, ::Modio::Mods::ModRating  rating, ::Modio::Mods::ModRating  _previousRating_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddRatingResponse>>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Modio::Error*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Modio::Mods::Mod*  __4__this;

/// @brief Field rating, offset: 0x28, size: 0x4, def value: None
 ::Modio::Mods::ModRating  rating;

/// @brief Field <previousRating>5__2, offset: 0x2c, size: 0x4, def value: None
 ::Modio::Mods::ModRating  _previousRating_5__2;

/// [TupleElementNames(new[] { "error", "addRatingResponse" })]
/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::AddRatingResponse>>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Mod__RateMod_d__121, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__RateMod_d__121, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__RateMod_d__121, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__RateMod_d__121, rating) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__RateMod_d__121, _previousRating_5__2) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Mod__RateMod_d__121, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Mod__RateMod_d__121) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
