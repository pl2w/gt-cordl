#pragma once
// IWYU pragma private; include "GlobalNamespace/ECosmeticPartType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ECosmeticPartType)
// Forward declare root types
namespace GlobalNamespace {
struct ECosmeticPartType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ECosmeticPartType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ECosmeticPartType, "", "ECosmeticPartType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ECosmeticPartType
struct CORDL_TYPE ECosmeticPartType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ECosmeticPartType_Unwrapped
enum struct __ECosmeticPartType_Unwrapped : int32_t {
__E_Holdable = static_cast<int32_t>(0x0),
__E_Functional = static_cast<int32_t>(0x1),
__E_Wardrobe = static_cast<int32_t>(0x2),
__E_Store = static_cast<int32_t>(0x3),
__E_FirstPerson = static_cast<int32_t>(0x4),
__E_LocalRig = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ECosmeticPartType_Unwrapped () const noexcept {
return static_cast<__ECosmeticPartType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ECosmeticPartType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ECosmeticPartType(int32_t  value__) noexcept;

/// @brief Field FirstPerson value: I32(4)
static ::GlobalNamespace::ECosmeticPartType const FirstPerson;

/// @brief Field Functional value: I32(1)
static ::GlobalNamespace::ECosmeticPartType const Functional;

/// @brief Field Holdable value: I32(0)
static ::GlobalNamespace::ECosmeticPartType const Holdable;

/// @brief Field LocalRig value: I32(5)
static ::GlobalNamespace::ECosmeticPartType const LocalRig;

/// @brief Field Store value: I32(3)
static ::GlobalNamespace::ECosmeticPartType const Store;

/// @brief Field Wardrobe value: I32(2)
static ::GlobalNamespace::ECosmeticPartType const Wardrobe;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{785};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ECosmeticPartType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ECosmeticPartType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
