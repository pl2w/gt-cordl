#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneConditionalComponentEnabling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ZoneConditionalComponentEnabling)
// Forward declare root types
namespace GlobalNamespace {
class ZoneConditionalComponentEnabling;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneConditionalComponentEnabling*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneConditionalComponentEnabling*, "", "ZoneConditionalComponentEnabling");
// Dependencies GTZone, UnityEngine.Behaviour, UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneConditionalComponentEnabling
class CORDL_TYPE ZoneConditionalComponentEnabling : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field components, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_components, put=__cordl_internal_set_components)) ::ArrayW<::UnityW<::UnityEngine::Behaviour>>  components;

/// @brief Field invisibleWhileLoaded, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_invisibleWhileLoaded, put=__cordl_internal_set_invisibleWhileLoaded)) bool  invisibleWhileLoaded;

/// @brief Field m_colliders, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_colliders, put=__cordl_internal_set_m_colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  m_colliders;

/// @brief Field m_renderers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_renderers, put=__cordl_internal_set_m_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  m_renderers;

/// @brief Field zone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

static inline ::GlobalNamespace::ZoneConditionalComponentEnabling* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56bbff8, size 0xf0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnZoneChanged, addr 0x56bbe00, size 0x1f8, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method Start, addr 0x56bbd08, size 0xf8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& __cordl_internal_get_components() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& __cordl_internal_get_components() ;

constexpr bool const& __cordl_internal_get_invisibleWhileLoaded() const;

constexpr bool& __cordl_internal_get_invisibleWhileLoaded() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_m_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_m_colliders() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_m_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_m_renderers() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr void __cordl_internal_set_components(::ArrayW<::UnityW<::UnityEngine::Behaviour>>  value) ;

constexpr void __cordl_internal_set_invisibleWhileLoaded(bool  value) ;

constexpr void __cordl_internal_set_m_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_m_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

/// @brief Method .ctor, addr 0x56bc0e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneConditionalComponentEnabling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneConditionalComponentEnabling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneConditionalComponentEnabling(ZoneConditionalComponentEnabling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneConditionalComponentEnabling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneConditionalComponentEnabling(ZoneConditionalComponentEnabling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{972};

/// [SerializeField]
/// @brief Field zone, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [SerializeField]
/// @brief Field invisibleWhileLoaded, offset: 0x24, size: 0x1, def value: None
 bool  ___invisibleWhileLoaded;

/// [SerializeField]
/// @brief Field components, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Behaviour>>  ___components;

/// [SerializeField]
/// @brief Field m_renderers, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___m_renderers;

/// [SerializeField]
/// @brief Field m_colliders, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___m_colliders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneConditionalComponentEnabling, ___zone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalComponentEnabling, ___invisibleWhileLoaded) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalComponentEnabling, ___components) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalComponentEnabling, ___m_renderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalComponentEnabling, ___m_colliders) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneConditionalComponentEnabling) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
