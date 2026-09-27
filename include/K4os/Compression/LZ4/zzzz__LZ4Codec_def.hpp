#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/LZ4Codec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LZ4Codec)
namespace K4os::Compression::LZ4 {
struct LZ4Level;
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
namespace K4os::Compression::LZ4 {
class LZ4Codec;
}
// Write type traits
MARK_REF_T(::K4os::Compression::LZ4::LZ4Codec*);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::LZ4Codec*, "K4os.Compression.LZ4", "LZ4Codec");
// Dependencies System.Object
namespace K4os::Compression::LZ4 {
// Is value type: false
// CS Name: K4os.Compression.LZ4.LZ4Codec
class CORDL_TYPE LZ4Codec : public ::System::Object {
public:
// Declarations
/// @brief Method Decode, addr 0x9cb94e8, size 0xc8, virtual false, abstract: false, final false
static inline int32_t Decode(::System::ReadOnlySpan_1<uint8_t>  source, ::System::Span_1<uint8_t>  target) ;

/// @brief Method Decode, addr 0x9cb9338, size 0x34, virtual false, abstract: false, final false
static inline int32_t Decode(uint8_t*  source, int32_t  sourceLength, uint8_t*  target, int32_t  targetLength) ;

/// @brief Method Encode, addr 0x9cb9268, size 0xd0, virtual false, abstract: false, final false
static inline int32_t Encode(::System::ReadOnlySpan_1<uint8_t>  source, ::System::Span_1<uint8_t>  target, ::K4os::Compression::LZ4::LZ4Level  level) ;

/// @brief Method Encode, addr 0x9cb8f10, size 0x48, virtual false, abstract: false, final false
static inline int32_t Encode(uint8_t*  source, int32_t  sourceLength, uint8_t*  target, int32_t  targetLength, ::K4os::Compression::LZ4::LZ4Level  level) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LZ4Codec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LZ4Codec", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LZ4Codec(LZ4Codec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LZ4Codec", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LZ4Codec(LZ4Codec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31567};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::K4os::Compression::LZ4::LZ4Codec) == 0x10, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4
