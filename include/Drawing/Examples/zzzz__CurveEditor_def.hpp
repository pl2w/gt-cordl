#pragma once
// IWYU pragma private; include "Drawing/Examples/CurveEditor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(CurveEditor)
namespace Drawing::Examples {
class CurveEditor_CurvePoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Drawing::Examples {
class CurveEditor;
}
namespace Drawing::Examples {
class CurveEditor_CurvePoint;
}
// Write type traits
MARK_REF_T(::Drawing::Examples::CurveEditor*);
MARK_REF_T(::Drawing::Examples::CurveEditor_CurvePoint*);
DEFINE_IL2CPP_CLASS(::Drawing::Examples::CurveEditor*, "Drawing.Examples", "CurveEditor");
DEFINE_IL2CPP_CLASS(::Drawing::Examples::CurveEditor_CurvePoint*, "Drawing.Examples", "CurveEditor/CurvePoint");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Drawing::Examples {
// Is value type: false
// CS Name: Drawing.Examples.CurveEditor
class CORDL_TYPE CurveEditor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CurvePoint = ::Drawing::Examples::CurveEditor_CurvePoint;

/// @brief Field cam, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cam, put=__cordl_internal_set_cam)) ::UnityW<::UnityEngine::Camera>  cam;

/// @brief Field curveColor, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_curveColor, put=__cordl_internal_set_curveColor)) ::UnityEngine::Color  curveColor;

/// @brief Field curves, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_curves, put=__cordl_internal_set_curves)) ::System::Collections::Generic::List_1<::Drawing::Examples::CurveEditor_CurvePoint*>*  curves;

/// @brief Method Awake, addr 0x55e121c, size 0x24, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Drawing::Examples::CurveEditor* New_ctor() ;

/// @brief Method Render, addr 0x55e14ac, size 0x4e0, virtual false, abstract: false, final false
inline void Render() ;

/// @brief Method Update, addr 0x55e1240, size 0x264, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_cam() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_cam() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_curveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_curveColor() ;

constexpr ::System::Collections::Generic::List_1<::Drawing::Examples::CurveEditor_CurvePoint*>* const& __cordl_internal_get_curves() const;

constexpr ::System::Collections::Generic::List_1<::Drawing::Examples::CurveEditor_CurvePoint*>*& __cordl_internal_get_curves() ;

constexpr void __cordl_internal_set_cam(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_curveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_curves(::System::Collections::Generic::List_1<::Drawing::Examples::CurveEditor_CurvePoint*>*  value) ;

/// @brief Method .ctor, addr 0x55e198c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveEditor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveEditor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveEditor(CurveEditor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveEditor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveEditor(CurveEditor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27785};

/// @brief Field curves, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Drawing::Examples::CurveEditor_CurvePoint*>*  ___curves;

/// @brief Field cam, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___cam;

/// @brief Field curveColor, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___curveColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Examples::CurveEditor, ___curves) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::CurveEditor, ___cam) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::CurveEditor, ___curveColor) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Drawing::Examples::CurveEditor) == 0x40, "Size mismatch!");

} // namespace end def Drawing::Examples
// Dependencies System.Object, UnityEngine.Vector2
namespace Drawing::Examples {
// Is value type: false
// CS Name: Drawing.Examples.CurveEditor/CurvePoint
class CORDL_TYPE CurveEditor_CurvePoint : public ::System::Object {
public:
// Declarations
/// @brief Field controlPoint0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPoint0, put=__cordl_internal_set_controlPoint0)) ::UnityEngine::Vector2  controlPoint0;

/// @brief Field controlPoint1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlPoint1, put=__cordl_internal_set_controlPoint1)) ::UnityEngine::Vector2  controlPoint1;

/// @brief Field position, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector2  position;

static inline ::Drawing::Examples::CurveEditor_CurvePoint* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_controlPoint0() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_controlPoint0() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_controlPoint1() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_controlPoint1() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_position() ;

constexpr void __cordl_internal_set_controlPoint0(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_controlPoint1(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x55e14a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveEditor_CurvePoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveEditor_CurvePoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveEditor_CurvePoint(CurveEditor_CurvePoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveEditor_CurvePoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveEditor_CurvePoint(CurveEditor_CurvePoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27784};

/// @brief Field position, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___position;

/// @brief Field controlPoint0, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___controlPoint0;

/// @brief Field controlPoint1, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___controlPoint1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Examples::CurveEditor_CurvePoint, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::CurveEditor_CurvePoint, ___controlPoint0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::CurveEditor_CurvePoint, ___controlPoint1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Drawing::Examples::CurveEditor_CurvePoint) == 0x28, "Size mismatch!");

} // namespace end def Drawing::Examples
