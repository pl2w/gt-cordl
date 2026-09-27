#pragma once
// IWYU pragma private; include "Unity/Cinemachine/DefaultInputAxisDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DefaultInputAxisDriver)
namespace Unity::Cinemachine {
struct InputAxis;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct DefaultInputAxisDriver;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::DefaultInputAxisDriver);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::DefaultInputAxisDriver, "Unity.Cinemachine", "DefaultInputAxisDriver");
// Dependencies 
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.DefaultInputAxisDriver
struct CORDL_TYPE DefaultInputAxisDriver {
public:
// Declarations
/// @brief Method ProcessInput, addr 0xaeb82ac, size 0x280, virtual false, abstract: false, final false
inline void ProcessInput(::by_ref<::Unity::Cinemachine::InputAxis>  axis, float_t  inputValue, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaeb852c, size 0x10, virtual false, abstract: false, final false
inline void Reset(::by_ref<::Unity::Cinemachine::InputAxis>  axis) ;

/// @brief Method Validate, addr 0xaeb8284, size 0x14, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method get_Default, addr 0xaeb8298, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::DefaultInputAxisDriver get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr DefaultInputAxisDriver() ;

// Ctor Parameters [CppParam { name: "m_CurrentSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AccelTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DecelTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr DefaultInputAxisDriver(float_t  m_CurrentSpeed, float_t  AccelTime, float_t  DecelTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22334};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_CurrentSpeed, offset: 0x0, size: 0x4, def value: None
 float_t  m_CurrentSpeed;

/// [Tooltip("The amount of time in seconds it takes to accelerate to MaxSpeed with the supplied Axis at its maximum value")]
/// @brief Field AccelTime, offset: 0x4, size: 0x4, def value: None
 float_t  AccelTime;

/// [Tooltip("The amount of time in seconds it takes to decelerate the axis to zero if the supplied axis is in a neutral position")]
/// @brief Field DecelTime, offset: 0x8, size: 0x4, def value: None
 float_t  DecelTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::DefaultInputAxisDriver, m_CurrentSpeed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::DefaultInputAxisDriver, AccelTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::DefaultInputAxisDriver, DecelTime) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::DefaultInputAxisDriver) == 0xc, "Size mismatch!");

} // namespace end def Unity::Cinemachine
