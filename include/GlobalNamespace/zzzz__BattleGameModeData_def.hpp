#pragma once
// IWYU pragma private; include "GlobalNamespace/BattleGameModeData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FusionGameModeData_def.hpp"
#include "GlobalNamespace/zzzz__PaintbrawlData_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BattleGameModeData)
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
struct RpcInfo;
}
namespace Fusion {
struct SimulationMessage;
}
namespace GlobalNamespace {
class GameModeSerializer;
}
namespace GlobalNamespace {
class GorillaPaintbrawlManager;
}
namespace GlobalNamespace {
struct PaintbrawlData;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BattleGameModeData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BattleGameModeData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BattleGameModeData*, "", "BattleGameModeData");
// [NetworkBehaviourWeaved(61)]
// Dependencies FusionGameModeData, PaintbrawlData
namespace GlobalNamespace {
// Is value type: false
// CS Name: BattleGameModeData
class CORDL_TYPE BattleGameModeData : public ::GlobalNamespace::FusionGameModeData {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::System::Object*  Data;

/// [Networked]
/// @brief [NetworkedWeaved(0, 61)]
 __declspec(property(get=get_PaintbrawlData, put=set_PaintbrawlData)) ::GlobalNamespace::PaintbrawlData  PaintbrawlData;

/// @brief Field _PaintbrawlData, offset 0x88, size 0xf4 
 __declspec(property(get=__cordl_internal_get__PaintbrawlData, put=__cordl_internal_set__PaintbrawlData)) ::GlobalNamespace::PaintbrawlData  _PaintbrawlData;

/// @brief Field battleTarget, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_battleTarget, put=__cordl_internal_set_battleTarget)) ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  battleTarget;

/// @brief Field serializer, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_serializer, put=__cordl_internal_set_serializer)) ::UnityW<::GlobalNamespace::GameModeSerializer>  serializer;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x579baa8, size 0x5c, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x579bb08, size 0x58, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::BattleGameModeData* New_ctor() ;

/// [Rpc]
/// @brief Method RPC_ReportSlinshotHit, addr 0x579b75c, size 0x33c, virtual false, abstract: false, final false
inline void RPC_ReportSlinshotHit(int32_t  taggedPlayerID, ::UnityEngine::Vector3  hitLocation, int32_t  projectileCount, ::Fusion::RpcInfo  rpcInfo) ;

/// [NetworkRpcWeavedInvoker(1, 7, 7)]
/// [Preserve]
/// [WeaverGenerated]
/// @brief Method RPC_ReportSlinshotHit@Invoker, addr 0x579bb64, size 0xe4, virtual false, abstract: false, final false
static inline void RPC_ReportSlinshotHit@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message) ;

/// @brief Method Spawned, addr 0x579b69c, size 0xc0, virtual true, abstract: false, final false
inline void Spawned() ;

constexpr ::GlobalNamespace::PaintbrawlData const& __cordl_internal_get__PaintbrawlData() const;

constexpr ::GlobalNamespace::PaintbrawlData& __cordl_internal_get__PaintbrawlData() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager> const& __cordl_internal_get_battleTarget() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>& __cordl_internal_get_battleTarget() ;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer> const& __cordl_internal_get_serializer() const;

constexpr ::UnityW<::GlobalNamespace::GameModeSerializer>& __cordl_internal_get_serializer() ;

constexpr void __cordl_internal_set__PaintbrawlData(::GlobalNamespace::PaintbrawlData  value) ;

constexpr void __cordl_internal_set_battleTarget(::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  value) ;

constexpr void __cordl_internal_set_serializer(::UnityW<::GlobalNamespace::GameModeSerializer>  value) ;

/// @brief Method .ctor, addr 0x579ba98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x579b534, size 0x88, virtual true, abstract: false, final false
inline ::System::Object* get_Data() ;

/// @brief Method get_PaintbrawlData, addr 0x579b478, size 0x60, virtual false, abstract: false, final false
inline ::GlobalNamespace::PaintbrawlData get_PaintbrawlData() ;

/// @brief Method set_Data, addr 0x579b5bc, size 0xe0, virtual true, abstract: false, final false
inline void set_Data(::System::Object*  value) ;

/// @brief Method set_PaintbrawlData, addr 0x579b4d8, size 0x5c, virtual false, abstract: false, final false
inline void set_PaintbrawlData(::GlobalNamespace::PaintbrawlData  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BattleGameModeData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BattleGameModeData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BattleGameModeData(BattleGameModeData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BattleGameModeData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BattleGameModeData(BattleGameModeData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1483};

/// [WeaverGenerated]
/// [DefaultForProperty("PaintbrawlData", 0, 61)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _PaintbrawlData, offset: 0x88, size: 0xf4, def value: None
 ::GlobalNamespace::PaintbrawlData  ____PaintbrawlData;

/// @brief Field battleTarget, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  ___battleTarget;

/// @brief Field serializer, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameModeSerializer>  ___serializer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BattleGameModeData, ____PaintbrawlData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BattleGameModeData, ___battleTarget) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BattleGameModeData, ___serializer) == 0x188, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BattleGameModeData) == 0x190, "Size mismatch!");

} // namespace end def GlobalNamespace
