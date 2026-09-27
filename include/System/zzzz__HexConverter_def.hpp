#pragma once
// IWYU pragma private; include "System/HexConverter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HexConverter)
namespace GlobalNamespace {
struct HexConverter_Casing;
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
namespace System {
class HexConverter;
}
// Write type traits
MARK_REF_T(::System::HexConverter*);
DEFINE_IL2CPP_CLASS(::System::HexConverter*, "System", "HexConverter");
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.HexConverter
class CORDL_TYPE HexConverter : public ::System::Object {
public:
// Declarations
using Casing = ::GlobalNamespace::HexConverter_Casing;

/// @brief Method ToBytesBuffer, addr 0xb9942e4, size 0x5c, virtual false, abstract: false, final false
static inline void ToBytesBuffer(uint8_t  value, ::System::Span_1<uint8_t>  buffer, int32_t  startingIndex, ::GlobalNamespace::HexConverter_Casing  casing) ;

/// @brief Method ToCharLower, addr 0xb9945b8, size 0x1c, virtual false, abstract: false, final false
static inline char16_t ToCharLower(int32_t  value) ;

/// @brief Method ToCharUpper, addr 0xb99459c, size 0x1c, virtual false, abstract: false, final false
static inline char16_t ToCharUpper(int32_t  value) ;

/// @brief Method ToCharsBuffer, addr 0xb994340, size 0x60, virtual false, abstract: false, final false
static inline void ToCharsBuffer(uint8_t  value, ::System::Span_1<char16_t>  buffer, int32_t  startingIndex, ::GlobalNamespace::HexConverter_Casing  casing) ;

/// @brief Method ToString, addr 0xb9943a0, size 0x1fc, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::ReadOnlySpan_1<uint8_t>  bytes, ::GlobalNamespace::HexConverter_Casing  casing) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HexConverter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HexConverter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HexConverter(HexConverter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HexConverter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HexConverter(HexConverter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26322};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::HexConverter) == 0x10, "Size mismatch!");

} // namespace end def System
