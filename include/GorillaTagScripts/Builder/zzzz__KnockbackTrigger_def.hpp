#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/KnockbackTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KnockbackTrigger)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class KnockbackTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::KnockbackTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::KnockbackTrigger*, "GorillaTagScripts.Builder", "KnockbackTrigger");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.KnockbackTrigger
class CORDL_TYPE KnockbackTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_TriggeredThisFrame)) bool  TriggeredThisFrame;

/// @brief Field collidersEntered, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersEntered, put=__cordl_internal_set_collidersEntered)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  collidersEntered;

/// @brief Field hasCheckedZone, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCheckedZone, put=__cordl_internal_set_hasCheckedZone)) bool  hasCheckedZone;

/// @brief Field ignoreScale, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreScale, put=__cordl_internal_set_ignoreScale)) bool  ignoreScale;

/// @brief Field impactFX, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_impactFX, put=__cordl_internal_set_impactFX)) ::UnityW<::UnityEngine::GameObject>  impactFX;

/// @brief Field knockbackVelocity, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackVelocity, put=__cordl_internal_set_knockbackVelocity)) float_t  knockbackVelocity;

/// @brief Field lastTriggeredFrame, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTriggeredFrame, put=__cordl_internal_set_lastTriggeredFrame)) int32_t  lastTriggeredFrame;

/// @brief Field localAxis, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_localAxis, put=__cordl_internal_set_localAxis)) ::UnityEngine::Vector3  localAxis;

/// @brief Field onlySmallMonke, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlySmallMonke, put=__cordl_internal_set_onlySmallMonke)) bool  onlySmallMonke;

/// @brief Field triggerVolume, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerVolume, put=__cordl_internal_set_triggerVolume)) ::UnityW<::UnityEngine::BoxCollider>  triggerVolume;

/// @brief Method CheckZone, addr 0x5c34b14, size 0x124, virtual false, abstract: false, final false
inline void CheckZone() ;

static inline ::GorillaTagScripts::Builder::KnockbackTrigger* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c354bc, size 0x70, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnTriggerEnter, addr 0x5c34c38, size 0x7c8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5c35400, size 0xbc, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_collidersEntered() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_collidersEntered() ;

constexpr bool const& __cordl_internal_get_hasCheckedZone() const;

constexpr bool& __cordl_internal_get_hasCheckedZone() ;

constexpr bool const& __cordl_internal_get_ignoreScale() const;

constexpr bool& __cordl_internal_get_ignoreScale() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_impactFX() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_impactFX() ;

constexpr float_t const& __cordl_internal_get_knockbackVelocity() const;

constexpr float_t& __cordl_internal_get_knockbackVelocity() ;

constexpr int32_t const& __cordl_internal_get_lastTriggeredFrame() const;

constexpr int32_t& __cordl_internal_get_lastTriggeredFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localAxis() ;

constexpr bool const& __cordl_internal_get_onlySmallMonke() const;

constexpr bool& __cordl_internal_get_onlySmallMonke() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_triggerVolume() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_triggerVolume() ;

constexpr void __cordl_internal_set_collidersEntered(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_hasCheckedZone(bool  value) ;

constexpr void __cordl_internal_set_ignoreScale(bool  value) ;

constexpr void __cordl_internal_set_impactFX(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_knockbackVelocity(float_t  value) ;

constexpr void __cordl_internal_set_lastTriggeredFrame(int32_t  value) ;

constexpr void __cordl_internal_set_localAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_onlySmallMonke(bool  value) ;

constexpr void __cordl_internal_set_triggerVolume(::UnityW<::UnityEngine::BoxCollider>  value) ;

/// @brief Method .ctor, addr 0x5c3552c, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_TriggeredThisFrame, addr 0x5c34af4, size 0x20, virtual false, abstract: false, final false
inline bool get_TriggeredThisFrame() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KnockbackTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KnockbackTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KnockbackTrigger(KnockbackTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KnockbackTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KnockbackTrigger(KnockbackTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4181};

/// [SerializeField]
/// @brief Field triggerVolume, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___triggerVolume;

/// [SerializeField]
/// @brief Field knockbackVelocity, offset: 0x28, size: 0x4, def value: None
 float_t  ___knockbackVelocity;

/// [SerializeField]
/// @brief Field localAxis, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localAxis;

/// [SerializeField]
/// @brief Field impactFX, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___impactFX;

/// [SerializeField]
/// @brief Field onlySmallMonke, offset: 0x40, size: 0x1, def value: None
 bool  ___onlySmallMonke;

/// @brief Field hasCheckedZone, offset: 0x41, size: 0x1, def value: None
 bool  ___hasCheckedZone;

/// @brief Field ignoreScale, offset: 0x42, size: 0x1, def value: None
 bool  ___ignoreScale;

/// @brief Field lastTriggeredFrame, offset: 0x44, size: 0x4, def value: None
 int32_t  ___lastTriggeredFrame;

/// @brief Field collidersEntered, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___collidersEntered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::KnockbackTrigger, ___triggerVolume) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::KnockbackTrigger, ___knockbackVelocity) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::KnockbackTrigger, ___localAxis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::KnockbackTrigger, ___impactFX) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::KnockbackTrigger, ___onlySmallMonke) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::KnockbackTrigger, ___hasCheckedZone) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::KnockbackTrigger, ___ignoreScale) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::KnockbackTrigger, ___lastTriggeredFrame) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::KnockbackTrigger, ___collidersEntered) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::KnockbackTrigger) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
