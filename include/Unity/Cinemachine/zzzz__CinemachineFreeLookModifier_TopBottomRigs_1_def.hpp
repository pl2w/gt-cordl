#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineFreeLookModifier_TopBottomRigs_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineFreeLookModifier_TopBottomRigs_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct CinemachineFreeLookModifier_TopBottomRigs_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::CinemachineFreeLookModifier_TopBottomRigs_1, "Unity.Cinemachine", "CinemachineFreeLookModifier/TopBottomRigs`1");
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineFreeLookModifier/TopBottomRigs`1<T>
struct CORDL_TYPE CinemachineFreeLookModifier_TopBottomRigs_1 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineFreeLookModifier_TopBottomRigs_1() ;

// Ctor Parameters [CppParam { name: "Top", ty: "T", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bottom", ty: "T", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineFreeLookModifier_TopBottomRigs_1(T  Top, T  Bottom) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22185};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("Value to take at the top of the axis range")]
/// @brief Field Top, offset: 0x0, size: 0x8, def value: None
 T  Top;

/// [Tooltip("Value to take at the bottom of the axis range")]
/// @brief Field Bottom, offset: 0x8, size: 0x8, def value: None
 T  Bottom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
