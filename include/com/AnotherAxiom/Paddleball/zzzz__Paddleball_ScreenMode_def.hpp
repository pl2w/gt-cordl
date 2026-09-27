#pragma once
// IWYU pragma private; include "com/AnotherAxiom/Paddleball/Paddleball_ScreenMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Paddleball_ScreenMode)
// Forward declare root types
namespace GlobalNamespace {
struct Paddleball_ScreenMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Paddleball_ScreenMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Paddleball_ScreenMode, "com.AnotherAxiom.Paddleball", "Paddleball/ScreenMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: com.AnotherAxiom.Paddleball.Paddleball/ScreenMode
struct CORDL_TYPE Paddleball_ScreenMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Paddleball_ScreenMode_Unwrapped
enum struct __Paddleball_ScreenMode_Unwrapped : int32_t {
__E_Title = static_cast<int32_t>(0x0),
__E_Gameplay = static_cast<int32_t>(0x1),
__E_WhiteWin = static_cast<int32_t>(0x2),
__E_BlackWin = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Paddleball_ScreenMode_Unwrapped () const noexcept {
return static_cast<__Paddleball_ScreenMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Paddleball_ScreenMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Paddleball_ScreenMode(int32_t  value__) noexcept;

/// @brief Field BlackWin value: I32(3)
static ::GlobalNamespace::Paddleball_ScreenMode const BlackWin;

/// @brief Field Gameplay value: I32(1)
static ::GlobalNamespace::Paddleball_ScreenMode const Gameplay;

/// @brief Field Title value: I32(0)
static ::GlobalNamespace::Paddleball_ScreenMode const Title;

/// @brief Field WhiteWin value: I32(2)
static ::GlobalNamespace::Paddleball_ScreenMode const WhiteWin;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4476};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Paddleball_ScreenMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Paddleball_ScreenMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
