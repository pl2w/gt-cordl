#pragma once
// IWYU pragma private; include "UnityEngine/Animations/CustomStreamPropertyType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomStreamPropertyType)
// Forward declare root types
namespace UnityEngine::Animations {
struct CustomStreamPropertyType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Animations::CustomStreamPropertyType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::CustomStreamPropertyType, "UnityEngine.Animations", "CustomStreamPropertyType");
// [MovedFrom("UnityEngine.Experimental.Animations")]
// Dependencies 
namespace UnityEngine::Animations {
// Is value type: true
// CS Name: UnityEngine.Animations.CustomStreamPropertyType
struct CORDL_TYPE CustomStreamPropertyType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomStreamPropertyType_Unwrapped
enum struct __CustomStreamPropertyType_Unwrapped : int32_t {
__E_Float = static_cast<int32_t>(0x5),
__E_Bool = static_cast<int32_t>(0x6),
__E_Int = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomStreamPropertyType_Unwrapped () const noexcept {
return static_cast<__CustomStreamPropertyType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomStreamPropertyType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomStreamPropertyType(int32_t  value__) noexcept;

/// @brief Field Bool value: I32(6)
static ::UnityEngine::Animations::CustomStreamPropertyType const Bool;

/// @brief Field Float value: I32(5)
static ::UnityEngine::Animations::CustomStreamPropertyType const Float;

/// @brief Field Int value: I32(10)
static ::UnityEngine::Animations::CustomStreamPropertyType const Int;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29825};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Animations::CustomStreamPropertyType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Animations::CustomStreamPropertyType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Animations
