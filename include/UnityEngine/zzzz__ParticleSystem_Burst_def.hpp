#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_Burst.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurveBlittable_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_Burst)
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_Burst;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_Burst);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_Burst, "UnityEngine", "ParticleSystem/Burst");
// [NativeType((UnityEngine.Bindings.CodegenOptions)1, "MonoBurst", Header = "Runtime/Scripting/ScriptingCommonStructDefinitions.h")]
// Dependencies UnityEngine.ParticleSystem::MinMaxCurveBlittable
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/Burst
struct CORDL_TYPE ParticleSystem_Burst {
public:
// Declarations
 __declspec(property(get=get_count, put=set_count)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  count;

 __declspec(property(get=get_cycleCount)) int32_t  cycleCount;

 __declspec(property(get=get_maxCount)) int16_t  maxCount;

 __declspec(property(get=get_minCount)) int16_t  minCount;

 __declspec(property(get=get_probability, put=set_probability)) float_t  probability;

 __declspec(property(get=get_repeatInterval)) float_t  repeatInterval;

 __declspec(property(get=get_time)) float_t  time;

/// @brief Method .ctor, addr 0xb670740, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(float_t  _time, int16_t  _minCount, int16_t  _maxCount, int32_t  _cycleCount, float_t  _repeatInterval) ;

/// @brief Method get_count, addr 0xb67086c, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ParticleSystem_MinMaxCurve get_count() ;

/// @brief Method get_cycleCount, addr 0xb6709e4, size 0xc, virtual false, abstract: false, final false
inline int32_t get_cycleCount() ;

/// @brief Method get_maxCount, addr 0xb6709c8, size 0x1c, virtual false, abstract: false, final false
inline int16_t get_maxCount() ;

/// @brief Method get_minCount, addr 0xb6709ac, size 0x1c, virtual false, abstract: false, final false
inline int16_t get_minCount() ;

/// @brief Method get_probability, addr 0xb6709f8, size 0x10, virtual false, abstract: false, final false
inline float_t get_probability() ;

/// @brief Method get_repeatInterval, addr 0xb6709f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_repeatInterval() ;

/// @brief Method get_time, addr 0xb670864, size 0x8, virtual false, abstract: false, final false
inline float_t get_time() ;

/// @brief Method set_count, addr 0xb670984, size 0x28, virtual false, abstract: false, final false
inline void set_count(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

/// @brief Method set_probability, addr 0xb670a08, size 0xac, virtual false, abstract: false, final false
inline void set_probability(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_Burst() ;

// Ctor Parameters [CppParam { name: "m_Time", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Count", ty: "::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RepeatCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RepeatInterval", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InvProbability", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_Burst(float_t  m_Time, ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  m_Count, int32_t  m_RepeatCount, float_t  m_RepeatInterval, float_t  m_InvProbability) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30799};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field m_Time, offset: 0x0, size: 0x4, def value: None
 float_t  m_Time;

/// @brief Field m_Count, offset: 0x8, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurveBlittable  m_Count;

/// @brief Field m_RepeatCount, offset: 0x28, size: 0x4, def value: None
 int32_t  m_RepeatCount;

/// @brief Field m_RepeatInterval, offset: 0x2c, size: 0x4, def value: None
 float_t  m_RepeatInterval;

/// @brief Field m_InvProbability, offset: 0x30, size: 0x4, def value: None
 float_t  m_InvProbability;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_Burst, m_Time) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Burst, m_Count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Burst, m_RepeatCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Burst, m_RepeatInterval) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Burst, m_InvProbability) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_Burst) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
