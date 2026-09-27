#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneConditionalVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ZoneConditionalVisibility)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ZoneConditionalVisibility;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneConditionalVisibility*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneConditionalVisibility*, "", "ZoneConditionalVisibility");
// Dependencies GTZone, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneConditionalVisibility
class CORDL_TYPE ZoneConditionalVisibility : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field invisibleWhileLoaded, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_invisibleWhileLoaded, put=__cordl_internal_set_invisibleWhileLoaded)) bool  invisibleWhileLoaded;

/// @brief Field renderers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers;

/// @brief Field renderersOnly, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_renderersOnly, put=__cordl_internal_set_renderersOnly)) bool  renderersOnly;

/// @brief Field zone, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_zone, put=__cordl_internal_set_zone)) ::GlobalNamespace::GTZone  zone;

/// @brief Field zones, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::ArrayW<::GlobalNamespace::GTZone>  zones;

/// @brief Method Awake, addr 0x56bc3b4, size 0xc4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InAnyZone, addr 0x56bc870, size 0x68, virtual false, abstract: false, final false
inline bool InAnyZone() ;

static inline ::GlobalNamespace::ZoneConditionalVisibility* New_ctor() ;

/// @brief Method OnDestroy, addr 0x56bc780, size 0xf0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnZoneChanged, addr 0x56bc570, size 0x210, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method Start, addr 0x56bc478, size 0xf8, virtual false, abstract: false, final false
inline void Start() ;

constexpr bool const& __cordl_internal_get_invisibleWhileLoaded() const;

constexpr bool& __cordl_internal_get_invisibleWhileLoaded() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_renderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_renderers() ;

constexpr bool const& __cordl_internal_get_renderersOnly() const;

constexpr bool& __cordl_internal_get_renderersOnly() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_zone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_zone() ;

constexpr ::ArrayW<::GlobalNamespace::GTZone> const& __cordl_internal_get_zones() const;

constexpr ::ArrayW<::GlobalNamespace::GTZone>& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_invisibleWhileLoaded(bool  value) ;

constexpr void __cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_renderersOnly(bool  value) ;

constexpr void __cordl_internal_set_zone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value) ;

/// @brief Method .ctor, addr 0x56bc8d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneConditionalVisibility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneConditionalVisibility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneConditionalVisibility(ZoneConditionalVisibility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneConditionalVisibility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneConditionalVisibility(ZoneConditionalVisibility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{974};

/// [SerializeField]
/// @brief Field zone, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___zone;

/// [SerializeField]
/// @brief Field zones, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTZone>  ___zones;

/// [SerializeField]
/// @brief Field invisibleWhileLoaded, offset: 0x30, size: 0x1, def value: None
 bool  ___invisibleWhileLoaded;

/// [SerializeField]
/// @brief Field renderersOnly, offset: 0x31, size: 0x1, def value: None
 bool  ___renderersOnly;

/// @brief Field renderers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___renderers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneConditionalVisibility, ___zone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalVisibility, ___zones) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalVisibility, ___invisibleWhileLoaded) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalVisibility, ___renderersOnly) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneConditionalVisibility, ___renderers) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneConditionalVisibility) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
