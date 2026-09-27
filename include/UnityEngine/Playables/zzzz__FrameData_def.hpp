#pragma once
// IWYU pragma private; include "UnityEngine/Playables/FrameData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__FrameData_Flags_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FrameData)
namespace GlobalNamespace {
struct FrameData_EvaluationType;
}
namespace GlobalNamespace {
struct FrameData_Flags;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableOutput;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct FrameData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::FrameData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::FrameData, "UnityEngine.Playables", "FrameData");
// Dependencies UnityEngine.Playables.FrameData::Flags, UnityEngine.Playables.PlayableOutput
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.FrameData
struct CORDL_TYPE FrameData {
public:
// Declarations
using EvaluationType = ::GlobalNamespace::FrameData_EvaluationType;

using Flags = ::GlobalNamespace::FrameData_Flags;

 __declspec(property(get=get_deltaTime)) float_t  deltaTime;

 __declspec(property(get=get_effectivePlayState)) ::UnityEngine::Playables::PlayState  effectivePlayState;

 __declspec(property(get=get_effectiveSpeed)) float_t  effectiveSpeed;

 __declspec(property(get=get_evaluationType)) ::GlobalNamespace::FrameData_EvaluationType  evaluationType;

 __declspec(property(get=get_output)) ::UnityEngine::Playables::PlayableOutput  output;

 __declspec(property(get=get_seekOccurred)) bool  seekOccurred;

 __declspec(property(get=get_timeHeld)) bool  timeHeld;

 __declspec(property(get=get_timeLooped)) bool  timeLooped;

/// @brief Method HasFlags, addr 0xb600e70, size 0x10, virtual false, abstract: false, final false
inline bool HasFlags(::GlobalNamespace::FrameData_Flags  flag) ;

/// @brief Method get_deltaTime, addr 0xb600e80, size 0xc, virtual false, abstract: false, final false
inline float_t get_deltaTime() ;

/// @brief Method get_effectivePlayState, addr 0xb600ed4, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState get_effectivePlayState() ;

/// @brief Method get_effectiveSpeed, addr 0xb600e8c, size 0x8, virtual false, abstract: false, final false
inline float_t get_effectiveSpeed() ;

/// @brief Method get_evaluationType, addr 0xb600e94, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::FrameData_EvaluationType get_evaluationType() ;

/// @brief Method get_output, addr 0xb600ec8, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableOutput get_output() ;

/// @brief Method get_seekOccurred, addr 0xb600ea4, size 0xc, virtual false, abstract: false, final false
inline bool get_seekOccurred() ;

/// @brief Method get_timeHeld, addr 0xb600ebc, size 0xc, virtual false, abstract: false, final false
inline bool get_timeHeld() ;

/// @brief Method get_timeLooped, addr 0xb600eb0, size 0xc, virtual false, abstract: false, final false
inline bool get_timeLooped() ;

// Ctor Parameters []
// @brief default ctor
constexpr FrameData() ;

// Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EffectiveParentDelay", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EffectiveSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "::GlobalNamespace::FrameData_Flags", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Output", ty: "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: None, comment: None }]
constexpr FrameData(uint64_t  m_FrameID, double_t  m_DeltaTime, float_t  m_Weight, float_t  m_EffectiveWeight, double_t  m_EffectiveParentDelay, float_t  m_EffectiveParentSpeed, float_t  m_EffectiveSpeed, ::GlobalNamespace::FrameData_Flags  m_Flags, ::UnityEngine::Playables::PlayableOutput  m_Output) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15400};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_FrameID, offset: 0x0, size: 0x8, def value: None
 uint64_t  m_FrameID;

/// @brief Field m_DeltaTime, offset: 0x8, size: 0x8, def value: None
 double_t  m_DeltaTime;

/// @brief Field m_Weight, offset: 0x10, size: 0x4, def value: None
 float_t  m_Weight;

/// @brief Field m_EffectiveWeight, offset: 0x14, size: 0x4, def value: None
 float_t  m_EffectiveWeight;

/// @brief Field m_EffectiveParentDelay, offset: 0x18, size: 0x8, def value: None
 double_t  m_EffectiveParentDelay;

/// @brief Field m_EffectiveParentSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  m_EffectiveParentSpeed;

/// @brief Field m_EffectiveSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  m_EffectiveSpeed;

/// @brief Field m_Flags, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::FrameData_Flags  m_Flags;

/// @brief Field m_Output, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Playables::PlayableOutput  m_Output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::FrameData, m_FrameID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_DeltaTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_Weight) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveWeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveParentDelay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveParentSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_EffectiveSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_Flags) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::FrameData, m_Output) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::FrameData) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Playables
