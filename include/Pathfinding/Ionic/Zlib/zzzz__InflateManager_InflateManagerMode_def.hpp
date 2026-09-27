#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zlib/InflateManager_InflateManagerMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InflateManager_InflateManagerMode)
// Forward declare root types
namespace GlobalNamespace {
struct InflateManager_InflateManagerMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InflateManager_InflateManagerMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InflateManager_InflateManagerMode, "Pathfinding.Ionic.Zlib", "InflateManager/InflateManagerMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zlib.InflateManager/InflateManagerMode
struct CORDL_TYPE InflateManager_InflateManagerMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InflateManager_InflateManagerMode_Unwrapped
enum struct __InflateManager_InflateManagerMode_Unwrapped : int32_t {
__E_METHOD = static_cast<int32_t>(0x0),
__E_FLAG = static_cast<int32_t>(0x1),
__E_DICT4 = static_cast<int32_t>(0x2),
__E_DICT3 = static_cast<int32_t>(0x3),
__E_DICT2 = static_cast<int32_t>(0x4),
__E_DICT1 = static_cast<int32_t>(0x5),
__E_DICT0 = static_cast<int32_t>(0x6),
__E_BLOCKS = static_cast<int32_t>(0x7),
__E_CHECK4 = static_cast<int32_t>(0x8),
__E_CHECK3 = static_cast<int32_t>(0x9),
__E_CHECK2 = static_cast<int32_t>(0xa),
__E_CHECK1 = static_cast<int32_t>(0xb),
__E_DONE = static_cast<int32_t>(0xc),
__E_BAD = static_cast<int32_t>(0xd),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InflateManager_InflateManagerMode_Unwrapped () const noexcept {
return static_cast<__InflateManager_InflateManagerMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InflateManager_InflateManagerMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InflateManager_InflateManagerMode(int32_t  value__) noexcept;

/// @brief Field BAD value: I32(13)
static ::GlobalNamespace::InflateManager_InflateManagerMode const BAD;

/// @brief Field BLOCKS value: I32(7)
static ::GlobalNamespace::InflateManager_InflateManagerMode const BLOCKS;

/// @brief Field CHECK1 value: I32(11)
static ::GlobalNamespace::InflateManager_InflateManagerMode const CHECK1;

/// @brief Field CHECK2 value: I32(10)
static ::GlobalNamespace::InflateManager_InflateManagerMode const CHECK2;

/// @brief Field CHECK3 value: I32(9)
static ::GlobalNamespace::InflateManager_InflateManagerMode const CHECK3;

/// @brief Field CHECK4 value: I32(8)
static ::GlobalNamespace::InflateManager_InflateManagerMode const CHECK4;

/// @brief Field DICT0 value: I32(6)
static ::GlobalNamespace::InflateManager_InflateManagerMode const DICT0;

/// @brief Field DICT1 value: I32(5)
static ::GlobalNamespace::InflateManager_InflateManagerMode const DICT1;

/// @brief Field DICT2 value: I32(4)
static ::GlobalNamespace::InflateManager_InflateManagerMode const DICT2;

/// @brief Field DICT3 value: I32(3)
static ::GlobalNamespace::InflateManager_InflateManagerMode const DICT3;

/// @brief Field DICT4 value: I32(2)
static ::GlobalNamespace::InflateManager_InflateManagerMode const DICT4;

/// @brief Field DONE value: I32(12)
static ::GlobalNamespace::InflateManager_InflateManagerMode const DONE;

/// @brief Field FLAG value: I32(1)
static ::GlobalNamespace::InflateManager_InflateManagerMode const FLAG;

/// @brief Field METHOD value: I32(0)
static ::GlobalNamespace::InflateManager_InflateManagerMode const METHOD;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InflateManager_InflateManagerMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InflateManager_InflateManagerMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
