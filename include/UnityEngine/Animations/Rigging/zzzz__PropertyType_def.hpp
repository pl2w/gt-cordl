#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/PropertyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyType)
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
struct PropertyType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::Rigging::PropertyType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::PropertyType, "UnityEngine.Animations.Rigging", "PropertyType");
// Dependencies 
namespace UnityEngine::Animations::Rigging {
// Is value type: true
// CS Name: UnityEngine.Animations.Rigging.PropertyType
struct CORDL_TYPE PropertyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __PropertyType_Unwrapped
enum struct __PropertyType_Unwrapped : uint8_t {
__E_Bool = static_cast<uint8_t>(0x0u),
__E_Int = static_cast<uint8_t>(0x1u),
__E_Float = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PropertyType_Unwrapped () const noexcept {
return static_cast<__PropertyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PropertyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr PropertyType(uint8_t  value__) noexcept;

/// @brief Field Bool value: U8(0)
static ::UnityEngine::Animations::Rigging::PropertyType const Bool;

/// @brief Field Float value: U8(2)
static ::UnityEngine::Animations::Rigging::PropertyType const Float;

/// @brief Field Int value: U8(1)
static ::UnityEngine::Animations::Rigging::PropertyType const Int;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32317};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::Rigging::PropertyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::Rigging::PropertyType) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging
