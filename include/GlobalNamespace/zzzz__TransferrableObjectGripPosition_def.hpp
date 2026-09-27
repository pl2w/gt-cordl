#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObjectGripPosition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TransferrableObjectGripPosition)
namespace GlobalNamespace {
class SlotTransformOverride;
}
namespace GlobalNamespace {
class SubGrabPoint;
}
namespace GlobalNamespace {
class TransferrableItemSlotTransformOverride;
}
// Forward declare root types
namespace GlobalNamespace {
class TransferrableObjectGripPosition;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferrableObjectGripPosition*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableObjectGripPosition*, "", "TransferrableObjectGripPosition");
// Dependencies TransferrableObject::PositionState, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableObjectGripPosition
class CORDL_TYPE TransferrableObjectGripPosition : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field attachmentType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_attachmentType, put=__cordl_internal_set_attachmentType)) ::GlobalNamespace::TransferrableObject_PositionState  attachmentType;

/// @brief Field parentObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentObject, put=__cordl_internal_set_parentObject)) ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>  parentObject;

/// @brief Method Awake, addr 0x5772c64, size 0xc8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateSubGrabPoint, addr 0x576a2a8, size 0x54, virtual false, abstract: false, final false
inline ::GlobalNamespace::SubGrabPoint* CreateSubGrabPoint(::GlobalNamespace::SlotTransformOverride*  overrideContainer) ;

static inline ::GlobalNamespace::TransferrableObjectGripPosition* New_ctor() ;

constexpr ::GlobalNamespace::TransferrableObject_PositionState const& __cordl_internal_get_attachmentType() const;

constexpr ::GlobalNamespace::TransferrableObject_PositionState& __cordl_internal_get_attachmentType() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride> const& __cordl_internal_get_parentObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>& __cordl_internal_get_parentObject() ;

constexpr void __cordl_internal_set_attachmentType(::GlobalNamespace::TransferrableObject_PositionState  value) ;

constexpr void __cordl_internal_set_parentObject(::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>  value) ;

/// @brief Method .ctor, addr 0x5772d2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableObjectGripPosition() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectGripPosition", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableObjectGripPosition(TransferrableObjectGripPosition && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableObjectGripPosition", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableObjectGripPosition(TransferrableObjectGripPosition const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1368};

/// [SerializeField]
/// @brief Field parentObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>  ___parentObject;

/// [SerializeField]
/// @brief Field attachmentType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_PositionState  ___attachmentType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableObjectGripPosition, ___parentObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableObjectGripPosition, ___attachmentType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableObjectGripPosition) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
