#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CPUPerCameraInstanceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__CPUPerCameraInstanceData_PerCameraInstanceDataArrays_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CPUPerCameraInstanceData)
namespace GlobalNamespace {
struct CPUPerCameraInstanceData_PerCameraInstanceDataArrays;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CPUPerCameraInstanceData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CPUPerCameraInstanceData);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CPUPerCameraInstanceData, "UnityEngine.Rendering", "CPUPerCameraInstanceData");
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Rendering.CPUPerCameraInstanceData::PerCameraInstanceDataArrays
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.CPUPerCameraInstanceData
struct CORDL_TYPE CPUPerCameraInstanceData {
public:
// Declarations
using PerCameraInstanceDataArrays = ::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays;

 __declspec(property(get=get_cameraCount)) int32_t  cameraCount;

 __declspec(property(get=get_instancesCapacity, put=set_instancesCapacity)) int32_t  instancesCapacity;

 __declspec(property(get=get_instancesLength, put=set_instancesLength)) int32_t  instancesLength;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AllocateCameras, addr 0xb1ffee8, size 0x1f4, virtual false, abstract: false, final false
inline void AllocateCameras(::Unity::Collections::NativeArray_1<int32_t>  cameraIDs) ;

/// @brief Method DeallocateCameras, addr 0xb1ffcbc, size 0x1d8, virtual false, abstract: false, final false
inline void DeallocateCameras(::Unity::Collections::NativeArray_1<int32_t>  cameraIDs) ;

/// @brief Method Dispose, addr 0xb200434, size 0x1e4, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Grow, addr 0xb200618, size 0x1cc, virtual false, abstract: false, final false
inline void Grow(int32_t  newCapacity) ;

/// @brief Method IncreaseInstanceCount, addr 0xb200420, size 0x14, virtual false, abstract: false, final false
inline void IncreaseInstanceCount() ;

/// @brief Method Initialize, addr 0xb1ffbfc, size 0xc0, virtual false, abstract: false, final false
inline void Initialize(int32_t  initCapacity) ;

/// @brief Method Remove, addr 0xb2001dc, size 0x1d8, virtual false, abstract: false, final false
inline void Remove(int32_t  index) ;

/// @brief Method SetDefault, addr 0xb20084c, size 0x1fc, virtual false, abstract: false, final false
inline void SetDefault(int32_t  index) ;

/// @brief Method get_cameraCount, addr 0xb1ffbb4, size 0x48, virtual false, abstract: false, final false
inline int32_t get_cameraCount() ;

/// @brief Method get_instancesCapacity, addr 0xb1ffb9c, size 0xc, virtual false, abstract: false, final false
inline int32_t get_instancesCapacity() ;

/// @brief Method get_instancesLength, addr 0xb1ffb84, size 0xc, virtual false, abstract: false, final false
inline int32_t get_instancesLength() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Method set_instancesCapacity, addr 0xb1ffba8, size 0xc, virtual false, abstract: false, final false
inline void set_instancesCapacity(int32_t  value) ;

/// @brief Method set_instancesLength, addr 0xb1ffb90, size 0xc, virtual false, abstract: false, final false
inline void set_instancesLength(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr CPUPerCameraInstanceData() ;

// Ctor Parameters [CppParam { name: "perCameraData", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StructData", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr CPUPerCameraInstanceData(::Unity::Collections::NativeParallelHashMap_2<int32_t,::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>  perCameraData, ::Unity::Collections::NativeArray_1<int32_t>  m_StructData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26625};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field perCameraData, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<int32_t,::GlobalNamespace::CPUPerCameraInstanceData_PerCameraInstanceDataArrays>  perCameraData;

/// @brief Field m_StructData, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<int32_t>  m_StructData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CPUPerCameraInstanceData, perCameraData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CPUPerCameraInstanceData, m_StructData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CPUPerCameraInstanceData) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
