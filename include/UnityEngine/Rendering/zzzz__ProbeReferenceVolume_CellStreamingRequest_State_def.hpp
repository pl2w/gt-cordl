#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_CellStreamingRequest_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeReferenceVolume_CellStreamingRequest_State)
// Forward declare root types
namespace GlobalNamespace {
struct CellStreamingRequest_ProbeReferenceVolume_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State, "UnityEngine.Rendering", "ProbeReferenceVolume/CellStreamingRequest/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellStreamingRequest/State
struct CORDL_TYPE CellStreamingRequest_ProbeReferenceVolume_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CellStreamingRequest_ProbeReferenceVolume_State_Unwrapped
enum struct __CellStreamingRequest_ProbeReferenceVolume_State_Unwrapped : int32_t {
__E_Pending = static_cast<int32_t>(0x0),
__E_Active = static_cast<int32_t>(0x1),
__E_Canceled = static_cast<int32_t>(0x2),
__E_Invalid = static_cast<int32_t>(0x3),
__E_Complete = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CellStreamingRequest_ProbeReferenceVolume_State_Unwrapped () const noexcept {
return static_cast<__CellStreamingRequest_ProbeReferenceVolume_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CellStreamingRequest_ProbeReferenceVolume_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CellStreamingRequest_ProbeReferenceVolume_State(int32_t  value__) noexcept;

/// @brief Field Active value: I32(1)
static ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State const Active;

/// @brief Field Canceled value: I32(2)
static ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State const Canceled;

/// @brief Field Complete value: I32(4)
static ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State const Complete;

/// @brief Field Invalid value: I32(3)
static ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State const Invalid;

/// @brief Field Pending value: I32(0)
static ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State const Pending;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16827};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
