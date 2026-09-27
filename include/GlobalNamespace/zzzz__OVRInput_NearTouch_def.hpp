#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_NearTouch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_NearTouch)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_NearTouch;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_NearTouch);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_NearTouch, "", "OVRInput/NearTouch");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/NearTouch
struct CORDL_TYPE OVRInput_NearTouch {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_NearTouch_Unwrapped
enum struct __OVRInput_NearTouch_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PrimaryIndexTrigger = static_cast<int32_t>(0x1),
__E_PrimaryThumbButtons = static_cast<int32_t>(0x2),
__E_SecondaryIndexTrigger = static_cast<int32_t>(0x4),
__E_SecondaryThumbButtons = static_cast<int32_t>(0x8),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_NearTouch_Unwrapped () const noexcept {
return static_cast<__OVRInput_NearTouch_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_NearTouch() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_NearTouch(int32_t  value__) noexcept;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::OVRInput_NearTouch const Any;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_NearTouch const None;

/// @brief Field PrimaryIndexTrigger value: I32(1)
static ::GlobalNamespace::OVRInput_NearTouch const PrimaryIndexTrigger;

/// @brief Field PrimaryThumbButtons value: I32(2)
static ::GlobalNamespace::OVRInput_NearTouch const PrimaryThumbButtons;

/// @brief Field SecondaryIndexTrigger value: I32(4)
static ::GlobalNamespace::OVRInput_NearTouch const SecondaryIndexTrigger;

/// @brief Field SecondaryThumbButtons value: I32(8)
static ::GlobalNamespace::OVRInput_NearTouch const SecondaryThumbButtons;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11934};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_NearTouch, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_NearTouch) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
