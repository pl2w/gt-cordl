#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/AxisControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_Clamp_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AxisControl)
namespace GlobalNamespace {
struct AxisControl_Clamp;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Controls::AxisControl*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Controls::AxisControl*, "UnityEngine.InputSystem.Controls", "AxisControl");
// Dependencies UnityEngine.InputSystem.Controls.AxisControl::Clamp, UnityEngine.InputSystem.InputControl`1<TValue>
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Controls.AxisControl
class CORDL_TYPE AxisControl : public ::UnityEngine::InputSystem::InputControl_1<float_t> {
public:
// Declarations
using Clamp = ::GlobalNamespace::AxisControl_Clamp;

/// @brief Field clamp, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_clamp, put=__cordl_internal_set_clamp)) ::GlobalNamespace::AxisControl_Clamp  clamp;

/// @brief Field clampConstant, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_clampConstant, put=__cordl_internal_set_clampConstant)) float_t  clampConstant;

/// @brief Field clampMax, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_clampMax, put=__cordl_internal_set_clampMax)) float_t  clampMax;

/// @brief Field clampMin, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_clampMin, put=__cordl_internal_set_clampMin)) float_t  clampMin;

/// @brief Field invert, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get_invert, put=__cordl_internal_set_invert)) bool  invert;

/// @brief Field normalize, offset 0x115, size 0x1 
 __declspec(property(get=__cordl_internal_get_normalize, put=__cordl_internal_set_normalize)) bool  normalize;

/// @brief Field normalizeMax, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizeMax, put=__cordl_internal_set_normalizeMax)) float_t  normalizeMax;

/// @brief Field normalizeMin, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizeMin, put=__cordl_internal_set_normalizeMin)) float_t  normalizeMin;

/// @brief Field normalizeZero, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizeZero, put=__cordl_internal_set_normalizeZero)) float_t  normalizeZero;

/// @brief Field scale, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) bool  scale;

/// @brief Field scaleFactor, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleFactor, put=__cordl_internal_set_scaleFactor)) float_t  scaleFactor;

/// @brief Method CalculateOptimizedControlDataType, addr 0xaf35410, size 0x168, virtual true, abstract: false, final false
inline ::UnityEngine::InputSystem::Utilities::FourCC CalculateOptimizedControlDataType() ;

/// @brief Method CompareValue, addr 0xaf35210, size 0xec, virtual true, abstract: false, final false
inline bool CompareValue(void*  firstStatePtr, void*  secondStatePtr) ;

/// @brief Method EvaluateMagnitude, addr 0xaf352fc, size 0x60, virtual true, abstract: false, final false
inline float_t EvaluateMagnitude(void*  statePtr) ;

/// @brief Method EvaluateMagnitude, addr 0xaf3535c, size 0x90, virtual false, abstract: false, final false
inline float_t EvaluateMagnitude(float_t  value) ;

/// @brief Method FinishSetup, addr 0xaf34ee0, size 0xe8, virtual true, abstract: false, final false
inline void FinishSetup() ;

static inline ::UnityEngine::InputSystem::Controls::AxisControl* New_ctor() ;

/// @brief Method Preprocess, addr 0xaf34d50, size 0xbc, virtual false, abstract: false, final false
inline float_t Preprocess(float_t  value) ;

/// @brief Method ReadUnprocessedValueFromState, addr 0xaf34fc8, size 0x168, virtual true, abstract: false, final false
inline float_t ReadUnprocessedValueFromState(void*  statePtr) ;

/// @brief Method Unpreprocess, addr 0xaf34e0c, size 0x4c, virtual false, abstract: false, final false
inline float_t Unpreprocess(float_t  value) ;

/// @brief Method WriteValueIntoState, addr 0xaf35130, size 0xe0, virtual true, abstract: false, final false
inline void WriteValueIntoState(float_t  value, void*  statePtr) ;

constexpr ::GlobalNamespace::AxisControl_Clamp const& __cordl_internal_get_clamp() const;

constexpr ::GlobalNamespace::AxisControl_Clamp& __cordl_internal_get_clamp() ;

constexpr float_t const& __cordl_internal_get_clampConstant() const;

constexpr float_t& __cordl_internal_get_clampConstant() ;

constexpr float_t const& __cordl_internal_get_clampMax() const;

constexpr float_t& __cordl_internal_get_clampMax() ;

constexpr float_t const& __cordl_internal_get_clampMin() const;

constexpr float_t& __cordl_internal_get_clampMin() ;

constexpr bool const& __cordl_internal_get_invert() const;

constexpr bool& __cordl_internal_get_invert() ;

constexpr bool const& __cordl_internal_get_normalize() const;

constexpr bool& __cordl_internal_get_normalize() ;

constexpr float_t const& __cordl_internal_get_normalizeMax() const;

constexpr float_t& __cordl_internal_get_normalizeMax() ;

constexpr float_t const& __cordl_internal_get_normalizeMin() const;

constexpr float_t& __cordl_internal_get_normalizeMin() ;

constexpr float_t const& __cordl_internal_get_normalizeZero() const;

constexpr float_t& __cordl_internal_get_normalizeZero() ;

constexpr bool const& __cordl_internal_get_scale() const;

constexpr bool& __cordl_internal_get_scale() ;

constexpr float_t const& __cordl_internal_get_scaleFactor() const;

constexpr float_t& __cordl_internal_get_scaleFactor() ;

constexpr void __cordl_internal_set_clamp(::GlobalNamespace::AxisControl_Clamp  value) ;

constexpr void __cordl_internal_set_clampConstant(float_t  value) ;

constexpr void __cordl_internal_set_clampMax(float_t  value) ;

constexpr void __cordl_internal_set_clampMin(float_t  value) ;

constexpr void __cordl_internal_set_invert(bool  value) ;

constexpr void __cordl_internal_set_normalize(bool  value) ;

constexpr void __cordl_internal_set_normalizeMax(float_t  value) ;

constexpr void __cordl_internal_set_normalizeMin(float_t  value) ;

constexpr void __cordl_internal_set_normalizeZero(float_t  value) ;

constexpr void __cordl_internal_set_scale(bool  value) ;

constexpr void __cordl_internal_set_scaleFactor(float_t  value) ;

/// @brief Method .ctor, addr 0xaf34e58, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AxisControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AxisControl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AxisControl(AxisControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AxisControl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AxisControl(AxisControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13852};

/// @brief Field clamp, offset: 0x104, size: 0x4, def value: None
 ::GlobalNamespace::AxisControl_Clamp  ___clamp;

/// @brief Field clampMin, offset: 0x108, size: 0x4, def value: None
 float_t  ___clampMin;

/// @brief Field clampMax, offset: 0x10c, size: 0x4, def value: None
 float_t  ___clampMax;

/// @brief Field clampConstant, offset: 0x110, size: 0x4, def value: None
 float_t  ___clampConstant;

/// @brief Field invert, offset: 0x114, size: 0x1, def value: None
 bool  ___invert;

/// @brief Field normalize, offset: 0x115, size: 0x1, def value: None
 bool  ___normalize;

/// @brief Field normalizeMin, offset: 0x118, size: 0x4, def value: None
 float_t  ___normalizeMin;

/// @brief Field normalizeMax, offset: 0x11c, size: 0x4, def value: None
 float_t  ___normalizeMax;

/// @brief Field normalizeZero, offset: 0x120, size: 0x4, def value: None
 float_t  ___normalizeZero;

/// @brief Field scale, offset: 0x124, size: 0x1, def value: None
 bool  ___scale;

/// @brief Field scaleFactor, offset: 0x128, size: 0x4, def value: None
 float_t  ___scaleFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___clamp) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___clampMin) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___clampMax) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___clampConstant) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___invert) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___normalize) == 0x115, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___normalizeMin) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___normalizeMax) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___normalizeZero) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___scale) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Controls::AxisControl, ___scaleFactor) == 0x128, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Controls::AxisControl) == 0x130, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Controls
