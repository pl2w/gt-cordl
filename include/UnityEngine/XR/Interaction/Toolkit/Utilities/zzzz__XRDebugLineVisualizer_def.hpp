#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/XRDebugLineVisualizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRDebugLineVisualizer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class XRDebugLineVisualizer_DebugLine;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class XRDebugLineVisualizer___c__DisplayClass4_0;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class XRDebugLineVisualizer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class XRDebugLineVisualizer_DebugLine;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
class XRDebugLineVisualizer___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "XRDebugLineVisualizer");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "XRDebugLineVisualizer/DebugLine");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0*, "UnityEngine.XR.Interaction.Toolkit.Utilities", "XRDebugLineVisualizer/<>c__DisplayClass4_0");
// [AddComponentMenu("")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Utilities.XRDebugLineVisualizer.html")]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.XRDebugLineVisualizer
class CORDL_TYPE XRDebugLineVisualizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DebugLine = ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine;

using __c__DisplayClass4_0 = ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0;

/// @brief Field m_DebugLines, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DebugLines, put=__cordl_internal_set_m_DebugLines)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>*  m_DebugLines;

/// @brief Method ClearLines, addr 0xb429e10, size 0x1ac, virtual false, abstract: false, final false
inline void ClearLines() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb429e0c, size 0x4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Update, addr 0xb429ca8, size 0x164, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateOrCreateLine, addr 0xb429fbc, size 0x3e0, virtual false, abstract: false, final false
inline void UpdateOrCreateLine(::StringW  lineName, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::UnityEngine::Color  color, float_t  decayTime) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>* const& __cordl_internal_get_m_DebugLines() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>*& __cordl_internal_get_m_DebugLines() ;

constexpr void __cordl_internal_set_m_DebugLines(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>*  value) ;

/// @brief Method .ctor, addr 0xb42a3ac, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDebugLineVisualizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDebugLineVisualizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDebugLineVisualizer(XRDebugLineVisualizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDebugLineVisualizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDebugLineVisualizer(XRDebugLineVisualizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11227};

/// @brief Field m_DebugLines, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*>*  ___m_DebugLines;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer, ___m_DebugLines) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.XRDebugLineVisualizer/<>c__DisplayClass4_0
class CORDL_TYPE XRDebugLineVisualizer___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field lineName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineName, put=__cordl_internal_set_lineName)) ::StringW  lineName;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <UpdateOrCreateLine>b__0, addr 0xb42a434, size 0x20, virtual false, abstract: false, final false
inline bool _UpdateOrCreateLine_b__0(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine*  l) ;

constexpr ::StringW const& __cordl_internal_get_lineName() const;

constexpr ::StringW& __cordl_internal_get_lineName() ;

constexpr void __cordl_internal_set_lineName(::StringW  value) ;

/// @brief Method .ctor, addr 0xb42a39c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDebugLineVisualizer___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDebugLineVisualizer___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDebugLineVisualizer___c__DisplayClass4_0(XRDebugLineVisualizer___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDebugLineVisualizer___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDebugLineVisualizer___c__DisplayClass4_0(XRDebugLineVisualizer___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11226};

/// @brief Field lineName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___lineName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0, ___lineName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
// Dependencies System.Object, UnityEngine.Color
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.XRDebugLineVisualizer/DebugLine
class CORDL_TYPE XRDebugLineVisualizer_DebugLine : public ::System::Object {
public:
// Declarations
/// @brief Field color, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Field decayTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_decayTime, put=__cordl_internal_set_decayTime)) float_t  decayTime;

/// @brief Field lineRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderer, put=__cordl_internal_set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr float_t const& __cordl_internal_get_decayTime() const;

constexpr float_t& __cordl_internal_get_decayTime() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_decayTime(float_t  value) ;

constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

/// @brief Method .ctor, addr 0xb42a3a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDebugLineVisualizer_DebugLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDebugLineVisualizer_DebugLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDebugLineVisualizer_DebugLine(XRDebugLineVisualizer_DebugLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDebugLineVisualizer_DebugLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDebugLineVisualizer_DebugLine(XRDebugLineVisualizer_DebugLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11225};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field color, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

/// @brief Field lineRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRenderer;

/// @brief Field decayTime, offset: 0x30, size: 0x4, def value: None
 float_t  ___decayTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine, ___color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine, ___lineRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine, ___decayTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Utilities::XRDebugLineVisualizer_DebugLine) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities
