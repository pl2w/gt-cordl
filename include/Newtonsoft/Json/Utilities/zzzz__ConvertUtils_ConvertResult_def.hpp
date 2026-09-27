#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/ConvertUtils_ConvertResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConvertUtils_ConvertResult)
// Forward declare root types
namespace GlobalNamespace {
struct ConvertUtils_ConvertResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ConvertUtils_ConvertResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConvertUtils_ConvertResult, "Newtonsoft.Json.Utilities", "ConvertUtils/ConvertResult");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult
struct CORDL_TYPE ConvertUtils_ConvertResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConvertUtils_ConvertResult_Unwrapped
enum struct __ConvertUtils_ConvertResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_CannotConvertNull = static_cast<int32_t>(0x1),
__E_NotInstantiableType = static_cast<int32_t>(0x2),
__E_NoValidConversion = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConvertUtils_ConvertResult_Unwrapped () const noexcept {
return static_cast<__ConvertUtils_ConvertResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConvertUtils_ConvertResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ConvertUtils_ConvertResult(int32_t  value__) noexcept;

/// @brief Field CannotConvertNull value: I32(1)
static ::GlobalNamespace::ConvertUtils_ConvertResult const CannotConvertNull;

/// @brief Field NoValidConversion value: I32(3)
static ::GlobalNamespace::ConvertUtils_ConvertResult const NoValidConversion;

/// @brief Field NotInstantiableType value: I32(2)
static ::GlobalNamespace::ConvertUtils_ConvertResult const NotInstantiableType;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::ConvertUtils_ConvertResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23168};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConvertUtils_ConvertResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConvertUtils_ConvertResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
