#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceMarkerPayloadType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceMarkerPayloadType)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceMarkerPayloadType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType, "", "OVRPlugin/SpaceMarkerPayloadType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceMarkerPayloadType
struct CORDL_TYPE OVRPlugin_SpaceMarkerPayloadType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_SpaceMarkerPayloadType_Unwrapped
enum struct __OVRPlugin_SpaceMarkerPayloadType_Unwrapped : int32_t {
__E_InvalidQRCode = static_cast<int32_t>(0x1),
__E_StringQRCode = static_cast<int32_t>(0x2),
__E_BinaryQRCode = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_SpaceMarkerPayloadType_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_SpaceMarkerPayloadType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceMarkerPayloadType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceMarkerPayloadType(int32_t  value__) noexcept;

/// @brief Field BinaryQRCode value: I32(3)
static ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType const BinaryQRCode;

/// @brief Field InvalidQRCode value: I32(1)
static ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType const InvalidQRCode;

/// @brief Field StringQRCode value: I32(2)
static ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType const StringQRCode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12259};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
