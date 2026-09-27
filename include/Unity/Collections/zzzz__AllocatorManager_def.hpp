#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Array32768_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_TableEntry_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AllocatorManager)
namespace GlobalNamespace {
struct AllocatorManager_AllocatorHandle;
}
namespace GlobalNamespace {
template<typename T>
struct AllocatorManager_Array16_1;
}
namespace GlobalNamespace {
template<typename T>
struct AllocatorManager_Array256_1;
}
namespace GlobalNamespace {
template<typename T>
struct AllocatorManager_Array32768_1;
}
namespace GlobalNamespace {
template<typename T>
struct AllocatorManager_Array4096_1;
}
namespace GlobalNamespace {
struct AllocatorManager_Block;
}
namespace GlobalNamespace {
struct AllocatorManager_Range;
}
namespace GlobalNamespace {
struct AllocatorManager_TableEntry;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
class AllocatorManager_IAllocator;
}
namespace Unity::Collections {
class AllocatorManager_Managed;
}
namespace Unity::Collections {
class AllocatorManager_SharedStatics;
}
namespace Unity::Collections {
class AllocatorManager_TryFunction;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
class SharedStatics_AllocatorManager_TableEntry;
}
// Forward declare root types
namespace Unity::Collections {
class AllocatorManager;
}
namespace Unity::Collections {
class AllocatorManager_IAllocator;
}
namespace Unity::Collections {
class AllocatorManager_Managed;
}
namespace Unity::Collections {
class AllocatorManager_SharedStatics;
}
namespace Unity::Collections {
class AllocatorManager_TryFunction;
}
namespace Unity::Collections {
class SharedStatics_AllocatorManager_TableEntry;
}
// Write type traits
MARK_REF_T(::Unity::Collections::AllocatorManager*);
MARK_REF_T(::Unity::Collections::AllocatorManager_IAllocator*);
MARK_REF_T(::Unity::Collections::AllocatorManager_Managed*);
MARK_REF_T(::Unity::Collections::AllocatorManager_SharedStatics*);
MARK_REF_T(::Unity::Collections::AllocatorManager_TryFunction*);
MARK_REF_T(::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::AllocatorManager*, "Unity.Collections", "AllocatorManager");
DEFINE_IL2CPP_CLASS(::Unity::Collections::AllocatorManager_IAllocator*, "Unity.Collections", "AllocatorManager/IAllocator");
DEFINE_IL2CPP_CLASS(::Unity::Collections::AllocatorManager_Managed*, "Unity.Collections", "AllocatorManager/Managed");
DEFINE_IL2CPP_CLASS(::Unity::Collections::AllocatorManager_SharedStatics*, "Unity.Collections", "AllocatorManager/SharedStatics");
DEFINE_IL2CPP_CLASS(::Unity::Collections::AllocatorManager_TryFunction*, "Unity.Collections", "AllocatorManager/TryFunction");
DEFINE_IL2CPP_CLASS(::Unity::Collections::SharedStatics_AllocatorManager_TableEntry*, "Unity.Collections", "AllocatorManager/SharedStatics/TableEntry");
// [Extension]
// Dependencies System.Object, Unity.Collections.AllocatorManager::AllocatorHandle, Unity.Collections.AllocatorManager::IAllocator
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager
class CORDL_TYPE AllocatorManager : public ::System::Object {
public:
// Declarations
using AllocatorHandle = ::GlobalNamespace::AllocatorManager_AllocatorHandle;

template<typename T>
using Array16_1 = ::GlobalNamespace::AllocatorManager_Array16_1<T>;

template<typename T>
using Array256_1 = ::GlobalNamespace::AllocatorManager_Array256_1<T>;

template<typename T>
using Array32768_1 = ::GlobalNamespace::AllocatorManager_Array32768_1<T>;

template<typename T>
using Array4096_1 = ::GlobalNamespace::AllocatorManager_Array4096_1<T>;

using Block = ::GlobalNamespace::AllocatorManager_Block;

using Range = ::GlobalNamespace::AllocatorManager_Range;

using TableEntry = ::GlobalNamespace::AllocatorManager_TableEntry;

using IAllocator = ::Unity::Collections::AllocatorManager_IAllocator;

using Managed = ::Unity::Collections::AllocatorManager_Managed;

using SharedStatics = ::Unity::Collections::AllocatorManager_SharedStatics;

using TryFunction = ::Unity::Collections::AllocatorManager_TryFunction;

/// @brief Field AudioKernel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AudioKernel, put=setStaticF_AudioKernel)) ::GlobalNamespace::AllocatorManager_AllocatorHandle  AudioKernel;

/// @brief Field FirstGlobalScratchpadAllocatorIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_FirstGlobalScratchpadAllocatorIndex, put=setStaticF_FirstGlobalScratchpadAllocatorIndex)) uint32_t  FirstGlobalScratchpadAllocatorIndex;

/// @brief Field GlobalAllocatorBaseIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GlobalAllocatorBaseIndex, put=setStaticF_GlobalAllocatorBaseIndex)) uint32_t  GlobalAllocatorBaseIndex;

/// @brief Field Invalid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::GlobalNamespace::AllocatorManager_AllocatorHandle  Invalid;

/// @brief Field MaxNumGlobalAllocators, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_MaxNumGlobalAllocators, put=setStaticF_MaxNumGlobalAllocators)) uint16_t  MaxNumGlobalAllocators;

/// @brief Field None, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::GlobalNamespace::AllocatorManager_AllocatorHandle  None;

/// @brief Field NumGlobalScratchAllocators, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_NumGlobalScratchAllocators, put=setStaticF_NumGlobalScratchAllocators)) uint16_t  NumGlobalScratchAllocators;

/// @brief Field Persistent, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Persistent, put=setStaticF_Persistent)) ::GlobalNamespace::AllocatorManager_AllocatorHandle  Persistent;

/// @brief Field Temp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Temp, put=setStaticF_Temp)) ::GlobalNamespace::AllocatorManager_AllocatorHandle  Temp;

/// @brief Field TempJob, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_TempJob, put=setStaticF_TempJob)) ::GlobalNamespace::AllocatorManager_AllocatorHandle  TempJob;

/// [Extension]
/// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
static inline U* Allocate(::by_ref<T>  t, U  u, int32_t  items) ;

/// [Extension]
/// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void* Allocate(::by_ref<T>  t, int32_t  sizeOf, int32_t  alignOf, int32_t  items) ;

/// [Extension]
/// @brief Method AllocateBlock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::GlobalNamespace::AllocatorManager_Block AllocateBlock(::by_ref<T>  t, int32_t  sizeOf, int32_t  alignOf, int32_t  items) ;

/// [BurstDiscard]
/// @brief Method CheckDelegate, addr 0xaf031a4, size 0xc, virtual false, abstract: false, final false
static inline void CheckDelegate(::by_ref<bool>  useDelegate) ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Free(::GlobalNamespace::AllocatorManager_AllocatorHandle  handle, T*  pointer, int32_t  items) ;

/// @brief Method Free, addr 0xaf03120, size 0x84, virtual false, abstract: false, final false
static inline void Free(::GlobalNamespace::AllocatorManager_AllocatorHandle  handle, void*  pointer) ;

/// [Extension]
/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T> && ::cordl_internals::value_type_constraint<U> && ::cordl_internals::default_constructor_constraint<U>)
static inline void Free(::by_ref<T>  t, U*  pointer, int32_t  items) ;

