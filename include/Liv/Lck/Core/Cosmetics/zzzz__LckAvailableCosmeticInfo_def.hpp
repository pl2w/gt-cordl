#pragma once
// IWYU pragma private; include "Liv/Lck/Core/Cosmetics/LckAvailableCosmeticInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Core/Cosmetics/zzzz__LckCosmeticInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LckAvailableCosmeticInfo)
// Forward declare root types
namespace Liv::Lck::Core::Cosmetics {
struct LckAvailableCosmeticInfo;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo, "Liv.Lck.Core.Cosmetics", "LckAvailableCosmeticInfo");
// Dependencies Liv.Lck.Core.Cosmetics.LckCosmeticInfo
namespace Liv::Lck::Core::Cosmetics {
// Is value type: true
// CS Name: Liv.Lck.Core.Cosmetics.LckAvailableCosmeticInfo
struct CORDL_TYPE LckAvailableCosmeticInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckAvailableCosmeticInfo() ;

// Ctor Parameters [CppParam { name: "CosmeticInfo", ty: "::Liv::Lck::Core::Cosmetics::LckCosmeticInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlayerIds", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr LckAvailableCosmeticInfo(::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  CosmeticInfo, ::ArrayW<::StringW>  PlayerIds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field CosmeticInfo, offset: 0x0, size: 0x18, def value: None
 ::Liv::Lck::Core::Cosmetics::LckCosmeticInfo  CosmeticInfo;

/// @brief Field PlayerIds, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  PlayerIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo, CosmeticInfo) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo, PlayerIds) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::Cosmetics::LckAvailableCosmeticInfo) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Core::Cosmetics
