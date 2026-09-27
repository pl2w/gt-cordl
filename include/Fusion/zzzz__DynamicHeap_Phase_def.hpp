#pragma once
// IWYU pragma private; include "Fusion/DynamicHeap_Phase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicHeap_Phase)
// Forward declare root types
namespace GlobalNamespace {
struct DynamicHeap_Phase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DynamicHeap_Phase);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DynamicHeap_Phase, "Fusion", "DynamicHeap/Phase");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.DynamicHeap/Phase
struct CORDL_TYPE DynamicHeap_Phase {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DynamicHeap_Phase_Unwrapped
enum struct __DynamicHeap_Phase_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_Mark = static_cast<int32_t>(0x1),
__E_Sweep = static_cast<int32_t>(0x2),
__E_Free = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DynamicHeap_Phase_Unwrapped () const noexcept {
return static_cast<__DynamicHeap_Phase_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DynamicHeap_Phase() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DynamicHeap_Phase(int32_t  value__) noexcept;

/// @brief Field Free value: I32(3)
static ::GlobalNamespace::DynamicHeap_Phase const Free;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::DynamicHeap_Phase const Idle;

/// @brief Field Mark value: I32(1)
static ::GlobalNamespace::DynamicHeap_Phase const Mark;

/// @brief Field Sweep value: I32(2)
static ::GlobalNamespace::DynamicHeap_Phase const Sweep;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18941};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DynamicHeap_Phase, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DynamicHeap_Phase) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
