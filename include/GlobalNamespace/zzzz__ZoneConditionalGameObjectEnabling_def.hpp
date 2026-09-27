#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneConditionalGameObjectEnabling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ZoneConditionalGameObjectEnabling)
// Forward declare root types
namespace GlobalNamespace {
class ZoneConditionalGameObjectEnabling;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneConditionalGameObjectEnabling*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneConditionalGameObjectEnabling*, "", "ZoneConditionalGameObjectEnabling");
// Dependencies GTZone, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneConditionalGameObjectEnabling
class CORDL_TYPE ZoneConditionalGameObjectEnabling : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field gameObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjects;

/// @brief Field invisibleWhileLoaded, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_invisibleWhileLoaded, put=__cordl_internal_set_invisibleWhileLoaded)) bool  invisibleWhileLoaded;

/// @brief Field zone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

static inline ::GlobalNamespace::ZoneConditionalGameObjectEnabling* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56bc2bc, size 0xf0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnZoneChanged, addr 0x56bc1e8, size 0xd4, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method Start, addr 0x56bc0f0, size 0xf8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjects() ;

constexpr bool const& __cordl_internal_get_invisibleWhileLoaded() const;

constexpr bool& __cordl_internal_get_invisibleWhileLoaded() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_invisibleWhileLoaded(bool  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x56bc3ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneConditionalGameObjectEnabling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneConditionalGameObjectEnabling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneConditionalGameObjectEnabling(ZoneConditionalGameObjectEnabling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneConditionalGameObjectEnabling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneConditionalGameObjectEnabling(ZoneConditionalGameObjectEnabling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{973};

/// [SerializeField]
/// @brief Field zone, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [SerializeField]
/// @brief Field invisibleWhileLoaded, offset: 0x24, size: 0x1, def value: None
 bool  ___invisibleWhileLoaded;

/// [SerializeField]
/// @brief Field gameObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneConditionalGameObjectEnabling, ___zone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalGameObjectEnabling, ___invisibleWhileLoaded) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalGameObjectEnabling, ___gameObjects) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneConditionalGameObjectEnabling) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
