#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser_TagValueType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagParser_TagValueType)
// Forward declare root types
namespace GlobalNamespace {
struct RichTextTagParser_TagValueType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RichTextTagParser_TagValueType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RichTextTagParser_TagValueType, "UnityEngine.TextCore", "RichTextTagParser/TagValueType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagValueType
struct CORDL_TYPE RichTextTagParser_TagValueType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RichTextTagParser_TagValueType_Unwrapped
enum struct __RichTextTagParser_TagValueType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_NumericalValue = static_cast<int32_t>(0x1),
__E_StringValue = static_cast<int32_t>(0x2),
__E_ColorValue = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RichTextTagParser_TagValueType_Unwrapped () const noexcept {
return static_cast<__RichTextTagParser_TagValueType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RichTextTagParser_TagValueType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RichTextTagParser_TagValueType(int32_t  value__) noexcept;

/// @brief Field ColorValue value: I32(4)
static ::GlobalNamespace::RichTextTagParser_TagValueType const ColorValue;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::RichTextTagParser_TagValueType const None;

/// @brief Field NumericalValue value: I32(1)
static ::GlobalNamespace::RichTextTagParser_TagValueType const NumericalValue;

/// @brief Field StringValue value: I32(2)
static ::GlobalNamespace::RichTextTagParser_TagValueType const StringValue;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26214};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RichTextTagParser_TagValueType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RichTextTagParser_TagValueType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
