#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDollyCart.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineDollyCart_UpdateMethod_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePathBase_PositionUnits_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineDollyCart)
namespace GlobalNamespace {
struct CinemachineDollyCart_UpdateMethod;
}
namespace Unity::Cinemachine {
class CinemachinePathBase;
}
namespace Unity::Cinemachine {
class CinemachineSplineCart;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineDollyCart;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineDollyCart*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineDollyCart*, "Unity.Cinemachine", "CinemachineDollyCart");
// [Obsolete("CinemachineDollyCart has been deprecated. Use CinemachineSplineCart instead.")]
// [ExecuteAlways]
// [DisallowMultipleComponent]
// [AddComponentMenu("")]
// Dependencies Unity.Cinemachine.CinemachineDollyCart::UpdateMethod, Unity.Cinemachine.CinemachinePathBase::PositionUnits, UnityEngine.MonoBehaviour
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineDollyCart
class CORDL_TYPE CinemachineDollyCart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using UpdateMethod = ::GlobalNamespace::CinemachineDollyCart_UpdateMethod;

/// @brief Field m_Path, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Path, put=__cordl_internal_set_m_Path)) ::UnityW<::Unity::Cinemachine::CinemachinePathBase>  m_Path;

/// @brief Field m_Position, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Position, put=__cordl_internal_set_m_Position)) float_t  m_Position;

/// @brief Field m_PositionUnits, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PositionUnits, put=__cordl_internal_set_m_PositionUnits)) ::GlobalNamespace::CinemachinePathBase_PositionUnits  m_PositionUnits;

/// @brief Field m_Speed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Speed, put=__cordl_internal_set_m_Speed)) float_t  m_Speed;

/// @brief Field m_UpdateMethod, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateMethod, put=__cordl_internal_set_m_UpdateMethod)) ::GlobalNamespace::CinemachineDollyCart_UpdateMethod  m_UpdateMethod;

/// @brief Method FixedUpdate, addr 0xaecbcb8, size 0x40, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method LateUpdate, addr 0xaecbeb4, size 0xa0, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Unity::Cinemachine::CinemachineDollyCart* New_ctor() ;

/// @brief Method SetCartPosition, addr 0xaecbcf8, size 0x120, virtual false, abstract: false, final false
inline void SetCartPosition(float_t  distanceAlongPath) ;

/// @brief Method Update, addr 0xaecbe18, size 0x9c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpgradeToCm3, addr 0xaecbf54, size 0x140, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachineSplineCart*  c) ;

constexpr ::UnityW<::Unity::Cinemachine::CinemachinePathBase> const& __cordl_internal_get_m_Path() const;

constexpr ::UnityW<::Unity::Cinemachine::CinemachinePathBase>& __cordl_internal_get_m_Path() ;

constexpr float_t const& __cordl_internal_get_m_Position() const;

constexpr float_t& __cordl_internal_get_m_Position() ;

constexpr ::GlobalNamespace::CinemachinePathBase_PositionUnits const& __cordl_internal_get_m_PositionUnits() const;

constexpr ::GlobalNamespace::CinemachinePathBase_PositionUnits& __cordl_internal_get_m_PositionUnits() ;

constexpr float_t const& __cordl_internal_get_m_Speed() const;

constexpr float_t& __cordl_internal_get_m_Speed() ;

constexpr ::GlobalNamespace::CinemachineDollyCart_UpdateMethod const& __cordl_internal_get_m_UpdateMethod() const;

constexpr ::GlobalNamespace::CinemachineDollyCart_UpdateMethod& __cordl_internal_get_m_UpdateMethod() ;

constexpr void __cordl_internal_set_m_Path(::UnityW<::Unity::Cinemachine::CinemachinePathBase>  value) ;

constexpr void __cordl_internal_set_m_Position(float_t  value) ;

constexpr void __cordl_internal_set_m_PositionUnits(::GlobalNamespace::CinemachinePathBase_PositionUnits  value) ;

constexpr void __cordl_internal_set_m_Speed(float_t  value) ;

constexpr void __cordl_internal_set_m_UpdateMethod(::GlobalNamespace::CinemachineDollyCart_UpdateMethod  value) ;

/// @brief Method .ctor, addr 0xaecc094, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDollyCart() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDollyCart", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineDollyCart(CinemachineDollyCart && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineDollyCart", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineDollyCart(CinemachineDollyCart const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22400};

/// [Tooltip("The path to follow")]
/// @brief Field m_Path, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Unity::Cinemachine::CinemachinePathBase>  ___m_Path;

/// [Tooltip("When to move the cart, if Velocity is non-zero")]
/// @brief Field m_UpdateMethod, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineDollyCart_UpdateMethod  ___m_UpdateMethod;

/// [Tooltip("How to interpret the Path Position.  If set to Path Units, values are as follows: 0 represents the first waypoint on the path, 1 is the second, and so on.  Values in-between are points on the path in between the waypoints.  If set to Distance, then Path Position represents distance along the path.")]
/// @brief Field m_PositionUnits, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::CinemachinePathBase_PositionUnits  ___m_PositionUnits;

/// [Tooltip("Move the cart with this speed along the path.  The value is interpreted according to the Position Units setting.")]
/// [FormerlySerializedAs("m_Velocity")]
/// @brief Field m_Speed, offset: 0x30, size: 0x4, def value: None
 float_t  ___m_Speed;

/// [Tooltip("The position along the path at which the cart will be placed.  This can be animated directly or, if the velocity is non-zero, will be updated automatically.  The value is interpreted according to the Position Units setting.")]
/// [FormerlySerializedAs("m_CurrentDistance")]
/// @brief Field m_Position, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_Position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineDollyCart, ___m_Path) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDollyCart, ___m_UpdateMethod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDollyCart, ___m_PositionUnits) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDollyCart, ___m_Speed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineDollyCart, ___m_Position) == 0x34, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineDollyCart) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine
