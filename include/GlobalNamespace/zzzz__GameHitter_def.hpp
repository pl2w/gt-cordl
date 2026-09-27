#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAttributeType_def.hpp"
#include "GlobalNamespace/zzzz__GameHitFx_def.hpp"
#include "GlobalNamespace/zzzz__GameHitType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameHitter)
namespace GlobalNamespace {
class GRAttributes;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GRTool;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct GameHitData;
}
namespace GlobalNamespace {
struct GameHitType;
}
namespace GlobalNamespace {
class GameHittable;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class IGameHitter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameHitter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameHitter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameHitter*, "", "GameHitter");
// Dependencies GRAttributeType, GameHitFx, GameHitType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameHitter
class CORDL_TYPE GameHitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field attributes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributes, put=__cordl_internal_set_attributes)) ::UnityW<::GlobalNamespace::GRAttributes>  attributes;

/// @brief Field components, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_components, put=__cordl_internal_set_components)) ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHitter*>*  components;

/// @brief Field damageAttribute, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_damageAttribute, put=__cordl_internal_set_damageAttribute)) ::GlobalNamespace::GRAttributeType  damageAttribute;

/// @brief Field flashDamageAttribute, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_flashDamageAttribute, put=__cordl_internal_set_flashDamageAttribute)) ::GlobalNamespace::GRAttributeType  flashDamageAttribute;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field hitCooldownEnd, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitCooldownEnd, put=__cordl_internal_set_hitCooldownEnd)) double_t  hitCooldownEnd;

/// @brief Field hitFx, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_hitFx, put=__cordl_internal_set_hitFx)) ::GlobalNamespace::GameHitFx  hitFx;

/// @brief Field hitOnCollision, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_hitOnCollision, put=__cordl_internal_set_hitOnCollision)) bool  hitOnCollision;

/// @brief Field hitType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitType, put=__cordl_internal_set_hitType)) ::GlobalNamespace::GameHitType  hitType;

/// @brief Field knockbackMultiplier, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackMultiplier, put=__cordl_internal_set_knockbackMultiplier)) float_t  knockbackMultiplier;

/// @brief Field maxImpulseSpeed, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxImpulseSpeed, put=__cordl_internal_set_maxImpulseSpeed)) float_t  maxImpulseSpeed;

/// @brief Field minSwingSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSwingSpeed, put=__cordl_internal_set_minSwingSpeed)) float_t  minSwingSpeed;

/// @brief Field shieldDamageAttribute, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_shieldDamageAttribute, put=__cordl_internal_set_shieldDamageAttribute)) ::GlobalNamespace::GRAttributeType  shieldDamageAttribute;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method ApplyHit, addr 0x58343e8, size 0x398, virtual false, abstract: false, final false
inline void ApplyHit(::GlobalNamespace::GameHitData  hitData) ;

/// @brief Method ApplyHitToPlayer, addr 0x5834f84, size 0x198, virtual false, abstract: false, final false
inline void ApplyHitToPlayer(::GlobalNamespace::GRPlayer*  player, ::UnityEngine::Vector3  hitPosition) ;

/// @brief Method Awake, addr 0x5834b3c, size 0xe0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcHitAmount, addr 0x583511c, size 0x11c, virtual false, abstract: false, final false
inline int32_t CalcHitAmount(::GlobalNamespace::GameHitType  hitType, ::GlobalNamespace::GameHittable*  hittable, ::GlobalNamespace::GameEntity*  hitByEntity) ;

/// @brief Method GetParentEnemy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::MonoBehaviour*>)
inline T GetParentEnemy(::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::GameHitter* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5835238, size 0x4c8, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnEntityDestroy, addr 0x5834d64, size 0x4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5834c1c, size 0x104, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5834d68, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  nextState) ;

/// @brief Method OnToolUpgraded, addr 0x5834d20, size 0x44, virtual false, abstract: false, final false
inline void OnToolUpgraded(::GlobalNamespace::GRTool*  tool) ;

/// @brief Method PlayVibration, addr 0x5834d6c, size 0x150, virtual false, abstract: false, final false
inline void PlayVibration(float_t  strength, float_t  duration) ;

constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& __cordl_internal_get_attributes() const;

constexpr ::UnityW<::GlobalNamespace::GRAttributes>& __cordl_internal_get_attributes() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHitter*>* const& __cordl_internal_get_components() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHitter*>*& __cordl_internal_get_components() ;

