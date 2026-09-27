#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderRendererPreRender.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_def.hpp"
CORDL_MODULE_EXPORT(BuilderRendererPreRender)
namespace GlobalNamespace {
class BuilderRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderRendererPreRender;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderRendererPreRender*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderRendererPreRender*, "", "BuilderRendererPreRender");
// Dependencies MonoBehaviourPostTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderRendererPreRender
class CORDL_TYPE BuilderRendererPreRender : public ::GlobalNamespace::MonoBehaviourPostTick {
public:
// Declarations
/// @brief Field builderRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderRenderer, put=__cordl_internal_set_builderRenderer)) ::UnityW<::GlobalNamespace::BuilderRenderer>  builderRenderer;

/// @brief Method Awake, addr 0x57b3f04, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::BuilderRendererPreRender* New_ctor() ;

/// @brief Method PostTick, addr 0x57b3f08, size 0x84, virtual true, abstract: false, final false
inline void PostTick() ;

constexpr ::UnityW<::GlobalNamespace::BuilderRenderer> const& __cordl_internal_get_builderRenderer() const;

constexpr ::UnityW<::GlobalNamespace::BuilderRenderer>& __cordl_internal_get_builderRenderer() ;

constexpr void __cordl_internal_set_builderRenderer(::UnityW<::GlobalNamespace::BuilderRenderer>  value) ;

/// @brief Method .ctor, addr 0x57b3f8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderRendererPreRender() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderRendererPreRender", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderRendererPreRender(BuilderRendererPreRender && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderRendererPreRender", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderRendererPreRender(BuilderRendererPreRender const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1570};

/// @brief Field builderRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderRenderer>  ___builderRenderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderRendererPreRender, ___builderRenderer) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderRendererPreRender) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
