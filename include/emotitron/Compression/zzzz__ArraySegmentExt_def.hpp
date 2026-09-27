#pragma once
// IWYU pragma private; include "emotitron/Compression/ArraySegmentExt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySegmentExt)
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace emotitron::Compression {
class ArraySegmentExt;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::ArraySegmentExt*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::ArraySegmentExt*, "emotitron.Compression", "ArraySegmentExt");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.ArraySegmentExt
class CORDL_TYPE ArraySegmentExt : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Append, addr 0x5dd3670, size 0xb4, virtual false, abstract: false, final false
static inline void Append(::System::ArraySegment_1<uint32_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Append, addr 0x5dd37c0, size 0xb4, virtual false, abstract: false, final false
static inline void Append(::System::ArraySegment_1<uint64_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Append, addr 0x5dd351c, size 0xb4, virtual false, abstract: false, final false
static inline void Append(::System::ArraySegment_1<uint8_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method ExtractArraySegment, addr 0x5dd33a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::ArraySegment_1<uint16_t> ExtractArraySegment(::ArrayW<uint16_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method ExtractArraySegment, addr 0x5dd3424, size 0x7c, virtual false, abstract: false, final false
static inline ::System::ArraySegment_1<uint32_t> ExtractArraySegment(::ArrayW<uint32_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method ExtractArraySegment, addr 0x5dd34a0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::ArraySegment_1<uint64_t> ExtractArraySegment(::ArrayW<uint64_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method ExtractArraySegment, addr 0x5dd332c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::ArraySegment_1<uint8_t> ExtractArraySegment(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd3bc0, size 0xac, virtual false, abstract: false, final false
static inline uint64_t Read(::System::ArraySegment_1<uint32_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd3c6c, size 0xac, virtual false, abstract: false, final false
static inline uint64_t Read(::System::ArraySegment_1<uint64_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Read, addr 0x5dd3b14, size 0xac, virtual false, abstract: false, final false
static inline uint64_t Read(::System::ArraySegment_1<uint8_t>  buffer, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutSafe, addr 0x5dd40a8, size 0xa8, virtual false, abstract: false, final false
static inline void ReadOutSafe(::System::ArraySegment_1<uint64_t>  source, int32_t  srcStartPos, ::ArrayW<uint64_t>  target, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutSafe, addr 0x5dd3f68, size 0xa8, virtual false, abstract: false, final false
static inline void ReadOutSafe(::System::ArraySegment_1<uint64_t>  source, int32_t  srcStartPos, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutSafe, addr 0x5dd3e40, size 0xa8, virtual false, abstract: false, final false
static inline void ReadOutSafe(::System::ArraySegment_1<uint8_t>  source, int32_t  srcStartPos, ::ArrayW<uint64_t>  target, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutSafe, addr 0x5dd3d18, size 0xa8, virtual false, abstract: false, final false
static inline void ReadOutSafe(::System::ArraySegment_1<uint8_t>  source, int32_t  srcStartPos, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd39ac, size 0xb4, virtual false, abstract: false, final false
static inline void Write(::System::ArraySegment_1<uint32_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd3a60, size 0xb4, virtual false, abstract: false, final false
static inline void Write(::System::ArraySegment_1<uint64_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Write, addr 0x5dd38f8, size 0xb4, virtual false, abstract: false, final false
static inline void Write(::System::ArraySegment_1<uint8_t>  buffer, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArraySegmentExt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArraySegmentExt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArraySegmentExt(ArraySegmentExt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArraySegmentExt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArraySegmentExt(ArraySegmentExt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::ArraySegmentExt) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
