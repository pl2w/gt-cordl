#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterConfiguration_AnimalType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CritterConfiguration_AnimalType)
// Forward declare root types
namespace GlobalNamespace {
struct CritterConfiguration_AnimalType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CritterConfiguration_AnimalType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterConfiguration_AnimalType, "", "CritterConfiguration/AnimalType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: CritterConfiguration/AnimalType
struct CORDL_TYPE CritterConfiguration_AnimalType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CritterConfiguration_AnimalType_Unwrapped
enum struct __CritterConfiguration_AnimalType_Unwrapped : int32_t {
__E_Raccoon = static_cast<int32_t>(0x0),
__E_Cat = static_cast<int32_t>(0x1),
__E_Bird = static_cast<int32_t>(0x2),
__E_Goblin = static_cast<int32_t>(0x3),
__E_Egg = static_cast<int32_t>(0x4),
__E_UNKNOWN = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CritterConfiguration_AnimalType_Unwrapped () const noexcept {
return static_cast<__CritterConfiguration_AnimalType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CritterConfiguration_AnimalType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CritterConfiguration_AnimalType(int32_t  value__) noexcept;

/// @brief Field Bird value: I32(2)
static ::GlobalNamespace::CritterConfiguration_AnimalType const Bird;

/// @brief Field Cat value: I32(1)
static ::GlobalNamespace::CritterConfiguration_AnimalType const Cat;

/// @brief Field Egg value: I32(4)
static ::GlobalNamespace::CritterConfiguration_AnimalType const Egg;

/// @brief Field Goblin value: I32(3)
static ::GlobalNamespace::CritterConfiguration_AnimalType const Goblin;

/// @brief Field Raccoon value: I32(0)
static ::GlobalNamespace::CritterConfiguration_AnimalType const Raccoon;

/// @brief Field UNKNOWN value: I32(-1)
static ::GlobalNamespace::CritterConfiguration_AnimalType const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{69};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CritterConfiguration_AnimalType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CritterConfiguration_AnimalType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
