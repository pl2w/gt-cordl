#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/InvalidKeyException_Format.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InvalidKeyException_Format)
// Forward declare root types
namespace GlobalNamespace {
struct InvalidKeyException_Format;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InvalidKeyException_Format);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InvalidKeyException_Format, "UnityEngine.AddressableAssets", "InvalidKeyException/Format");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.InvalidKeyException/Format
struct CORDL_TYPE InvalidKeyException_Format {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InvalidKeyException_Format_Unwrapped
enum struct __InvalidKeyException_Format_Unwrapped : int32_t {
__E_StandardMessage = static_cast<int32_t>(0x0),
__E_NoMergeMode = static_cast<int32_t>(0x1),
__E_MultipleTypesRequested = static_cast<int32_t>(0x2),
__E_NoLocation = static_cast<int32_t>(0x3),
__E_TypeMismatch = static_cast<int32_t>(0x4),
__E_MultipleTypeMismatch = static_cast<int32_t>(0x5),
__E_MergeModeBase = static_cast<int32_t>(0x6),
__E_UnionAvailableForKeys = static_cast<int32_t>(0x7),
__E_UnionAvailableForKeysWithoutOther = static_cast<int32_t>(0x8),
__E_IntersectionAvailable = static_cast<int32_t>(0x9),
__E_KeyAvailableAsType = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InvalidKeyException_Format_Unwrapped () const noexcept {
return static_cast<__InvalidKeyException_Format_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InvalidKeyException_Format() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InvalidKeyException_Format(int32_t  value__) noexcept;

/// @brief Field IntersectionAvailable value: I32(9)
static ::GlobalNamespace::InvalidKeyException_Format const IntersectionAvailable;

/// @brief Field KeyAvailableAsType value: I32(10)
static ::GlobalNamespace::InvalidKeyException_Format const KeyAvailableAsType;

/// @brief Field MergeModeBase value: I32(6)
static ::GlobalNamespace::InvalidKeyException_Format const MergeModeBase;

/// @brief Field MultipleTypeMismatch value: I32(5)
static ::GlobalNamespace::InvalidKeyException_Format const MultipleTypeMismatch;

/// @brief Field MultipleTypesRequested value: I32(2)
static ::GlobalNamespace::InvalidKeyException_Format const MultipleTypesRequested;

/// @brief Field NoLocation value: I32(3)
static ::GlobalNamespace::InvalidKeyException_Format const NoLocation;

/// @brief Field NoMergeMode value: I32(1)
static ::GlobalNamespace::InvalidKeyException_Format const NoMergeMode;

/// @brief Field StandardMessage value: I32(0)
static ::GlobalNamespace::InvalidKeyException_Format const StandardMessage;

/// @brief Field TypeMismatch value: I32(4)
static ::GlobalNamespace::InvalidKeyException_Format const TypeMismatch;

/// @brief Field UnionAvailableForKeys value: I32(7)
static ::GlobalNamespace::InvalidKeyException_Format const UnionAvailableForKeys;

/// @brief Field UnionAvailableForKeysWithoutOther value: I32(8)
static ::GlobalNamespace::InvalidKeyException_Format const UnionAvailableForKeysWithoutOther;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29209};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InvalidKeyException_Format, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InvalidKeyException_Format) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
