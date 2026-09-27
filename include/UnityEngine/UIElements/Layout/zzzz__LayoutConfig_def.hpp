#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataAccess_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LayoutConfig)
namespace UnityEngine::UIElements::Layout {
class LayoutBaselineFunction;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataAccess;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutHandle;
}
namespace UnityEngine::UIElements::Layout {
class LayoutMeasureFunction;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutConfig;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutConfig);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutConfig, "UnityEngine.UIElements.Layout", "LayoutConfig");
// [IsReadOnly]
// Dependencies UnityEngine.UIElements.Layout.LayoutDataAccess, UnityEngine.UIElements.Layout.LayoutHandle
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutConfig
struct CORDL_TYPE LayoutConfig {
public:
// Declarations
 __declspec(property(get=get_Baseline)) ::UnityEngine::UIElements::Layout::LayoutBaselineFunction*  Baseline;

 __declspec(property(get=get_Handle)) ::UnityEngine::UIElements::Layout::LayoutHandle  Handle;

 __declspec(property(get=get_Measure, put=set_Measure)) ::UnityEngine::UIElements::Layout::LayoutMeasureFunction*  Measure;

 __declspec(property(get=get_PointScaleFactor)) float_t  PointScaleFactor;

/// @brief Method .ctor, addr 0xb7fc65c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::Layout::LayoutDataAccess  access, ::UnityEngine::UIElements::Layout::LayoutHandle  handle) ;

/// @brief Method get_Baseline, addr 0xb7fc7b0, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Layout::LayoutBaselineFunction* get_Baseline() ;

/// @brief Method get_Handle, addr 0xb7fc670, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Layout::LayoutHandle get_Handle() ;

/// @brief Method get_Measure, addr 0xb7fc6c8, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* get_Measure() ;

/// @brief Method get_PointScaleFactor, addr 0xb7fc678, size 0x50, virtual false, abstract: false, final false
inline ::by_ref<float_t> get_PointScaleFactor() ;

/// @brief Method get_Undefined, addr 0xb7fc644, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::UIElements::Layout::LayoutConfig get_Undefined() ;

/// @brief Method set_Measure, addr 0xb7fc734, size 0x7c, virtual false, abstract: false, final false
inline void set_Measure(::UnityEngine::UIElements::Layout::LayoutMeasureFunction*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LayoutConfig() ;

// Ctor Parameters [CppParam { name: "m_Access", ty: "::UnityEngine::UIElements::Layout::LayoutDataAccess", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Handle", ty: "::UnityEngine::UIElements::Layout::LayoutHandle", modifiers: "", def_value: None, comment: None }]
constexpr LayoutConfig(::UnityEngine::UIElements::Layout::LayoutDataAccess  m_Access, ::UnityEngine::UIElements::Layout::LayoutHandle  m_Handle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field m_Access, offset: 0x0, size: 0x28, def value: None
 ::UnityEngine::UIElements::Layout::LayoutDataAccess  m_Access;

/// @brief Field m_Handle, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::Layout::LayoutHandle  m_Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutConfig, m_Access) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutConfig, m_Handle) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutConfig) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::Layout
