#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/LckFrameController__LoadTexture_d__14.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckFrameController__LoadTexture_d__14)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
struct LckFrameController__LoadTexture_d__14;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckFrameController__LoadTexture_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckFrameController__LoadTexture_d__14, "Liv.Lck.GorillaTag", "LckFrameController/<LoadTexture>d__14");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.LckFrameController/<LoadTexture>d__14
struct CORDL_TYPE LckFrameController__LoadTexture_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9d308fc, size 0x78, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9d30974, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LckFrameController__LoadTexture_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Texture>>", modifiers: "", def_value: None, comment: None }]
constexpr LckFrameController__LoadTexture_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Texture>>  __t__builder) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29671};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::UnityEngine::Texture>>  __t__builder;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckFrameController__LoadTexture_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckFrameController__LoadTexture_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckFrameController__LoadTexture_d__14) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