/// [Extension]
/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Free(::by_ref<T>  t, void*  pointer, int32_t  sizeOf, int32_t  alignOf, int32_t  items) ;

/// [Extension]
/// @brief Method FreeBlock, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void FreeBlock(::by_ref<T>  t, ::by_ref<::GlobalNamespace::AllocatorManager_Block>  block) ;

/// @brief Method LegacyOf, addr 0xaf03444, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Collections::Allocator LegacyOf(::GlobalNamespace::AllocatorManager_AllocatorHandle  handle) ;

/// @brief Method Try, addr 0xaf03608, size 0xe0, virtual false, abstract: false, final false
static inline int32_t Try(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block) ;

/// @brief Method TryLegacy, addr 0xaf03458, size 0x14c, virtual false, abstract: false, final false
static inline int32_t TryLegacy(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block) ;

/// @brief Method UseDelegate, addr 0xaf031b0, size 0x50, virtual false, abstract: false, final false
static inline bool UseDelegate() ;

/// @brief Method allocate_block, addr 0xaf03200, size 0x98, virtual false, abstract: false, final false
static inline int32_t allocate_block(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block) ;

/// [BurstDiscard]
/// @brief Method forward_mono_allocate_block, addr 0xaf03330, size 0x10c, virtual false, abstract: false, final false
static inline void forward_mono_allocate_block(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block, ::by_ref<int32_t>  error) ;

static inline ::GlobalNamespace::AllocatorManager_AllocatorHandle getStaticF_AudioKernel() ;

static inline uint32_t getStaticF_FirstGlobalScratchpadAllocatorIndex() ;

static inline uint32_t getStaticF_GlobalAllocatorBaseIndex() ;

static inline ::GlobalNamespace::AllocatorManager_AllocatorHandle getStaticF_Invalid() ;

static inline uint16_t getStaticF_MaxNumGlobalAllocators() ;

static inline ::GlobalNamespace::AllocatorManager_AllocatorHandle getStaticF_None() ;

static inline uint16_t getStaticF_NumGlobalScratchAllocators() ;

static inline ::GlobalNamespace::AllocatorManager_AllocatorHandle getStaticF_Persistent() ;

static inline ::GlobalNamespace::AllocatorManager_AllocatorHandle getStaticF_Temp() ;

static inline ::GlobalNamespace::AllocatorManager_AllocatorHandle getStaticF_TempJob() ;

static inline void setStaticF_AudioKernel(::GlobalNamespace::AllocatorManager_AllocatorHandle  value) ;

