#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_TrackableType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRAnchor_TrackableType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRAnchor_TrackableType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRAnchor_TrackableType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRAnchor_TrackableType, "", "OVRAnchor/TrackableType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRAnchor/TrackableType
struct CORDL_TYPE OVRAnchor_TrackableType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRAnchor_TrackableType_Unwrapped
enum struct __OVRAnchor_TrackableType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Keyboard = static_cast<int32_t>(0x1),
__E_QRCode = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRAnchor_TrackableType_Unwrapped () const noexcept {
return static_cast<__OVRAnchor_TrackableType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRAnchor_TrackableType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRAnchor_TrackableType(int32_t  value__) noexcept;

/// @brief Field Keyboard value: I32(1)
static ::GlobalNamespace::OVRAnchor_TrackableType const Keyboard;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRAnchor_TrackableType const None;

/// @brief Field QRCode value: I32(2)
static ::GlobalNamespace::OVRAnchor_TrackableType const QRCode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11816};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRAnchor_TrackableType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRAnchor_TrackableType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
