#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeRingQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeRingQueue_1)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct UnsafeRingQueue_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1, "Unity.Collections.LowLevel.Unsafe", "UnsafeRingQueue`1");
// [DebuggerDisplay("Length = {Length}, Capacity = {Capacity}, IsCreated = {IsCreated}, IsEmpty = {IsEmpty}")]
// [DebuggerTypeProxy(typeof(Unity.Collections.LowLevel.Unsafe.UnsafeRingQueueDebugView`1<T>))]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeRingQueue`1<T>
struct CORDL_TYPE UnsafeRingQueue_1 {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Free(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>*  data) ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeRingQueue_1() ;

// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Allocator", ty: "::GlobalNamespace::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Filled", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Write", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Read", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeRingQueue_1(T*  Ptr, ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator, int32_t  m_Capacity, int32_t  m_Filled, int32_t  m_Write, int32_t  m_Read) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30246};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
 T*  Ptr;

/// @brief Field Allocator, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::AllocatorManager_AllocatorHandle  Allocator;

/// @brief Field m_Capacity, offset: 0xc, size: 0x4, def value: None
 int32_t  m_Capacity;

/// @brief Field m_Filled, offset: 0x10, size: 0x4, def value: None
 int32_t  m_Filled;

/// @brief Field m_Write, offset: 0x14, size: 0x4, def value: None
 int32_t  m_Write;

/// @brief Field m_Read, offset: 0x18, size: 0x4, def value: None
 int32_t  m_Read;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
