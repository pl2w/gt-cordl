#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionShareAndLocalizeParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBool_def.hpp"
#include "Fusion/zzzz__NetworkString_1_def.hpp"
#include "Fusion/zzzz___64_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionShareAndLocalizeParams)
namespace Fusion {
class INetworkStruct;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct ShareAndLocalizeParams;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
struct FusionShareAndLocalizeParams;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams, "Meta.XR.MultiplayerBlocks.Colocation.Fusion", "FusionShareAndLocalizeParams");
// [NetworkStructWeaved(70)]
// Dependencies Fusion.NetworkBool, Fusion.NetworkString`1<TSize>, Fusion._64
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionShareAndLocalizeParams
#pragma pack(push, 0)
struct CORDL_TYPE FusionShareAndLocalizeParams {
public:
// Declarations
/// @brief Field anchorFlowSucceeded, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_anchorFlowSucceeded, put=__cordl_internal_set_anchorFlowSucceeded)) ::Fusion::NetworkBool  anchorFlowSucceeded;

/// @brief Field anchorUUID, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_anchorUUID, put=__cordl_internal_set_anchorUUID)) ::Fusion::NetworkString_1<::Fusion::_64>  anchorUUID;

/// @brief Field requestingPlayerId, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestingPlayerId, put=__cordl_internal_set_requestingPlayerId)) uint64_t  requestingPlayerId;

/// @brief Field requestingPlayerOculusId, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestingPlayerOculusId, put=__cordl_internal_set_requestingPlayerOculusId)) uint64_t  requestingPlayerOculusId;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Method GetShareAndLocalizeParams, addr 0x9f63450, size 0xe0, virtual false, abstract: false, final false
inline ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams GetShareAndLocalizeParams() ;

constexpr ::Fusion::NetworkBool const& __cordl_internal_get_anchorFlowSucceeded() const;

constexpr ::Fusion::NetworkBool& __cordl_internal_get_anchorFlowSucceeded() ;

constexpr ::Fusion::NetworkString_1<::Fusion::_64> const& __cordl_internal_get_anchorUUID() const;

constexpr ::Fusion::NetworkString_1<::Fusion::_64>& __cordl_internal_get_anchorUUID() ;

constexpr uint64_t const& __cordl_internal_get_requestingPlayerId() const;

constexpr uint64_t& __cordl_internal_get_requestingPlayerId() ;

constexpr uint64_t const& __cordl_internal_get_requestingPlayerOculusId() const;

constexpr uint64_t& __cordl_internal_get_requestingPlayerOculusId() ;

constexpr void __cordl_internal_set_anchorFlowSucceeded(::Fusion::NetworkBool  value) ;

constexpr void __cordl_internal_set_anchorUUID(::Fusion::NetworkString_1<::Fusion::_64>  value) ;

constexpr void __cordl_internal_set_requestingPlayerId(uint64_t  value) ;

constexpr void __cordl_internal_set_requestingPlayerOculusId(uint64_t  value) ;

/// @brief Method .ctor, addr 0x9f62a2c, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  data) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

// Ctor Parameters []
// @brief default ctor
constexpr FusionShareAndLocalizeParams() ;

// Ctor Parameters [CppParam { name: "requestingPlayerId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestingPlayerOculusId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchorUUID", ty: "::Fusion::NetworkString_1<::Fusion::_64>", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchorFlowSucceeded", ty: "::Fusion::NetworkBool", modifiers: "", def_value: None, comment: None }]
constexpr FusionShareAndLocalizeParams(uint64_t  requestingPlayerId, uint64_t  requestingPlayerOculusId, ::Fusion::NetworkString_1<::Fusion::_64>  anchorUUID, ::Fusion::NetworkBool  anchorFlowSucceeded) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___requestingPlayerId_padding[0x0];
/// @brief Field requestingPlayerId, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___requestingPlayerId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___requestingPlayerId_padding_forAlignment[0x0];
/// @brief Field requestingPlayerId, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___requestingPlayerId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___requestingPlayerOculusId_padding[0x8];
/// @brief Field requestingPlayerOculusId, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___requestingPlayerOculusId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___requestingPlayerOculusId_padding_forAlignment[0x8];
/// @brief Field requestingPlayerOculusId, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___requestingPlayerOculusId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___anchorUUID_padding[0x10];
/// @brief Field anchorUUID, offset: 0x10, size: 0xc, def value: None
 ::Fusion::NetworkString_1<::Fusion::_64>  ___anchorUUID;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___anchorUUID_padding_forAlignment[0x10];
/// @brief Field anchorUUID, offset: 0x10, size: 0xc, def value: None
 ::Fusion::NetworkString_1<::Fusion::_64>  ___anchorUUID_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x114
 uint8_t  ___anchorFlowSucceeded_padding[0x114];
/// @brief Field anchorFlowSucceeded, offset: 0x114, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___anchorFlowSucceeded;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x114 for alignment
 uint8_t  ___anchorFlowSucceeded_padding_forAlignment[0x114];
/// @brief Field anchorFlowSucceeded, offset: 0x114, size: 0x4, def value: None
 ::Fusion::NetworkBool  ___anchorFlowSucceeded_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31191};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x118};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionShareAndLocalizeParams) == 0x118, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation::Fusion
