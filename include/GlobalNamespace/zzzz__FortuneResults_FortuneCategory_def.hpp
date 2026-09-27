#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneResults_FortuneCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategoryType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FortuneResults_FortuneCategory)
// Forward declare root types
namespace GlobalNamespace {
struct FortuneResults_FortuneCategory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FortuneResults_FortuneCategory);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FortuneResults_FortuneCategory, "", "FortuneResults/FortuneCategory");
// Dependencies FortuneResults::FortuneCategoryType
namespace GlobalNamespace {
// Is value type: true
// CS Name: FortuneResults/FortuneCategory
struct CORDL_TYPE FortuneResults_FortuneCategory {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FortuneResults_FortuneCategory() ;

// Ctor Parameters [CppParam { name: "fortuneType", ty: "::GlobalNamespace::FortuneResults_FortuneCategoryType", modifiers: "", def_value: None, comment: None }, CppParam { name: "weightedChance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "textResults", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr FortuneResults_FortuneCategory(::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType, float_t  weightedChance, ::ArrayW<::StringW>  textResults) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field fortuneType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType;

/// @brief Field weightedChance, offset: 0x4, size: 0x4, def value: None
 float_t  weightedChance;

/// @brief Field textResults, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW>  textResults;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FortuneResults_FortuneCategory, fortuneType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneResults_FortuneCategory, weightedChance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneResults_FortuneCategory, textResults) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FortuneResults_FortuneCategory) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
