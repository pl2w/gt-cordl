#pragma once
// IWYU pragma private; include "GlobalNamespace/LightArray__SetIntensity_d__13.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightArray__SetIntensity_d__13)
namespace GlobalNamespace {
class LightArray;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LightArray__SetIntensity_d__13;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightArray__SetIntensity_d__13);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightArray__SetIntensity_d__13, "", "LightArray/<SetIntensity>d__13");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LightArray/<SetIntensity>d__13
struct CORDL_TYPE LightArray__SetIntensity_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x56d095c, size 0x5fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x56d0f58, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LightArray__SetIntensity_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LightArray>", modifiers: "", def_value: None, comment: None }, CppParam { name: "intensity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr LightArray__SetIntensity_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::LightArray>  __4__this, float_t  intensity, int32_t  _i_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1049};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightArray>  __4__this;

/// @brief Field intensity, offset: 0x30, size: 0x4, def value: None
 float_t  intensity;

/// @brief Field <i>5__2, offset: 0x34, size: 0x4, def value: None
 int32_t  _i_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightArray__SetIntensity_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetIntensity_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetIntensity_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetIntensity_d__13, intensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetIntensity_d__13, _i_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetIntensity_d__13, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightArray__SetIntensity_d__13) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
