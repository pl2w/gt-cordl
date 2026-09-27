#pragma once
// IWYU pragma private; include "Fusion/EngineProfiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EngineProfiler)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Fusion {
class EngineProfiler;
}
// Write type traits
MARK_REF_T(::Fusion::EngineProfiler*);
DEFINE_IL2CPP_CLASS(::Fusion::EngineProfiler*, "Fusion", "EngineProfiler");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.EngineProfiler
class CORDL_TYPE EngineProfiler : public ::System::Object {
public:
// Declarations
/// @brief Field InputQueueCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InputQueueCallback, put=setStaticF_InputQueueCallback)) ::System::Action_1<int32_t>*  InputQueueCallback;

/// @brief Field InputRecvDeltaCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InputRecvDeltaCallback, put=setStaticF_InputRecvDeltaCallback)) ::System::Action_1<float_t>*  InputRecvDeltaCallback;

/// @brief Field InputRecvDeltaDeviationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InputRecvDeltaDeviationCallback, put=setStaticF_InputRecvDeltaDeviationCallback)) ::System::Action_1<float_t>*  InputRecvDeltaDeviationCallback;

/// @brief Field InputSizeCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InputSizeCallback, put=setStaticF_InputSizeCallback)) ::System::Action_1<int32_t>*  InputSizeCallback;

/// @brief Field InterpolationOffsetCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InterpolationOffsetCallback, put=setStaticF_InterpolationOffsetCallback)) ::System::Action_1<float_t>*  InterpolationOffsetCallback;

/// @brief Field InterpolationOffsetDeviationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InterpolationOffsetDeviationCallback, put=setStaticF_InterpolationOffsetDeviationCallback)) ::System::Action_1<float_t>*  InterpolationOffsetDeviationCallback;

/// @brief Field InterpolationSpeedCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InterpolationSpeedCallback, put=setStaticF_InterpolationSpeedCallback)) ::System::Action_1<float_t>*  InterpolationSpeedCallback;

/// @brief Field RoundTripTimeCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RoundTripTimeCallback, put=setStaticF_RoundTripTimeCallback)) ::System::Action_1<float_t>*  RoundTripTimeCallback;

/// @brief Field RpcInCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RpcInCallback, put=setStaticF_RpcInCallback)) ::System::Action_1<int32_t>*  RpcInCallback;

/// @brief Field RpcOutCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RpcOutCallback, put=setStaticF_RpcOutCallback)) ::System::Action_1<int32_t>*  RpcOutCallback;

/// @brief Field SimulationOffsetCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SimulationOffsetCallback, put=setStaticF_SimulationOffsetCallback)) ::System::Action_1<float_t>*  SimulationOffsetCallback;

/// @brief Field SimulationOffsetDeviationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SimulationOffsetDeviationCallback, put=setStaticF_SimulationOffsetDeviationCallback)) ::System::Action_1<float_t>*  SimulationOffsetDeviationCallback;

/// @brief Field SimulationSpeedCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SimulationSpeedCallback, put=setStaticF_SimulationSpeedCallback)) ::System::Action_1<float_t>*  SimulationSpeedCallback;

/// @brief Field StateRecvDeltaCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StateRecvDeltaCallback, put=setStaticF_StateRecvDeltaCallback)) ::System::Action_1<float_t>*  StateRecvDeltaCallback;

/// @brief Field StateRecvDeltaDeviationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StateRecvDeltaDeviationCallback, put=setStaticF_StateRecvDeltaDeviationCallback)) ::System::Action_1<float_t>*  StateRecvDeltaDeviationCallback;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method Begin, addr 0x5f3cc44, size 0x8c, virtual false, abstract: false, final false
static inline void Begin(::StringW  sample) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method End, addr 0x5f3ccd0, size 0x8, virtual false, abstract: false, final false
static inline void End() ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method InputQueue, addr 0x5f3cdbc, size 0x6c, virtual false, abstract: false, final false
static inline void InputQueue(int32_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method InputRecvDelta, addr 0x5f3d158, size 0x78, virtual false, abstract: false, final false
static inline void InputRecvDelta(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method InputRecvDeltaDeviation, addr 0x5f3d1d0, size 0x78, virtual false, abstract: false, final false
static inline void InputRecvDeltaDeviation(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method InputSize, addr 0x5f3cd50, size 0x6c, virtual false, abstract: false, final false
static inline void InputSize(int32_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method InterpolationOffset, addr 0x5f3d068, size 0x78, virtual false, abstract: false, final false
static inline void InterpolationOffset(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method InterpolationOffsetDeviation, addr 0x5f3d0e0, size 0x78, virtual false, abstract: false, final false
static inline void InterpolationOffsetDeviation(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method InterpolationSpeed, addr 0x5f3cff0, size 0x78, virtual false, abstract: false, final false
static inline void InterpolationSpeed(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method RoundTripTime, addr 0x5f3ccd8, size 0x78, virtual false, abstract: false, final false
static inline void RoundTripTime(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method RpcIn, addr 0x5f3ce28, size 0x6c, virtual false, abstract: false, final false
static inline void RpcIn(int32_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method RpcOut, addr 0x5f3ce94, size 0x6c, virtual false, abstract: false, final false
static inline void RpcOut(int32_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method SimulationOffset, addr 0x5f3d2c0, size 0x78, virtual false, abstract: false, final false
static inline void SimulationOffset(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method SimulationOffsetDeviation, addr 0x5f3d338, size 0x78, virtual false, abstract: false, final false
static inline void SimulationOffsetDeviation(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method SimulationSpeed, addr 0x5f3d248, size 0x78, virtual false, abstract: false, final false
static inline void SimulationSpeed(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method StateRecvDelta, addr 0x5f3cf00, size 0x78, virtual false, abstract: false, final false
static inline void StateRecvDelta(float_t  value) ;

/// [Conditional("ENABLE_PROFILER")]
/// @brief Method StateRecvDeltaDeviation, addr 0x5f3cf78, size 0x78, virtual false, abstract: false, final false
static inline void StateRecvDeltaDeviation(float_t  value) ;

static inline ::System::Action_1<int32_t>* getStaticF_InputQueueCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_InputRecvDeltaCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_InputRecvDeltaDeviationCallback() ;

static inline ::System::Action_1<int32_t>* getStaticF_InputSizeCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_InterpolationOffsetCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_InterpolationOffsetDeviationCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_InterpolationSpeedCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_RoundTripTimeCallback() ;

static inline ::System::Action_1<int32_t>* getStaticF_RpcInCallback() ;

static inline ::System::Action_1<int32_t>* getStaticF_RpcOutCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_SimulationOffsetCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_SimulationOffsetDeviationCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_SimulationSpeedCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_StateRecvDeltaCallback() ;

static inline ::System::Action_1<float_t>* getStaticF_StateRecvDeltaDeviationCallback() ;

static inline void setStaticF_InputQueueCallback(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF_InputRecvDeltaCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_InputRecvDeltaDeviationCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_InputSizeCallback(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF_InterpolationOffsetCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_InterpolationOffsetDeviationCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_InterpolationSpeedCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_RoundTripTimeCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_RpcInCallback(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF_RpcOutCallback(::System::Action_1<int32_t>*  value) ;

static inline void setStaticF_SimulationOffsetCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_SimulationOffsetDeviationCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_SimulationSpeedCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_StateRecvDeltaCallback(::System::Action_1<float_t>*  value) ;

static inline void setStaticF_StateRecvDeltaDeviationCallback(::System::Action_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EngineProfiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EngineProfiler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EngineProfiler(EngineProfiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EngineProfiler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EngineProfiler(EngineProfiler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31263};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::EngineProfiler) == 0x10, "Size mismatch!");

} // namespace end def Fusion
