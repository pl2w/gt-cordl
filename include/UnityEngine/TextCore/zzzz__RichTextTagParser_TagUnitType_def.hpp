#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/RichTextTagParser_TagUnitType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagParser_TagUnitType)
// Forward declare root types
namespace GlobalNamespace {
struct RichTextTagParser_TagUnitType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RichTextTagParser_TagUnitType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RichTextTagParser_TagUnitType, "UnityEngine.TextCore", "RichTextTagParser/TagUnitType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.TextCore.RichTextTagParser/TagUnitType
struct CORDL_TYPE RichTextTagParser_TagUnitType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RichTextTagParser_TagUnitType_Unwrapped
enum struct __RichTextTagParser_TagUnitType_Unwrapped : int32_t {
__E_Pixels = static_cast<int32_t>(0x0),
__E_FontUnits = static_cast<int32_t>(0x1),
__E_Percentage = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RichTextTagParser_TagUnitType_Unwrapped () const noexcept {
return static_cast<__RichTextTagParser_TagUnitType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RichTextTagParser_TagUnitType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RichTextTagParser_TagUnitType(int32_t  value__) noexcept;

/// @brief Field FontUnits value: I32(1)
static ::GlobalNamespace::RichTextTagParser_TagUnitType const FontUnits;

/// @brief Field Percentage value: I32(2)
static ::GlobalNamespace::RichTextTagParser_TagUnitType const Percentage;

/// @brief Field Pixels value: I32(0)
static ::GlobalNamespace::RichTextTagParser_TagUnitType const Pixels;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26215};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RichTextTagParser_TagUnitType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RichTextTagParser_TagUnitType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
