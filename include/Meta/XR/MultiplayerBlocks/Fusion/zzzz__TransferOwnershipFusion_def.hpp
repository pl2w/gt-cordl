#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/TransferOwnershipFusion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransferOwnershipFusion)
namespace Meta::XR::MultiplayerBlocks::Shared {
class ITransferOwnership;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Fusion {
class TransferOwnershipFusion;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion*, "Meta.XR.MultiplayerBlocks.Fusion", "TransferOwnershipFusion");
// [NetworkBehaviourWeaved(0)]
// Dependencies Fusion.NetworkBehaviour
namespace Meta::XR::MultiplayerBlocks::Fusion {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Fusion.TransferOwnershipFusion
class CORDL_TYPE TransferOwnershipFusion : public ::Fusion::NetworkBehaviour {
public:
// Declarations
/// @brief Convert operator to "::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership"
constexpr operator  ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*() noexcept;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x9f5d7f0, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x9f5d7f4, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method HasOwnership, addr 0x9f5d7c8, size 0x20, virtual true, abstract: false, final true
inline bool HasOwnership() ;

static inline ::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion* New_ctor() ;

/// @brief Method TransferOwnershipToLocalPlayer, addr 0x9f5d7b0, size 0x18, virtual true, abstract: false, final true
inline void TransferOwnershipToLocalPlayer() ;

/// @brief Method .ctor, addr 0x9f5d7e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership"
constexpr ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership* i___Meta__XR__MultiplayerBlocks__Shared__ITransferOwnership() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferOwnershipFusion() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferOwnershipFusion", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferOwnershipFusion(TransferOwnershipFusion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferOwnershipFusion", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferOwnershipFusion(TransferOwnershipFusion const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31176};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Fusion::TransferOwnershipFusion) == 0x80, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Fusion
