#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/CanvasConstantWidthScaler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasConstantWidthScaler)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class CanvasConstantWidthScaler;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::CanvasConstantWidthScaler*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::CanvasConstantWidthScaler*, "Oculus.Interaction.Samples", "CanvasConstantWidthScaler");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.CanvasConstantWidthScaler
class CORDL_TYPE CanvasConstantWidthScaler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _initialHeight, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialHeight, put=__cordl_internal_set__initialHeight)) float_t  _initialHeight;

/// @brief Field _initialLocalScaleY, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialLocalScaleY, put=__cordl_internal_set__initialLocalScaleY)) float_t  _initialLocalScaleY;

/// @brief Field _initialWidth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__initialWidth, put=__cordl_internal_set__initialWidth)) float_t  _initialWidth;

/// @brief Field _rect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rect, put=__cordl_internal_set__rect)) ::UnityW<::UnityEngine::RectTransform>  _rect;

static inline ::Oculus::Interaction::Samples::CanvasConstantWidthScaler* New_ctor() ;

/// @brief Method Start, addr 0xa4363e8, size 0x54, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa43643c, size 0x130, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__initialHeight() const;

constexpr float_t& __cordl_internal_get__initialHeight() ;

constexpr float_t const& __cordl_internal_get__initialLocalScaleY() const;

constexpr float_t& __cordl_internal_get__initialLocalScaleY() ;

constexpr float_t const& __cordl_internal_get__initialWidth() const;

constexpr float_t& __cordl_internal_get__initialWidth() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rect() ;

constexpr void __cordl_internal_set__initialHeight(float_t  value) ;

constexpr void __cordl_internal_set__initialLocalScaleY(float_t  value) ;

constexpr void __cordl_internal_set__initialWidth(float_t  value) ;

constexpr void __cordl_internal_set__rect(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0xa43656c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasConstantWidthScaler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasConstantWidthScaler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasConstantWidthScaler(CanvasConstantWidthScaler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasConstantWidthScaler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasConstantWidthScaler(CanvasConstantWidthScaler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28294};

/// [SerializeField]
/// @brief Field _rect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rect;

/// @brief Field _initialLocalScaleY, offset: 0x28, size: 0x4, def value: None
 float_t  ____initialLocalScaleY;

/// @brief Field _initialWidth, offset: 0x2c, size: 0x4, def value: None
 float_t  ____initialWidth;

/// @brief Field _initialHeight, offset: 0x30, size: 0x4, def value: None
 float_t  ____initialHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::CanvasConstantWidthScaler, ____rect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CanvasConstantWidthScaler, ____initialLocalScaleY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CanvasConstantWidthScaler, ____initialWidth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::CanvasConstantWidthScaler, ____initialHeight) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::CanvasConstantWidthScaler) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples
