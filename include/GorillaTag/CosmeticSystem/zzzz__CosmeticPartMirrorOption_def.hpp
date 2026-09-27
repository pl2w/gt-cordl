#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/CosmeticPartMirrorOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticPartMirrorAxis_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CosmeticPartMirrorOption)
// Forward declare root types
namespace GorillaTag::CosmeticSystem {
struct CosmeticPartMirrorOption;
}
// Write type traits
MARK_VAL_T(::GorillaTag::CosmeticSystem::CosmeticPartMirrorOption);
DEFINE_IL2CPP_CLASS(::GorillaTag::CosmeticSystem::CosmeticPartMirrorOption, "GorillaTag.CosmeticSystem", "CosmeticPartMirrorOption");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticPartMirrorAxis
namespace GorillaTag::CosmeticSystem {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.CosmeticPartMirrorOption
struct CORDL_TYPE CosmeticPartMirrorOption {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticPartMirrorOption() ;

// Ctor Parameters [CppParam { name: "axis", ty: "::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis", modifiers: "", def_value: None, comment: None }, CppParam { name: "negativeScale", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticPartMirrorOption(::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis  axis, bool  negativeScale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4751};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field axis, offset: 0x0, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticPartMirrorAxis  axis;

/// [Tooltip("This will multiply the local scale for the selected axis by -1.")]
/// @brief Field negativeScale, offset: 0x4, size: 0x1, def value: None
 bool  negativeScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticPartMirrorOption, axis) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::CosmeticSystem::CosmeticPartMirrorOption, negativeScale) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::CosmeticSystem::CosmeticPartMirrorOption) == 0x8, "Size mismatch!");

} // namespace end def GorillaTag::CosmeticSystem
