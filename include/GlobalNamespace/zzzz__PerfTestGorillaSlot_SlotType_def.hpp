#pragma once
// IWYU pragma private; include "GlobalNamespace/PerfTestGorillaSlot_SlotType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PerfTestGorillaSlot_SlotType)
// Forward declare root types
namespace GlobalNamespace {
struct PerfTestGorillaSlot_SlotType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PerfTestGorillaSlot_SlotType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PerfTestGorillaSlot_SlotType, "", "PerfTestGorillaSlot/SlotType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PerfTestGorillaSlot/SlotType
struct CORDL_TYPE PerfTestGorillaSlot_SlotType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PerfTestGorillaSlot_SlotType_Unwrapped
enum struct __PerfTestGorillaSlot_SlotType_Unwrapped : int32_t {
__E_VR_PLAYER = static_cast<int32_t>(0x0),
__E_DUMMY = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PerfTestGorillaSlot_SlotType_Unwrapped () const noexcept {
return static_cast<__PerfTestGorillaSlot_SlotType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PerfTestGorillaSlot_SlotType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PerfTestGorillaSlot_SlotType(int32_t  value__) noexcept;

/// @brief Field DUMMY value: I32(1)
static ::GlobalNamespace::PerfTestGorillaSlot_SlotType const DUMMY;

/// @brief Field VR_PLAYER value: I32(0)
static ::GlobalNamespace::PerfTestGorillaSlot_SlotType const VR_PLAYER;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{979};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PerfTestGorillaSlot_SlotType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PerfTestGorillaSlot_SlotType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
