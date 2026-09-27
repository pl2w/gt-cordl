#pragma once
// IWYU pragma private; include "GlobalNamespace/VirtualLayout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VirtualLayout)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class VirtualLayout;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VirtualLayout*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VirtualLayout*, "", "VirtualLayout");
// [ExecuteAlways]
// Dependencies UnityEngine.EventSystems.UIBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: VirtualLayout
class CORDL_TYPE VirtualLayout : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief Field _layoutParent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__layoutParent, put=__cordl_internal_set__layoutParent)) ::UnityW<::UnityEngine::RectTransform>  _layoutParent;

/// @brief Field _rectChildren, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectChildren, put=__cordl_internal_set__rectChildren)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  _rectChildren;

/// @brief Field _virtualLayoutChildren, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__virtualLayoutChildren, put=__cordl_internal_set__virtualLayoutChildren)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  _virtualLayoutChildren;

/// @brief Field animationSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationSpeed, put=__cordl_internal_set_animationSpeed)) float_t  animationSpeed;

/// @brief Method InjectAllVirtualLayoutElement, addr 0xa42767c, size 0x8, virtual false, abstract: false, final false
inline void InjectAllVirtualLayoutElement(::UnityEngine::RectTransform*  layoutParent) ;

/// @brief Method LateUpdate, addr 0xa4273a0, size 0x2dc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::VirtualLayout* New_ctor() ;

/// @brief Method OnDisable, addr 0xa4271b0, size 0x1f0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa426b58, size 0x4b4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetChildTransform, addr 0xa42700c, size 0x1a4, virtual false, abstract: false, final false
inline void ResetChildTransform(::UnityEngine::RectTransform*  child) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__layoutParent() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__layoutParent() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* const& __cordl_internal_get__rectChildren() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*& __cordl_internal_get__rectChildren() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>* const& __cordl_internal_get__virtualLayoutChildren() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*& __cordl_internal_get__virtualLayoutChildren() ;

constexpr float_t const& __cordl_internal_get_animationSpeed() const;

constexpr float_t& __cordl_internal_get_animationSpeed() ;

constexpr void __cordl_internal_set__layoutParent(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__rectChildren(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  value) ;

constexpr void __cordl_internal_set__virtualLayoutChildren(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  value) ;

constexpr void __cordl_internal_set_animationSpeed(float_t  value) ;

/// @brief Method .ctor, addr 0xa427684, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VirtualLayout() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VirtualLayout", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VirtualLayout(VirtualLayout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VirtualLayout", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VirtualLayout(VirtualLayout const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28238};

/// @brief Field animationSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___animationSpeed;

/// [SerializeField]
/// @brief Field _layoutParent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____layoutParent;

/// @brief Field _rectChildren, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  ____rectChildren;

/// @brief Field _virtualLayoutChildren, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::RectTransform>>*  ____virtualLayoutChildren;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VirtualLayout, ___animationSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualLayout, ____layoutParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualLayout, ____rectChildren) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VirtualLayout, ____virtualLayoutChildren) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VirtualLayout) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
