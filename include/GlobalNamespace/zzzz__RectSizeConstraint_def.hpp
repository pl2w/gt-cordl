#pragma once
// IWYU pragma private; include "GlobalNamespace/RectSizeConstraint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RectSizeConstraint)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class RectSizeConstraint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RectSizeConstraint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RectSizeConstraint*, "", "RectSizeConstraint");
// [ExecuteAlways]
// [RequireComponent(typeof(UnityEngine.RectTransform))]
// Dependencies UnityEngine.EventSystems.UIBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RectSizeConstraint
class CORDL_TYPE RectSizeConstraint : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief Field target, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::RectTransform>  target;

/// @brief Method LateUpdate, addr 0xa42548c, size 0x108, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::RectSizeConstraint* New_ctor() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0xa425594, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RectSizeConstraint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RectSizeConstraint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RectSizeConstraint(RectSizeConstraint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectSizeConstraint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectSizeConstraint(RectSizeConstraint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28231};

/// @brief Field target, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RectSizeConstraint, ___target) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RectSizeConstraint) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
