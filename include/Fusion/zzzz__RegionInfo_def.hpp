#pragma once
// IWYU pragma private; include "Fusion/RegionInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RegionInfo)
// Forward declare root types
namespace Fusion {
struct RegionInfo;
}
// Write type traits
MARK_VAL_T(::Fusion::RegionInfo);
DEFINE_IL2CPP_CLASS(::Fusion::RegionInfo, "Fusion", "RegionInfo");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RegionInfo
struct CORDL_TYPE RegionInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RegionInfo() ;

// Ctor Parameters [CppParam { name: "RegionCode", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "RegionPing", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RegionInfo(::StringW  RegionCode, int32_t  RegionPing) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field RegionCode, offset: 0x0, size: 0x8, def value: None
 ::StringW  RegionCode;

/// @brief Field RegionPing, offset: 0x8, size: 0x4, def value: None
 int32_t  RegionPing;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RegionInfo, RegionCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::RegionInfo, RegionPing) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Fusion::RegionInfo) == 0x10, "Size mismatch!");

} // namespace end def Fusion
