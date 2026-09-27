#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineBlenderSettings_CustomBlend.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineBlendDefinition_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineBlenderSettings_CustomBlend)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineBlenderSettings_CustomBlend;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineBlenderSettings_CustomBlend);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineBlenderSettings_CustomBlend, "Unity.Cinemachine", "CinemachineBlenderSettings/CustomBlend");
// Dependencies Unity.Cinemachine.CinemachineBlendDefinition
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineBlenderSettings/CustomBlend
struct CORDL_TYPE CinemachineBlenderSettings_CustomBlend {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineBlenderSettings_CustomBlend() ;

// Ctor Parameters [CppParam { name: "From", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "To", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Blend", ty: "::Unity::Cinemachine::CinemachineBlendDefinition", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineBlenderSettings_CustomBlend(::StringW  From, ::StringW  To, ::Unity::Cinemachine::CinemachineBlendDefinition  Blend) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22270};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [Tooltip("When blending from a camera with this name")]
/// [FormerlySerializedAs("m_From")]
/// @brief Field From, offset: 0x0, size: 0x8, def value: None
 ::StringW  From;

/// [Tooltip("When blending to a camera with this name")]
/// [FormerlySerializedAs("m_To")]
/// @brief Field To, offset: 0x8, size: 0x8, def value: None
 ::StringW  To;

/// [Tooltip("Blend curve definition")]
/// [FormerlySerializedAs("m_Blend")]
/// @brief Field Blend, offset: 0x10, size: 0x10, def value: None
 ::Unity::Cinemachine::CinemachineBlendDefinition  Blend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineBlenderSettings_CustomBlend, From) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineBlenderSettings_CustomBlend, To) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineBlenderSettings_CustomBlend, Blend) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineBlenderSettings_CustomBlend) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
