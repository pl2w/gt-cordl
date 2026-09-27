#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/OnStartDelete.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OnStartDelete)
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class OnStartDelete;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::OnStartDelete*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::OnStartDelete*, "Photon.Pun.UtilityScripts", "OnStartDelete");
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.OnStartDelete
class CORDL_TYPE OnStartDelete : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Photon::Pun::UtilityScripts::OnStartDelete* New_ctor() ;

/// @brief Method Start, addr 0xa73b6fc, size 0x6c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method .ctor, addr 0xa73b768, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnStartDelete() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnStartDelete", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnStartDelete(OnStartDelete && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnStartDelete", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnStartDelete(OnStartDelete const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31234};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::UtilityScripts::OnStartDelete) == 0x20, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
