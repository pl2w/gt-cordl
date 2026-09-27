#pragma once
// IWYU pragma private; include "Photon/Pun/OwnershipOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OwnershipOption)
// Forward declare root types
namespace Photon::Pun {
struct OwnershipOption;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::OwnershipOption);
DEFINE_IL2CPP_CLASS(::Photon::Pun::OwnershipOption, "Photon.Pun", "OwnershipOption");
// Dependencies 
namespace Photon::Pun {
// Is value type: true
// CS Name: Photon.Pun.OwnershipOption
struct CORDL_TYPE OwnershipOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OwnershipOption_Unwrapped
enum struct __OwnershipOption_Unwrapped : int32_t {
__E_Fixed = static_cast<int32_t>(0x0),
__E_Takeover = static_cast<int32_t>(0x1),
__E_Request = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OwnershipOption_Unwrapped () const noexcept {
return static_cast<__OwnershipOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OwnershipOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OwnershipOption(int32_t  value__) noexcept;

/// @brief Field Fixed value: I32(0)
static ::Photon::Pun::OwnershipOption const Fixed;

/// @brief Field Request value: I32(2)
static ::Photon::Pun::OwnershipOption const Request;

/// @brief Field Takeover value: I32(1)
static ::Photon::Pun::OwnershipOption const Takeover;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29691};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::OwnershipOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::OwnershipOption) == 0x4, "Size mismatch!");

} // namespace end def Photon::Pun
