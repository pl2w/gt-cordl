#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableHandle)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableTraversalMode;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Playables::PlayableHandle, "UnityEngine.Playables", "PlayableHandle");
// [UsedByNativeCode]
// [NativeHeader("Runtime/Director/Core/HPlayableGraph.h")]
// [NativeHeader("Runtime/Director/Core/HPlayable.h")]
// [NativeHeader("Runtime/Export/Director/PlayableHandle.bindings.h")]
// Dependencies System.IntPtr, UnityEngine.Playables.IPlayableBehaviour
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: UnityEngine.Playables.PlayableHandle
struct CORDL_TYPE PlayableHandle {
public:
// Declarations
/// @brief Field m_Null, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_m_Null, put=setStaticF_m_Null)) ::UnityEngine::Playables::PlayableHandle  m_Null;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>*() ;

/// @brief Method CheckInputBounds, addr 0xb602814, size 0x70, virtual false, abstract: false, final false
inline bool CheckInputBounds(int32_t  inputIndex) ;

/// @brief Method CheckInputBounds, addr 0xb602b1c, size 0x200, virtual false, abstract: false, final false
inline bool CheckInputBounds(int32_t  inputIndex, bool  acceptAny) ;

/// @brief Method CompareVersion, addr 0xb6029bc, size 0x10, virtual false, abstract: false, final false
static inline bool CompareVersion(::UnityEngine::Playables::PlayableHandle  lhs, ::UnityEngine::Playables::PlayableHandle  rhs) ;

/// @brief Method Equals, addr 0xb602a78, size 0x70, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Playables::PlayableHandle  other) ;

/// @brief Method Equals, addr 0xb6029cc, size 0xac, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  p) ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::GetDuration", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetDuration, addr 0xb60301c, size 0x3c, virtual false, abstract: false, final false
inline double_t GetDuration() ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::GetGraph", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetGraph, addr 0xb6030e8, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableGraph GetGraph() ;

/// @brief Method GetGraph_Injected, addr 0xb603174, size 0x44, virtual false, abstract: false, final false
static inline void GetGraph_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph>  ret) ;

/// @brief Method GetHashCode, addr 0xb602ae8, size 0x34, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetInput, addr 0xb60255c, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable GetInput(int32_t  inputPort) ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::GetInputCount", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetInputCount, addr 0xb602d1c, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetInputCount() ;

/// [FreeFunction("PlayableHandleBindings::GetInputHandle", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetInputHandle, addr 0xb6025c0, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableHandle GetInputHandle(int32_t  index) ;

/// @brief Method GetInputHandle_Injected, addr 0xb603460, size 0x54, virtual false, abstract: false, final false
static inline void GetInputHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Playables::PlayableHandle>  ret) ;

/// @brief Method GetInputWeight, addr 0xb6028d8, size 0xa0, virtual false, abstract: false, final false
inline float_t GetInputWeight(int32_t  inputIndex) ;

/// [FreeFunction("PlayableHandleBindings::GetInputWeightFromIndex", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetInputWeightFromIndex, addr 0xb602978, size 0x44, virtual false, abstract: false, final false
inline float_t GetInputWeightFromIndex(int32_t  index) ;

/// [FreeFunction("PlayableHandleBindings::GetJobData", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method GetJobData, addr 0xb603368, size 0x3c, virtual false, abstract: false, final false
inline ::System::IntPtr GetJobData() ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::GetJobType", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetJobType, addr 0xb602d94, size 0x3c, virtual false, abstract: false, final false
inline ::System::Type* GetJobType() ;

/// @brief Method GetObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Playables::IPlayableBehaviour*> && ::cordl_internals::reference_type_constraint<T>)
inline T GetObject() ;

/// @brief Method GetOutput, addr 0xb60265c, size 0x64, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::Playable GetOutput(int32_t  outputPort) ;

/// [FreeFunction("PlayableHandleBindings::GetOutputHandle", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetOutputHandle, addr 0xb6026c0, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayableHandle GetOutputHandle(int32_t  index) ;

/// @brief Method GetOutputHandle_Injected, addr 0xb6034b4, size 0x54, virtual false, abstract: false, final false
static inline void GetOutputHandle_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Playables::PlayableHandle>  ret) ;

/// [FreeFunction("PlayableHandleBindings::GetPlayState", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method GetPlayState, addr 0xb602e14, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::PlayState GetPlayState() ;

/// [FreeFunction("PlayableHandleBindings::GetPlayableType", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method GetPlayableType, addr 0xb6015b8, size 0x3c, virtual false, abstract: false, final false
inline ::System::Type* GetPlayableType() ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::GetPreviousTime", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetPreviousTime, addr 0xb6032e8, size 0x3c, virtual false, abstract: false, final false
inline double_t GetPreviousTime() ;

/// [FreeFunction("PlayableHandleBindings::GetScriptInstance", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method GetScriptInstance, addr 0xb603424, size 0x3c, virtual false, abstract: false, final false
inline ::System::Object* GetScriptInstance() ;

