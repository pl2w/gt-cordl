#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityZone)
namespace GlobalNamespace {
struct GameEntityId;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEntityZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameEntityZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityZone*, "", "GameEntityZone");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityZone
class CORDL_TYPE GameEntityZone : public ::System::Object {
public:
// Declarations
/// @brief Field entities, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entities, put=__cordl_internal_set_entities)) ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  entities;

/// @brief Field owner, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::GlobalNamespace::NetPlayer*  owner;

/// @brief Field zoneId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneId, put=__cordl_internal_set_zoneId)) int32_t  zoneId;

static inline ::GlobalNamespace::GameEntityZone* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>* const& __cordl_internal_get_entities() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*& __cordl_internal_get_entities() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_owner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_owner() ;

constexpr int32_t const& __cordl_internal_get_zoneId() const;

constexpr int32_t& __cordl_internal_get_zoneId() ;

constexpr void __cordl_internal_set_entities(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  value) ;

constexpr void __cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_zoneId(int32_t  value) ;

/// @brief Method .ctor, addr 0x58322e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityZone(GameEntityZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityZone(GameEntityZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1747};

/// @brief Field zoneId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___zoneId;

/// @brief Field owner, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___owner;

/// @brief Field entities, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityId>*  ___entities;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityZone, ___zoneId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityZone, ___owner) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityZone, ___entities) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityZone) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
