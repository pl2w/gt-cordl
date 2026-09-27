#pragma once
// IWYU pragma private; include "KID/Model/AgeCategoryV2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AgeCategoryV2)
// Forward declare root types
namespace KID::Model {
struct AgeCategoryV2;
}
// Write type traits
MARK_VAL_T(::KID::Model::AgeCategoryV2);
DEFINE_IL2CPP_CLASS(::KID::Model::AgeCategoryV2, "KID.Model", "AgeCategoryV2");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace KID::Model {
// Is value type: true
// CS Name: KID.Model.AgeCategoryV2
struct CORDL_TYPE AgeCategoryV2 {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AgeCategoryV2_Unwrapped
enum struct __AgeCategoryV2_Unwrapped : int32_t {
__E_DigitalMinor = static_cast<int32_t>(0x1),
__E_DigitalYouth = static_cast<int32_t>(0x2),
__E_Adult = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AgeCategoryV2_Unwrapped () const noexcept {
return static_cast<__AgeCategoryV2_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AgeCategoryV2() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AgeCategoryV2(int32_t  value__) noexcept;

/// @brief Field Adult value: I32(3)
static ::KID::Model::AgeCategoryV2 const Adult;

/// @brief Field DigitalMinor value: I32(1)
static ::KID::Model::AgeCategoryV2 const DigitalMinor;

/// @brief Field DigitalYouth value: I32(2)
static ::KID::Model::AgeCategoryV2 const DigitalYouth;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31054};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::AgeCategoryV2, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::KID::Model::AgeCategoryV2) == 0x4, "Size mismatch!");

} // namespace end def KID::Model
