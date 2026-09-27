#pragma once
// IWYU pragma private; include "Liv/Lck/Cosmetics/LckCosmeticsManager_CosmeticRootInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckCosmeticsManager_CosmeticRootInfo)
// Forward declare root types
namespace GlobalNamespace {
struct LckCosmeticsManager_CosmeticRootInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo, "Liv.Lck.Cosmetics", "LckCosmeticsManager/CosmeticRootInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Cosmetics.LckCosmeticsManager/CosmeticRootInfo
struct CORDL_TYPE LckCosmeticsManager_CosmeticRootInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckCosmeticsManager_CosmeticRootInfo() ;

// Ctor Parameters [CppParam { name: "RootPath", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Type", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr LckCosmeticsManager_CosmeticRootInfo(::StringW  RootPath, ::StringW  Type) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24980};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RootPath, offset: 0x0, size: 0x8, def value: None
 ::StringW  RootPath;

/// @brief Field Type, offset: 0x8, size: 0x8, def value: None
 ::StringW  Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo, RootPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo, Type) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckCosmeticsManager_CosmeticRootInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
