#pragma once
// IWYU pragma private; include "GlobalNamespace/CritterSpawnTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CritterSpawnTrigger)
namespace Sirenix::OdinInspector {
template<typename T>
class ValueDropdownList_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CritterSpawnTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CritterSpawnTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CritterSpawnTrigger*, "", "CritterSpawnTrigger");
// Dependencies CrittersActor::CrittersActorType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CritterSpawnTrigger
class CORDL_TYPE CritterSpawnTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _nextSpawnTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__nextSpawnTime, put=__cordl_internal_set__nextSpawnTime)) float_t  _nextSpawnTime;

/// @brief Field critterType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_critterType, put=__cordl_internal_set_critterType)) int32_t  critterType;

/// @brief Field requiredSubObjectIndex, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredSubObjectIndex, put=__cordl_internal_set_requiredSubObjectIndex)) int32_t  requiredSubObjectIndex;

/// @brief Field spawnPoint, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPoint, put=__cordl_internal_set_spawnPoint)) ::UnityW<::UnityEngine::Transform>  spawnPoint;

/// @brief Field triggerActorName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerActorName, put=__cordl_internal_set_triggerActorName)) ::StringW  triggerActorName;

/// @brief Field triggerActorType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerActorType, put=__cordl_internal_set_triggerActorType)) ::GlobalNamespace::CrittersActor_CrittersActorType  triggerActorType;

/// @brief Field triggerCooldown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerCooldown, put=__cordl_internal_set_triggerCooldown)) float_t  triggerCooldown;

/// @brief Method GetCritterTypeList, addr 0x56f2ab8, size 0x68, virtual false, abstract: false, final false
inline ::Sirenix::OdinInspector::ValueDropdownList_1<int32_t>* GetCritterTypeList() ;

static inline ::GlobalNamespace::CritterSpawnTrigger* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x56f2d2c, size 0xac, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnTriggerEnter, addr 0x56f2b20, size 0x20c, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

constexpr float_t const& __cordl_internal_get__nextSpawnTime() const;

constexpr float_t& __cordl_internal_get__nextSpawnTime() ;

constexpr int32_t const& __cordl_internal_get_critterType() const;

constexpr int32_t& __cordl_internal_get_critterType() ;

constexpr int32_t const& __cordl_internal_get_requiredSubObjectIndex() const;

constexpr int32_t& __cordl_internal_get_requiredSubObjectIndex() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnPoint() ;

constexpr ::StringW const& __cordl_internal_get_triggerActorName() const;

constexpr ::StringW& __cordl_internal_get_triggerActorName() ;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& __cordl_internal_get_triggerActorType() const;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& __cordl_internal_get_triggerActorType() ;

constexpr float_t const& __cordl_internal_get_triggerCooldown() const;

constexpr float_t& __cordl_internal_get_triggerCooldown() ;

constexpr void __cordl_internal_set__nextSpawnTime(float_t  value) ;

constexpr void __cordl_internal_set_critterType(int32_t  value) ;

constexpr void __cordl_internal_set_requiredSubObjectIndex(int32_t  value) ;

constexpr void __cordl_internal_set_spawnPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_triggerActorName(::StringW  value) ;

constexpr void __cordl_internal_set_triggerActorType(::GlobalNamespace::CrittersActor_CrittersActorType  value) ;

constexpr void __cordl_internal_set_triggerCooldown(float_t  value) ;

/// @brief Method .ctor, addr 0x56f2dd8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CritterSpawnTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CritterSpawnTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CritterSpawnTrigger(CritterSpawnTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CritterSpawnTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CritterSpawnTrigger(CritterSpawnTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{116};

/// [Header("Trigger Settings")]
/// [SerializeField]
/// @brief Field triggerActorType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CrittersActor_CrittersActorType  ___triggerActorType;

/// [SerializeField]
/// @brief Field requiredSubObjectIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  ___requiredSubObjectIndex;

/// [SerializeField]
/// @brief Field triggerActorName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___triggerActorName;

/// [SerializeField]
/// @brief Field triggerCooldown, offset: 0x30, size: 0x4, def value: None
 float_t  ___triggerCooldown;

/// [Header("Spawn Settings")]
/// [SerializeField]
/// @brief Field spawnPoint, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnPoint;

/// [SerializeField]
/// @brief Field critterType, offset: 0x40, size: 0x4, def value: None
 int32_t  ___critterType;

/// @brief Field _nextSpawnTime, offset: 0x44, size: 0x4, def value: None
 float_t  ____nextSpawnTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CritterSpawnTrigger, ___triggerActorType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterSpawnTrigger, ___requiredSubObjectIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterSpawnTrigger, ___triggerActorName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterSpawnTrigger, ___triggerCooldown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterSpawnTrigger, ___spawnPoint) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterSpawnTrigger, ___critterType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CritterSpawnTrigger, ____nextSpawnTime) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CritterSpawnTrigger) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
