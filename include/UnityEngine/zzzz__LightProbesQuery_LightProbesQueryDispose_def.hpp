#pragma once
// IWYU pragma private; include "UnityEngine/LightProbesQuery_LightProbesQueryDispose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LightProbesQuery_LightProbesQueryDispose)
// Forward declare root types
namespace GlobalNamespace {
struct LightProbesQuery_LightProbesQueryDispose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose, "UnityEngine", "LightProbesQuery/LightProbesQueryDispose");
// [NativeContainer]
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.LightProbesQuery/LightProbesQueryDispose
struct CORDL_TYPE LightProbesQuery_LightProbesQueryDispose {
public:
// Declarations
/// @brief Method Dispose, addr 0xb57b9c4, size 0x50, virtual false, abstract: false, final false
inline void Dispose() ;

// Ctor Parameters []
// @brief default ctor
constexpr LightProbesQuery_LightProbesQueryDispose() ;

// Ctor Parameters [CppParam { name: "m_LightProbeContextWrapper", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr LightProbesQuery_LightProbesQueryDispose(::System::IntPtr  m_LightProbeContextWrapper) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14854};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_LightProbeContextWrapper, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_LightProbeContextWrapper;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose, m_LightProbeContextWrapper) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightProbesQuery_LightProbesQueryDispose) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
