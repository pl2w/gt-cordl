#pragma once
// IWYU pragma private; include "System/Buffers/BuffersExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BuffersExtensions)
namespace System::Buffers {
template<typename T>
struct ReadOnlySequence_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Buffers {
class BuffersExtensions;
}
// Write type traits
MARK_REF_T(::System::Buffers::BuffersExtensions*);
DEFINE_IL2CPP_CLASS(::System::Buffers::BuffersExtensions*, "System.Buffers", "BuffersExtensions");
// [Extension]
// Dependencies System.Object
namespace System::Buffers {
// Is value type: false
// CS Name: System.Buffers.BuffersExtensions
class CORDL_TYPE BuffersExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CopyTo(/* [IsReadOnly] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<T>>  source, ::System::Span_1<T>  destination) ;

/// @brief Method CopyToMultiSegment, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void CopyToMultiSegment(/* [IsReadOnly] */ ::by_ref<::System::Buffers::ReadOnlySequence_1<T>>  sequence, ::System::Span_1<T>  destination) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuffersExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuffersExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuffersExtensions(BuffersExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuffersExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuffersExtensions(BuffersExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6960};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Buffers::BuffersExtensions) == 0x10, "Size mismatch!");

} // namespace end def System::Buffers
