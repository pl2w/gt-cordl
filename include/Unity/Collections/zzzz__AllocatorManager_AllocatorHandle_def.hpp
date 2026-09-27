#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_AllocatorHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AllocatorManager_AllocatorHandle)
namespace GlobalNamespace {
struct AllocatorManager_Block;
}
namespace GlobalNamespace {
struct AllocatorManager_TableEntry;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Collections {
class AllocatorManager_IAllocator;
}
namespace Unity::Collections {
struct Allocator;
}
// Forward declare root types
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AllocatorManager_AllocatorHandle);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AllocatorManager_AllocatorHandle, "Unity.Collections", "AllocatorManager/AllocatorHandle");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Collections.AllocatorManager/AllocatorHandle
struct CORDL_TYPE AllocatorManager_AllocatorHandle {
public:
// Declarations
 __declspec(property(get=get_Handle)) ::GlobalNamespace::AllocatorManager_AllocatorHandle  Handle;

 __declspec(property(get=get_TableEntry)) ::GlobalNamespace::AllocatorManager_TableEntry  TableEntry;

 __declspec(property(get=get_ToAllocator)) ::Unity::Collections::Allocator  ToAllocator;

 __declspec(property(get=get_Value)) int32_t  Value;

/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>"
constexpr operator  ::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>*() ;

/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr operator  ::Unity::Collections::AllocatorManager_IAllocator*() ;

/// @brief Method CompareTo, addr 0xaf039b0, size 0xc, virtual true, abstract: false, final true
inline int32_t CompareTo(::GlobalNamespace::AllocatorManager_AllocatorHandle  other) ;

/// @brief Method Dispose, addr 0xaf038d8, size 0x14, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Equals, addr 0xaf038ec, size 0xac, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xaf03998, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::AllocatorManager_AllocatorHandle  other) ;

/// @brief Method GetHashCode, addr 0xaf039a8, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Rewind, addr 0xaf0385c, size 0x4, virtual false, abstract: false, final false
inline void Rewind() ;

/// @brief Method Try, addr 0xaf03868, size 0x68, virtual true, abstract: false, final true
inline int32_t Try(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block) ;

/// @brief Method get_Handle, addr 0xaf0343c, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle get_Handle() ;

/// @brief Method get_TableEntry, addr 0xaf03298, size 0x98, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::AllocatorManager_TableEntry> get_TableEntry() ;

/// @brief Method get_ToAllocator, addr 0xaf038d0, size 0x8, virtual true, abstract: false, final true
inline ::Unity::Collections::Allocator get_ToAllocator() ;

/// @brief Method get_Value, addr 0xaf03860, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Value() ;

/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>"
constexpr ::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>* i___System__IComparable_1___GlobalNamespace__AllocatorManager_AllocatorHandle_() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>"
constexpr ::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>* i___System__IEquatable_1___GlobalNamespace__AllocatorManager_AllocatorHandle_() ;

/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* i___Unity__Collections__AllocatorManager_IAllocator() ;

/// @brief Method op_Implicit, addr 0xaf035c4, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::AllocatorManager_AllocatorHandle op_Implicit___GlobalNamespace__AllocatorManager_AllocatorHandle(::Unity::Collections::Allocator  a) ;

// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_AllocatorHandle() ;

// Ctor Parameters [CppParam { name: "Index", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Version", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
constexpr AllocatorManager_AllocatorHandle(uint16_t  Index, uint16_t  Version) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Index, offset: 0x0, size: 0x2, def value: None
 uint16_t  Index;

/// @brief Field Version, offset: 0x2, size: 0x2, def value: None
 uint16_t  Version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AllocatorManager_AllocatorHandle, Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AllocatorManager_AllocatorHandle, Version) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AllocatorManager_AllocatorHandle) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
