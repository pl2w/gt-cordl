#pragma once
// IWYU pragma private; include "GlobalNamespace/SnapData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SnapBounds_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SnapData)
// Forward declare root types
namespace GlobalNamespace {
struct SnapData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SnapData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SnapData, "", "SnapData");
// Dependencies SnapBounds
namespace GlobalNamespace {
// Is value type: true
// CS Name: SnapData
struct CORDL_TYPE SnapData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SnapData() ;

// Ctor Parameters [CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "snapBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: None, comment: None }]
constexpr SnapData(int32_t  attachIndex, ::GlobalNamespace::SnapBounds  snapBounds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1603};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field attachIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  attachIndex;

/// @brief Field snapBounds, offset: 0x4, size: 0x10, def value: None
 ::GlobalNamespace::SnapBounds  snapBounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SnapData, attachIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SnapData, snapBounds) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SnapData) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
