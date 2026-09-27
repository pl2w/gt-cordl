#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/RendererCullerByTriggers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RendererCullerByTriggers)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Rendering {
class RendererCullerByTriggers;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::RendererCullerByTriggers*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::RendererCullerByTriggers*, "GorillaTag.Rendering", "RendererCullerByTriggers");
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Renderer
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.RendererCullerByTriggers
class CORDL_TYPE RendererCullerByTriggers : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field camWasTouching, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_camWasTouching, put=__cordl_internal_set_camWasTouching)) bool  camWasTouching;

/// @brief Field colliders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliders;

/// @brief Field mainCameraTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCameraTransform, put=__cordl_internal_set_mainCameraTransform)) ::UnityW<::UnityEngine::Transform>  mainCameraTransform;

/// @brief Field renderers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_renderers, put=__cordl_internal_set_renderers)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  renderers;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method BuildValidationCheck, addr 0x5d5519c, size 0x8, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method LateUpdate, addr 0x5d54f88, size 0x214, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Rendering::RendererCullerByTriggers* New_ctor() ;

/// @brief Method OnEnable, addr 0x5d54e5c, size 0x12c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get_camWasTouching() const;

constexpr bool& __cordl_internal_get_camWasTouching() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mainCameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mainCameraTransform() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_renderers() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_renderers() ;

constexpr void __cordl_internal_set_camWasTouching(bool  value) ;

constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_mainCameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

/// @brief Method .ctor, addr 0x5d551a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RendererCullerByTriggers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RendererCullerByTriggers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RendererCullerByTriggers(RendererCullerByTriggers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RendererCullerByTriggers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RendererCullerByTriggers(RendererCullerByTriggers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4799};

/// @brief Field cameraRadiusSq offset 0xffffffff size 0x4
static constexpr float_t  cameraRadiusSq{static_cast<float_t>(0.010000001f)};

/// [Tooltip("These renderers will be enabled/disabled depending on if the main camera is the colliders.")]
/// @brief Field renderers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___renderers;

/// @brief Field colliders, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliders;

/// @brief Field camWasTouching, offset: 0x30, size: 0x1, def value: None
 bool  ___camWasTouching;

/// @brief Field mainCameraTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___mainCameraTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::RendererCullerByTriggers, ___renderers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::RendererCullerByTriggers, ___colliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::RendererCullerByTriggers, ___camWasTouching) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::RendererCullerByTriggers, ___mainCameraTransform) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::RendererCullerByTriggers) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
