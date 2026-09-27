#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Damper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Damper)
namespace Unity::Cinemachine {
class Damper_AverageFrameRateTracker;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class Damper;
}
namespace Unity::Cinemachine {
class Damper_AverageFrameRateTracker;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Damper*);
MARK_REF_T(::Unity::Cinemachine::Damper_AverageFrameRateTracker*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Damper*, "Unity.Cinemachine", "Damper");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Damper_AverageFrameRateTracker*, "Unity.Cinemachine", "Damper/AverageFrameRateTracker");
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Damper
class CORDL_TYPE Damper : public ::System::Object {
public:
// Declarations
using AverageFrameRateTracker = ::Unity::Cinemachine::Damper_AverageFrameRateTracker;

/// @brief Method Damp, addr 0xaeb3a98, size 0x184, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Damp(::UnityEngine::Vector3  initial, ::UnityEngine::Vector3  dampTime, float_t  deltaTime) ;

/// @brief Method Damp, addr 0xaeb3c58, size 0x118, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Damp(::UnityEngine::Vector3  initial, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method Damp, addr 0xaeb3944, size 0x68, virtual false, abstract: false, final false
static inline float_t Damp(float_t  initial, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method DecayConstant, addr 0xaeb9410, size 0x2c, virtual false, abstract: false, final false
static inline float_t DecayConstant(float_t  time, float_t  residual) ;

/// @brief Method DecayedRemainder, addr 0xaeb943c, size 0x28, virtual false, abstract: false, final false
static inline float_t DecayedRemainder(float_t  initial, float_t  decayConstant, float_t  deltaTime) ;

/// @brief Method StableDamp, addr 0xaeb94cc, size 0x1ec, virtual false, abstract: false, final false
static inline float_t StableDamp(float_t  initial, float_t  dampTime, float_t  deltaTime) ;

/// @brief Method StandardDamp, addr 0xaeb9464, size 0x68, virtual false, abstract: false, final false
static inline float_t StandardDamp(float_t  initial, float_t  dampTime, float_t  deltaTime) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Damper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Damper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Damper(Damper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Damper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Damper(Damper const& ) = delete;

/// @brief Field Epsilon offset 0xffffffff size 0x4
static constexpr float_t  Epsilon{static_cast<float_t>(0.0001f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22352};

/// @brief Field kLogNegligibleResidual offset 0xffffffff size 0x4
static constexpr float_t  kLogNegligibleResidual{static_cast<float_t>(-4.6051702f)};

/// @brief Field kNegligibleResidual offset 0xffffffff size 0x4
static constexpr float_t  kNegligibleResidual{static_cast<float_t>(0.01f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::Damper) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Damper/AverageFrameRateTracker
class CORDL_TYPE Damper_AverageFrameRateTracker : public ::System::Object {
public:
// Declarations
/// @brief Field <DampTimeScale>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DampTimeScale_k__BackingField, put=setStaticF__DampTimeScale_k__BackingField)) float_t  _DampTimeScale_k__BackingField;

/// @brief Field <FPS>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FPS_k__BackingField, put=setStaticF__FPS_k__BackingField)) float_t  _FPS_k__BackingField;

/// @brief Field s_Buffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Buffer, put=setStaticF_s_Buffer)) ::ArrayW<float_t>  s_Buffer;

/// @brief Field s_Head, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Head, put=setStaticF_s_Head)) int32_t  s_Head;

/// @brief Field s_NumItems, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_NumItems, put=setStaticF_s_NumItems)) int32_t  s_NumItems;

/// @brief Field s_Sum, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Sum, put=setStaticF_s_Sum)) float_t  s_Sum;

/// @brief Method Append, addr 0xaeb9a54, size 0x1dc, virtual false, abstract: false, final false
static inline void Append() ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method Initialize, addr 0xaeb9830, size 0x4c, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method OnSceneLoaded, addr 0xaeb994c, size 0x4c, virtual false, abstract: false, final false
static inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method Reset, addr 0xaeb987c, size 0xd0, virtual false, abstract: false, final false
static inline void Reset() ;

/// @brief Method SetDampTimeScale, addr 0xaeb9998, size 0xbc, virtual false, abstract: false, final false
static inline void SetDampTimeScale(float_t  fps) ;

static inline float_t getStaticF__DampTimeScale_k__BackingField() ;

static inline float_t getStaticF__FPS_k__BackingField() ;

static inline ::ArrayW<float_t> getStaticF_s_Buffer() ;

static inline int32_t getStaticF_s_Head() ;

static inline int32_t getStaticF_s_NumItems() ;

static inline float_t getStaticF_s_Sum() ;

/// [CompilerGenerated]
/// @brief Method get_DampTimeScale, addr 0xaeb9774, size 0x58, virtual false, abstract: false, final false
static inline float_t get_DampTimeScale() ;

/// [CompilerGenerated]
/// @brief Method get_FPS, addr 0xaeb96b8, size 0x58, virtual false, abstract: false, final false
static inline float_t get_FPS() ;

static inline void setStaticF__DampTimeScale_k__BackingField(float_t  value) ;

static inline void setStaticF__FPS_k__BackingField(float_t  value) ;

static inline void setStaticF_s_Buffer(::ArrayW<float_t>  value) ;

static inline void setStaticF_s_Head(int32_t  value) ;

static inline void setStaticF_s_NumItems(int32_t  value) ;

static inline void setStaticF_s_Sum(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DampTimeScale, addr 0xaeb97cc, size 0x64, virtual false, abstract: false, final false
static inline void set_DampTimeScale(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FPS, addr 0xaeb9710, size 0x64, virtual false, abstract: false, final false
static inline void set_FPS(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Damper_AverageFrameRateTracker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Damper_AverageFrameRateTracker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Damper_AverageFrameRateTracker(Damper_AverageFrameRateTracker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Damper_AverageFrameRateTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Damper_AverageFrameRateTracker(Damper_AverageFrameRateTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22351};

/// @brief Field kBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  kBufferSize{static_cast<int32_t>(0x64)};

/// @brief Field kSubframeTime offset 0xffffffff size 0x4
static constexpr float_t  kSubframeTime{static_cast<float_t>(0.0009765625f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::Damper_AverageFrameRateTracker) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
