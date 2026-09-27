#pragma once
// IWYU pragma private; include "GlobalNamespace/RotationStepper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__RotationStepper_ModeEnum_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RotationStepper)
namespace GlobalNamespace {
struct RotationStepper_ModeEnum;
}
// Forward declare root types
namespace GlobalNamespace {
class RotationStepper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RotationStepper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotationStepper*, "", "RotationStepper");
// Dependencies RotationStepper::ModeEnum, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotationStepper
class CORDL_TYPE RotationStepper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ModeEnum = ::GlobalNamespace::RotationStepper_ModeEnum;

/// @brief Field Angle, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_Angle, put=__cordl_internal_set_Angle)) float_t  Angle;

/// @brief Field Frequency, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Frequency, put=__cordl_internal_set_Frequency)) float_t  Frequency;

/// @brief Field Mode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_Mode, put=__cordl_internal_set_Mode)) ::GlobalNamespace::RotationStepper_ModeEnum  Mode;

/// @brief Field m_phase, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_phase, put=__cordl_internal_set_m_phase)) float_t  m_phase;

static inline ::GlobalNamespace::RotationStepper* New_ctor() ;

/// @brief Method OnEnable, addr 0x55eb590, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x55eb5a4, size 0x12c, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_Angle() const;

constexpr float_t& __cordl_internal_get_Angle() ;

constexpr float_t const& __cordl_internal_get_Frequency() const;

constexpr float_t& __cordl_internal_get_Frequency() ;

constexpr ::GlobalNamespace::RotationStepper_ModeEnum const& __cordl_internal_get_Mode() const;

constexpr ::GlobalNamespace::RotationStepper_ModeEnum& __cordl_internal_get_Mode() ;

constexpr float_t const& __cordl_internal_get_m_phase() const;

constexpr float_t& __cordl_internal_get_m_phase() ;

constexpr void __cordl_internal_set_Angle(float_t  value) ;

constexpr void __cordl_internal_set_Frequency(float_t  value) ;

constexpr void __cordl_internal_set_Mode(::GlobalNamespace::RotationStepper_ModeEnum  value) ;

constexpr void __cordl_internal_set_m_phase(float_t  value) ;

/// @brief Method .ctor, addr 0x55eb6d0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotationStepper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotationStepper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotationStepper(RotationStepper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotationStepper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotationStepper(RotationStepper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{42};

/// @brief Field Mode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::RotationStepper_ModeEnum  ___Mode;

/// [ConditionalField("Mode", (RotationStepper::ModeEnum)0, null, null, null, null, null)]
/// @brief Field Angle, offset: 0x24, size: 0x4, def value: None
 float_t  ___Angle;

/// @brief Field Frequency, offset: 0x28, size: 0x4, def value: None
 float_t  ___Frequency;

/// @brief Field m_phase, offset: 0x2c, size: 0x4, def value: None
 float_t  ___m_phase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotationStepper, ___Mode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationStepper, ___Angle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationStepper, ___Frequency) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotationStepper, ___m_phase) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotationStepper) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
