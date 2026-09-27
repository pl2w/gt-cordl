#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemSet__FadeScaleXZ_d__20.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemSet__FadeScaleXZ_d__20)
namespace GlobalNamespace {
class ParticleSystemSet;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystemSet__FadeScaleXZ_d__20;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20, "", "ParticleSystemSet/<FadeScaleXZ>d__20");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: ParticleSystemSet/<FadeScaleXZ>d__20
struct CORDL_TYPE ParticleSystemSet__FadeScaleXZ_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x570f1c8, size 0x454, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x570f61c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemSet__FadeScaleXZ_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ParticleSystemSet>", modifiers: "", def_value: None, comment: None }, CppParam { name: "scaler", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_targetScale_5__2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystemSet__FadeScaleXZ_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ParticleSystemSet>  __4__this, float_t  scaler, ::UnityEngine::Vector3  _targetScale_5__2, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1170};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ParticleSystemSet>  __4__this;

/// @brief Field scaler, offset: 0x30, size: 0x4, def value: None
 float_t  scaler;

/// @brief Field <targetScale>5__2, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  _targetScale_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20, scaler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20, _targetScale_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystemSet__FadeScaleXZ_d__20) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
