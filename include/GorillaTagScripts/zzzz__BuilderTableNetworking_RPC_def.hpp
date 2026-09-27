#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTableNetworking_RPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTableNetworking_RPC)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTableNetworking_RPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTableNetworking_RPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTableNetworking_RPC, "GorillaTagScripts", "BuilderTableNetworking/RPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTableNetworking/RPC
struct CORDL_TYPE BuilderTableNetworking_RPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderTableNetworking_RPC_Unwrapped
enum struct __BuilderTableNetworking_RPC_Unwrapped : int32_t {
__E_PlayerEnterMaster = static_cast<int32_t>(0x0),
__E_TableDataMaster = static_cast<int32_t>(0x1),
__E_TableData = static_cast<int32_t>(0x2),
__E_TableDataStart = static_cast<int32_t>(0x3),
__E_PlacePieceMaster = static_cast<int32_t>(0x4),
__E_PlacePiece = static_cast<int32_t>(0x5),
__E_GrabPieceMaster = static_cast<int32_t>(0x6),
__E_GrabPiece = static_cast<int32_t>(0x7),
__E_DropPieceMaster = static_cast<int32_t>(0x8),
__E_DropPiece = static_cast<int32_t>(0x9),
__E_RequestFailed = static_cast<int32_t>(0xa),
__E_PieceDropZone = static_cast<int32_t>(0xb),
__E_CreatePiece = static_cast<int32_t>(0xc),
__E_CreatePieceMaster = static_cast<int32_t>(0xd),
__E_CreateShelfPieceMaster = static_cast<int32_t>(0xe),
__E_RecyclePieceMaster = static_cast<int32_t>(0xf),
__E_PlotClaimedMaster = static_cast<int32_t>(0x10),
__E_ArmShelfCreated = static_cast<int32_t>(0x11),
__E_ShelfSelection = static_cast<int32_t>(0x12),
__E_ShelfSelectionMaster = static_cast<int32_t>(0x13),
__E_SetFunctionalState = static_cast<int32_t>(0x14),
__E_SetFunctionalStateMaster = static_cast<int32_t>(0x15),
__E_RequestTerminalControl = static_cast<int32_t>(0x16),
__E_SetTerminalDriver = static_cast<int32_t>(0x17),
__E_LoadSharedBlocksMap = static_cast<int32_t>(0x18),
__E_SharedTableEvent = static_cast<int32_t>(0x19),
__E_Count = static_cast<int32_t>(0x1a),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderTableNetworking_RPC_Unwrapped () const noexcept {
return static_cast<__BuilderTableNetworking_RPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderTableNetworking_RPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTableNetworking_RPC(int32_t  value__) noexcept;

/// @brief Field ArmShelfCreated value: I32(17)
static ::GlobalNamespace::BuilderTableNetworking_RPC const ArmShelfCreated;

/// @brief Field Count value: I32(26)
static ::GlobalNamespace::BuilderTableNetworking_RPC const Count;

/// @brief Field CreatePiece value: I32(12)
static ::GlobalNamespace::BuilderTableNetworking_RPC const CreatePiece;

/// @brief Field CreatePieceMaster value: I32(13)
static ::GlobalNamespace::BuilderTableNetworking_RPC const CreatePieceMaster;

/// @brief Field CreateShelfPieceMaster value: I32(14)
static ::GlobalNamespace::BuilderTableNetworking_RPC const CreateShelfPieceMaster;

/// @brief Field DropPiece value: I32(9)
static ::GlobalNamespace::BuilderTableNetworking_RPC const DropPiece;

/// @brief Field DropPieceMaster value: I32(8)
static ::GlobalNamespace::BuilderTableNetworking_RPC const DropPieceMaster;

/// @brief Field GrabPiece value: I32(7)
static ::GlobalNamespace::BuilderTableNetworking_RPC const GrabPiece;

/// @brief Field GrabPieceMaster value: I32(6)
static ::GlobalNamespace::BuilderTableNetworking_RPC const GrabPieceMaster;

/// @brief Field LoadSharedBlocksMap value: I32(24)
static ::GlobalNamespace::BuilderTableNetworking_RPC const LoadSharedBlocksMap;

/// @brief Field PieceDropZone value: I32(11)
static ::GlobalNamespace::BuilderTableNetworking_RPC const PieceDropZone;

/// @brief Field PlacePiece value: I32(5)
static ::GlobalNamespace::BuilderTableNetworking_RPC const PlacePiece;

/// @brief Field PlacePieceMaster value: I32(4)
static ::GlobalNamespace::BuilderTableNetworking_RPC const PlacePieceMaster;

/// @brief Field PlayerEnterMaster value: I32(0)
static ::GlobalNamespace::BuilderTableNetworking_RPC const PlayerEnterMaster;

/// @brief Field PlotClaimedMaster value: I32(16)
static ::GlobalNamespace::BuilderTableNetworking_RPC const PlotClaimedMaster;

/// @brief Field RecyclePieceMaster value: I32(15)
static ::GlobalNamespace::BuilderTableNetworking_RPC const RecyclePieceMaster;

/// @brief Field RequestFailed value: I32(10)
static ::GlobalNamespace::BuilderTableNetworking_RPC const RequestFailed;

/// @brief Field RequestTerminalControl value: I32(22)
static ::GlobalNamespace::BuilderTableNetworking_RPC const RequestTerminalControl;

/// @brief Field SetFunctionalState value: I32(20)
static ::GlobalNamespace::BuilderTableNetworking_RPC const SetFunctionalState;

/// @brief Field SetFunctionalStateMaster value: I32(21)
static ::GlobalNamespace::BuilderTableNetworking_RPC const SetFunctionalStateMaster;

/// @brief Field SetTerminalDriver value: I32(23)
static ::GlobalNamespace::BuilderTableNetworking_RPC const SetTerminalDriver;

/// @brief Field SharedTableEvent value: I32(25)
static ::GlobalNamespace::BuilderTableNetworking_RPC const SharedTableEvent;

/// @brief Field ShelfSelection value: I32(18)
static ::GlobalNamespace::BuilderTableNetworking_RPC const ShelfSelection;

/// @brief Field ShelfSelectionMaster value: I32(19)
static ::GlobalNamespace::BuilderTableNetworking_RPC const ShelfSelectionMaster;

/// @brief Field TableData value: I32(2)
static ::GlobalNamespace::BuilderTableNetworking_RPC const TableData;

/// @brief Field TableDataMaster value: I32(1)
static ::GlobalNamespace::BuilderTableNetworking_RPC const TableDataMaster;

/// @brief Field TableDataStart value: I32(3)
static ::GlobalNamespace::BuilderTableNetworking_RPC const TableDataStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3959};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTableNetworking_RPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTableNetworking_RPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
