#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRMeshSubsystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
CORDL_MODULE_EXPORT(XRMeshSubsystem)
namespace GlobalNamespace {
struct XRMeshSubsystem_MeshTransformList;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR {
struct MeshGenerationResult;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRMeshSubsystem;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::XRMeshSubsystem*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::XRMeshSubsystem*, "UnityEngine.XR", "XRMeshSubsystem");
// [NativeHeader("Modules/XR/Subsystems/Meshing/XRMeshingSubsystem.h")]
// [NativeHeader("Modules/XR/XRPrefix.h")]
// [NativeConditional("ENABLE_XR")]
// [UsedByNativeCode]
// Dependencies UnityEngine.IntegratedSubsystem`1<TSubsystemDescriptor>
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRMeshSubsystem
class CORDL_TYPE XRMeshSubsystem : public ::UnityEngine::IntegratedSubsystem_1<Il2CppObject*> {
public:
// Declarations
using MeshTransformList = ::GlobalNamespace::XRMeshSubsystem_MeshTransformList;

/// [RequiredByNativeCode]
/// @brief Method InvokeMeshReadyDelegate, addr 0xb938c7c, size 0x3c, virtual false, abstract: false, final false
inline void InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult  result, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*  onMeshGenerationComplete) ;

static inline ::UnityEngine::XR::XRMeshSubsystem* New_ctor() ;

/// @brief Method .ctor, addr 0xb938cb8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRMeshSubsystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRMeshSubsystem(XRMeshSubsystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRMeshSubsystem(XRMeshSubsystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31643};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::XRMeshSubsystem) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR
