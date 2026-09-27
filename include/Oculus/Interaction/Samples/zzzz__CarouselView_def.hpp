#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/CarouselView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CarouselView)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class CarouselView;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::CarouselView*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::CarouselView*, "Oculus.Interaction.Samples", "CarouselView");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.CarouselView
class CORDL_TYPE CarouselView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ContentArea)) ::UnityW<::UnityEngine::RectTransform>  ContentArea;

 __declspec(property(get=get_CurrentChildIndex)) int32_t  CurrentChildIndex;

/// @brief Field _content, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__content, put=__cordl_internal_set__content)) ::UnityW<::UnityEngine::RectTransform>  _content;

/// @brief Field _currentChildIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentChildIndex, put=__cordl_internal_set__currentChildIndex)) int32_t  _currentChildIndex;

/// @brief Field _easeCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__easeCurve, put=__cordl_internal_set__easeCurve)) ::UnityEngine::AnimationCurve*  _easeCurve;

/// @brief Field _emptyCarouselVisuals, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__emptyCarouselVisuals, put=__cordl_internal_set__emptyCarouselVisuals)) ::UnityW<::UnityEngine::GameObject>  _emptyCarouselVisuals;

/// @brief Field _scrollVal, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__scrollVal, put=__cordl_internal_set__scrollVal)) float_t  _scrollVal;

/// @brief Field _viewport, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__viewport, put=__cordl_internal_set__viewport)) ::UnityW<::UnityEngine::RectTransform>  _viewport;

/// @brief Method GetCurrentChild, addr 0xa436668, size 0x6c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> GetCurrentChild() ;

static inline ::Oculus::Interaction::Samples::CarouselView* New_ctor() ;

/// @brief Method ScrollLeft, addr 0xa4368e4, size 0x104, virtual false, abstract: false, final false
inline void ScrollLeft() ;

/// @brief Method ScrollRight, addr 0xa436588, size 0xe0, virtual false, abstract: false, final false
inline void ScrollRight() ;

/// @brief Method ScrollToChild, addr 0xa4366d4, size 0x210, virtual false, abstract: false, final false
inline void ScrollToChild(::UnityEngine::RectTransform*  child, float_t  amount01) ;

/// @brief Method Start, addr 0xa436584, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4369e8, size 0x10c, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__content() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__content() ;

constexpr int32_t const& __cordl_internal_get__currentChildIndex() const;

constexpr int32_t& __cordl_internal_get__currentChildIndex() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__easeCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__easeCurve() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__emptyCarouselVisuals() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__emptyCarouselVisuals() ;

constexpr float_t const& __cordl_internal_get__scrollVal() const;

constexpr float_t& __cordl_internal_get__scrollVal() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__viewport() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__viewport() ;

constexpr void __cordl_internal_set__content(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__currentChildIndex(int32_t  value) ;

constexpr void __cordl_internal_set__easeCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__emptyCarouselVisuals(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__scrollVal(float_t  value) ;

constexpr void __cordl_internal_set__viewport(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0xa436af4, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ContentArea, addr 0xa43657c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_ContentArea() ;

/// @brief Method get_CurrentChildIndex, addr 0xa436574, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentChildIndex() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CarouselView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CarouselView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CarouselView(CarouselView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CarouselView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CarouselView(CarouselView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28295};

/// [SerializeField]
/// @brief Field _viewport, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____viewport;

/// [SerializeField]
/// @brief Field _content, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____content;

/// [SerializeField]
/// @brief Field _easeCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____easeCurve;

/// [SerializeField]
/// [Optional]
/// @brief Field _emptyCarouselVisuals, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____emptyCarouselVisuals;

/// @brief Field _currentChildIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ____currentChildIndex;

/// @brief Field _scrollVal, offset: 0x44, size: 0x4, def value: None
 float_t  ____scrollVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::CarouselView, ____viewport) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CarouselView, ____content) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CarouselView, ____easeCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CarouselView, ____emptyCarouselVisuals) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CarouselView, ____currentChildIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CarouselView, ____scrollVal) == 0x44, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::CarouselView) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
