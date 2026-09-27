#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Hand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Hand)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Hand;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Hand);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Hand, "", "OVRPlugin/Hand");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Hand
struct CORDL_TYPE OVRPlugin_Hand {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_Hand_Unwrapped
enum struct __OVRPlugin_Hand_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_HandLeft = static_cast<int32_t>(0x0),
__E_HandRight = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_Hand_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_Hand_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Hand() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Hand(int32_t  value__) noexcept;

/// @brief Field HandLeft value: I32(0)
static ::GlobalNamespace::OVRPlugin_Hand const HandLeft;

/// @brief Field HandRight value: I32(1)
static ::GlobalNamespace::OVRPlugin_Hand const HandRight;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::OVRPlugin_Hand const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Hand, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Hand) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
