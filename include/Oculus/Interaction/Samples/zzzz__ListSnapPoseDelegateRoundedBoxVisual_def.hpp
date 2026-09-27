#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ListSnapPoseDelegateRoundedBoxVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ListSnapPoseDelegateRoundedBoxVisual)
namespace Oculus::Interaction {
class ListSnapPoseDelegate;
}
namespace Oculus::Interaction {
class ProgressCurve;
}
namespace Oculus::Interaction {
class RoundedBoxProperties;
}
namespace Oculus::Interaction {
class SnapInteractable;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class ListSnapPoseDelegateRoundedBoxVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual*, "Oculus.Interaction.Samples", "ListSnapPoseDelegateRoundedBoxVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.ListSnapPoseDelegateRoundedBoxVisual
class CORDL_TYPE ListSnapPoseDelegateRoundedBoxVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _curve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__curve, put=__cordl_internal_set__curve)) ::Oculus::Interaction::ProgressCurve*  _curve;

/// @brief Field _listSnapPoseDelegate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__listSnapPoseDelegate, put=__cordl_internal_set__listSnapPoseDelegate)) ::UnityW<::Oculus::Interaction::ListSnapPoseDelegate>  _listSnapPoseDelegate;

/// @brief Field _minSize, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__minSize, put=__cordl_internal_set__minSize)) float_t  _minSize;

/// @brief Field _properties, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__properties, put=__cordl_internal_set__properties)) ::UnityW<::Oculus::Interaction::RoundedBoxProperties>  _properties;

/// @brief Field _snapInteractable, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__snapInteractable, put=__cordl_internal_set__snapInteractable)) ::UnityW<::Oculus::Interaction::SnapInteractable>  _snapInteractable;

/// @brief Field _startWidth, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startWidth, put=__cordl_internal_set__startWidth)) float_t  _startWidth;

/// @brief Field _targetWidth, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetWidth, put=__cordl_internal_set__targetWidth)) float_t  _targetWidth;

/// @brief Method LateUpdate, addr 0xa440908, size 0x208, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual* New_ctor() ;

constexpr ::Oculus::Interaction::ProgressCurve* const& __cordl_internal_get__curve() const;

constexpr ::Oculus::Interaction::ProgressCurve*& __cordl_internal_get__curve() ;

constexpr ::UnityW<::Oculus::Interaction::ListSnapPoseDelegate> const& __cordl_internal_get__listSnapPoseDelegate() const;

constexpr ::UnityW<::Oculus::Interaction::ListSnapPoseDelegate>& __cordl_internal_get__listSnapPoseDelegate() ;

constexpr float_t const& __cordl_internal_get__minSize() const;

constexpr float_t& __cordl_internal_get__minSize() ;

constexpr ::UnityW<::Oculus::Interaction::RoundedBoxProperties> const& __cordl_internal_get__properties() const;

constexpr ::UnityW<::Oculus::Interaction::RoundedBoxProperties>& __cordl_internal_get__properties() ;

constexpr ::UnityW<::Oculus::Interaction::SnapInteractable> const& __cordl_internal_get__snapInteractable() const;

constexpr ::UnityW<::Oculus::Interaction::SnapInteractable>& __cordl_internal_get__snapInteractable() ;

constexpr float_t const& __cordl_internal_get__startWidth() const;

constexpr float_t& __cordl_internal_get__startWidth() ;

constexpr float_t const& __cordl_internal_get__targetWidth() const;

constexpr float_t& __cordl_internal_get__targetWidth() ;

constexpr void __cordl_internal_set__curve(::Oculus::Interaction::ProgressCurve*  value) ;

constexpr void __cordl_internal_set__listSnapPoseDelegate(::UnityW<::Oculus::Interaction::ListSnapPoseDelegate>  value) ;

constexpr void __cordl_internal_set__minSize(float_t  value) ;

constexpr void __cordl_internal_set__properties(::UnityW<::Oculus::Interaction::RoundedBoxProperties>  value) ;

constexpr void __cordl_internal_set__snapInteractable(::UnityW<::Oculus::Interaction::SnapInteractable>  value) ;

constexpr void __cordl_internal_set__startWidth(float_t  value) ;

constexpr void __cordl_internal_set__targetWidth(float_t  value) ;

/// @brief Method .ctor, addr 0xa440b10, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListSnapPoseDelegateRoundedBoxVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListSnapPoseDelegateRoundedBoxVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListSnapPoseDelegateRoundedBoxVisual(ListSnapPoseDelegateRoundedBoxVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListSnapPoseDelegateRoundedBoxVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListSnapPoseDelegateRoundedBoxVisual(ListSnapPoseDelegateRoundedBoxVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28349};

/// [SerializeField]
/// @brief Field _listSnapPoseDelegate, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::ListSnapPoseDelegate>  ____listSnapPoseDelegate;

/// [SerializeField]
/// @brief Field _properties, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RoundedBoxProperties>  ____properties;

/// [SerializeField]
/// @brief Field _snapInteractable, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::SnapInteractable>  ____snapInteractable;

/// [SerializeField]
/// @brief Field _minSize, offset: 0x38, size: 0x4, def value: None
 float_t  ____minSize;

/// [SerializeField]
/// @brief Field _curve, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::ProgressCurve*  ____curve;

/// @brief Field _targetWidth, offset: 0x48, size: 0x4, def value: None
 float_t  ____targetWidth;

/// @brief Field _startWidth, offset: 0x4c, size: 0x4, def value: None
 float_t  ____startWidth;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual, ____listSnapPoseDelegate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual, ____properties) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual, ____snapInteractable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual, ____minSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual, ____curve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual, ____targetWidth) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual, ____startWidth) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::ListSnapPoseDelegateRoundedBoxVisual) == 0x50, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
