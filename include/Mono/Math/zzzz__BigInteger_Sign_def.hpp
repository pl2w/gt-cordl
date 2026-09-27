#pragma once
// IWYU pragma private; include "Mono/Math/BigInteger_Sign.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger_Sign)
// Forward declare root types
namespace GlobalNamespace {
struct BigInteger_Sign;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BigInteger_Sign);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BigInteger_Sign, "Mono.Math", "BigInteger/Sign");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Math.BigInteger/Sign
struct CORDL_TYPE BigInteger_Sign {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BigInteger_Sign_Unwrapped
enum struct __BigInteger_Sign_Unwrapped : int32_t {
__E_Negative = static_cast<int32_t>(0xffffffff),
__E_Zero = static_cast<int32_t>(0x0),
__E_Positive = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BigInteger_Sign_Unwrapped () const noexcept {
return static_cast<__BigInteger_Sign_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BigInteger_Sign() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BigInteger_Sign(int32_t  value__) noexcept;

/// @brief Field Negative value: I32(-1)
static ::GlobalNamespace::BigInteger_Sign const Negative;

/// @brief Field Positive value: I32(1)
static ::GlobalNamespace::BigInteger_Sign const Positive;

/// @brief Field Zero value: I32(0)
static ::GlobalNamespace::BigInteger_Sign const Zero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5388};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BigInteger_Sign, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BigInteger_Sign) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
