#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxis_RecenteringState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(InputAxis_RecenteringState)
// Forward declare root types
namespace GlobalNamespace {
struct InputAxis_RecenteringState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputAxis_RecenteringState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputAxis_RecenteringState, "Unity.Cinemachine", "InputAxis/RecenteringState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.InputAxis/RecenteringState
struct CORDL_TYPE InputAxis_RecenteringState {
public:
// Declarations
/// @brief Method get_CurrentTime, addr 0xaeb7fd0, size 0x4c, virtual false, abstract: false, final false
static inline float_t get_CurrentTime() ;

// Ctor Parameters []
// @brief default ctor
constexpr InputAxis_RecenteringState() ;

// Ctor Parameters [CppParam { name: "m_RecenteringVelocity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ForceRecenter", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LastValueChangeTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LastValue", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr InputAxis_RecenteringState(float_t  m_RecenteringVelocity, bool  m_ForceRecenter, float_t  m_LastValueChangeTime, float_t  m_LastValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22332};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_Epsilon offset 0xffffffff size 0x4
static constexpr float_t  k_Epsilon{static_cast<float_t>(0.0001f)};

/// @brief Field m_RecenteringVelocity, offset: 0x0, size: 0x4, def value: None
 float_t  m_RecenteringVelocity;

/// @brief Field m_ForceRecenter, offset: 0x4, size: 0x1, def value: None
 bool  m_ForceRecenter;

/// @brief Field m_LastValueChangeTime, offset: 0x8, size: 0x4, def value: None
 float_t  m_LastValueChangeTime;

/// @brief Field m_LastValue, offset: 0xc, size: 0x4, def value: None
 float_t  m_LastValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputAxis_RecenteringState, m_RecenteringVelocity) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputAxis_RecenteringState, m_ForceRecenter) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputAxis_RecenteringState, m_LastValueChangeTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InputAxis_RecenteringState, m_LastValue) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputAxis_RecenteringState) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
