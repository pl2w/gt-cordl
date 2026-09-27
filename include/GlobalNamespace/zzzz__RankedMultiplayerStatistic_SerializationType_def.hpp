#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerStatistic_SerializationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RankedMultiplayerStatistic_SerializationType)
// Forward declare root types
namespace GlobalNamespace {
struct RankedMultiplayerStatistic_SerializationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RankedMultiplayerStatistic_SerializationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RankedMultiplayerStatistic_SerializationType, "", "RankedMultiplayerStatistic/SerializationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RankedMultiplayerStatistic/SerializationType
struct CORDL_TYPE RankedMultiplayerStatistic_SerializationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RankedMultiplayerStatistic_SerializationType_Unwrapped
enum struct __RankedMultiplayerStatistic_SerializationType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Mothership = static_cast<int32_t>(0x1),
__E_PlayerPrefs = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RankedMultiplayerStatistic_SerializationType_Unwrapped () const noexcept {
return static_cast<__RankedMultiplayerStatistic_SerializationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RankedMultiplayerStatistic_SerializationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RankedMultiplayerStatistic_SerializationType(int32_t  value__) noexcept;

/// @brief Field Mothership value: I32(1)
static ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType const Mothership;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType const None;

/// @brief Field PlayerPrefs value: I32(2)
static ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType const PlayerPrefs;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2368};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RankedMultiplayerStatistic_SerializationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RankedMultiplayerStatistic_SerializationType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
