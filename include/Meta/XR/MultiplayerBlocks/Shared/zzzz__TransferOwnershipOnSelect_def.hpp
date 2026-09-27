#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/TransferOwnershipOnSelect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransferOwnershipOnSelect)
namespace Meta::XR::MultiplayerBlocks::Shared {
class ITransferOwnership;
}
namespace Oculus::Interaction {
class Grabbable;
}
namespace Oculus::Interaction {
struct PointerEvent;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace Meta::XR::MultiplayerBlocks::Shared {
class TransferOwnershipOnSelect;
}
// Write type traits
MARK_REF_T(::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect*, "Meta.XR.MultiplayerBlocks.Shared", "TransferOwnershipOnSelect");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::MultiplayerBlocks::Shared {
// Is value type: false
// CS Name: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect
class CORDL_TYPE TransferOwnershipOnSelect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field UseGravity, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseGravity, put=__cordl_internal_set_UseGravity)) bool  UseGravity;

/// @brief Field _grabbable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabbable, put=__cordl_internal_set__grabbable)) ::UnityW<::Oculus::Interaction::Grabbable>  _grabbable;

/// @brief Field _rigidbody, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody, put=__cordl_internal_set__rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody;

/// @brief Field _transferOwnership, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__transferOwnership, put=__cordl_internal_set__transferOwnership)) ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*  _transferOwnership;

/// @brief Method Awake, addr 0x9f71724, size 0x228, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x9f71ba0, size 0xe0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f7194c, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPointerEventRaised, addr 0x9f71a1c, size 0x184, virtual false, abstract: false, final false
inline void OnPointerEventRaised(::Oculus::Interaction::PointerEvent  pointerEvent) ;

constexpr bool const& __cordl_internal_get_UseGravity() const;

constexpr bool& __cordl_internal_get_UseGravity() ;

constexpr ::UnityW<::Oculus::Interaction::Grabbable> const& __cordl_internal_get__grabbable() const;

constexpr ::UnityW<::Oculus::Interaction::Grabbable>& __cordl_internal_get__grabbable() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody() ;

constexpr ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership* const& __cordl_internal_get__transferOwnership() const;

constexpr ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*& __cordl_internal_get__transferOwnership() ;

constexpr void __cordl_internal_set_UseGravity(bool  value) ;

constexpr void __cordl_internal_set__grabbable(::UnityW<::Oculus::Interaction::Grabbable>  value) ;

constexpr void __cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__transferOwnership(::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*  value) ;

/// @brief Method .ctor, addr 0x9f71c80, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferOwnershipOnSelect() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferOwnershipOnSelect", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferOwnershipOnSelect(TransferOwnershipOnSelect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferOwnershipOnSelect", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferOwnershipOnSelect(TransferOwnershipOnSelect const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30654};

/// @brief Field UseGravity, offset: 0x20, size: 0x1, def value: None
 bool  ___UseGravity;

/// @brief Field _grabbable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Grabbable>  ____grabbable;

/// @brief Field _rigidbody, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody;

/// @brief Field _transferOwnership, offset: 0x38, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Shared::ITransferOwnership*  ____transferOwnership;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect, ___UseGravity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect, ____grabbable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect, ____rigidbody) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect, ____transferOwnership) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MultiplayerBlocks::Shared::TransferOwnershipOnSelect) == 0x40, "Size mismatch!");

} // namespace end def Meta::XR::MultiplayerBlocks::Shared
