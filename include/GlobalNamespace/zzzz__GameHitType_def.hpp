#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHitType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameHitType)
// Forward declare root types
namespace GlobalNamespace {
struct GameHitType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameHitType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameHitType, "", "GameHitType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameHitType
struct CORDL_TYPE GameHitType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GameHitType_Unwrapped
enum struct __GameHitType_Unwrapped : int32_t {
__E_Club = static_cast<int32_t>(0x0),
__E_Flash = static_cast<int32_t>(0x1),
__E_Shield = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameHitType_Unwrapped () const noexcept {
return static_cast<__GameHitType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GameHitType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GameHitType(int32_t  value__) noexcept;

/// @brief Field Club value: I32(0)
static ::GlobalNamespace::GameHitType const Club;

/// @brief Field Flash value: I32(1)
static ::GlobalNamespace::GameHitType const Flash;

/// @brief Field Shield value: I32(2)
static ::GlobalNamespace::GameHitType const Shield;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1763};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameHitType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameHitType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
