#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK__LoadSceneFromJsonString_d__83.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MRUK__LoadSceneFromJsonString_d__83)
namespace Meta::XR::MRUtilityKit {
class MRUK;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MRUK__LoadSceneFromJsonString_d__83;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83, "Meta.XR.MRUtilityKit", "MRUK/<LoadSceneFromJsonString>d__83");
// [CompilerGenerated]
// Dependencies Meta.XR.MRUtilityKit.MRUK::LoadDeviceResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.MRUK/<LoadSceneFromJsonString>d__83
struct CORDL_TYPE MRUK__LoadSceneFromJsonString_d__83 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f28fb8, size 0x398, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f29350, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MRUK__LoadSceneFromJsonString_d__83() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::MRUtilityKit::MRUK>", modifiers: "", def_value: None, comment: None }, CppParam { name: "jsonString", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "removeMissingRooms", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: None, comment: None }]
constexpr MRUK__LoadSceneFromJsonString_d__83(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder, ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this, ::StringW  jsonString, bool  removeMissingRooms, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25875};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::MRUtilityKit::MRUK>  __4__this;

/// @brief Field jsonString, offset: 0x28, size: 0x8, def value: None
 ::StringW  jsonString;

/// @brief Field removeMissingRooms, offset: 0x30, size: 0x1, def value: None
 bool  removeMissingRooms;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83, jsonString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83, removeMissingRooms) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MRUK__LoadSceneFromJsonString_d__83) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
