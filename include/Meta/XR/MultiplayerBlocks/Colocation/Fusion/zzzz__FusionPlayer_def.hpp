#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/Fusion/FusionPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionPlayer)
namespace Fusion {
class INetworkStruct;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
struct Player;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
struct FusionPlayer;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer, "Meta.XR.MultiplayerBlocks.Colocation.Fusion", "FusionPlayer");
// [NetworkStructWeaved(5)]
// Dependencies 
namespace Meta::XR::MultiplayerBlocks::Colocation::Fusion {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionPlayer
#pragma pack(push, 0)
struct CORDL_TYPE FusionPlayer {
public:
// Declarations
/// @brief Field colocationGroupId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_colocationGroupId, put=__cordl_internal_set_colocationGroupId)) uint32_t  colocationGroupId;

/// @brief Field oculusId, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get_oculusId, put=__cordl_internal_set_oculusId)) uint64_t  oculusId;

/// @brief Field playerId, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerId, put=__cordl_internal_set_playerId)) uint64_t  playerId;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>"
constexpr operator  ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>*() ;

/// @brief Method Equals, addr 0x9f661dc, size 0x8c, virtual true, abstract: false, final true
inline bool Equals(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer  other) ;

/// @brief Method GetPlayer, addr 0x9f64268, size 0x1c, virtual false, abstract: false, final false
inline ::Meta::XR::MultiplayerBlocks::Colocation::Player GetPlayer() ;

constexpr uint32_t const& __cordl_internal_get_colocationGroupId() const;

constexpr uint32_t& __cordl_internal_get_colocationGroupId() ;

constexpr uint64_t const& __cordl_internal_get_oculusId() const;

constexpr uint64_t& __cordl_internal_get_oculusId() ;

constexpr uint64_t const& __cordl_internal_get_playerId() const;

constexpr uint64_t& __cordl_internal_get_playerId() ;

constexpr void __cordl_internal_set_colocationGroupId(uint32_t  value) ;

constexpr void __cordl_internal_set_oculusId(uint64_t  value) ;

constexpr void __cordl_internal_set_playerId(uint64_t  value) ;

/// @brief Method .ctor, addr 0x9f63d9c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::Meta::XR::MultiplayerBlocks::Colocation::Player  player) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>"
constexpr ::System::IEquatable_1<::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer>* i___System__IEquatable_1___Meta__XR__MultiplayerBlocks__Colocation__Fusion__FusionPlayer_() ;

// Ctor Parameters []
// @brief default ctor
constexpr FusionPlayer() ;

// Ctor Parameters [CppParam { name: "playerId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "oculusId", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "colocationGroupId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr FusionPlayer(uint64_t  playerId, uint64_t  oculusId, uint32_t  colocationGroupId) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___playerId_padding[0x0];
/// @brief Field playerId, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___playerId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___playerId_padding_forAlignment[0x0];
/// @brief Field playerId, offset: 0x0, size: 0x8, def value: None
 uint64_t  ___playerId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___oculusId_padding[0x8];
/// @brief Field oculusId, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___oculusId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___oculusId_padding_forAlignment[0x8];
/// @brief Field oculusId, offset: 0x8, size: 0x8, def value: None
 uint64_t  ___oculusId_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x10
 uint8_t  ___colocationGroupId_padding[0x10];
/// @brief Field colocationGroupId, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___colocationGroupId;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x10 for alignment
 uint8_t  ___colocationGroupId_padding_forAlignment[0x10];
/// @brief Field colocationGroupId, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___colocationGroupId_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Size padding 0x14 - 0x18 = 0x4, packed as 0x4
 uint8_t  _cordl_size_padding[0x4];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Colocation::Fusion::FusionPlayer) == 0x14, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Colocation::Fusion
