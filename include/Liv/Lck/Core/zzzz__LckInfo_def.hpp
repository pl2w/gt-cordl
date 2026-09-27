#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckInfo)
// Forward declare root types
namespace Liv::Lck::Core {
struct LckInfo;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::Core::LckInfo);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckInfo, "Liv.Lck.Core", "LckInfo");
// Dependencies 
namespace Liv::Lck::Core {
// Is value type: true
// CS Name: Liv.Lck.Core.LckInfo
struct CORDL_TYPE LckInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LckInfo() ;

// Ctor Parameters [CppParam { name: "Version", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "BuildNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckInfo(::StringW  Version, int32_t  BuildNumber) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31907};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Version, offset: 0x0, size: 0x8, def value: None
 ::StringW  Version;

/// @brief Field BuildNumber, offset: 0x8, size: 0x4, def value: None
 int32_t  BuildNumber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Core::LckInfo, Version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Core::LckInfo, BuildNumber) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Core::LckInfo) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core
