#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradePurchaseStationMagnetPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GRToolUpgradePurchaseStationMagnetPoint)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolUpgradePurchaseStationMagnetPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint*, "", "GRToolUpgradePurchaseStationMagnetPoint");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolUpgradePurchaseStationMagnetPoint
class CORDL_TYPE GRToolUpgradePurchaseStationMagnetPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field magnetAttachTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_magnetAttachTransform, put=__cordl_internal_set_magnetAttachTransform)) ::UnityW<::UnityEngine::Transform>  magnetAttachTransform;

static inline ::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_magnetAttachTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_magnetAttachTransform() ;

constexpr void __cordl_internal_set_magnetAttachTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x58cf1c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgradePurchaseStationMagnetPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePurchaseStationMagnetPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolUpgradePurchaseStationMagnetPoint(GRToolUpgradePurchaseStationMagnetPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePurchaseStationMagnetPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolUpgradePurchaseStationMagnetPoint(GRToolUpgradePurchaseStationMagnetPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2091};

/// [Tooltip("Drag in the child transform that marks where the tool should attach. This MUST be a direct child of the entity, and not buried in the hierarchy.")]
/// @brief Field magnetAttachTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___magnetAttachTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint, ___magnetAttachTransform) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgradePurchaseStationMagnetPoint) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
