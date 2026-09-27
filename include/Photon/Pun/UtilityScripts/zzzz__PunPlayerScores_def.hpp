#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PunPlayerScores.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PunPlayerScores)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class PunPlayerScores;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::PunPlayerScores*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::PunPlayerScores*, "Photon.Pun.UtilityScripts", "PunPlayerScores");
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.PunPlayerScores
class CORDL_TYPE PunPlayerScores : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Photon::Pun::UtilityScripts::PunPlayerScores* New_ctor() ;

/// @brief Method .ctor, addr 0xa738330, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PunPlayerScores() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PunPlayerScores", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PunPlayerScores(PunPlayerScores && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PunPlayerScores", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PunPlayerScores(PunPlayerScores const& ) = delete;

/// @brief Field PlayerScoreProp offset 0xffffffff size 0x8
static constexpr ::ConstString  PlayerScoreProp{u"score"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31217};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::PunPlayerScores) == 0x20, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
