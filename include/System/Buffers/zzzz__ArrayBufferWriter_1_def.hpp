#pragma once
// IWYU pragma private; include "System/Buffers/ArrayBufferWriter_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayBufferWriter_1)
namespace System::Buffers {
template<typename T>
class IBufferWriter_1;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Buffers {
template<typename T>
class ArrayBufferWriter_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::System::Buffers::ArrayBufferWriter_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::System::Buffers::ArrayBufferWriter_1, "System.Buffers", "ArrayBufferWriter`1");
// Dependencies System.Object
namespace System::Buffers {
// cpp template
template<typename T>
// Is value type: false
// CS Name: System.Buffers.ArrayBufferWriter`1<T>
class CORDL_TYPE ArrayBufferWriter_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FreeCapacity)) int32_t  FreeCapacity;

 __declspec(property(get=get_WrittenMemory)) ::System::ReadOnlyMemory_1<T>  WrittenMemory;

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<T>  _buffer;

/// @brief Field _index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__index, put=__cordl_internal_set__index)) int32_t  _index;

/// @brief Convert operator to "::System::Buffers::IBufferWriter_1<T>"
constexpr operator  ::System::Buffers::IBufferWriter_1<T>*() noexcept;

/// @brief Method Advance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Advance(int32_t  count) ;

/// @brief Method CheckAndResizeBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CheckAndResizeBuffer(int32_t  sizeHint) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetSpan, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Span_1<T> GetSpan(int32_t  sizeHint) ;

static inline ::System::Buffers::ArrayBufferWriter_1<T>* New_ctor(int32_t  initialCapacity) ;

/// @brief Method ThrowInvalidOperationException_AdvancedTooFar, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void ThrowInvalidOperationException_AdvancedTooFar(int32_t  capacity) ;

constexpr ::ArrayW<T> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__index() const;

constexpr int32_t& __cordl_internal_get__index() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__index(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCapacity) ;

/// @brief Method get_FreeCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_FreeCapacity() ;

/// @brief Method get_WrittenMemory, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ReadOnlyMemory_1<T> get_WrittenMemory() ;

/// @brief Convert to "::System::Buffers::IBufferWriter_1<T>"
constexpr ::System::Buffers::IBufferWriter_1<T>* i___System__Buffers__IBufferWriter_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArrayBufferWriter_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArrayBufferWriter_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArrayBufferWriter_1(ArrayBufferWriter_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArrayBufferWriter_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArrayBufferWriter_1(ArrayBufferWriter_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6970};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ____buffer;

/// @brief Field _index, offset: 0x18, size: 0x4, def value: None
 int32_t  ____index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
