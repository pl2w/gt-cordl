#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAgeStatusType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTAgeStatusType)
// Forward declare root types
namespace GlobalNamespace {
struct GTAgeStatusType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTAgeStatusType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTAgeStatusType, "", "GTAgeStatusType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTAgeStatusType
struct CORDL_TYPE GTAgeStatusType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTAgeStatusType_Unwrapped
enum struct __GTAgeStatusType_Unwrapped : int32_t {
__E_PROHIBITED = static_cast<int32_t>(0x0),
__E_DIGITALMINOR = static_cast<int32_t>(0x1),
__E_DIGITALYOUTH = static_cast<int32_t>(0x2),
__E_LEGALADULT = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTAgeStatusType_Unwrapped () const noexcept {
return static_cast<__GTAgeStatusType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTAgeStatusType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTAgeStatusType(int32_t  value__) noexcept;

/// @brief Field DIGITALMINOR value: I32(1)
static ::GlobalNamespace::GTAgeStatusType const DIGITALMINOR;

/// @brief Field DIGITALYOUTH value: I32(2)
static ::GlobalNamespace::GTAgeStatusType const DIGITALYOUTH;

/// @brief Field LEGALADULT value: I32(3)
static ::GlobalNamespace::GTAgeStatusType const LEGALADULT;

/// @brief Field PROHIBITED value: I32(0)
static ::GlobalNamespace::GTAgeStatusType const PROHIBITED;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2865};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTAgeStatusType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTAgeStatusType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
