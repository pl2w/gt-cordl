#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/LipSyncPhotonFix.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LipSyncPhotonFix)
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class LipSyncPhotonFix;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix*, "Meta.XR.MultiplayerBlocks.Fusion", "LipSyncPhotonFix");
// [RequireComponent(typeof(Photon.Voice.Unity.Recorder))]
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.LipSyncPhotonFix
class CORDL_TYPE LipSyncPhotonFix : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix* New_ctor() ;

/// @brief Method .ctor, addr 0x9f61034, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LipSyncPhotonFix() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LipSyncPhotonFix", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LipSyncPhotonFix(LipSyncPhotonFix && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LipSyncPhotonFix", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LipSyncPhotonFix(LipSyncPhotonFix const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31182};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
