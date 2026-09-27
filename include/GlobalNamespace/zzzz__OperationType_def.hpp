#pragma once
// IWYU pragma private; include "GlobalNamespace/OperationType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OperationType)
// Forward declare root types
namespace GlobalNamespace {
struct OperationType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OperationType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OperationType, "", "OperationType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OperationType
struct CORDL_TYPE OperationType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __OperationType_Unwrapped
enum struct __OperationType_Unwrapped : uint8_t {
__E_Subtract = static_cast<uint8_t>(0x0u),
__E_Add = static_cast<uint8_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OperationType_Unwrapped () const noexcept {
return static_cast<__OperationType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OperationType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr OperationType(uint8_t  value__) noexcept;

/// @brief Field Add value: U8(1)
static ::GlobalNamespace::OperationType const Add;

/// @brief Field Subtract value: U8(0)
static ::GlobalNamespace::OperationType const Subtract;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{494};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OperationType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OperationType) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
