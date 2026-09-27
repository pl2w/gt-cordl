#pragma once
// IWYU pragma private; include "Unity/Cinemachine/AxisBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AxisBase)
// Forward declare root types
namespace Unity::Cinemachine {
struct AxisBase;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::AxisBase);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::AxisBase, "Unity.Cinemachine", "AxisBase");
// [Obsolete("AxisBase has been deprecated. Use InputAxis instead.")]
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.AxisBase
struct CORDL_TYPE AxisBase {
public:
// Declarations
/// @brief Method Validate, addr 0xaed3520, size 0x14, virtual false, abstract: false, final false
inline void Validate() ;

// Ctor Parameters []
// @brief default ctor
constexpr AxisBase() ;

// Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MinValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxValue", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Wrap", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr AxisBase(float_t  m_Value, float_t  m_MinValue, float_t  m_MaxValue, bool  m_Wrap) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22415};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NoSaveDuringPlay]
/// [Tooltip("The current value of the axis.")]
/// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
 float_t  m_Value;

/// [Tooltip("The minimum value for the axis")]
/// @brief Field m_MinValue, offset: 0x4, size: 0x4, def value: None
 float_t  m_MinValue;

/// [Tooltip("The maximum value for the axis")]
/// @brief Field m_MaxValue, offset: 0x8, size: 0x4, def value: None
 float_t  m_MaxValue;

/// [Tooltip("If checked, then the axis will wrap around at the min/max values, forming a loop")]
/// @brief Field m_Wrap, offset: 0xc, size: 0x1, def value: None
 bool  m_Wrap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::AxisBase, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisBase, m_MinValue) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisBase, m_MaxValue) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::AxisBase, m_Wrap) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::AxisBase) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
