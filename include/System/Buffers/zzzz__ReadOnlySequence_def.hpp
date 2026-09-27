#pragma once
// IWYU pragma private; include "System/Buffers/ReadOnlySequence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlySequence)
// Forward declare root types
namespace System::Buffers {
class ReadOnlySequence;
}
// Write type traits
MARK_REF_T(::System::Buffers::ReadOnlySequence*);
DEFINE_IL2CPP_CLASS(::System::Buffers::ReadOnlySequence*, "System.Buffers", "ReadOnlySequence");
// Dependencies System.Object
namespace System::Buffers {
// Is value type: false
// CS Name: System.Buffers.ReadOnlySequence
class CORDL_TYPE ReadOnlySequence : public ::System::Object {
public:
// Declarations
/// @brief Method ArrayToSequenceEnd, addr 0xa271f50, size 0x8, virtual false, abstract: false, final false
static inline int32_t ArrayToSequenceEnd(int32_t  endIndex) ;

/// @brief Method ArrayToSequenceStart, addr 0xa271f4c, size 0x4, virtual false, abstract: false, final false
static inline int32_t ArrayToSequenceStart(int32_t  startIndex) ;

/// @brief Method MemoryManagerToSequenceEnd, addr 0xa271f60, size 0x4, virtual false, abstract: false, final false
static inline int32_t MemoryManagerToSequenceEnd(int32_t  endIndex) ;

/// @brief Method MemoryManagerToSequenceStart, addr 0xa271f58, size 0x8, virtual false, abstract: false, final false
static inline int32_t MemoryManagerToSequenceStart(int32_t  startIndex) ;

/// @brief Method SegmentToSequenceEnd, addr 0xa271f48, size 0x4, virtual false, abstract: false, final false
static inline int32_t SegmentToSequenceEnd(int32_t  endIndex) ;

/// @brief Method SegmentToSequenceStart, addr 0xa271f44, size 0x4, virtual false, abstract: false, final false
static inline int32_t SegmentToSequenceStart(int32_t  startIndex) ;

/// @brief Method StringToSequenceEnd, addr 0xa271f6c, size 0x8, virtual false, abstract: false, final false
static inline int32_t StringToSequenceEnd(int32_t  endIndex) ;

/// @brief Method StringToSequenceStart, addr 0xa271f64, size 0x8, virtual false, abstract: false, final false
static inline int32_t StringToSequenceStart(int32_t  startIndex) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlySequence() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlySequence", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlySequence(ReadOnlySequence && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlySequence", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlySequence(ReadOnlySequence const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::ReadOnlySequence) == 0x10, "Size mismatch!");

} // namespace end def System::Buffers
