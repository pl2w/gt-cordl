#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderZoneRenderers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BuilderZoneRenderers)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderZoneRenderers;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderZoneRenderers*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderZoneRenderers*, "", "BuilderZoneRenderers");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderZoneRenderers
class CORDL_TYPE BuilderZoneRenderers : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field allRenderers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_allRenderers, put=__cordl_internal_set_allRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  allRenderers;

/// @brief Field canvases, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvases, put=__cordl_internal_set_canvases)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Canvas>>*  canvases;

/// @brief Field inBuilderZone, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_inBuilderZone, put=__cordl_internal_set_inBuilderZone)) bool  inBuilderZone;

/// @brief Field renderers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers;

/// @brief Field rootObjects, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rootObjects, put=__cordl_internal_set_rootObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  rootObjects;

static inline ::GlobalNamespace::BuilderZoneRenderers* New_ctor() ;

/// @brief Method OnDestroy, addr 0x57b5120, size 0x144, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnZoneChanged, addr 0x57b4d28, size 0x3f8, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method Start, addr 0x57b4a6c, size 0x2bc, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_allRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_allRenderers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Canvas>>* const& __cordl_internal_get_canvases() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Canvas>>*& __cordl_internal_get_canvases() ;

constexpr bool const& __cordl_internal_get_inBuilderZone() const;

constexpr bool& __cordl_internal_get_inBuilderZone() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_renderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_renderers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_rootObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_rootObjects() ;

constexpr void __cordl_internal_set_allRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_canvases(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Canvas>>*  value) ;

constexpr void __cordl_internal_set_inBuilderZone(bool  value) ;

constexpr void __cordl_internal_set_renderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_rootObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method .ctor, addr 0x57b5264, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderZoneRenderers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderZoneRenderers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderZoneRenderers(BuilderZoneRenderers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderZoneRenderers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderZoneRenderers(BuilderZoneRenderers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1576};

/// @brief Field renderers, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___renderers;

/// @brief Field canvases, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Canvas>>*  ___canvases;

/// @brief Field rootObjects, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___rootObjects;

/// @brief Field inBuilderZone, offset: 0x38, size: 0x1, def value: None
 bool  ___inBuilderZone;

/// @brief Field allRenderers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___allRenderers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderZoneRenderers, ___renderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderZoneRenderers, ___canvases) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderZoneRenderers, ___rootObjects) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderZoneRenderers, ___inBuilderZone) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderZoneRenderers, ___allRenderers) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderZoneRenderers) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