static inline void setStaticF_FirstGlobalScratchpadAllocatorIndex(uint32_t  value) ;

static inline void setStaticF_GlobalAllocatorBaseIndex(uint32_t  value) ;

static inline void setStaticF_Invalid(::GlobalNamespace::AllocatorManager_AllocatorHandle  value) ;

static inline void setStaticF_MaxNumGlobalAllocators(uint16_t  value) ;

static inline void setStaticF_None(::GlobalNamespace::AllocatorManager_AllocatorHandle  value) ;

static inline void setStaticF_NumGlobalScratchAllocators(uint16_t  value) ;

static inline void setStaticF_Persistent(::GlobalNamespace::AllocatorManager_AllocatorHandle  value) ;

static inline void setStaticF_Temp(::GlobalNamespace::AllocatorManager_AllocatorHandle  value) ;

static inline void setStaticF_TempJob(::GlobalNamespace::AllocatorManager_AllocatorHandle  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AllocatorManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AllocatorManager(AllocatorManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AllocatorManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AllocatorManager(AllocatorManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30117};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::AllocatorManager) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
// Dependencies System.Object, Unity.Collections.AllocatorManager::TryFunction
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/Managed
class CORDL_TYPE AllocatorManager_Managed : public ::System::Object {
public:
// Declarations
/// @brief Field TryFunctionDelegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TryFunctionDelegates, put=setStaticF_TryFunctionDelegates)) ::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*>  TryFunctionDelegates;

static inline ::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*> getStaticF_TryFunctionDelegates() ;

static inline void setStaticF_TryFunctionDelegates(::ArrayW<::Unity::Collections::AllocatorManager_TryFunction*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_Managed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_Managed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AllocatorManager_Managed(AllocatorManager_Managed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_Managed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AllocatorManager_Managed(AllocatorManager_Managed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30116};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::AllocatorManager_Managed) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
// Dependencies System.Object
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/SharedStatics
class CORDL_TYPE AllocatorManager_SharedStatics : public ::System::Object {
public:
// Declarations
using TableEntry = ::Unity::Collections::SharedStatics_AllocatorManager_TableEntry;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_SharedStatics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_SharedStatics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AllocatorManager_SharedStatics(AllocatorManager_SharedStatics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_SharedStatics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AllocatorManager_SharedStatics(AllocatorManager_SharedStatics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30115};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::AllocatorManager_SharedStatics) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
// Dependencies System.Object, Unity.Burst.SharedStatic`1<T>, Unity.Collections.AllocatorManager::Array32768`1<T>, Unity.Collections.AllocatorManager::TableEntry
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/SharedStatics/TableEntry
class CORDL_TYPE SharedStatics_AllocatorManager_TableEntry : public ::System::Object {
public:
// Declarations
/// @brief Field Ref, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Ref, put=setStaticF_Ref)) ::Unity::Burst::SharedStatic_1<::GlobalNamespace::AllocatorManager_Array32768_1<::GlobalNamespace::AllocatorManager_TableEntry>>  Ref;

static inline ::Unity::Burst::SharedStatic_1<::GlobalNamespace::AllocatorManager_Array32768_1<::GlobalNamespace::AllocatorManager_TableEntry>> getStaticF_Ref() ;

static inline void setStaticF_Ref(::Unity::Burst::SharedStatic_1<::GlobalNamespace::AllocatorManager_Array32768_1<::GlobalNamespace::AllocatorManager_TableEntry>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedStatics_AllocatorManager_TableEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedStatics_AllocatorManager_TableEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedStatics_AllocatorManager_TableEntry(SharedStatics_AllocatorManager_TableEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedStatics_AllocatorManager_TableEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedStatics_AllocatorManager_TableEntry(SharedStatics_AllocatorManager_TableEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30114};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::SharedStatics_AllocatorManager_TableEntry) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections
// Dependencies 
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/IAllocator
class CORDL_TYPE AllocatorManager_IAllocator {
public:
// Declarations
 __declspec(property(get=get_Handle)) ::GlobalNamespace::AllocatorManager_AllocatorHandle  Handle;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Try, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Try(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block) ;

/// @brief Method get_Handle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle get_Handle() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_IAllocator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AllocatorManager_IAllocator(AllocatorManager_IAllocator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30108};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Unity::Collections {
// Is value type: false
// CS Name: Unity.Collections.AllocatorManager/TryFunction
class CORDL_TYPE AllocatorManager_TryFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method Invoke, addr 0xaf03848, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::System::IntPtr  allocatorState, ::by_ref<::GlobalNamespace::AllocatorManager_Block>  block) ;

static inline ::Unity::Collections::AllocatorManager_TryFunction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xaf037a8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AllocatorManager_TryFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_TryFunction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AllocatorManager_TryFunction(AllocatorManager_TryFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AllocatorManager_TryFunction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AllocatorManager_TryFunction(AllocatorManager_TryFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30104};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::AllocatorManager_TryFunction) == 0x80, "Size mismatch!");

} // namespace end def Unity::Collections
