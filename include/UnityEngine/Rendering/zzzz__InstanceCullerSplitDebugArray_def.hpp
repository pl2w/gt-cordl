#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/InstanceCullerSplitDebugArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeQueue_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__InstanceCullerSplitDebugArray_Info_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstanceCullerSplitDebugArray)
namespace GlobalNamespace {
struct InstanceCullerSplitDebugArray_Info;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct BatchCullingViewType;
}
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct InstanceCullerSplitDebugArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::InstanceCullerSplitDebugArray);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::InstanceCullerSplitDebugArray, "UnityEngine.Rendering", "InstanceCullerSplitDebugArray");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeQueue`1<T>, Unity.Jobs.JobHandle, UnityEngine.Rendering.InstanceCullerSplitDebugArray::Info
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.InstanceCullerSplitDebugArray
struct CORDL_TYPE InstanceCullerSplitDebugArray {
public:
// Declarations
using Info = ::GlobalNamespace::InstanceCullerSplitDebugArray_Info;

 __declspec(property(get=get_Counters)) ::Unity::Collections::NativeArray_1<int32_t>  Counters;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AddSync, addr 0xb1f2558, size 0x7c, virtual false, abstract: false, final false
inline void AddSync(int32_t  baseIndex, ::Unity::Jobs::JobHandle  jobHandle) ;

/// @brief Method Dispose, addr 0xb1f23e0, size 0x90, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Init, addr 0xb1f22f4, size 0xec, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method MoveToDebugStatsAndClear, addr 0xb1f25d4, size 0x210, virtual false, abstract: false, final false
inline void MoveToDebugStatsAndClear(::UnityEngine::Rendering::DebugRendererBatcherStats*  debugStats) ;

/// @brief Method TryAddSplits, addr 0xb1f2470, size 0xe8, virtual false, abstract: false, final false
inline int32_t TryAddSplits(::UnityEngine::Rendering::BatchCullingViewType  viewType, int32_t  viewInstanceID, int32_t  splitCount) ;

/// @brief Method get_Counters, addr 0xb1f22e8, size 0xc, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<int32_t> get_Counters() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr InstanceCullerSplitDebugArray() ;

// Ctor Parameters [CppParam { name: "m_Info", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::InstanceCullerSplitDebugArray_Info>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Counters", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_CounterSync", ty: "::Unity::Collections::NativeQueue_1<::Unity::Jobs::JobHandle>", modifiers: "", def_value: None, comment: None }]
constexpr InstanceCullerSplitDebugArray(::Unity::Collections::NativeList_1<::GlobalNamespace::InstanceCullerSplitDebugArray_Info>  m_Info, ::Unity::Collections::NativeArray_1<int32_t>  m_Counters, ::Unity::Collections::NativeQueue_1<::Unity::Jobs::JobHandle>  m_CounterSync) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26574};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Info, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::InstanceCullerSplitDebugArray_Info>  m_Info;

/// @brief Field m_Counters, offset: 0x8, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_Counters;

/// @brief Field m_CounterSync, offset: 0x18, size: 0x8, def value: None
 ::Unity::Collections::NativeQueue_1<::Unity::Jobs::JobHandle>  m_CounterSync;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray, m_Info) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray, m_Counters) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray, m_CounterSync) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::InstanceCullerSplitDebugArray) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