constexpr ::GlobalNamespace::GRAttributeType const& __cordl_internal_get_damageAttribute() const;

constexpr ::GlobalNamespace::GRAttributeType& __cordl_internal_get_damageAttribute() ;

constexpr ::GlobalNamespace::GRAttributeType const& __cordl_internal_get_flashDamageAttribute() const;

constexpr ::GlobalNamespace::GRAttributeType& __cordl_internal_get_flashDamageAttribute() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr double_t const& __cordl_internal_get_hitCooldownEnd() const;

constexpr double_t& __cordl_internal_get_hitCooldownEnd() ;

constexpr ::GlobalNamespace::GameHitFx const& __cordl_internal_get_hitFx() const;

constexpr ::GlobalNamespace::GameHitFx& __cordl_internal_get_hitFx() ;

constexpr bool const& __cordl_internal_get_hitOnCollision() const;

constexpr bool& __cordl_internal_get_hitOnCollision() ;

constexpr ::GlobalNamespace::GameHitType const& __cordl_internal_get_hitType() const;

constexpr ::GlobalNamespace::GameHitType& __cordl_internal_get_hitType() ;

constexpr float_t const& __cordl_internal_get_knockbackMultiplier() const;

constexpr float_t& __cordl_internal_get_knockbackMultiplier() ;

constexpr float_t const& __cordl_internal_get_maxImpulseSpeed() const;

constexpr float_t& __cordl_internal_get_maxImpulseSpeed() ;

constexpr float_t const& __cordl_internal_get_minSwingSpeed() const;

constexpr float_t& __cordl_internal_get_minSwingSpeed() ;

constexpr ::GlobalNamespace::GRAttributeType const& __cordl_internal_get_shieldDamageAttribute() const;

constexpr ::GlobalNamespace::GRAttributeType& __cordl_internal_get_shieldDamageAttribute() ;

constexpr void __cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value) ;

constexpr void __cordl_internal_set_components(::System::Collections::Generic::List_1<::GlobalNamespace::IGameHitter*>*  value) ;

constexpr void __cordl_internal_set_damageAttribute(::GlobalNamespace::GRAttributeType  value) ;

constexpr void __cordl_internal_set_flashDamageAttribute(::GlobalNamespace::GRAttributeType  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_hitCooldownEnd(double_t  value) ;

constexpr void __cordl_internal_set_hitFx(::GlobalNamespace::GameHitFx  value) ;

constexpr void __cordl_internal_set_hitOnCollision(bool  value) ;

constexpr void __cordl_internal_set_hitType(::GlobalNamespace::GameHitType  value) ;

constexpr void __cordl_internal_set_knockbackMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_maxImpulseSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minSwingSpeed(float_t  value) ;

constexpr void __cordl_internal_set_shieldDamageAttribute(::GlobalNamespace::GRAttributeType  value) ;

/// @brief Method .ctor, addr 0x5835988, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameHitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameHitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameHitter(GameHitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameHitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameHitter(GameHitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1770};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field hitType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GameHitType  ___hitType;

/// @brief Field damageAttribute, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::GRAttributeType  ___damageAttribute;

/// @brief Field flashDamageAttribute, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::GRAttributeType  ___flashDamageAttribute;

/// @brief Field shieldDamageAttribute, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::GRAttributeType  ___shieldDamageAttribute;

/// @brief Field minSwingSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___minSwingSpeed;

/// @brief Field hitFx, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::GameHitFx  ___hitFx;

/// @brief Field attributes, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRAttributes>  ___attributes;

/// @brief Field knockbackMultiplier, offset: 0x58, size: 0x4, def value: None
 float_t  ___knockbackMultiplier;

/// @brief Field maxImpulseSpeed, offset: 0x5c, size: 0x4, def value: None
 float_t  ___maxImpulseSpeed;

/// @brief Field components, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IGameHitter*>*  ___components;

/// @brief Field hitCooldownEnd, offset: 0x68, size: 0x8, def value: None
 double_t  ___hitCooldownEnd;

/// @brief Field hitOnCollision, offset: 0x70, size: 0x1, def value: None
 bool  ___hitOnCollision;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameHitter, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___hitType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___damageAttribute) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___flashDamageAttribute) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___shieldDamageAttribute) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___minSwingSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___hitFx) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___attributes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___knockbackMultiplier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___maxImpulseSpeed) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___components) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___hitCooldownEnd) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitter, ___hitOnCollision) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameHitter) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
