#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BlittableArrayWrapper_UpdateFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlittableArrayWrapper_UpdateFlags)
// Forward declare root types
namespace GlobalNamespace {
struct BlittableArrayWrapper_UpdateFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BlittableArrayWrapper_UpdateFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BlittableArrayWrapper_UpdateFlags, "UnityEngine.Bindings", "BlittableArrayWrapper/UpdateFlags");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Bindings.BlittableArrayWrapper/UpdateFlags
struct CORDL_TYPE BlittableArrayWrapper_UpdateFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BlittableArrayWrapper_UpdateFlags_Unwrapped
enum struct __BlittableArrayWrapper_UpdateFlags_Unwrapped : int32_t {
__E_NoUpdateNeeded = static_cast<int32_t>(0x0),
__E_SizeChanged = static_cast<int32_t>(0x1),
__E_DataIsNativePointer = static_cast<int32_t>(0x2),
__E_DataIsNativeOwnedMemory = static_cast<int32_t>(0x3),
__E_DataIsEmpty = static_cast<int32_t>(0x4),
__E_DataIsNull = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BlittableArrayWrapper_UpdateFlags_Unwrapped () const noexcept {
return static_cast<__BlittableArrayWrapper_UpdateFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BlittableArrayWrapper_UpdateFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BlittableArrayWrapper_UpdateFlags(int32_t  value__) noexcept;

/// @brief Field DataIsEmpty value: I32(4)
static ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags const DataIsEmpty;

/// @brief Field DataIsNativeOwnedMemory value: I32(3)
static ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags const DataIsNativeOwnedMemory;

/// @brief Field DataIsNativePointer value: I32(2)
static ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags const DataIsNativePointer;

/// @brief Field DataIsNull value: I32(5)
static ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags const DataIsNull;

/// @brief Field NoUpdateNeeded value: I32(0)
static ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags const NoUpdateNeeded;

/// @brief Field SizeChanged value: I32(1)
static ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags const SizeChanged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15207};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BlittableArrayWrapper_UpdateFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BlittableArrayWrapper_UpdateFlags) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
