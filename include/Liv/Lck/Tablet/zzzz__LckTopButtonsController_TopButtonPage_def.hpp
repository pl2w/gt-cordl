#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckTopButtonsController_TopButtonPage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LckTopButtonsController_TopButtonPage)
// Forward declare root types
namespace GlobalNamespace {
struct LckTopButtonsController_TopButtonPage;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LckTopButtonsController_TopButtonPage);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckTopButtonsController_TopButtonPage, "Liv.Lck.Tablet", "LckTopButtonsController/TopButtonPage");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.Tablet.LckTopButtonsController/TopButtonPage
struct CORDL_TYPE LckTopButtonsController_TopButtonPage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LckTopButtonsController_TopButtonPage_Unwrapped
enum struct __LckTopButtonsController_TopButtonPage_Unwrapped : int32_t {
__E_Null = static_cast<int32_t>(0x0),
__E_Camera = static_cast<int32_t>(0x1),
__E_Stream = static_cast<int32_t>(0x2),
__E_Echo = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LckTopButtonsController_TopButtonPage_Unwrapped () const noexcept {
return static_cast<__LckTopButtonsController_TopButtonPage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LckTopButtonsController_TopButtonPage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LckTopButtonsController_TopButtonPage(int32_t  value__) noexcept;

/// @brief Field Camera value: I32(1)
static ::GlobalNamespace::LckTopButtonsController_TopButtonPage const Camera;

/// @brief Field Echo value: I32(3)
static ::GlobalNamespace::LckTopButtonsController_TopButtonPage const Echo;

/// @brief Field Null value: I32(0)
static ::GlobalNamespace::LckTopButtonsController_TopButtonPage const Null;

/// @brief Field Stream value: I32(2)
static ::GlobalNamespace::LckTopButtonsController_TopButtonPage const Stream;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckTopButtonsController_TopButtonPage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckTopButtonsController_TopButtonPage) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
