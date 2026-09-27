#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/MonkeGravityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Gravity/zzzz__GravityInfo_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonkeGravityManager)
namespace GlobalNamespace {
template<typename T>
class CallbackContainerUnique_1;
}
namespace GorillaTag::Gravity {
class BasicGravityZone;
}
namespace GorillaTag::Gravity {
struct GravityInfo;
}
namespace GorillaTag::Gravity {
class MonkeGravityController;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTag::Gravity {
class MonkeGravityManager;
}
// Write type traits
MARK_REF_T(::GorillaTag::Gravity::MonkeGravityManager*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Gravity::MonkeGravityManager*, "GorillaTag.Gravity", "MonkeGravityManager");
// Dependencies GorillaTag.Gravity.GravityInfo, UnityEngine.MonoBehaviour
namespace GorillaTag::Gravity {
// Is value type: false
// CS Name: GorillaTag.Gravity.MonkeGravityManager
class CORDL_TYPE MonkeGravityManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field defaultGravityStrength, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultGravityStrength, put=__cordl_internal_set_defaultGravityStrength)) float_t  defaultGravityStrength;

/// @brief Field defaultRotationSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultRotationSpeed, put=__cordl_internal_set_defaultRotationSpeed)) float_t  defaultRotationSpeed;

/// @brief Field k_allowedColliders, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_allowedColliders, put=setStaticF_k_allowedColliders)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  k_allowedColliders;

/// @brief Field k_controllers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_controllers, put=setStaticF_k_controllers)) ::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  k_controllers;

/// @brief Field k_defaultGravityInfo, offset 0xffffffff, size 0x24 
 __declspec(property(get=getStaticF_k_defaultGravityInfo, put=setStaticF_k_defaultGravityInfo)) ::GorillaTag::Gravity::GravityInfo  k_defaultGravityInfo;

/// @brief Field k_zones, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_zones, put=setStaticF_k_zones)) ::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  k_zones;

/// @brief Method AddGravityCallback, addr 0x5d37b1c, size 0x74, virtual false, abstract: false, final false
static inline void AddGravityCallback(::GorillaTag::Gravity::BasicGravityZone*  zone) ;

/// @brief Method AddMonkeGravityController, addr 0x5d39860, size 0x104, virtual false, abstract: false, final false
static inline void AddMonkeGravityController(::GorillaTag::Gravity::MonkeGravityController*  gravity) ;

/// @brief Method Awake, addr 0x5d3affc, size 0x174, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x5d3b170, size 0xa4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetMonkeGravityController, addr 0x5d37c24, size 0xc8, virtual false, abstract: false, final false
static inline ::System::ValueTuple_2<bool,::UnityW<::GorillaTag::Gravity::MonkeGravityController>> GetMonkeGravityController(::UnityEngine::Collider*  collider) ;

static inline ::GorillaTag::Gravity::MonkeGravityManager* New_ctor() ;

/// @brief Method RemoveGravityCallback, addr 0x5d36e54, size 0x74, virtual false, abstract: false, final false
static inline void RemoveGravityCallback(::GorillaTag::Gravity::BasicGravityZone*  zone) ;

/// @brief Method RemoveMonkeGravityController, addr 0x5d399ec, size 0x100, virtual false, abstract: false, final false
static inline void RemoveMonkeGravityController(::GorillaTag::Gravity::MonkeGravityController*  gravity) ;

constexpr float_t const& __cordl_internal_get_defaultGravityStrength() const;

constexpr float_t& __cordl_internal_get_defaultGravityStrength() ;

constexpr float_t const& __cordl_internal_get_defaultRotationSpeed() const;

constexpr float_t& __cordl_internal_get_defaultRotationSpeed() ;

constexpr void __cordl_internal_set_defaultGravityStrength(float_t  value) ;

constexpr void __cordl_internal_set_defaultRotationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0x5d3b280, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaTag::Gravity::MonkeGravityController>>* getStaticF_k_allowedColliders() ;

static inline ::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>* getStaticF_k_controllers() ;

static inline ::GorillaTag::Gravity::GravityInfo getStaticF_k_defaultGravityInfo() ;

static inline ::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>* getStaticF_k_zones() ;

/// @brief Method get_DefaultGravityInfo, addr 0x5d3b214, size 0x6c, virtual false, abstract: false, final false
static inline ::GorillaTag::Gravity::GravityInfo get_DefaultGravityInfo() ;

static inline void setStaticF_k_allowedColliders(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  value) ;

static inline void setStaticF_k_controllers(::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::MonkeGravityController>>*  value) ;

static inline void setStaticF_k_defaultGravityInfo(::GorillaTag::Gravity::GravityInfo  value) ;

static inline void setStaticF_k_zones(::GlobalNamespace::CallbackContainerUnique_1<::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeGravityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeGravityManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeGravityManager(MonkeGravityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeGravityManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeGravityManager(MonkeGravityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4686};

/// [SerializeField]
/// @brief Field defaultRotationSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___defaultRotationSpeed;

/// [SerializeField]
/// @brief Field defaultGravityStrength, offset: 0x24, size: 0x4, def value: None
 float_t  ___defaultGravityStrength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityManager, ___defaultRotationSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Gravity::MonkeGravityManager, ___defaultGravityStrength) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Gravity::MonkeGravityManager) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Gravity
