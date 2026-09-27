#pragma once
// IWYU pragma private; include "GlobalNamespace/HandSocketConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandSocketConstraint)
// Forward declare root types
namespace GlobalNamespace {
struct HandSocketConstraint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandSocketConstraint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandSocketConstraint, "", "HandSocketConstraint");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HandSocketConstraint
struct CORDL_TYPE HandSocketConstraint {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __HandSocketConstraint_Unwrapped
enum struct __HandSocketConstraint_Unwrapped : uint32_t {
__E_None = static_cast<uint32_t>(0x0u),
__E_LeftHandOnly = static_cast<uint32_t>(0x1u),
__E_RightHandOnly = static_cast<uint32_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandSocketConstraint_Unwrapped () const noexcept {
return static_cast<__HandSocketConstraint_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandSocketConstraint() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandSocketConstraint(uint32_t  value__) noexcept;

/// @brief Field LeftHandOnly value: U32(1)
static ::GlobalNamespace::HandSocketConstraint const LeftHandOnly;

/// @brief Field None value: U32(0)
static ::GlobalNamespace::HandSocketConstraint const None;

/// @brief Field RightHandOnly value: U32(2)
static ::GlobalNamespace::HandSocketConstraint const RightHandOnly;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2173};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandSocketConstraint, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandSocketConstraint) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
