#pragma once
// IWYU pragma private; include "KID/Model/ChallengeType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeType)
// Forward declare root types
namespace KID::Model {
struct ChallengeType;
}
// Write type traits
MARK_VAL_T(::KID::Model::ChallengeType);
DEFINE_IL2CPP_CLASS(::KID::Model::ChallengeType, "KID.Model", "ChallengeType");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace KID::Model {
// Is value type: true
// CS Name: KID.Model.ChallengeType
struct CORDL_TYPE ChallengeType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ChallengeType_Unwrapped
enum struct __ChallengeType_Unwrapped : int32_t {
__E_PARENTALCONSENT = static_cast<int32_t>(0x1),
__E_SESSIONUPGRADE = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ChallengeType_Unwrapped () const noexcept {
return static_cast<__ChallengeType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ChallengeType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ChallengeType(int32_t  value__) noexcept;

/// @brief Field PARENTALCONSENT value: I32(1)
static ::KID::Model::ChallengeType const PARENTALCONSENT;

/// @brief Field SESSIONUPGRADE value: I32(2)
static ::KID::Model::ChallengeType const SESSIONUPGRADE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31062};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::ChallengeType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::KID::Model::ChallengeType) == 0x4, "Size mismatch!");

} // namespace end def KID::Model
