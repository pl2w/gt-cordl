#pragma once
// IWYU pragma private; include "GlobalNamespace/DisconnectFromRoom.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(DisconnectFromRoom)
// Forward declare root types
namespace GlobalNamespace {
class DisconnectFromRoom;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DisconnectFromRoom*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DisconnectFromRoom*, "", "DisconnectFromRoom");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DisconnectFromRoom
class CORDL_TYPE DisconnectFromRoom : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::DisconnectFromRoom* New_ctor() ;

/// @brief Method .ctor, addr 0x5adf60c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisconnectFromRoom() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisconnectFromRoom", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisconnectFromRoom(DisconnectFromRoom && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisconnectFromRoom", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisconnectFromRoom(DisconnectFromRoom const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3436};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::DisconnectFromRoom) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
