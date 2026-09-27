#pragma once
// IWYU pragma private; include "System/Guid_ParseFailureKind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Guid_ParseFailureKind)
// Forward declare root types
namespace GlobalNamespace {
struct Guid_ParseFailureKind;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Guid_ParseFailureKind);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Guid_ParseFailureKind, "System", "Guid/ParseFailureKind");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Guid/ParseFailureKind
struct CORDL_TYPE Guid_ParseFailureKind {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Guid_ParseFailureKind_Unwrapped
enum struct __Guid_ParseFailureKind_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ArgumentNull = static_cast<int32_t>(0x1),
__E_Format = static_cast<int32_t>(0x2),
__E_FormatWithParameter = static_cast<int32_t>(0x3),
__E_NativeException = static_cast<int32_t>(0x4),
__E_FormatWithInnerException = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Guid_ParseFailureKind_Unwrapped () const noexcept {
return static_cast<__Guid_ParseFailureKind_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Guid_ParseFailureKind() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Guid_ParseFailureKind(int32_t  value__) noexcept;

/// @brief Field ArgumentNull value: I32(1)
static ::GlobalNamespace::Guid_ParseFailureKind const ArgumentNull;

/// @brief Field Format value: I32(2)
static ::GlobalNamespace::Guid_ParseFailureKind const Format;

/// @brief Field FormatWithInnerException value: I32(5)
static ::GlobalNamespace::Guid_ParseFailureKind const FormatWithInnerException;

/// @brief Field FormatWithParameter value: I32(3)
static ::GlobalNamespace::Guid_ParseFailureKind const FormatWithParameter;

/// @brief Field NativeException value: I32(4)
static ::GlobalNamespace::Guid_ParseFailureKind const NativeException;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::Guid_ParseFailureKind const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5509};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Guid_ParseFailureKind, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Guid_ParseFailureKind) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
