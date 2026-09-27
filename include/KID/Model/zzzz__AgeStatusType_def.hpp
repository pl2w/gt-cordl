#pragma once
// IWYU pragma private; include "KID/Model/AgeStatusType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AgeStatusType)
// Forward declare root types
namespace KID::Model {
struct AgeStatusType;
}
// Write type traits
MARK_VAL_T(::KID::Model::AgeStatusType);
DEFINE_IL2CPP_CLASS(::KID::Model::AgeStatusType, "KID.Model", "AgeStatusType");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace KID::Model {
// Is value type: true
// CS Name: KID.Model.AgeStatusType
struct CORDL_TYPE AgeStatusType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AgeStatusType_Unwrapped
enum struct __AgeStatusType_Unwrapped : int32_t {
__E_DIGITALMINOR = static_cast<int32_t>(0x1),
__E_DIGITALYOUTH = static_cast<int32_t>(0x2),
__E_LEGALADULT = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AgeStatusType_Unwrapped () const noexcept {
return static_cast<__AgeStatusType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AgeStatusType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AgeStatusType(int32_t  value__) noexcept;

/// @brief Field DIGITALMINOR value: I32(1)
static ::KID::Model::AgeStatusType const DIGITALMINOR;

/// @brief Field DIGITALYOUTH value: I32(2)
static ::KID::Model::AgeStatusType const DIGITALYOUTH;

/// @brief Field LEGALADULT value: I32(3)
static ::KID::Model::AgeStatusType const LEGALADULT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31058};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::AgeStatusType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::KID::Model::AgeStatusType) == 0x4, "Size mismatch!");

} // namespace end def KID::Model
