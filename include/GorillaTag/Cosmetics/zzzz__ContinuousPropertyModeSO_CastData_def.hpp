#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousPropertyModeSO_CastData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_Cast_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_DataFlags_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ContinuousPropertyModeSO_CastData)
// Forward declare root types
namespace GlobalNamespace {
struct ContinuousPropertyModeSO_CastData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ContinuousPropertyModeSO_CastData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContinuousPropertyModeSO_CastData, "GorillaTag.Cosmetics", "ContinuousPropertyModeSO/CastData");
// Dependencies GorillaTag.Cosmetics.ContinuousProperty::Cast, GorillaTag.Cosmetics.ContinuousProperty::DataFlags
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.ContinuousPropertyModeSO/CastData
struct CORDL_TYPE ContinuousPropertyModeSO_CastData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ContinuousPropertyModeSO_CastData() ;

// Ctor Parameters [CppParam { name: "target", ty: "::GlobalNamespace::ContinuousProperty_Cast", modifiers: "", def_value: None, comment: None }, CppParam { name: "additionalFlags", ty: "::GlobalNamespace::ContinuousProperty_DataFlags", modifiers: "", def_value: None, comment: None }, CppParam { name: "whatItSets", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ContinuousPropertyModeSO_CastData(::GlobalNamespace::ContinuousProperty_Cast  target, ::GlobalNamespace::ContinuousProperty_DataFlags  additionalFlags, ::StringW  whatItSets) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field target, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousProperty_Cast  target;

/// @brief Field additionalFlags, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::ContinuousProperty_DataFlags  additionalFlags;

/// @brief Field whatItSets, offset: 0x8, size: 0x8, def value: None
 ::StringW  whatItSets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ContinuousPropertyModeSO_CastData, target) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousPropertyModeSO_CastData, additionalFlags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ContinuousPropertyModeSO_CastData, whatItSets) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ContinuousPropertyModeSO_CastData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
