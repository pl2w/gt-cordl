#pragma once
// IWYU pragma private; include "TMPro/TMP_Text_TextInputSources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Text_TextInputSources)
// Forward declare root types
namespace GlobalNamespace {
struct TMP_Text_TextInputSources;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_Text_TextInputSources);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_Text_TextInputSources, "TMPro", "TMP_Text/TextInputSources");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_Text/TextInputSources
struct CORDL_TYPE TMP_Text_TextInputSources {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TMP_Text_TextInputSources_Unwrapped
enum struct __TMP_Text_TextInputSources_Unwrapped : int32_t {
__E_TextInputBox = static_cast<int32_t>(0x0),
__E_SetText = static_cast<int32_t>(0x1),
__E_SetTextArray = static_cast<int32_t>(0x2),
__E_TextString = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMP_Text_TextInputSources_Unwrapped () const noexcept {
return static_cast<__TMP_Text_TextInputSources_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TMP_Text_TextInputSources() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_Text_TextInputSources(int32_t  value__) noexcept;

/// @brief Field SetText value: I32(1)
static ::GlobalNamespace::TMP_Text_TextInputSources const SetText;

/// @brief Field SetTextArray value: I32(2)
static ::GlobalNamespace::TMP_Text_TextInputSources const SetTextArray;

/// @brief Field TextInputBox value: I32(0)
static ::GlobalNamespace::TMP_Text_TextInputSources const TextInputBox;

/// @brief Field TextString value: I32(3)
static ::GlobalNamespace::TMP_Text_TextInputSources const TextString;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23031};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_Text_TextInputSources, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_Text_TextInputSources) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
