#pragma once
// IWYU pragma private; include "GlobalNamespace/AutomaticAdjustIPD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AutomaticAdjustIPD)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
// Forward declare root types
namespace GlobalNamespace {
class AutomaticAdjustIPD;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AutomaticAdjustIPD*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutomaticAdjustIPD*, "", "AutomaticAdjustIPD");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.Vector3, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: AutomaticAdjustIPD
class CORDL_TYPE AutomaticAdjustIPD : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field adjustXScaleObjects, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_adjustXScaleObjects, put=__cordl_internal_set_adjustXScaleObjects)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  adjustXScaleObjects;

/// @brief Field currentIPD, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIPD, put=__cordl_internal_set_currentIPD)) float_t  currentIPD;

/// @brief Field headset, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_headset, put=__cordl_internal_set_headset)) ::UnityEngine::XR::InputDevice  headset;

/// @brief Field lastIPD, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastIPD, put=__cordl_internal_set_lastIPD)) float_t  lastIPD;

/// @brief Field leftEyePosition, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftEyePosition, put=__cordl_internal_set_leftEyePosition)) ::UnityEngine::Vector3  leftEyePosition;

/// @brief Field rightEyePosition, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightEyePosition, put=__cordl_internal_set_rightEyePosition)) ::UnityEngine::Vector3  rightEyePosition;

/// @brief Field sizeAt58mm, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeAt58mm, put=__cordl_internal_set_sizeAt58mm)) float_t  sizeAt58mm;

/// @brief Field sizeAt63mm, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeAt63mm, put=__cordl_internal_set_sizeAt63mm)) float_t  sizeAt63mm;

/// @brief Field testOverride, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_testOverride, put=__cordl_internal_set_testOverride)) bool  testOverride;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::GlobalNamespace::AutomaticAdjustIPD* New_ctor() ;

/// @brief Method OnDisable, addr 0x57a0854, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57a0848, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x57a0860, size 0x220, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_adjustXScaleObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_adjustXScaleObjects() ;

constexpr float_t const& __cordl_internal_get_currentIPD() const;

constexpr float_t& __cordl_internal_get_currentIPD() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_headset() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_headset() ;

constexpr float_t const& __cordl_internal_get_lastIPD() const;

constexpr float_t& __cordl_internal_get_lastIPD() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftEyePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftEyePosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightEyePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightEyePosition() ;

constexpr float_t const& __cordl_internal_get_sizeAt58mm() const;

constexpr float_t& __cordl_internal_get_sizeAt58mm() ;

constexpr float_t const& __cordl_internal_get_sizeAt63mm() const;

constexpr float_t& __cordl_internal_get_sizeAt63mm() ;

constexpr bool const& __cordl_internal_get_testOverride() const;

constexpr bool& __cordl_internal_get_testOverride() ;

constexpr void __cordl_internal_set_adjustXScaleObjects(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_currentIPD(float_t  value) ;

constexpr void __cordl_internal_set_headset(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_lastIPD(float_t  value) ;

constexpr void __cordl_internal_set_leftEyePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightEyePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_sizeAt58mm(float_t  value) ;

constexpr void __cordl_internal_set_sizeAt63mm(float_t  value) ;

constexpr void __cordl_internal_set_testOverride(bool  value) ;

/// @brief Method .ctor, addr 0x57a0a80, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AutomaticAdjustIPD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AutomaticAdjustIPD", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AutomaticAdjustIPD(AutomaticAdjustIPD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutomaticAdjustIPD", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutomaticAdjustIPD(AutomaticAdjustIPD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1531};

/// @brief Field headset, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___headset;

/// @brief Field currentIPD, offset: 0x30, size: 0x4, def value: None
 float_t  ___currentIPD;

/// @brief Field leftEyePosition, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftEyePosition;

/// @brief Field rightEyePosition, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightEyePosition;

/// @brief Field testOverride, offset: 0x4c, size: 0x1, def value: None
 bool  ___testOverride;

/// @brief Field adjustXScaleObjects, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___adjustXScaleObjects;

/// @brief Field sizeAt58mm, offset: 0x58, size: 0x4, def value: None
 float_t  ___sizeAt58mm;

/// @brief Field sizeAt63mm, offset: 0x5c, size: 0x4, def value: None
 float_t  ___sizeAt63mm;

/// @brief Field lastIPD, offset: 0x60, size: 0x4, def value: None
 float_t  ___lastIPD;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutomaticAdjustIPD, ___headset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticAdjustIPD, ___currentIPD) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticAdjustIPD, ___leftEyePosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticAdjustIPD, ___rightEyePosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticAdjustIPD, ___testOverride) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticAdjustIPD, ___adjustXScaleObjects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticAdjustIPD, ___sizeAt58mm) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticAdjustIPD, ___sizeAt63mm) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticAdjustIPD, ___lastIPD) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutomaticAdjustIPD) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
