#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDeviceState_LocationFlag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerDeviceState_LocationFlag)
// Forward declare root types
namespace GlobalNamespace {
struct PointerDeviceState_LocationFlag;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointerDeviceState_LocationFlag);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointerDeviceState_LocationFlag, "UnityEngine.UIElements", "PointerDeviceState/LocationFlag");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.PointerDeviceState/LocationFlag
struct CORDL_TYPE PointerDeviceState_LocationFlag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PointerDeviceState_LocationFlag_Unwrapped
enum struct __PointerDeviceState_LocationFlag_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OutsidePanel = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PointerDeviceState_LocationFlag_Unwrapped () const noexcept {
return static_cast<__PointerDeviceState_LocationFlag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PointerDeviceState_LocationFlag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PointerDeviceState_LocationFlag(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::PointerDeviceState_LocationFlag const None;

/// @brief Field OutsidePanel value: I32(1)
static ::GlobalNamespace::PointerDeviceState_LocationFlag const OutsidePanel;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7680};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointerDeviceState_LocationFlag, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointerDeviceState_LocationFlag) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
