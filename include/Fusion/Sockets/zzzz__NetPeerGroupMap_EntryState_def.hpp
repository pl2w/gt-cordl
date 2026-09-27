#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeerGroupMap_EntryState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPeerGroupMap_EntryState)
// Forward declare root types
namespace GlobalNamespace {
struct NetPeerGroupMap_EntryState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetPeerGroupMap_EntryState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetPeerGroupMap_EntryState, "Fusion.Sockets", "NetPeerGroupMap/EntryState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetPeerGroupMap/EntryState
struct CORDL_TYPE NetPeerGroupMap_EntryState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetPeerGroupMap_EntryState_Unwrapped
enum struct __NetPeerGroupMap_EntryState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Free = static_cast<int32_t>(0x1),
__E_Used = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetPeerGroupMap_EntryState_Unwrapped () const noexcept {
return static_cast<__NetPeerGroupMap_EntryState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetPeerGroupMap_EntryState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetPeerGroupMap_EntryState(int32_t  value__) noexcept;

/// @brief Field Free value: I32(1)
static ::GlobalNamespace::NetPeerGroupMap_EntryState const Free;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::NetPeerGroupMap_EntryState const None;

/// @brief Field Used value: I32(2)
static ::GlobalNamespace::NetPeerGroupMap_EntryState const Used;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29378};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetPeerGroupMap_EntryState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetPeerGroupMap_EntryState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
