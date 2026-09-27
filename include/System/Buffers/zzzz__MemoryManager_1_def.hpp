#pragma once
// IWYU pragma private; include "System/Buffers/MemoryManager_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryManager_1)
namespace System::Buffers {
template<typename T>
class IMemoryOwner_1;
}
namespace System::Buffers {
class IPinnable;
}
namespace System::Buffers {
struct MemoryHandle;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
class MemoryManager_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Buffers::MemoryManager_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Buffers::MemoryManager_1, "System.Buffers", "MemoryManager`1");
// Dependencies System.Object
namespace System::Buffers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Buffers.MemoryManager`1<T>
class CORDL_TYPE MemoryManager_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Memory)) ::System::Memory_1<T>  Memory;

/// @brief Convert operator to "::System::Buffers::IMemoryOwner_1<T>"
constexpr operator  ::System::Buffers::IMemoryOwner_1<T>*() noexcept;

/// @brief Convert operator to "::System::Buffers::IPinnable"
constexpr operator  ::System::Buffers::IPinnable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetSpan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Span_1<T> GetSpan() ;

/// @brief Method Pin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Buffers::MemoryHandle Pin(int32_t  elementIndex) ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method TryGetArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetArray(::by_ref<::System::ArraySegment_1<T>>  segment) ;

/// @brief Method Unpin, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Unpin() ;

/// @brief Method get_Memory, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Memory_1<T> get_Memory() ;

/// @brief Convert to "::System::Buffers::IMemoryOwner_1<T>"
constexpr ::System::Buffers::IMemoryOwner_1<T>* i___System__Buffers__IMemoryOwner_1_T_() noexcept;

/// @brief Convert to "::System::Buffers::IPinnable"
constexpr ::System::Buffers::IPinnable* i___System__Buffers__IPinnable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryManager_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryManager_1(MemoryManager_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryManager_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryManager_1(MemoryManager_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6952};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