/// [FreeFunction("PlayableHandleBindings::GetTime", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method GetTime, addr 0xb602f14, size 0x3c, virtual false, abstract: false, final false
inline double_t GetTime() ;

/// [FreeFunction("PlayableHandleBindings::GetTimeWrapMode", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method GetTimeWrapMode, addr 0xb6033a4, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode() ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::IsDone", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method IsDone, addr 0xb602f9c, size 0x3c, virtual false, abstract: false, final false
inline bool IsDone() ;

/// [VisibleToOtherModules]
/// @brief Method IsPlayableOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool IsPlayableOfType() ;

/// [VisibleToOtherModules]
/// @brief Method IsValid, addr 0xb602d58, size 0x3c, virtual false, abstract: false, final false
inline bool IsValid() ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::Pause", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method Pause, addr 0xb602e8c, size 0x3c, virtual false, abstract: false, final false
inline void Pause() ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::Play", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method Play, addr 0xb602e50, size 0x3c, virtual false, abstract: false, final false
inline void Play() ;

/// [FreeFunction("PlayableHandleBindings::SetDone", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method SetDone, addr 0xb602fd8, size 0x44, virtual false, abstract: false, final false
inline void SetDone(bool  value) ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::SetDuration", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetDuration, addr 0xb603058, size 0x4c, virtual false, abstract: false, final false
inline void SetDuration(double_t  value) ;

/// [FreeFunction("PlayableHandleBindings::SetInputCount", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method SetInputCount, addr 0xb6031b8, size 0x44, virtual false, abstract: false, final false
inline void SetInputCount(int32_t  value) ;

/// @brief Method SetInputWeight, addr 0xb60275c, size 0xb8, virtual false, abstract: false, final false
inline bool SetInputWeight(int32_t  inputIndex, float_t  weight) ;

/// [FreeFunction("PlayableHandleBindings::SetInputWeight", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method SetInputWeight, addr 0xb6031fc, size 0x98, virtual false, abstract: false, final false
inline void SetInputWeight(::UnityEngine::Playables::PlayableHandle  input, float_t  weight) ;

/// [FreeFunction("PlayableHandleBindings::SetInputWeightFromIndex", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetInputWeightFromIndex, addr 0xb602884, size 0x54, virtual false, abstract: false, final false
inline void SetInputWeightFromIndex(int32_t  index, float_t  weight) ;

/// @brief Method SetInputWeight_Injected, addr 0xb603294, size 0x54, virtual false, abstract: false, final false
static inline void SetInputWeight_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle>  _unity_self, ::by_ref<::UnityEngine::Playables::PlayableHandle>  input, float_t  weight) ;

/// [FreeFunction("PlayableHandleBindings::SetPropagateSetTime", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method SetPropagateSetTime, addr 0xb6030a4, size 0x44, virtual false, abstract: false, final false
inline void SetPropagateSetTime(bool  value) ;

/// [FreeFunction("PlayableHandleBindings::SetScriptInstance", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method SetScriptInstance, addr 0xb602dd0, size 0x44, virtual false, abstract: false, final false
inline void SetScriptInstance(::System::Object*  scriptInstance) ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::SetSpeed", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetSpeed, addr 0xb602ec8, size 0x4c, virtual false, abstract: false, final false
inline void SetSpeed(double_t  value) ;

/// [VisibleToOtherModules]
/// [FreeFunction("PlayableHandleBindings::SetTime", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetTime, addr 0xb602f50, size 0x4c, virtual false, abstract: false, final false
inline void SetTime(double_t  value) ;

/// [FreeFunction("PlayableHandleBindings::SetTimeWrapMode", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method SetTimeWrapMode, addr 0xb6033e0, size 0x44, virtual false, abstract: false, final false
inline void SetTimeWrapMode(::UnityEngine::Playables::DirectorWrapMode  mode) ;

/// [FreeFunction("PlayableHandleBindings::SetTraversalMode", HasExplicitThis = true, ThrowsException = true)]
/// [VisibleToOtherModules]
/// @brief Method SetTraversalMode, addr 0xb603324, size 0x44, virtual false, abstract: false, final false
inline void SetTraversalMode(::UnityEngine::Playables::PlayableTraversalMode  mode) ;

static inline ::UnityEngine::Playables::PlayableHandle getStaticF_m_Null() ;

/// @brief Method get_Null, addr 0xb601774, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Playables::PlayableHandle get_Null() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>* i___System__IEquatable_1___UnityEngine__Playables__PlayableHandle_() ;

/// @brief Method op_Equality, addr 0xb60168c, size 0x78, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::Playables::PlayableHandle  x, ::UnityEngine::Playables::PlayableHandle  y) ;

static inline void setStaticF_m_Null(::UnityEngine::Playables::PlayableHandle  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayableHandle() ;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayableHandle(::System::IntPtr  m_Handle, uint32_t  m_Version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15419};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Handle;

/// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
 uint32_t  m_Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Version) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Playables::PlayableHandle) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Playables
