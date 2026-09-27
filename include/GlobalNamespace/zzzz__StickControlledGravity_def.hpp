#pragma once
// IWYU pragma private; include "GlobalNamespace/StickControlledGravity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StickControlledGravity)
namespace GorillaTag::Gravity {
class PersonalGravityZone;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class StickControlledGravity;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StickControlledGravity*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StickControlledGravity*, "", "StickControlledGravity");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.XR.XRNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: StickControlledGravity
class CORDL_TYPE StickControlledGravity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GlobalNamespace::StickControlledGravity>  Instance;

/// @brief Field deadzone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_deadzone, put=__cordl_internal_set_deadzone)) float_t  deadzone;

/// @brief Field enableXAxis, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableXAxis, put=__cordl_internal_set_enableXAxis)) bool  enableXAxis;

/// @brief Field stickHand, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_stickHand, put=__cordl_internal_set_stickHand)) ::UnityEngine::XR::XRNode  stickHand;

/// @brief Field triggered, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggered, put=__cordl_internal_set_triggered)) bool  triggered;

/// @brief Field zone, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::UnityW<::GorillaTag::Gravity::PersonalGravityZone>  zone;

static inline ::GlobalNamespace::StickControlledGravity* New_ctor() ;

/// @brief Method OnDisable, addr 0x5abc2b0, size 0x78, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5abc238, size 0x78, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInputUpdate, addr 0x5abc404, size 0x390, virtual false, abstract: false, final false
inline void OnInputUpdate() ;

/// @brief Method Register, addr 0x5abc15c, size 0xdc, virtual false, abstract: false, final false
inline void Register() ;

/// @brief Method SnapToAxis, addr 0x5abc794, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 SnapToAxis(::UnityEngine::Vector3  v) ;

/// @brief Method Start, addr 0x5abc0e0, size 0x7c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Unregister, addr 0x5abc328, size 0xdc, virtual false, abstract: false, final false
inline void Unregister() ;

constexpr float_t const& __cordl_internal_get_deadzone() const;

constexpr float_t& __cordl_internal_get_deadzone() ;

constexpr bool const& __cordl_internal_get_enableXAxis() const;

constexpr bool& __cordl_internal_get_enableXAxis() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_stickHand() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_stickHand() ;

constexpr bool const& __cordl_internal_get_triggered() const;

constexpr bool& __cordl_internal_get_triggered() ;

constexpr ::UnityW<::GorillaTag::Gravity::PersonalGravityZone> const& __cordl_internal_get_zone() const;

constexpr ::UnityW<::GorillaTag::Gravity::PersonalGravityZone>& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_deadzone(float_t  value) ;

constexpr void __cordl_internal_set_enableXAxis(bool  value) ;

constexpr void __cordl_internal_set_stickHand(::UnityEngine::XR::XRNode  value) ;

constexpr void __cordl_internal_set_triggered(bool  value) ;

constexpr void __cordl_internal_set_zone(::UnityW<::GorillaTag::Gravity::PersonalGravityZone>  value) ;

/// @brief Method .ctor, addr 0x5abc7f4, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::StickControlledGravity> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::GlobalNamespace::StickControlledGravity>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StickControlledGravity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StickControlledGravity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StickControlledGravity(StickControlledGravity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StickControlledGravity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StickControlledGravity(StickControlledGravity const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3312};

/// [SerializeField]
/// @brief Field deadzone, offset: 0x20, size: 0x4, def value: None
 float_t  ___deadzone;

/// [SerializeField]
/// @brief Field stickHand, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___stickHand;

/// [SerializeField]
/// @brief Field enableXAxis, offset: 0x28, size: 0x1, def value: None
 bool  ___enableXAxis;

/// @brief Field triggered, offset: 0x29, size: 0x1, def value: None
 bool  ___triggered;

/// @brief Field zone, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Gravity::PersonalGravityZone>  ___zone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StickControlledGravity, ___deadzone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickControlledGravity, ___stickHand) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickControlledGravity, ___enableXAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickControlledGravity, ___triggered) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickControlledGravity, ___zone) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StickControlledGravity) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
