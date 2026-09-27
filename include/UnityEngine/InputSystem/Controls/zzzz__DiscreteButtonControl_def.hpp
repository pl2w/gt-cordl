#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/DiscreteButtonControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__DiscreteButtonControl_WriteMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DiscreteButtonControl)
namespace GlobalNamespace {
struct DiscreteButtonControl_WriteMode;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class DiscreteButtonControl;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Controls::DiscreteButtonControl*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Controls::DiscreteButtonControl*, "UnityEngine.InputSystem.Controls", "DiscreteButtonControl");
// Dependencies UnityEngine.InputSystem.Controls.ButtonControl, UnityEngine.InputSystem.Controls.DiscreteButtonControl::WriteMode
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.DiscreteButtonControl
class CORDL_TYPE DiscreteButtonControl : public ::UnityEngine::InputSystem::Controls::ButtonControl {
public:
// Declarations
using WriteMode = ::GlobalNamespace::DiscreteButtonControl_WriteMode;

/// @brief Field maxValue, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxValue, put=__cordl_internal_set_maxValue)) int32_t  maxValue;

/// @brief Field minValue, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_minValue, put=__cordl_internal_set_minValue)) int32_t  minValue;

/// @brief Field nullValue, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nullValue, put=__cordl_internal_set_nullValue)) int32_t  nullValue;

/// @brief Field wrapAtValue, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_wrapAtValue, put=__cordl_internal_set_wrapAtValue)) int32_t  wrapAtValue;

/// @brief Field writeMode, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_writeMode, put=__cordl_internal_set_writeMode)) ::GlobalNamespace::DiscreteButtonControl_WriteMode  writeMode;

/// @brief Method FinishSetup, addr 0xaf35ebc, size 0xfc, virtual true, abstract: false, final false
inline void FinishSetup() ;

static inline ::UnityEngine::InputSystem::Controls::DiscreteButtonControl* New_ctor() ;

/// @brief Method ReadUnprocessedValueFromState, addr 0xaf35fb8, size 0x188, virtual true, abstract: false, final false
inline float_t ReadUnprocessedValueFromState(void*  statePtr) ;

/// @brief Method WriteValueIntoState, addr 0xaf36144, size 0x130, virtual true, abstract: false, final false
inline void WriteValueIntoState(float_t  value, void*  statePtr) ;

constexpr int32_t const& __cordl_internal_get_maxValue() const;

constexpr int32_t& __cordl_internal_get_maxValue() ;

constexpr int32_t const& __cordl_internal_get_minValue() const;

constexpr int32_t& __cordl_internal_get_minValue() ;

constexpr int32_t const& __cordl_internal_get_nullValue() const;

constexpr int32_t& __cordl_internal_get_nullValue() ;

constexpr int32_t const& __cordl_internal_get_wrapAtValue() const;

constexpr int32_t& __cordl_internal_get_wrapAtValue() ;

constexpr ::GlobalNamespace::DiscreteButtonControl_WriteMode const& __cordl_internal_get_writeMode() const;

constexpr ::GlobalNamespace::DiscreteButtonControl_WriteMode& __cordl_internal_get_writeMode() ;

constexpr void __cordl_internal_set_maxValue(int32_t  value) ;

constexpr void __cordl_internal_set_minValue(int32_t  value) ;

constexpr void __cordl_internal_set_nullValue(int32_t  value) ;

constexpr void __cordl_internal_set_wrapAtValue(int32_t  value) ;

constexpr void __cordl_internal_set_writeMode(::GlobalNamespace::DiscreteButtonControl_WriteMode  value) ;

/// @brief Method .ctor, addr 0xaf36278, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DiscreteButtonControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DiscreteButtonControl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DiscreteButtonControl(DiscreteButtonControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiscreteButtonControl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiscreteButtonControl(DiscreteButtonControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13856};

/// @brief Field minValue, offset: 0x140, size: 0x4, def value: None
 int32_t  ___minValue;

/// @brief Field maxValue, offset: 0x144, size: 0x4, def value: None
 int32_t  ___maxValue;

/// @brief Field wrapAtValue, offset: 0x148, size: 0x4, def value: None
 int32_t  ___wrapAtValue;

/// @brief Field nullValue, offset: 0x14c, size: 0x4, def value: None
 int32_t  ___nullValue;

/// @brief Field writeMode, offset: 0x150, size: 0x4, def value: None
 ::GlobalNamespace::DiscreteButtonControl_WriteMode  ___writeMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___minValue) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___maxValue) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___wrapAtValue) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___nullValue) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl, ___writeMode) == 0x150, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Controls::DiscreteButtonControl) == 0x158, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Controls
