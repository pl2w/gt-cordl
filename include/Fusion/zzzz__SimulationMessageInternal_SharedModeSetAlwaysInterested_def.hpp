#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageInternal_SharedModeSetAlwaysInterested.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessageInternal_SharedModeSetAlwaysInterested)
// Forward declare root types
namespace Fusion {
struct SimulationMessageInternal_SharedModeSetAlwaysInterested;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested, "Fusion", "SimulationMessageInternal_SharedModeSetAlwaysInterested");
// Dependencies Fusion.NetworkId
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessageInternal_SharedModeSetAlwaysInterested
struct CORDL_TYPE SimulationMessageInternal_SharedModeSetAlwaysInterested {
public:
// Declarations
/// @brief Field Interested, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Interested, put=__cordl_internal_set_Interested)) int32_t  Interested;

/// @brief Field Object, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::Fusion::NetworkId  Object;

/// @brief Field Player, offset 0x8, size 0x4 
 __declspec(property(get=__cordl_internal_get_Player, put=__cordl_internal_set_Player)) int32_t  Player;

constexpr int32_t const& __cordl_internal_get_Interested() const;

constexpr int32_t& __cordl_internal_get_Interested() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_Object() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_Object() ;

constexpr int32_t const& __cordl_internal_get_Player() const;

constexpr int32_t& __cordl_internal_get_Player() ;

constexpr void __cordl_internal_set_Interested(int32_t  value) ;

constexpr void __cordl_internal_set_Object(::Fusion::NetworkId  value) ;

constexpr void __cordl_internal_set_Player(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessageInternal_SharedModeSetAlwaysInterested() ;

// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Interested", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Player", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessageInternal_SharedModeSetAlwaysInterested(::Fusion::NetworkId  Object, int32_t  Interested, int32_t  Player) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Object_padding[0x0];
/// @brief Field Object, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Object;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Object_padding_forAlignment[0x0];
/// @brief Field Object, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Object_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Interested_padding[0x4];
/// @brief Field Interested, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Interested;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Interested_padding_forAlignment[0x4];
/// @brief Field Interested, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Interested_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ___Player_padding[0x8];
/// @brief Field Player, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Player;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ___Player_padding_forAlignment[0x8];
/// @brief Field Player, offset: 0x8, size: 0x4, def value: None
 int32_t  ___Player_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19350};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::SimulationMessageInternal_SharedModeSetAlwaysInterested) == 0xc, "Size mismatch!");

} // namespace end def Fusion
