#pragma once
// IWYU pragma private; include "emotitron/Compression/PrimitivePackBytesExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimitivePackBytesExt)
// Forward declare root types
namespace emotitron::Compression {
class PrimitivePackBytesExt;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::PrimitivePackBytesExt*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::PrimitivePackBytesExt*, "emotitron.Compression", "PrimitivePackBytesExt");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.PrimitivePackBytesExt
class CORDL_TYPE PrimitivePackBytesExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method InjectPackedBytes, addr 0x5dd6408, size 0x108, virtual false, abstract: false, final false
static inline void InjectPackedBytes(uint32_t  value, ::by_ref<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectPackedBytes, addr 0x5dd6328, size 0xe0, virtual false, abstract: false, final false
static inline void InjectPackedBytes(uint64_t  value, ::by_ref<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadPackedBytes, addr 0x5dd65b4, size 0xa4, virtual false, abstract: false, final false
static inline uint32_t ReadPackedBytes(uint32_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadPackedBytes, addr 0x5dd6510, size 0xa4, virtual false, abstract: false, final false
static inline uint64_t ReadPackedBytes(uint64_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadSignedPackedBytes, addr 0x5dd6664, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSignedPackedBytes(uint64_t  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBytes, addr 0x5dd6234, size 0xf4, virtual false, abstract: false, final false
static inline uint32_t WritePackedBytes(uint32_t  buffer, uint32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WritePackedBytes, addr 0x5dd615c, size 0xd8, virtual false, abstract: false, final false
static inline uint64_t WritePackedBytes(uint64_t  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method WriteSignedPackedBytes, addr 0x5dd6658, size 0xc, virtual false, abstract: false, final false
static inline uint64_t WriteSignedPackedBytes(uint64_t  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PrimitivePackBytesExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PrimitivePackBytesExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PrimitivePackBytesExt(PrimitivePackBytesExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PrimitivePackBytesExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PrimitivePackBytesExt(PrimitivePackBytesExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5093};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::PrimitivePackBytesExt) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
