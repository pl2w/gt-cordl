#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataStore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutDataStore)
namespace GlobalNamespace {
struct LayoutDataStore_Chunk;
}
namespace GlobalNamespace {
struct LayoutDataStore_ComponentDataStore;
}
namespace GlobalNamespace {
struct LayoutDataStore_Data;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace UnityEngine::UIElements::Layout {
struct ComponentType;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutDataStore;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutDataStore);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::Layout::LayoutDataStore, "UnityEngine.UIElements.Layout", "LayoutDataStore");
// Dependencies Unity.Collections.Allocator
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDataStore
struct CORDL_TYPE LayoutDataStore {
public:
// Declarations
using Chunk = ::GlobalNamespace::LayoutDataStore_Chunk;

using ComponentDataStore = ::GlobalNamespace::LayoutDataStore_ComponentDataStore;

using Data = ::GlobalNamespace::LayoutDataStore_Data;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0>
requires(::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0>)
inline ::UnityEngine::UIElements::Layout::LayoutHandle Allocate(/* [IsReadOnly] */ ::by_ref<T0>  component0) ;

/// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1,typename T2,typename T3>
requires(::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> && ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> && ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> && ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
inline ::UnityEngine::UIElements::Layout::LayoutHandle Allocate(/* [IsReadOnly] */ ::by_ref<T0>  component0, /* [IsReadOnly] */ ::by_ref<T1>  component1, /* [IsReadOnly] */ ::by_ref<T2>  component2, /* [IsReadOnly] */ ::by_ref<T3>  component3) ;

/// @brief Method Allocate, addr 0xb801b94, size 0x190, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Layout::LayoutHandle Allocate(uint8_t*  data, int32_t  count) ;

/// @brief Method Dispose, addr 0xb7fd7a4, size 0x94, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Exists, addr 0xb801afc, size 0x40, virtual false, abstract: false, final false
inline bool Exists(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>  handle) ;

/// @brief Method Free, addr 0xb7fd8cc, size 0xfc, virtual false, abstract: false, final false
inline void Free(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>  handle) ;

/// [IsReadOnly]
/// @brief Method GetComponentDataPtr, addr 0xb801b3c, size 0x24, virtual false, abstract: false, final false
inline void* GetComponentDataPtr(int32_t  index, int32_t  componentIndex) ;

/// @brief Method GetNextFreeIndex, addr 0xb801d24, size 0x14, virtual false, abstract: false, final false
static inline int32_t GetNextFreeIndex(::GlobalNamespace::LayoutDataStore_ComponentDataStore*  ptr, int32_t  index) ;

/// @brief Method IncreaseCapacity, addr 0xb801d38, size 0x3c, virtual false, abstract: false, final false
inline void IncreaseCapacity() ;

/// @brief Method ResizeArray, addr 0xb801d8c, size 0xec, virtual false, abstract: false, final false
static inline void* ResizeArray(void*  fromPtr, int64_t  fromCount, int64_t  toCount, int64_t  size, int32_t  align, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method ResizeCapacity, addr 0xb801920, size 0x15c, virtual false, abstract: false, final false
inline void ResizeCapacity(int32_t  capacity) ;

/// @brief Method SetNextFreeIndex, addr 0xb801d74, size 0x18, virtual false, abstract: false, final false
static inline void SetNextFreeIndex(::GlobalNamespace::LayoutDataStore_ComponentDataStore*  ptr, int32_t  index, int32_t  value) ;

/// @brief Method .ctor, addr 0xb7fd4b0, size 0x254, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::UIElements::Layout::ComponentType>  components, int32_t  initialCapacity, ::Unity::Collections::Allocator  allocator) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr LayoutDataStore() ;

// Ctor Parameters [CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Data", ty: "::GlobalNamespace::LayoutDataStore_Data*", modifiers: "", def_value: None, comment: None }]
constexpr LayoutDataStore(::Unity::Collections::Allocator  m_Allocator, ::GlobalNamespace::LayoutDataStore_Data*  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8652};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field k_ChunkSize offset 0xffffffff size 0x4
static constexpr int32_t  k_ChunkSize{static_cast<int32_t>(0x8000)};

/// @brief Field m_Allocator, offset: 0x0, size: 0x4, def value: None
 ::Unity::Collections::Allocator  m_Allocator;

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Data, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::LayoutDataStore_Data*  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore, m_Allocator) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataStore, m_Data) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::Layout::LayoutDataStore) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::Layout
