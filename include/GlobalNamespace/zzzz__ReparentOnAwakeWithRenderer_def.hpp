#pragma once
// IWYU pragma private; include "GlobalNamespace/ReparentOnAwakeWithRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ReparentOnAwakeWithRenderer)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ReparentOnAwakeWithRenderer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReparentOnAwakeWithRenderer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReparentOnAwakeWithRenderer*, "", "ReparentOnAwakeWithRenderer");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReparentOnAwakeWithRenderer
class CORDL_TYPE ReparentOnAwakeWithRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field myRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRenderer, put=__cordl_internal_set_myRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  myRenderer;

/// @brief Field newParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_newParent, put=__cordl_internal_set_newParent)) ::UnityW<::UnityEngine::Transform>  newParent;

/// @brief Field sortLast, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_sortLast, put=__cordl_internal_set_sortLast)) bool  sortLast;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method BuildValidationCheck, addr 0x56a7cd0, size 0x12c, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

static inline ::GlobalNamespace::ReparentOnAwakeWithRenderer* New_ctor() ;

/// @brief Method OnEnable, addr 0x56a7dfc, size 0x138, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [ContextMenu("Set Renderer")]
/// @brief Method SetMyRenderer, addr 0x56a7f34, size 0x58, virtual false, abstract: false, final false
inline void SetMyRenderer() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_myRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_myRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_newParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_newParent() ;

constexpr bool const& __cordl_internal_get_sortLast() const;

constexpr bool& __cordl_internal_get_sortLast() ;

constexpr void __cordl_internal_set_myRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_newParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_sortLast(bool  value) ;

/// @brief Method .ctor, addr 0x56a7f8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReparentOnAwakeWithRenderer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReparentOnAwakeWithRenderer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReparentOnAwakeWithRenderer(ReparentOnAwakeWithRenderer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReparentOnAwakeWithRenderer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReparentOnAwakeWithRenderer(ReparentOnAwakeWithRenderer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{916};

/// @brief Field newParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___newParent;

/// @brief Field myRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___myRenderer;

/// [Tooltip("We\'re mostly using this for UI elements like text and images, so this will help you separate these in whatever target parent object.Keep images and texts together, otherwise you\'ll get extra draw calls. Put images above text or they\'ll overlap weird tho lol")]
/// @brief Field sortLast, offset: 0x30, size: 0x1, def value: None
 bool  ___sortLast;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReparentOnAwakeWithRenderer, ___newParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReparentOnAwakeWithRenderer, ___myRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReparentOnAwakeWithRenderer, ___sortLast) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReparentOnAwakeWithRenderer) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
