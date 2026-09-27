#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Tracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Tracker)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_Tracker;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_Tracker);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Tracker, "", "OVRPlugin/Tracker");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Tracker
struct CORDL_TYPE OVRPlugin_Tracker {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_Tracker_Unwrapped
enum struct __OVRPlugin_Tracker_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0xffffffff),
__E_Zero = static_cast<int32_t>(0x0),
__E_One = static_cast<int32_t>(0x1),
__E_Two = static_cast<int32_t>(0x2),
__E_Three = static_cast<int32_t>(0x3),
__E_Count = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_Tracker_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_Tracker_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Tracker() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_Tracker(int32_t  value__) noexcept;

/// @brief Field Count value: I32(4)
static ::GlobalNamespace::OVRPlugin_Tracker const Count;

/// @brief Field None value: I32(-1)
static ::GlobalNamespace::OVRPlugin_Tracker const None;

/// @brief Field One value: I32(1)
static ::GlobalNamespace::OVRPlugin_Tracker const One;

/// @brief Field Three value: I32(3)
static ::GlobalNamespace::OVRPlugin_Tracker const Three;

/// @brief Field Two value: I32(2)
static ::GlobalNamespace::OVRPlugin_Tracker const Two;

/// @brief Field Zero value: I32(0)
static ::GlobalNamespace::OVRPlugin_Tracker const Zero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12054};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Tracker, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Tracker) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
