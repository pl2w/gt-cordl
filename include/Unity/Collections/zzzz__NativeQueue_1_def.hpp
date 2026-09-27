#pragma once
// IWYU pragma private; include "Unity/Collections/NativeQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(NativeQueue_1)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
template<typename T>
struct NativeQueue_1_ParallelWriter;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct UnsafeQueue_1;
}
// Forward declare root types
namespace Unity::Collections {
template<typename T>
struct NativeQueue_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::NativeQueue_1);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::NativeQueue_1, "Unity.Collections", "NativeQueue`1");
// [NativeContainer]
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
// Dependencies 
namespace Unity::Collections {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.NativeQueue`1<T>
struct CORDL_TYPE NativeQueue_1 {
public:
// Declarations
using ParallelWriter = ::GlobalNamespace::NativeQueue_1_ParallelWriter<T>;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method AsParallelWriter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NativeQueue_1_ParallelWriter<T> AsParallelWriter() ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Dequeue() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  value) ;

/// [IsReadOnly]
/// @brief Method IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool IsEmpty() ;

/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Peek() ;

/// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryDequeue(::by_ref<T>  item) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AllocatorManager_AllocatorHandle  allocator) ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeQueue_1() ;

// Ctor Parameters [CppParam { name: "m_Queue", ty: "::Unity::Collections::UnsafeQueue_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr NativeQueue_1(::Unity::Collections::UnsafeQueue_1<T>*  m_Queue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Queue, offset: 0x0, size: 0x8, def value: None
 ::Unity::Collections::UnsafeQueue_1<T>*  m_Queue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Collections
