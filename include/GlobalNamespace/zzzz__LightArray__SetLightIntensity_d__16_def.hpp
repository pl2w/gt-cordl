#pragma once
// IWYU pragma private; include "GlobalNamespace/LightArray__SetLightIntensity_d__16.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightArray__SetLightIntensity_d__16)
namespace GlobalNamespace {
class LightArray;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct LightArray__SetLightIntensity_d__16;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightArray__SetLightIntensity_d__16);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightArray__SetLightIntensity_d__16, "", "LightArray/<SetLightIntensity>d__16");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: LightArray/<SetLightIntensity>d__16
struct CORDL_TYPE LightArray__SetLightIntensity_d__16 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x56d16a8, size 0x30c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x56d19b4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr LightArray__SetLightIntensity_d__16() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::LightArray>", modifiers: "", def_value: None, comment: None }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "intensity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr LightArray__SetLightIntensity_d__16(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::LightArray>  __4__this, int32_t  i, float_t  intensity, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightArray>  __4__this;

/// @brief Field i, offset: 0x28, size: 0x4, def value: None
 int32_t  i;

/// @brief Field intensity, offset: 0x2c, size: 0x4, def value: None
 float_t  intensity;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightArray__SetLightIntensity_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetLightIntensity_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetLightIntensity_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetLightIntensity_d__16, i) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetLightIntensity_d__16, intensity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightArray__SetLightIntensity_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightArray__SetLightIntensity_d__16) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
