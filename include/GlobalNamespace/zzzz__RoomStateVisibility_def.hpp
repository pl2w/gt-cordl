#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomStateVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RoomStateVisibility)
// Forward declare root types
namespace GlobalNamespace {
class RoomStateVisibility;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RoomStateVisibility*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomStateVisibility*, "", "RoomStateVisibility");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RoomStateVisibility
class CORDL_TYPE RoomStateVisibility : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field enableInPrivateRoom, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableInPrivateRoom, put=__cordl_internal_set_enableInPrivateRoom)) bool  enableInPrivateRoom;

/// @brief Field enableInRoom, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableInRoom, put=__cordl_internal_set_enableInRoom)) bool  enableInRoom;

/// @brief Field enableOutOfRoom, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableOutOfRoom, put=__cordl_internal_set_enableOutOfRoom)) bool  enableOutOfRoom;

static inline ::GlobalNamespace::RoomStateVisibility* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56ad5f8, size 0x138, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnRoomChanged, addr 0x56ad508, size 0xf0, virtual false, abstract: false, final false
inline void OnRoomChanged() ;

/// @brief Method Start, addr 0x56ad3c8, size 0x140, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_enableInPrivateRoom() const;

constexpr bool& __cordl_internal_get_enableInPrivateRoom() ;

constexpr bool const& __cordl_internal_get_enableInRoom() const;

constexpr bool& __cordl_internal_get_enableInRoom() ;

constexpr bool const& __cordl_internal_get_enableOutOfRoom() const;

constexpr bool& __cordl_internal_get_enableOutOfRoom() ;

constexpr void __cordl_internal_set_enableInPrivateRoom(bool  value) ;

constexpr void __cordl_internal_set_enableInRoom(bool  value) ;

constexpr void __cordl_internal_set_enableOutOfRoom(bool  value) ;

/// @brief Method .ctor, addr 0x56ad730, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoomStateVisibility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoomStateVisibility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RoomStateVisibility(RoomStateVisibility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoomStateVisibility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoomStateVisibility(RoomStateVisibility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{925};

/// [SerializeField]
/// @brief Field enableOutOfRoom, offset: 0x20, size: 0x1, def value: None
 bool  ___enableOutOfRoom;

/// [SerializeField]
/// @brief Field enableInRoom, offset: 0x21, size: 0x1, def value: None
 bool  ___enableInRoom;

/// [SerializeField]
/// @brief Field enableInPrivateRoom, offset: 0x22, size: 0x1, def value: None
 bool  ___enableInPrivateRoom;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomStateVisibility, ___enableOutOfRoom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomStateVisibility, ___enableInRoom) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomStateVisibility, ___enableInPrivateRoom) == 0x22, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomStateVisibility) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
