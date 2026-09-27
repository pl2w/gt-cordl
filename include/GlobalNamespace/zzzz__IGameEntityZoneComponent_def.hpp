#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameEntityZoneComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IGameEntityZoneComponent)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct ZoneClearReason;
}
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameEntityZoneComponent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameEntityZoneComponent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameEntityZoneComponent*, "", "IGameEntityZoneComponent");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameEntityZoneComponent
class CORDL_TYPE IGameEntityZoneComponent {
public:
// Declarations
/// @brief Method DeserializeZoneData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DeserializeZoneData(::System::IO::BinaryReader*  reader) ;

/// @brief Method DeserializeZoneEntityData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DeserializeZoneEntityData(::System::IO::BinaryReader*  reader, ::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method DeserializeZonePlayerData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void DeserializeZonePlayerData(::System::IO::BinaryReader*  reader, int32_t  actorNumber) ;

/// @brief Method IsZoneReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsZoneReady() ;

/// @brief Method OnCreateGameEntity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnCreateGameEntity(::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method OnZoneClear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnZoneClear(::GlobalNamespace::ZoneClearReason  reason) ;

/// @brief Method OnZoneCreate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnZoneCreate() ;

/// @brief Method OnZoneInit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnZoneInit() ;

/// @brief Method ProcessMigratedGameEntityCreateData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int64_t ProcessMigratedGameEntityCreateData(::GlobalNamespace::GameEntity*  entity, int64_t  createData) ;

/// @brief Method SerializeZoneData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeZoneData(::System::IO::BinaryWriter*  writer) ;

/// @brief Method SerializeZoneEntityData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeZoneEntityData(::System::IO::BinaryWriter*  writer, ::GlobalNamespace::GameEntity*  entity) ;

/// @brief Method SerializeZonePlayerData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SerializeZonePlayerData(::System::IO::BinaryWriter*  writer, int32_t  actorNumber) ;

/// @brief Method ShouldClearZone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ShouldClearZone() ;

/// @brief Method ValidateCreateItem, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ValidateCreateItem(int32_t  nedId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityNetId) ;

/// @brief Method ValidateCreateItemBatchSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ValidateCreateItemBatchSize(int32_t  size) ;

/// @brief Method ValidateCreateMultipleItems, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ValidateCreateMultipleItems(int32_t  zoneId, ::ArrayW<uint8_t>  compressedStateData, int32_t  EntityCount) ;

/// @brief Method ValidateMigratedGameEntity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ValidateMigratedGameEntity(int32_t  netId, int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  actorNr) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameEntityZoneComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameEntityZoneComponent(IGameEntityZoneComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1742};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
