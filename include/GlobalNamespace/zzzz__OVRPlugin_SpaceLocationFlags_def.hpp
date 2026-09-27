#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceLocationFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_SpaceLocationFlags)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpaceLocationFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpaceLocationFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpaceLocationFlags, "", "OVRPlugin/SpaceLocationFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpaceLocationFlags
struct CORDL_TYPE OVRPlugin_SpaceLocationFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint64_t;

/// @brief Nested struct __OVRPlugin_SpaceLocationFlags_Unwrapped
enum struct __OVRPlugin_SpaceLocationFlags_Unwrapped : uint64_t {
__E_OrientationValid = static_cast<uint64_t>(0x1u),
__E_PositionValid = static_cast<uint64_t>(0x2u),
__E_OrientationTracked = static_cast<uint64_t>(0x4u),
__E_PositionTracked = static_cast<uint64_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_SpaceLocationFlags_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_SpaceLocationFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint64_t () const noexcept {
return static_cast<uint64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpaceLocationFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpaceLocationFlags(uint64_t  value__) noexcept;

/// @brief Field OrientationTracked value: U64(4)
static ::GlobalNamespace::OVRPlugin_SpaceLocationFlags const OrientationTracked;

/// @brief Field OrientationValid value: U64(1)
static ::GlobalNamespace::OVRPlugin_SpaceLocationFlags const OrientationValid;

/// @brief Field PositionTracked value: U64(8)
static ::GlobalNamespace::OVRPlugin_SpaceLocationFlags const PositionTracked;

/// @brief Field PositionValid value: U64(2)
static ::GlobalNamespace::OVRPlugin_SpaceLocationFlags const PositionValid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 uint64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpaceLocationFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpaceLocationFlags) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
