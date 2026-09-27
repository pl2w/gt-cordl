#pragma once
// IWYU pragma private; include "Fusion/Simulation_PlayerSimulationData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation_PlayerSimulationData)
// Forward declare root types
namespace GlobalNamespace {
struct Simulation_PlayerSimulationData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Simulation_PlayerSimulationData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Simulation_PlayerSimulationData, "Fusion", "Simulation/PlayerSimulationData");
// Dependencies Fusion.NetworkId, Fusion.PlayerRef
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Simulation/PlayerSimulationData
struct CORDL_TYPE Simulation_PlayerSimulationData {
public:
// Declarations
/// @brief Field Actor, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_Actor, put=__cordl_internal_set_Actor)) int32_t  Actor;

/// @brief Field Object, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::Fusion::NetworkId  Object;

/// @brief Field Player, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Player, put=__cordl_internal_set_Player)) ::Fusion::PlayerRef  Player;

constexpr int32_t const& __cordl_internal_get_Actor() const;

constexpr int32_t& __cordl_internal_get_Actor() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_Object() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_Object() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_Player() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_Player() ;

constexpr void __cordl_internal_set_Actor(int32_t  value) ;

constexpr void __cordl_internal_set_Object(::Fusion::NetworkId  value) ;

constexpr void __cordl_internal_set_Player(::Fusion::PlayerRef  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Simulation_PlayerSimulationData() ;

// Ctor Parameters [CppParam { name: "Player", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }, CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Actor", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Simulation_PlayerSimulationData(::Fusion::PlayerRef  Player, ::Fusion::NetworkId  Object, int32_t  Actor) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Player_padding[0x0];
/// @brief Field Player, offset: 0x0, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Player;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Player_padding_forAlignment[0x0];
/// @brief Field Player, offset: 0x0, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Player_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Object_padding[0x4];
/// @brief Field Object, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Object;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Object_padding_forAlignment[0x4];
/// @brief Field Object, offset: 0x4, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Object_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Actor_padding[0x8];
/// @brief Field Actor, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Actor;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Actor_padding_forAlignment[0x8];
/// @brief Field Actor, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Actor_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19309};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Simulation_PlayerSimulationData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
