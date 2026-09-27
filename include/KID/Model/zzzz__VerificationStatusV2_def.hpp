#pragma once
// IWYU pragma private; include "KID/Model/VerificationStatusV2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerificationStatusV2)
// Forward declare root types
namespace KID::Model {
struct VerificationStatusV2;
}
// Write type traits
MARK_VAL_T(::KID::Model::VerificationStatusV2);
DEFINE_IL2CPP_CLASS(::KID::Model::VerificationStatusV2, "KID.Model", "VerificationStatusV2");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace KID::Model {
// Is value type: true
// CS Name: KID.Model.VerificationStatusV2
struct CORDL_TYPE VerificationStatusV2 {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VerificationStatusV2_Unwrapped
enum struct __VerificationStatusV2_Unwrapped : int32_t {
__E_PASS = static_cast<int32_t>(0x1),
__E_FAIL = static_cast<int32_t>(0x2),
__E_PENDING = static_cast<int32_t>(0x3),
__E_INPROGRESS = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VerificationStatusV2_Unwrapped () const noexcept {
return static_cast<__VerificationStatusV2_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VerificationStatusV2() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VerificationStatusV2(int32_t  value__) noexcept;

/// @brief Field FAIL value: I32(2)
static ::KID::Model::VerificationStatusV2 const FAIL;

/// @brief Field INPROGRESS value: I32(4)
static ::KID::Model::VerificationStatusV2 const INPROGRESS;

/// @brief Field PASS value: I32(1)
static ::KID::Model::VerificationStatusV2 const PASS;

/// @brief Field PENDING value: I32(3)
static ::KID::Model::VerificationStatusV2 const PENDING;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::VerificationStatusV2, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::KID::Model::VerificationStatusV2) == 0x4, "Size mismatch!");

} // namespace end def KID::Model
