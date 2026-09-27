#pragma once
// IWYU pragma private; include "Fusion/SimulationPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SimulationPlayer)
// Forward declare root types
namespace Fusion {
class SimulationPlayer;
}
// Write type traits
MARK_REF_T(::Fusion::SimulationPlayer*);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationPlayer*, "Fusion", "SimulationPlayer");
// Dependencies Fusion.PlayerRef, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.SimulationPlayer
class CORDL_TYPE SimulationPlayer : public ::System::Object {
public:
// Declarations
/// @brief Field Ref, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Ref, put=__cordl_internal_set_Ref)) ::Fusion::PlayerRef  Ref;

static inline ::Fusion::SimulationPlayer* New_ctor() ;

constexpr ::Fusion::PlayerRef const& __cordl_internal_get_Ref() const;

constexpr ::Fusion::PlayerRef& __cordl_internal_get_Ref() ;

constexpr void __cordl_internal_set_Ref(::Fusion::PlayerRef  value) ;

/// @brief Method .ctor, addr 0x6006680, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulationPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulationPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulationPlayer(SimulationPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulationPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulationPlayer(SimulationPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19356};

/// @brief Field Ref, offset: 0x10, size: 0x4, def value: None
 ::Fusion::PlayerRef  ___Ref;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationPlayer, ___Ref) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationPlayer) == 0x18, "Size mismatch!");

} // namespace end def Fusion
