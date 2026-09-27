#pragma once
// IWYU pragma private; include "emotitron/Compression/ZigZagExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZigZagExt)
// Forward declare root types
namespace emotitron::Compression {
class ZigZagExt;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::ZigZagExt*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::ZigZagExt*, "emotitron.Compression", "ZigZagExt");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.ZigZagExt
class CORDL_TYPE ZigZagExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method UnZigZag, addr 0x5dd8bb4, size 0x14, virtual false, abstract: false, final false
static inline int16_t UnZigZag(uint16_t  u) ;

/// [Extension]
/// @brief Method UnZigZag, addr 0x5dd8b94, size 0x10, virtual false, abstract: false, final false
static inline int32_t UnZigZag(uint32_t  u) ;

/// [Extension]
/// @brief Method UnZigZag, addr 0x5dd8b78, size 0x10, virtual false, abstract: false, final false
static inline int64_t UnZigZag(uint64_t  u) ;

/// [Extension]
/// @brief Method UnZigZag, addr 0x5dd8bd8, size 0x14, virtual false, abstract: false, final false
static inline int8_t UnZigZag(uint8_t  u) ;

/// [Extension]
/// @brief Method ZigZag, addr 0x5dd8ba4, size 0x10, virtual false, abstract: false, final false
static inline uint16_t ZigZag(int16_t  s) ;

/// [Extension]
/// @brief Method ZigZag, addr 0x5dd8b88, size 0xc, virtual false, abstract: false, final false
static inline uint32_t ZigZag(int32_t  s) ;

/// [Extension]
/// @brief Method ZigZag, addr 0x5dd8b6c, size 0xc, virtual false, abstract: false, final false
static inline uint64_t ZigZag(int64_t  s) ;

/// [Extension]
/// @brief Method ZigZag, addr 0x5dd8bc8, size 0x10, virtual false, abstract: false, final false
static inline uint8_t ZigZag(int8_t  s) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZigZagExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZigZagExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZigZagExt(ZigZagExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZigZagExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZigZagExt(ZigZagExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5101};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::ZigZagExt) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
