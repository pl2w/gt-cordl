#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/MemoryMarshal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Buffers/zzzz__MemoryManager_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryMarshal)
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class MemoryMarshal;
}
// Write type traits
MARK_REF_T(::System::Runtime::InteropServices::MemoryMarshal*);
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::MemoryMarshal*, "System.Runtime.InteropServices", "MemoryMarshal");
// Dependencies System.Buffers.MemoryManager`1<T>, System.Object
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.MemoryMarshal
class CORDL_TYPE MemoryMarshal : public ::System::Object {
public:
// Declarations
/// @brief Method AsBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::ReadOnlySpan_1<uint8_t> AsBytes(::System::ReadOnlySpan_1<T>  span) ;

/// @brief Method AsBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::Span_1<uint8_t> AsBytes(::System::Span_1<T>  span) ;

/// @brief Method AsMemory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Memory_1<T> AsMemory(::System::ReadOnlyMemory_1<T>  memory) ;

/// @brief Method Cast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFrom,typename TTo>
requires(::cordl_internals::value_type_constraint<TFrom> && ::cordl_internals::default_constructor_constraint<TFrom> && ::cordl_internals::value_type_constraint<TTo> && ::cordl_internals::default_constructor_constraint<TTo>)
static inline ::System::ReadOnlySpan_1<TTo> Cast(::System::ReadOnlySpan_1<TFrom>  span) ;

/// @brief Method CreateReadOnlySpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::ReadOnlySpan_1<T> CreateReadOnlySpan(::by_ref<T>  reference, int32_t  length) ;

/// @brief Method CreateSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Span_1<T> CreateSpan(::by_ref<T>  reference, int32_t  length) ;

/// @brief Method GetNonNullPinnableReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::by_ref<T> GetNonNullPinnableReference(::System::ReadOnlySpan_1<T>  span) ;

/// @brief Method GetNonNullPinnableReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::by_ref<T> GetNonNullPinnableReference(::System::Span_1<T>  span) ;

/// @brief Method GetReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::by_ref<T> GetReference(::System::ReadOnlySpan_1<T>  span) ;

/// @brief Method GetReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::by_ref<T> GetReference(::System::Span_1<T>  span) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T Read(::System::ReadOnlySpan_1<uint8_t>  source) ;

/// @brief Method TryGetArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryGetArray(::System::ReadOnlyMemory_1<T>  memory, ::by_ref<::System::ArraySegment_1<T>>  segment) ;

/// @brief Method TryGetMemoryManager, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TManager>
requires(::cordl_internals::type_constraint<TManager, ::System::Buffers::MemoryManager_1<T>*>)
static inline bool TryGetMemoryManager(::System::ReadOnlyMemory_1<T>  memory, ::by_ref<TManager>  manager, ::by_ref<int32_t>  start, ::by_ref<int32_t>  length) ;

/// @brief Method TryGetString, addr 0xa1e00c8, size 0xb4, virtual false, abstract: false, final false
static inline bool TryGetString(::System::ReadOnlyMemory_1<char16_t>  memory, ::by_ref<::StringW>  text, ::by_ref<int32_t>  start, ::by_ref<int32_t>  length) ;

/// @brief Method TryWrite, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline bool TryWrite(::System::Span_1<uint8_t>  destination, ::by_ref<T>  value) ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void Write(::System::Span_1<uint8_t>  destination, ::by_ref<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryMarshal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryMarshal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryMarshal(MemoryMarshal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryMarshal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryMarshal(MemoryMarshal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6437};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::InteropServices::MemoryMarshal) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
