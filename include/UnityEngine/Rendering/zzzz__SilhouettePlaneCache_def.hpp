#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SilhouettePlaneCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/zzzz__SilhouettePlaneCache_Slot_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SilhouettePlaneCache)
namespace GlobalNamespace {
struct SilhouettePlaneCache_Slot;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Plane;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SilhouettePlaneCache;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::SilhouettePlaneCache);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SilhouettePlaneCache, "UnityEngine.Rendering", "SilhouettePlaneCache");
// Dependencies Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>, UnityEngine.Plane, UnityEngine.Rendering.SilhouettePlaneCache::Slot
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.SilhouettePlaneCache
struct CORDL_TYPE SilhouettePlaneCache {
public:
// Declarations
using Slot = ::GlobalNamespace::SilhouettePlaneCache_Slot;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0xb20ce88, size 0xb8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method FreeUnusedSlots, addr 0xb20d374, size 0x190, virtual false, abstract: false, final false
inline void FreeUnusedSlots(int32_t  frameIndex, int32_t  maximumAge) ;

/// @brief Method GetSubArray, addr 0xb20d504, size 0x118, virtual false, abstract: false, final false
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> GetSubArray(int32_t  viewInstanceID) ;

/// @brief Method Init, addr 0xb20cd44, size 0x144, virtual false, abstract: false, final false
inline void Init() ;

/// @brief Method Update, addr 0xb20cf40, size 0x420, virtual false, abstract: false, final false
inline void Update(int32_t  viewInstanceID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane>  planes, int32_t  frameIndex) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SilhouettePlaneCache() ;

// Ctor Parameters [CppParam { name: "m_SubviewIDToIndexMap", ty: "::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SlotFreeList", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Slots", ty: "::Unity::Collections::NativeList_1<::GlobalNamespace::SilhouettePlaneCache_Slot>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PlaneStorage", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Plane>", modifiers: "", def_value: None, comment: None }]
constexpr SilhouettePlaneCache(::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>  m_SubviewIDToIndexMap, ::Unity::Collections::NativeList_1<int32_t>  m_SlotFreeList, ::Unity::Collections::NativeList_1<::GlobalNamespace::SilhouettePlaneCache_Slot>  m_Slots, ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  m_PlaneStorage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26702};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field m_SubviewIDToIndexMap, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeParallelHashMap_2<int32_t,int32_t>  m_SubviewIDToIndexMap;

/// @brief Field m_SlotFreeList, offset: 0x10, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<int32_t>  m_SlotFreeList;

/// @brief Field m_Slots, offset: 0x18, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GlobalNamespace::SilhouettePlaneCache_Slot>  m_Slots;

/// @brief Field m_PlaneStorage, offset: 0x20, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::UnityEngine::Plane>  m_PlaneStorage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache, m_SubviewIDToIndexMap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache, m_SlotFreeList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache, m_Slots) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SilhouettePlaneCache, m_PlaneStorage) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::SilhouettePlaneCache) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
