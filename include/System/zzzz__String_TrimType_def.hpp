#pragma once
// IWYU pragma private; include "System/String_TrimType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(String_TrimType)
// Forward declare root types
namespace GlobalNamespace {
struct String_TrimType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::String_TrimType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::String_TrimType, "System", "String/TrimType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.String/TrimType
struct CORDL_TYPE String_TrimType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __String_TrimType_Unwrapped
enum struct __String_TrimType_Unwrapped : int32_t {
__E_Head = static_cast<int32_t>(0x0),
__E_Tail = static_cast<int32_t>(0x1),
__E_Both = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __String_TrimType_Unwrapped () const noexcept {
return static_cast<__String_TrimType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr String_TrimType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr String_TrimType(int32_t  value__) noexcept;

/// @brief Field Both value: I32(2)
static ::GlobalNamespace::String_TrimType const Both;

/// @brief Field Head value: I32(0)
static ::GlobalNamespace::String_TrimType const Head;

/// @brief Field Tail value: I32(1)
static ::GlobalNamespace::String_TrimType const Tail;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5412};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::String_TrimType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::String_TrimType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
