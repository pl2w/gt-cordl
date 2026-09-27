#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_CustomPlanesBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_CustomPlane_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LagCompensationUtils_CustomPlanesBox)
// Forward declare root types
namespace GlobalNamespace {
struct LagCompensationUtils_CustomPlanesBox;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox, "Fusion.LagCompensation", "LagCompensationUtils/CustomPlanesBox");
// Dependencies Fusion.LagCompensation.LagCompensationUtils::CustomPlane
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.LagCompensation.LagCompensationUtils/CustomPlanesBox
struct CORDL_TYPE LagCompensationUtils_CustomPlanesBox {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationUtils_CustomPlanesBox() ;

// Ctor Parameters [CppParam { name: "P0", ty: "::GlobalNamespace::LagCompensationUtils_CustomPlane", modifiers: "", def_value: None, comment: None }, CppParam { name: "P1", ty: "::GlobalNamespace::LagCompensationUtils_CustomPlane", modifiers: "", def_value: None, comment: None }, CppParam { name: "P2", ty: "::GlobalNamespace::LagCompensationUtils_CustomPlane", modifiers: "", def_value: None, comment: None }, CppParam { name: "P3", ty: "::GlobalNamespace::LagCompensationUtils_CustomPlane", modifiers: "", def_value: None, comment: None }, CppParam { name: "P4", ty: "::GlobalNamespace::LagCompensationUtils_CustomPlane", modifiers: "", def_value: None, comment: None }, CppParam { name: "P5", ty: "::GlobalNamespace::LagCompensationUtils_CustomPlane", modifiers: "", def_value: None, comment: None }]
constexpr LagCompensationUtils_CustomPlanesBox(::GlobalNamespace::LagCompensationUtils_CustomPlane  P0, ::GlobalNamespace::LagCompensationUtils_CustomPlane  P1, ::GlobalNamespace::LagCompensationUtils_CustomPlane  P2, ::GlobalNamespace::LagCompensationUtils_CustomPlane  P3, ::GlobalNamespace::LagCompensationUtils_CustomPlane  P4, ::GlobalNamespace::LagCompensationUtils_CustomPlane  P5) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19392};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field P0, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::LagCompensationUtils_CustomPlane  P0;

/// @brief Field P1, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::LagCompensationUtils_CustomPlane  P1;

/// @brief Field P2, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::LagCompensationUtils_CustomPlane  P2;

/// @brief Field P3, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::LagCompensationUtils_CustomPlane  P3;

/// @brief Field P4, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::LagCompensationUtils_CustomPlane  P4;

/// @brief Field P5, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::LagCompensationUtils_CustomPlane  P5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox, P0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox, P1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox, P2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox, P3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox, P4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox, P5) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LagCompensationUtils_CustomPlanesBox) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
