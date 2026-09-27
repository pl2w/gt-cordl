#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeerGroupMap_Entry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroupMap_EntryState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetPeerGroupMap_Entry)
// Forward declare root types
namespace GlobalNamespace {
struct NetPeerGroupMap_Entry;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetPeerGroupMap_Entry);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetPeerGroupMap_Entry, "Fusion.Sockets", "NetPeerGroupMap/Entry");
// Dependencies Fusion.Sockets.NetAddress, Fusion.Sockets.NetPeerGroupMap::EntryState
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetPeerGroupMap/Entry
struct CORDL_TYPE NetPeerGroupMap_Entry {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NetPeerGroupMap_Entry() ;

// Ctor Parameters [CppParam { name: "Next", ty: "::GlobalNamespace::NetPeerGroupMap_Entry*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hash", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "State", ty: "::GlobalNamespace::NetPeerGroupMap_EntryState", modifiers: "", def_value: None, comment: None }, CppParam { name: "Address", ty: "::Fusion::Sockets::NetAddress", modifiers: "", def_value: None, comment: None }, CppParam { name: "Group", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr NetPeerGroupMap_Entry(::GlobalNamespace::NetPeerGroupMap_Entry*  Next, uint64_t  Hash, ::GlobalNamespace::NetPeerGroupMap_EntryState  State, ::Fusion::Sockets::NetAddress  Address, int16_t  Group) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29379};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Next, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::NetPeerGroupMap_Entry*  Next;

/// @brief Field Hash, offset: 0x8, size: 0x8, def value: None
 uint64_t  Hash;

/// @brief Field State, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::NetPeerGroupMap_EntryState  State;

/// @brief Field Address, offset: 0x18, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  Address;

/// @brief Field Group, offset: 0x30, size: 0x2, def value: None
 int16_t  Group;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetPeerGroupMap_Entry, Next) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetPeerGroupMap_Entry, Hash) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetPeerGroupMap_Entry, State) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetPeerGroupMap_Entry, Address) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetPeerGroupMap_Entry, Group) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetPeerGroupMap_Entry) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
