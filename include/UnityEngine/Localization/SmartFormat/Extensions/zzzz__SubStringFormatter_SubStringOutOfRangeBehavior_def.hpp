#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/SubStringFormatter_SubStringOutOfRangeBehavior.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SubStringFormatter_SubStringOutOfRangeBehavior)
// Forward declare root types
namespace GlobalNamespace {
struct SubStringFormatter_SubStringOutOfRangeBehavior;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior, "UnityEngine.Localization.SmartFormat.Extensions", "SubStringFormatter/SubStringOutOfRangeBehavior");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.SubStringFormatter/SubStringOutOfRangeBehavior
struct CORDL_TYPE SubStringFormatter_SubStringOutOfRangeBehavior {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SubStringFormatter_SubStringOutOfRangeBehavior_Unwrapped
enum struct __SubStringFormatter_SubStringOutOfRangeBehavior_Unwrapped : int32_t {
__E_ReturnEmptyString = static_cast<int32_t>(0x0),
__E_ReturnStartIndexToEndOfString = static_cast<int32_t>(0x1),
__E_ThrowException = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SubStringFormatter_SubStringOutOfRangeBehavior_Unwrapped () const noexcept {
return static_cast<__SubStringFormatter_SubStringOutOfRangeBehavior_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SubStringFormatter_SubStringOutOfRangeBehavior() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SubStringFormatter_SubStringOutOfRangeBehavior(int32_t  value__) noexcept;

/// @brief Field ReturnEmptyString value: I32(0)
static ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior const ReturnEmptyString;

/// @brief Field ReturnStartIndexToEndOfString value: I32(1)
static ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior const ReturnStartIndexToEndOfString;

/// @brief Field ThrowException value: I32(2)
static ::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior const ThrowException;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SubStringFormatter_SubStringOutOfRangeBehavior) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
