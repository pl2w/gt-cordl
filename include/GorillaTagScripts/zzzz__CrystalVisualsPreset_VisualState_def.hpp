#pragma once
// IWYU pragma private; include "GorillaTagScripts/CrystalVisualsPreset_VisualState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CrystalVisualsPreset_VisualState)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct CrystalVisualsPreset_VisualState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CrystalVisualsPreset_VisualState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrystalVisualsPreset_VisualState, "GorillaTagScripts", "CrystalVisualsPreset/VisualState");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.CrystalVisualsPreset/VisualState
struct CORDL_TYPE CrystalVisualsPreset_VisualState {
public:
// Declarations
/// @brief Method GetHashCode, addr 0x5bb64e4, size 0xb0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// [CompilerGenerated]
/// @brief Method <GetHashCode>g__GetColorHash|2_0, addr 0x5bb6594, size 0xb8, virtual false, abstract: false, final false
static inline int32_t _GetHashCode_g__GetColorHash_2_0(::UnityEngine::Color  c) ;

// Ctor Parameters []
// @brief default ctor
constexpr CrystalVisualsPreset_VisualState() ;

// Ctor Parameters [CppParam { name: "albedo", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "emission", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr CrystalVisualsPreset_VisualState(::UnityEngine::Color  albedo, ::UnityEngine::Color  emission) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [ColorUsage(false, false)]
/// @brief Field albedo, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  albedo;

/// [ColorUsage(false, false)]
/// @brief Field emission, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  emission;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrystalVisualsPreset_VisualState, albedo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrystalVisualsPreset_VisualState, emission) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrystalVisualsPreset_VisualState) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
