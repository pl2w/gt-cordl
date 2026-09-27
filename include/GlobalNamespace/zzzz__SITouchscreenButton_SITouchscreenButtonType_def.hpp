#pragma once
// IWYU pragma private; include "GlobalNamespace/SITouchscreenButton_SITouchscreenButtonType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SITouchscreenButton_SITouchscreenButtonType)
// Forward declare root types
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, "", "SITouchscreenButton/SITouchscreenButtonType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SITouchscreenButton/SITouchscreenButtonType
struct CORDL_TYPE SITouchscreenButton_SITouchscreenButtonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SITouchscreenButton_SITouchscreenButtonType_Unwrapped
enum struct __SITouchscreenButton_SITouchscreenButtonType_Unwrapped : int32_t {
__E_Back = static_cast<int32_t>(0x0),
__E_Next = static_cast<int32_t>(0x1),
__E_Exit = static_cast<int32_t>(0x2),
__E_Help = static_cast<int32_t>(0x3),
__E_Select = static_cast<int32_t>(0x4),
__E_Dispense = static_cast<int32_t>(0x5),
__E_Research = static_cast<int32_t>(0x6),
__E_Collect = static_cast<int32_t>(0x7),
__E_Debug = static_cast<int32_t>(0x8),
__E_PageSelect = static_cast<int32_t>(0x9),
__E_Purchase = static_cast<int32_t>(0xa),
__E_Confirm = static_cast<int32_t>(0xb),
__E_Cancel = static_cast<int32_t>(0xc),
__E_OverrideFailure = static_cast<int32_t>(0xd),
__E_None = static_cast<int32_t>(0xe),
__E_Subscribe = static_cast<int32_t>(0xf),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SITouchscreenButton_SITouchscreenButtonType_Unwrapped () const noexcept {
return static_cast<__SITouchscreenButton_SITouchscreenButtonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SITouchscreenButton_SITouchscreenButtonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SITouchscreenButton_SITouchscreenButtonType(int32_t  value__) noexcept;

/// @brief Field Back value: I32(0)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Back;

/// @brief Field Cancel value: I32(12)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Cancel;

/// @brief Field Collect value: I32(7)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Collect;

/// @brief Field Confirm value: I32(11)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Confirm;

/// @brief Field Debug value: I32(8)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Debug;

/// @brief Field Dispense value: I32(5)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Dispense;

/// @brief Field Exit value: I32(2)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Exit;

/// @brief Field Help value: I32(3)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Help;

/// @brief Field Next value: I32(1)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Next;

/// @brief Field None value: I32(14)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const None;

/// @brief Field OverrideFailure value: I32(13)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const OverrideFailure;

/// @brief Field PageSelect value: I32(9)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const PageSelect;

/// @brief Field Purchase value: I32(10)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Purchase;

/// @brief Field Research value: I32(6)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Research;

/// @brief Field Select value: I32(4)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Select;

/// @brief Field Subscribe value: I32(15)
static ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const Subscribe;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{374};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
