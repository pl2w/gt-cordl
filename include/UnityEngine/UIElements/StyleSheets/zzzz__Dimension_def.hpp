#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/Dimension.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__Dimension_Unit_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Dimension)
namespace GlobalNamespace {
struct Dimension_Unit;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::Dimension);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StyleSheets::Dimension, "UnityEngine.UIElements.StyleSheets", "Dimension");
// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
// Dependencies UnityEngine.UIElements.StyleSheets.Dimension::Unit
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.Dimension
struct CORDL_TYPE Dimension {
public:
// Declarations
using Unit = ::GlobalNamespace::Dimension_Unit;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>*() ;

/// @brief Method Equals, addr 0xb80ecf8, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb80ecd8, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::UIElements::StyleSheets::Dimension  other) ;

/// @brief Method GetHashCode, addr 0xb80ed80, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsAngle, addr 0xb80ef0c, size 0x14, virtual false, abstract: false, final false
inline bool IsAngle() ;

/// @brief Method IsLength, addr 0xb80eee4, size 0x14, virtual false, abstract: false, final false
inline bool IsLength() ;

/// @brief Method IsTimeValue, addr 0xb80eef8, size 0x14, virtual false, abstract: false, final false
inline bool IsTimeValue() ;

/// @brief Method ToAngle, addr 0xb80ec34, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Angle ToAngle() ;

/// @brief Method ToLength, addr 0xb80ebdc, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Length ToLength() ;

/// @brief Method ToString, addr 0xb80edc8, size 0x11c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToTime, addr 0xb80ec08, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TimeValue ToTime() ;

/// @brief Method .ctor, addr 0xb80ebd0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(float_t  value, ::GlobalNamespace::Dimension_Unit  unit) ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>"
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::StyleSheets::Dimension>* i___System__IEquatable_1___UnityEngine__UIElements__StyleSheets__Dimension_() ;

/// @brief Method op_Equality, addr 0xb80ecb8, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::UIElements::StyleSheets::Dimension  lhs, ::UnityEngine::UIElements::StyleSheets::Dimension  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr Dimension() ;

// Ctor Parameters [CppParam { name: "unit", ty: "::GlobalNamespace::Dimension_Unit", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Dimension(::GlobalNamespace::Dimension_Unit  unit, float_t  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field unit, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Dimension_Unit  unit;

/// @brief Field value, offset: 0x4, size: 0x4, def value: None
 float_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Dimension, unit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::Dimension, value) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::StyleSheets::Dimension) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::StyleSheets
