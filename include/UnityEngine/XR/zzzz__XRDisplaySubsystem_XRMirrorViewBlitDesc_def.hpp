#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem_XRMirrorViewBlitDesc.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem_XRMirrorViewBlitDesc)
namespace GlobalNamespace {
struct XRDisplaySubsystem_XRBlitParams;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRDisplaySubsystem_XRMirrorViewBlitDesc;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc, "UnityEngine.XR", "XRDisplaySubsystem/XRMirrorViewBlitDesc");
// [NativeHeader("Modules/XR/Subsystems/Display/XRDisplaySubsystem.bindings.h")]
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct CORDL_TYPE XRDisplaySubsystem_XRMirrorViewBlitDesc {
public:
// Declarations
/// [NativeMethod(Name = "XRMirrorViewBlitDescScriptApi::GetBlitParameter", IsFreeFunction = true, HasExplicitThis = true)]
/// [NativeConditional("ENABLE_XR")]
/// @brief Method GetBlitParameter, addr 0xb937edc, size 0x54, virtual false, abstract: false, final false
inline void GetBlitParameter(int32_t  blitParameterIndex, ::by_ref<::GlobalNamespace::XRDisplaySubsystem_XRBlitParams>  blitParameter) ;

// Ctor Parameters []
// @brief default ctor
constexpr XRDisplaySubsystem_XRMirrorViewBlitDesc() ;

// Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRDisplaySubsystem_XRMirrorViewBlitDesc(::System::IntPtr  displaySubsystemInstance, bool  nativeBlitAvailable, bool  nativeBlitInvalidStates, int32_t  blitParamsCount) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31629};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field displaySubsystemInstance, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  displaySubsystemInstance;

/// @brief Field nativeBlitAvailable, offset: 0x8, size: 0x1, def value: None
 bool  nativeBlitAvailable;

/// @brief Field nativeBlitInvalidStates, offset: 0x9, size: 0x1, def value: None
 bool  nativeBlitInvalidStates;

/// @brief Field blitParamsCount, offset: 0xc, size: 0x4, def value: None
 int32_t  blitParamsCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc, displaySubsystemInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc, nativeBlitAvailable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc, nativeBlitInvalidStates) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc, blitParamsCount) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRDisplaySubsystem_XRMirrorViewBlitDesc) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
