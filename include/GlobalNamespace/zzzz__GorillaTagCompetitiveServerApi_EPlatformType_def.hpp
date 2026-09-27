#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveServerApi_EPlatformType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveServerApi_EPlatformType)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaTagCompetitiveServerApi_EPlatformType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaTagCompetitiveServerApi_EPlatformType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveServerApi_EPlatformType, "", "GorillaTagCompetitiveServerApi/EPlatformType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagCompetitiveServerApi/EPlatformType
struct CORDL_TYPE GorillaTagCompetitiveServerApi_EPlatformType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaTagCompetitiveServerApi_EPlatformType_Unwrapped
enum struct __GorillaTagCompetitiveServerApi_EPlatformType_Unwrapped : int32_t {
__E_PC = static_cast<int32_t>(0x0),
__E_Quest = static_cast<int32_t>(0x1),
__E_NumPlatforms = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaTagCompetitiveServerApi_EPlatformType_Unwrapped () const noexcept {
return static_cast<__GorillaTagCompetitiveServerApi_EPlatformType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveServerApi_EPlatformType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaTagCompetitiveServerApi_EPlatformType(int32_t  value__) noexcept;

/// @brief Field NumPlatforms value: I32(2)
static ::GlobalNamespace::GorillaTagCompetitiveServerApi_EPlatformType const NumPlatforms;

/// @brief Field PC value: I32(0)
static ::GlobalNamespace::GorillaTagCompetitiveServerApi_EPlatformType const PC;

/// @brief Field Quest value: I32(1)
static ::GlobalNamespace::GorillaTagCompetitiveServerApi_EPlatformType const Quest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2230};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveServerApi_EPlatformType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveServerApi_EPlatformType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
