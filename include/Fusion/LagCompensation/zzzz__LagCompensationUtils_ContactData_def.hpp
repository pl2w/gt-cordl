#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/LagCompensationUtils_ContactData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LagCompensationUtils_ContactData)
// Forward declare root types
namespace GlobalNamespace {
struct LagCompensationUtils_ContactData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LagCompensationUtils_ContactData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LagCompensationUtils_ContactData, "Fusion.LagCompensation", "LagCompensationUtils/ContactData");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.LagCompensation.LagCompensationUtils/ContactData
struct CORDL_TYPE LagCompensationUtils_ContactData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LagCompensationUtils_ContactData() ;

// Ctor Parameters [CppParam { name: "Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Penetration", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LagCompensationUtils_ContactData(::UnityEngine::Vector3  Point, ::UnityEngine::Vector3  Normal, float_t  Penetration) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19398};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field Point, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Point;

/// @brief Field Normal, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  Normal;

/// @brief Field Penetration, offset: 0x18, size: 0x4, def value: None
 float_t  Penetration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_ContactData, Point) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_ContactData, Normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LagCompensationUtils_ContactData, Penetration) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LagCompensationUtils_ContactData) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
