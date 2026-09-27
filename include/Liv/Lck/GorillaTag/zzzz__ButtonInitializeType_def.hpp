#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/ButtonInitializeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonInitializeType)
// Forward declare root types
namespace Liv::Lck::GorillaTag {
struct ButtonInitializeType;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::GorillaTag::ButtonInitializeType);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::ButtonInitializeType, "Liv.Lck.GorillaTag", "ButtonInitializeType");
// Dependencies 
namespace Liv::Lck::GorillaTag {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.ButtonInitializeType
struct CORDL_TYPE ButtonInitializeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ButtonInitializeType_Unwrapped
enum struct __ButtonInitializeType_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_Awake = static_cast<int32_t>(0x1),
__E_None = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ButtonInitializeType_Unwrapped () const noexcept {
return static_cast<__ButtonInitializeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ButtonInitializeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ButtonInitializeType(int32_t  value__) noexcept;

/// @brief Field Awake value: I32(1)
static ::Liv::Lck::GorillaTag::ButtonInitializeType const Awake;

/// @brief Field None value: I32(2)
static ::Liv::Lck::GorillaTag::ButtonInitializeType const None;

/// @brief Field Start value: I32(0)
static ::Liv::Lck::GorillaTag::ButtonInitializeType const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29620};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::ButtonInitializeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::ButtonInitializeType) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
