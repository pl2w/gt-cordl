#pragma once
// IWYU pragma private; include "GlobalNamespace/FortuneResults_FortuneResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FortuneResults_FortuneCategoryType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FortuneResults_FortuneResult)
namespace GlobalNamespace {
struct FortuneResults_FortuneCategoryType;
}
// Forward declare root types
namespace GlobalNamespace {
struct FortuneResults_FortuneResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FortuneResults_FortuneResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FortuneResults_FortuneResult, "", "FortuneResults/FortuneResult");
// Dependencies FortuneResults::FortuneCategoryType
namespace GlobalNamespace {
// Is value type: true
// CS Name: FortuneResults/FortuneResult
struct CORDL_TYPE FortuneResults_FortuneResult {
public:
// Declarations
/// @brief Method .ctor, addr 0x580a650, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType, int32_t  resultIndex) ;

// Ctor Parameters []
// @brief default ctor
constexpr FortuneResults_FortuneResult() ;

// Ctor Parameters [CppParam { name: "fortuneType", ty: "::GlobalNamespace::FortuneResults_FortuneCategoryType", modifiers: "", def_value: None, comment: None }, CppParam { name: "resultIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FortuneResults_FortuneResult(::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType, int32_t  resultIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1704};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field fortuneType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::FortuneResults_FortuneCategoryType  fortuneType;

/// @brief Field resultIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  resultIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FortuneResults_FortuneResult, fortuneType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FortuneResults_FortuneResult, resultIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FortuneResults_FortuneResult) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
