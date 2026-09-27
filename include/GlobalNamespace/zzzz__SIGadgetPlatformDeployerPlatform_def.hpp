#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetPlatformDeployerPlatform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIGadgetPlatformDeployerPlatform)
namespace GlobalNamespace {
class ISIGameDeployable;
}
namespace GlobalNamespace {
struct SIUpgradeSet;
}
namespace System {
class Action;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetPlatformDeployerPlatform;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetPlatformDeployerPlatform*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetPlatformDeployerPlatform*, "", "SIGadgetPlatformDeployerPlatform");
// Dependencies UnityEngine.Bounds, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetPlatformDeployerPlatform
class CORDL_TYPE SIGadgetPlatformDeployerPlatform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnDisabled, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDisabled, put=__cordl_internal_set_OnDisabled)) ::System::Action*  OnDisabled;

/// @brief Field activeCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeCollider, put=__cordl_internal_set_activeCollider)) ::UnityW<::UnityEngine::BoxCollider>  activeCollider;

/// @brief Field checkBounds, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get_checkBounds, put=__cordl_internal_set_checkBounds)) ::UnityEngine::Bounds  checkBounds;

/// @brief Field checkOffset, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_checkOffset, put=__cordl_internal_set_checkOffset)) ::UnityEngine::Vector3  checkOffset;

/// @brief Field checkRot, offset 0x64, size 0x10 
 __declspec(property(get=__cordl_internal_get_checkRot, put=__cordl_internal_set_checkRot)) ::UnityEngine::Quaternion  checkRot;

/// @brief Field defaultDuration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultDuration, put=__cordl_internal_set_defaultDuration)) float_t  defaultDuration;

/// @brief Field extendedDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendedDuration, put=__cordl_internal_set_extendedDuration)) float_t  extendedDuration;

/// @brief Field extendedDurationFrame, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_extendedDurationFrame, put=__cordl_internal_set_extendedDurationFrame)) ::UnityW<::UnityEngine::GameObject>  extendedDurationFrame;

/// @brief Field isOverlappingHead, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOverlappingHead, put=__cordl_internal_set_isOverlappingHead)) bool  isOverlappingHead;

/// @brief Field timeToDie, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeToDie, put=__cordl_internal_set_timeToDie)) float_t  timeToDie;

/// @brief Convert operator to "::GlobalNamespace::ISIGameDeployable"
constexpr operator  ::GlobalNamespace::ISIGameDeployable*() noexcept;

/// @brief Method ApplyUpgrades, addr 0x58e2658, size 0x174, virtual true, abstract: false, final true
inline void ApplyUpgrades(::GlobalNamespace::SIUpgradeSet  upgrades) ;

/// @brief Method CheckHeadOverlap, addr 0x58e27cc, size 0x2c8, virtual false, abstract: false, final false
inline void CheckHeadOverlap() ;

/// @brief Method LateUpdate, addr 0x58e2a94, size 0xb4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SIGadgetPlatformDeployerPlatform* New_ctor() ;

/// @brief Method OnDisable, addr 0x58e2b48, size 0x34, virtual false, abstract: false, final false
inline void OnDisable() ;

constexpr ::System::Action* const& __cordl_internal_get_OnDisabled() const;

constexpr ::System::Action*& __cordl_internal_get_OnDisabled() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_activeCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_activeCollider() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_checkBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_checkBounds() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_checkOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_checkOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_checkRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_checkRot() ;

constexpr float_t const& __cordl_internal_get_defaultDuration() const;

constexpr float_t& __cordl_internal_get_defaultDuration() ;

constexpr float_t const& __cordl_internal_get_extendedDuration() const;

constexpr float_t& __cordl_internal_get_extendedDuration() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_extendedDurationFrame() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_extendedDurationFrame() ;

constexpr bool const& __cordl_internal_get_isOverlappingHead() const;

constexpr bool& __cordl_internal_get_isOverlappingHead() ;

constexpr float_t const& __cordl_internal_get_timeToDie() const;

constexpr float_t& __cordl_internal_get_timeToDie() ;

constexpr void __cordl_internal_set_OnDisabled(::System::Action*  value) ;

constexpr void __cordl_internal_set_activeCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_checkBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_checkOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_checkRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_defaultDuration(float_t  value) ;

constexpr void __cordl_internal_set_extendedDuration(float_t  value) ;

constexpr void __cordl_internal_set_extendedDurationFrame(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_isOverlappingHead(bool  value) ;

constexpr void __cordl_internal_set_timeToDie(float_t  value) ;

/// @brief Method .ctor, addr 0x58e2b7c, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::ISIGameDeployable"
constexpr ::GlobalNamespace::ISIGameDeployable* i___GlobalNamespace__ISIGameDeployable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIGadgetPlatformDeployerPlatform() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetPlatformDeployerPlatform", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIGadgetPlatformDeployerPlatform(SIGadgetPlatformDeployerPlatform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetPlatformDeployerPlatform", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetPlatformDeployerPlatform(SIGadgetPlatformDeployerPlatform const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{275};

/// [SerializeField]
/// @brief Field extendedDurationFrame, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___extendedDurationFrame;

/// [SerializeField]
/// @brief Field defaultDuration, offset: 0x28, size: 0x4, def value: None
 float_t  ___defaultDuration;

/// [SerializeField]
/// @brief Field extendedDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___extendedDuration;

/// [SerializeField]
/// @brief Field activeCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___activeCollider;

/// @brief Field isOverlappingHead, offset: 0x38, size: 0x1, def value: None
 bool  ___isOverlappingHead;

/// @brief Field timeToDie, offset: 0x3c, size: 0x4, def value: None
 float_t  ___timeToDie;

/// @brief Field checkBounds, offset: 0x40, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___checkBounds;

/// @brief Field checkOffset, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___checkOffset;

/// @brief Field checkRot, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___checkRot;

/// @brief Field OnDisabled, offset: 0x78, size: 0x8, def value: None
 ::System::Action*  ___OnDisabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___extendedDurationFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___defaultDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___extendedDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___activeCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___isOverlappingHead) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___timeToDie) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___checkBounds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___checkOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___checkRot) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform, ___OnDisabled) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIGadgetPlatformDeployerPlatform) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
