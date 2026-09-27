#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_ObjectFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_ObjectFlags)
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_ObjectFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_ObjectFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_ObjectFlags, "Fusion", "DynamicHeap/ObjectFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/ObjectFlags
struct CORDL_TYPE DynamicHeap_ObjectFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __DynamicHeap_ObjectFlags_Unwrapped
enum struct __DynamicHeap_ObjectFlags_Unwrapped : uint8_t {
__E_Tracked = static_cast<uint8_t>(0x1u),
__E_Root = static_cast<uint8_t>(0x2u),
__E_Pointer = static_cast<uint8_t>(0x4u),
__E_Simple = static_cast<uint8_t>(0x8u),
__E_ForceAlive = static_cast<uint8_t>(0x10u),
__E_Garbage = static_cast<uint8_t>(0x20u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DynamicHeap_ObjectFlags_Unwrapped () const noexcept {
return static_cast<__DynamicHeap_ObjectFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_ObjectFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_ObjectFlags(uint8_t  value__) noexcept;

/// @brief Field ForceAlive value: U8(16)
static ::GlobalNamespace::DynamicHeap_ObjectFlags const ForceAlive;

/// @brief Field Garbage value: U8(32)
static ::GlobalNamespace::DynamicHeap_ObjectFlags const Garbage;

/// @brief Field Pointer value: U8(4)
static ::GlobalNamespace::DynamicHeap_ObjectFlags const Pointer;

/// @brief Field Root value: U8(2)
static ::GlobalNamespace::DynamicHeap_ObjectFlags const Root;

/// @brief Field Simple value: U8(8)
static ::GlobalNamespace::DynamicHeap_ObjectFlags const Simple;

/// @brief Field Tracked value: U8(1)
static ::GlobalNamespace::DynamicHeap_ObjectFlags const Tracked;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18945};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicHeap_ObjectFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicHeap_ObjectFlags) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
