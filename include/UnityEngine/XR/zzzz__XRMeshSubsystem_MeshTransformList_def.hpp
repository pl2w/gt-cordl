#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRMeshSubsystem_MeshTransformList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(XRMeshSubsystem_MeshTransformList)
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRMeshSubsystem_MeshTransformList;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRMeshSubsystem_MeshTransformList);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRMeshSubsystem_MeshTransformList, "UnityEngine.XR", "XRMeshSubsystem/MeshTransformList");
// [IsReadOnly]
// [NativeConditional("ENABLE_XR")]
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.XRMeshSubsystem/MeshTransformList
struct CORDL_TYPE XRMeshSubsystem_MeshTransformList {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb938d00, size 0x3c, virtual true, abstract: false, final true
inline void Dispose() ;

/// [FreeFunction("UnityXRMeshTransformList_Dispose")]
/// @brief Method Dispose, addr 0xb938d3c, size 0x3c, virtual false, abstract: false, final false
static inline void Dispose(::System::IntPtr  self) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr XRMeshSubsystem_MeshTransformList() ;

// Ctor Parameters [CppParam { name: "m_Self", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr XRMeshSubsystem_MeshTransformList(::System::IntPtr  m_Self) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31642};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_Self, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Self;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRMeshSubsystem_MeshTransformList, m_Self) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRMeshSubsystem_MeshTransformList) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
