#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93)
namespace GlobalNamespace {
class MetaXRAcousticGeometry;
}
namespace GlobalNamespace {
class MetaXRAcousticGeometry___c__DisplayClass93_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93, "", "MetaXRAcousticGeometry/<LoadGeometryFromMemory>d__93");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, Unity.Collections.NativeArray`1::ReadOnly<T>
namespace GlobalNamespace {
// Is value type: true
// CS Name: MetaXRAcousticGeometry/<LoadGeometryFromMemory>d__93
struct CORDL_TYPE MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9ea669c, size 0x604, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9ea6ca0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "data", ty: "::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_startTime_5__2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data, ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  __4__this, ::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*  __8__1, float_t  _startTime_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29923};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field data, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MetaXRAcousticGeometry>  __4__this;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::MetaXRAcousticGeometry___c__DisplayClass93_0*  __8__1;

/// @brief Field <startTime>5__2, offset: 0x48, size: 0x4, def value: None
 float_t  _startTime_5__2;

/// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93, data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93, __8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93, _startTime_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MetaXRAcousticGeometry__LoadGeometryFromMemory_d__93) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
