#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HandFinger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_HandFinger)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HandFinger;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HandFinger);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HandFinger, "", "OVRPlugin/HandFinger");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HandFinger
struct CORDL_TYPE OVRPlugin_HandFinger {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_HandFinger_Unwrapped
enum struct __OVRPlugin_HandFinger_Unwrapped : int32_t {
__E_Thumb = static_cast<int32_t>(0x0),
__E_Index = static_cast<int32_t>(0x1),
__E_Middle = static_cast<int32_t>(0x2),
__E_Ring = static_cast<int32_t>(0x3),
__E_Pinky = static_cast<int32_t>(0x4),
__E_Max = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_HandFinger_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_HandFinger_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HandFinger() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HandFinger(int32_t  value__) noexcept;

/// @brief Field Index value: I32(1)
static ::GlobalNamespace::OVRPlugin_HandFinger const Index;

/// @brief Field Max value: I32(5)
static ::GlobalNamespace::OVRPlugin_HandFinger const Max;

/// @brief Field Middle value: I32(2)
static ::GlobalNamespace::OVRPlugin_HandFinger const Middle;

/// @brief Field Pinky value: I32(4)
static ::GlobalNamespace::OVRPlugin_HandFinger const Pinky;

/// @brief Field Ring value: I32(3)
static ::GlobalNamespace::OVRPlugin_HandFinger const Ring;

/// @brief Field Thumb value: I32(0)
static ::GlobalNamespace::OVRPlugin_HandFinger const Thumb;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12133};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandFinger, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HandFinger) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
