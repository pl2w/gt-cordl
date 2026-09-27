#pragma once
// IWYU pragma private; include "GlobalNamespace/HandLinkAuthorityType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandLinkAuthorityType)
// Forward declare root types
namespace GlobalNamespace {
struct HandLinkAuthorityType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandLinkAuthorityType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandLinkAuthorityType, "", "HandLinkAuthorityType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HandLinkAuthorityType
struct CORDL_TYPE HandLinkAuthorityType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandLinkAuthorityType_Unwrapped
enum struct __HandLinkAuthorityType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ButtGrounded = static_cast<int32_t>(0x1),
__E_ResidualHandGrounded = static_cast<int32_t>(0x2),
__E_HandGrounded = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandLinkAuthorityType_Unwrapped () const noexcept {
return static_cast<__HandLinkAuthorityType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandLinkAuthorityType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandLinkAuthorityType(int32_t  value__) noexcept;

/// @brief Field ButtGrounded value: I32(1)
static ::GlobalNamespace::HandLinkAuthorityType const ButtGrounded;

/// @brief Field HandGrounded value: I32(3)
static ::GlobalNamespace::HandLinkAuthorityType const HandGrounded;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HandLinkAuthorityType const None;

/// @brief Field ResidualHandGrounded value: I32(2)
static ::GlobalNamespace::HandLinkAuthorityType const ResidualHandGrounded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2560};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandLinkAuthorityType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandLinkAuthorityType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
