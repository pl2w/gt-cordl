#pragma once
// IWYU pragma private; include "emotitron/Compression/ArraySerializeUnsafe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArraySerializeUnsafe)
// Forward declare root types
namespace emotitron::Compression {
class ArraySerializeUnsafe;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::ArraySerializeUnsafe*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::ArraySerializeUnsafe*, "emotitron.Compression", "ArraySerializeUnsafe");
// [Extension]
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.ArraySerializeUnsafe
class CORDL_TYPE ArraySerializeUnsafe : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method Add, addr 0x5dd4e44, size 0x24, virtual false, abstract: false, final false
static inline void Add(uint16_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Add, addr 0x5dd4e20, size 0x24, virtual false, abstract: false, final false
static inline void Add(uint32_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Add, addr 0x5dd4dfc, size 0x24, virtual false, abstract: false, final false
static inline void Add(uint64_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Add, addr 0x5dd4e68, size 0x24, virtual false, abstract: false, final false
static inline void Add(uint8_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method AddSigned, addr 0x5dd4c58, size 0x18, virtual false, abstract: false, final false
static inline void AddSigned(int16_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method AddSigned, addr 0x5dd4c44, size 0x14, virtual false, abstract: false, final false
static inline void AddSigned(int32_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method AddSigned, addr 0x5dd4c70, size 0x18, virtual false, abstract: false, final false
static inline void AddSigned(int8_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method AddUnsigned, addr 0x5dd4ed4, size 0x24, virtual false, abstract: false, final false
static inline void AddUnsigned(int16_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method AddUnsigned, addr 0x5dd4eb0, size 0x24, virtual false, abstract: false, final false
static inline void AddUnsigned(int32_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method AddUnsigned, addr 0x5dd4e8c, size 0x24, virtual false, abstract: false, final false
static inline void AddUnsigned(int64_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method AddUnsigned, addr 0x5dd4ef8, size 0x24, virtual false, abstract: false, final false
static inline void AddUnsigned(int8_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// @brief Method Append, addr 0x5dd4c04, size 0x40, virtual false, abstract: false, final false
static inline void Append(uint64_t*  uPtr, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method AppendSigned, addr 0x5dd4bf8, size 0xc, virtual false, abstract: false, final false
static inline void AppendSigned(uint64_t*  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd4f3c, size 0x10, virtual false, abstract: false, final false
static inline void Inject(uint16_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd4f2c, size 0x10, virtual false, abstract: false, final false
static inline void Inject(uint32_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd4f1c, size 0x10, virtual false, abstract: false, final false
static inline void Inject(uint64_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Inject, addr 0x5dd4f4c, size 0x10, virtual false, abstract: false, final false
static inline void Inject(uint8_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd4c9c, size 0x18, virtual false, abstract: false, final false
static inline void InjectSigned(int16_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd4c88, size 0x14, virtual false, abstract: false, final false
static inline void InjectSigned(int32_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectSigned, addr 0x5dd4cb4, size 0x18, virtual false, abstract: false, final false
static inline void InjectSigned(int8_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd4f7c, size 0x24, virtual false, abstract: false, final false
static inline void InjectUnsigned(int16_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd4f6c, size 0x10, virtual false, abstract: false, final false
static inline void InjectUnsigned(int32_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd5064, size 0x24, virtual false, abstract: false, final false
static inline void InjectUnsigned(int32_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd4f5c, size 0x10, virtual false, abstract: false, final false
static inline void InjectUnsigned(int64_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd5040, size 0x24, virtual false, abstract: false, final false
static inline void InjectUnsigned(int64_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method InjectUnsigned, addr 0x5dd4fa0, size 0x10, virtual false, abstract: false, final false
static inline void InjectUnsigned(int8_t  value, uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method PeekSigned, addr 0x5dd4d68, size 0x24, virtual false, abstract: false, final false
static inline int32_t PeekSigned(uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Poke, addr 0x5dd4ff8, size 0x24, virtual false, abstract: false, final false
static inline void Poke(uint16_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Poke, addr 0x5dd4fd4, size 0x24, virtual false, abstract: false, final false
static inline void Poke(uint32_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Poke, addr 0x5dd4fb0, size 0x24, virtual false, abstract: false, final false
static inline void Poke(uint64_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method Poke, addr 0x5dd501c, size 0x24, virtual false, abstract: false, final false
static inline void Poke(uint8_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method PokeSigned, addr 0x5dd4cf4, size 0x2c, virtual false, abstract: false, final false
static inline void PokeSigned(int16_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method PokeSigned, addr 0x5dd4ccc, size 0x28, virtual false, abstract: false, final false
static inline void PokeSigned(int32_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method PokeSigned, addr 0x5dd4d20, size 0x2c, virtual false, abstract: false, final false
static inline void PokeSigned(int8_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method PokeUnsigned, addr 0x5dd5088, size 0x24, virtual false, abstract: false, final false
static inline void PokeUnsigned(int16_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method PokeUnsigned, addr 0x5dd50ac, size 0x24, virtual false, abstract: false, final false
static inline void PokeUnsigned(int8_t  value, uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// @brief Method Read, addr 0x5dd27bc, size 0x7c, virtual false, abstract: false, final false
static inline uint64_t Read(uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method Read, addr 0x5dd4d8c, size 0x70, virtual false, abstract: false, final false
static inline uint64_t Read(uint64_t*  uPtr, int32_t  bitposition, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutUnsafe, addr 0x5dd5488, size 0xc8, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(::ArrayW<uint32_t>  source, int32_t  sourcePos, ::ArrayW<uint32_t>  target, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutUnsafe, addr 0x5dd5550, size 0xc8, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(::ArrayW<uint32_t>  source, int32_t  sourcePos, ::ArrayW<uint64_t>  target, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutUnsafe, addr 0x5dd53c0, size 0xc8, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(::ArrayW<uint32_t>  source, int32_t  sourcePos, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutUnsafe, addr 0x5dd5230, size 0xc8, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(::ArrayW<uint64_t>  source, int32_t  sourcePos, ::ArrayW<uint32_t>  target, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutUnsafe, addr 0x5dd52f8, size 0xc8, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(::ArrayW<uint64_t>  source, int32_t  sourcePos, ::ArrayW<uint64_t>  target, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutUnsafe, addr 0x5dd5168, size 0xc8, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(::ArrayW<uint64_t>  source, int32_t  sourcePos, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutUnsafe, addr 0x5dd56e0, size 0xc8, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(::ArrayW<uint8_t>  source, int32_t  sourcePos, ::ArrayW<uint32_t>  target, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutUnsafe, addr 0x5dd5618, size 0xc8, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(::ArrayW<uint8_t>  source, int32_t  sourcePos, ::ArrayW<uint64_t>  target, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// [Extension]
/// @brief Method ReadOutUnsafe, addr 0x5dd57a8, size 0xc8, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(::ArrayW<uint8_t>  source, int32_t  sourcePos, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// @brief Method ReadOutUnsafe, addr 0x5dd50d0, size 0x98, virtual false, abstract: false, final false
static inline void ReadOutUnsafe(uint64_t*  sourcePtr, int32_t  sourcePos, uint64_t*  targetPtr, ::by_ref<int32_t>  targetPos, int32_t  bits) ;

/// @brief Method ReadSigned, addr 0x5dd4d4c, size 0x1c, virtual false, abstract: false, final false
static inline int32_t ReadSigned(uint64_t*  uPtr, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method Write, addr 0x5dd2224, size 0x70, virtual false, abstract: false, final false
static inline void Write(uint64_t*  uPtr, uint64_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

/// @brief Method WriteSigned, addr 0x5dd4bec, size 0xc, virtual false, abstract: false, final false
static inline void WriteSigned(uint64_t*  buffer, int32_t  value, ::by_ref<int32_t>  bitposition, int32_t  bits) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArraySerializeUnsafe() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArraySerializeUnsafe", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArraySerializeUnsafe(ArraySerializeUnsafe && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArraySerializeUnsafe", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArraySerializeUnsafe(ArraySerializeUnsafe const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5088};

/// @brief Field bufferOverrunMsg offset 0xffffffff size 0x8
static constexpr ::ConstString  bufferOverrunMsg{u"Byte buffer overrun. Dataloss will occur."};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::emotitron::Compression::ArraySerializeUnsafe) == 0x10, "Size mismatch!");

} // namespace end def emotitron::Compression
