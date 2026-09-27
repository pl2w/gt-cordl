#pragma once
// IWYU pragma private; include "Cysharp/Text/FastNumberWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FastNumberWriter)
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace Cysharp::Text {
class FastNumberWriter;
}
// Write type traits
MARK_REF_T(::Cysharp::Text::FastNumberWriter*);
DEFINE_IL2CPP_CLASS(::Cysharp::Text::FastNumberWriter*, "Cysharp.Text", "FastNumberWriter");
// Dependencies System.Object
namespace Cysharp::Text {
// Is value type: false
// CS Name: Cysharp.Text.FastNumberWriter
class CORDL_TYPE FastNumberWriter : public ::System::Object {
public:
// Declarations
/// @brief Method TryWriteInt64, addr 0xb9a99a4, size 0x61c, virtual false, abstract: false, final false
static inline bool TryWriteInt64(::System::Span_1<char16_t>  buffer, ::by_ref<int32_t>  charsWritten, int64_t  value) ;

/// @brief Method TryWriteUInt64, addr 0xb9a9fc0, size 0x624, virtual false, abstract: false, final false
static inline bool TryWriteUInt64(::System::Span_1<char16_t>  buffer, ::by_ref<int32_t>  charsWritten, uint64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FastNumberWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FastNumberWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FastNumberWriter(FastNumberWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FastNumberWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FastNumberWriter(FastNumberWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26340};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Text::FastNumberWriter) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Text
