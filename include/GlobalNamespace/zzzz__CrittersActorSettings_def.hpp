#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CrittersActorSettings)
namespace GlobalNamespace {
class CrittersActor;
}
namespace UnityEngine {
class CapsuleCollider;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersActorSettings;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersActorSettings*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersActorSettings*, "", "CrittersActorSettings");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersActorSettings
class CORDL_TYPE CrittersActorSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field canBeStored, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_canBeStored, put=__cordl_internal_set_canBeStored)) bool  canBeStored;

/// @brief Field equipmentStoreTriggerCollider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_equipmentStoreTriggerCollider, put=__cordl_internal_set_equipmentStoreTriggerCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  equipmentStoreTriggerCollider;

/// @brief Field parentActor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentActor, put=__cordl_internal_set_parentActor)) ::UnityW<::GlobalNamespace::CrittersActor>  parentActor;

/// @brief Field storeCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeCollider, put=__cordl_internal_set_storeCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  storeCollider;

/// @brief Field usesRB, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_usesRB, put=__cordl_internal_set_usesRB)) bool  usesRB;

static inline ::GlobalNamespace::CrittersActorSettings* New_ctor() ;

/// @brief Method OnEnable, addr 0x55fab48, size 0xc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateActorSettings, addr 0x55fab54, size 0x6c, virtual true, abstract: false, final false
inline void UpdateActorSettings() ;

constexpr bool const& __cordl_internal_get_canBeStored() const;

constexpr bool& __cordl_internal_get_canBeStored() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_equipmentStoreTriggerCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_equipmentStoreTriggerCollider() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_parentActor() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_parentActor() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_storeCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_storeCollider() ;

constexpr bool const& __cordl_internal_get_usesRB() const;

constexpr bool& __cordl_internal_get_usesRB() ;

constexpr void __cordl_internal_set_canBeStored(bool  value) ;

constexpr void __cordl_internal_set_equipmentStoreTriggerCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_parentActor(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_storeCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_usesRB(bool  value) ;

/// @brief Method .ctor, addr 0x55fabc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersActorSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersActorSettings(CrittersActorSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersActorSettings(CrittersActorSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{79};

/// @brief Field parentActor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___parentActor;

/// @brief Field usesRB, offset: 0x28, size: 0x1, def value: None
 bool  ___usesRB;

/// @brief Field canBeStored, offset: 0x29, size: 0x1, def value: None
 bool  ___canBeStored;

/// @brief Field storeCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___storeCollider;

/// @brief Field equipmentStoreTriggerCollider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___equipmentStoreTriggerCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersActorSettings, ___parentActor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSettings, ___usesRB) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSettings, ___canBeStored) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSettings, ___storeCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSettings, ___equipmentStoreTriggerCollider) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersActorSettings) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
