#pragma once
// IWYU pragma private; include "GlobalNamespace/UniqueQueue_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniqueQueue_1)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class UniqueQueue_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::UniqueQueue_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::UniqueQueue_1, "", "UniqueQueue`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UniqueQueue`1<T>
class CORDL_TYPE UniqueQueue_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field queue, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::System::Collections::Generic::Queue_1<T>*  queue;

/// @brief Field queuedItems, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_queuedItems, put=__cordl_internal_set_queuedItems)) ::System::Collections::Generic::HashSet_1<T>*  queuedItems;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  item) ;

/// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Dequeue() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Enqueue(T  item) ;

static inline ::GlobalNamespace::UniqueQueue_1<T>* New_ctor() ;

static inline ::GlobalNamespace::UniqueQueue_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Peek() ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryDequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryDequeue(::by_ref<T>  item) ;

constexpr ::System::Collections::Generic::Queue_1<T>* const& __cordl_internal_get_queue() const;

constexpr ::System::Collections::Generic::Queue_1<T>*& __cordl_internal_get_queue() ;

constexpr ::System::Collections::Generic::HashSet_1<T>* const& __cordl_internal_get_queuedItems() const;

constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get_queuedItems() ;

constexpr void __cordl_internal_set_queue(::System::Collections::Generic::Queue_1<T>*  value) ;

constexpr void __cordl_internal_set_queuedItems(::System::Collections::Generic::HashSet_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniqueQueue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniqueQueue_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniqueQueue_1(UniqueQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniqueQueue_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniqueQueue_1(UniqueQueue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3575};

/// @brief Field queuedItems, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<T>*  ___queuedItems;

/// @brief Field queue, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<T>*  ___queue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
