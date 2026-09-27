#pragma once
// IWYU pragma private; include "TMPro/TMP_InputField_InputType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_InputField_InputType)
// Forward declare root types
namespace GlobalNamespace {
struct TMP_InputField_InputType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_InputField_InputType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_InputField_InputType, "TMPro", "TMP_InputField/InputType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_InputField/InputType
struct CORDL_TYPE TMP_InputField_InputType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TMP_InputField_InputType_Unwrapped
enum struct __TMP_InputField_InputType_Unwrapped : int32_t {
__E_Standard = static_cast<int32_t>(0x0),
__E_AutoCorrect = static_cast<int32_t>(0x1),
__E_Password = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMP_InputField_InputType_Unwrapped () const noexcept {
return static_cast<__TMP_InputField_InputType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TMP_InputField_InputType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_InputField_InputType(int32_t  value__) noexcept;

/// @brief Field AutoCorrect value: I32(1)
static ::GlobalNamespace::TMP_InputField_InputType const AutoCorrect;

/// @brief Field Password value: I32(2)
static ::GlobalNamespace::TMP_InputField_InputType const Password;

/// @brief Field Standard value: I32(0)
static ::GlobalNamespace::TMP_InputField_InputType const Standard;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22966};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_InputField_InputType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_InputField_InputType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
