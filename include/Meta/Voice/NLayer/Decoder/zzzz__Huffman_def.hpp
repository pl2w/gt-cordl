#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/Huffman.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Huffman)
namespace Meta::Voice::NLayer::Decoder {
class BitReservoir;
}
namespace Meta::Voice::NLayer::Decoder {
class Huffman_HuffmanListNode;
}
namespace Meta::Voice::NLayer::Decoder {
class Huffman___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::NLayer::Decoder {
class Huffman;
}
namespace Meta::Voice::NLayer::Decoder {
class Huffman_HuffmanListNode;
}
namespace Meta::Voice::NLayer::Decoder {
class Huffman___c;
}
// Write type traits
MARK_REF_T(::Meta::Voice::NLayer::Decoder::Huffman*);
MARK_REF_T(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*);
MARK_REF_T(::Meta::Voice::NLayer::Decoder::Huffman___c*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::Huffman*, "Meta.Voice.NLayer.Decoder", "Huffman");
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*, "Meta.Voice.NLayer.Decoder", "Huffman/HuffmanListNode");
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::Huffman___c*, "Meta.Voice.NLayer.Decoder", "Huffman/<>c");
// Dependencies Meta.Voice.NLayer.Decoder.Huffman::HuffmanListNode, System.Object
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.Huffman
class CORDL_TYPE Huffman : public ::System::Object {
public:
// Declarations
using HuffmanListNode = ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode;

using __c = ::Meta::Voice::NLayer::Decoder::Huffman___c;

/// @brief Field LIN_BITS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LIN_BITS, put=setStaticF_LIN_BITS)) ::ArrayW<int32_t>  LIN_BITS;

/// @brief Field _codeTables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__codeTables, put=setStaticF__codeTables)) ::ArrayW<::System::Object*>  _codeTables;

/// @brief Field _floatLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__floatLookup, put=setStaticF__floatLookup)) ::ArrayW<float_t>  _floatLookup;

/// @brief Field _llCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__llCache, put=setStaticF__llCache)) ::ArrayW<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>  _llCache;

/// @brief Field _llCacheMaxBits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__llCacheMaxBits, put=setStaticF__llCacheMaxBits)) ::ArrayW<int32_t>  _llCacheMaxBits;

/// @brief Method BuildLinkedList, addr 0x9e07dc8, size 0x334, virtual false, abstract: false, final false
static inline ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* BuildLinkedList(::System::Collections::Generic::List_1<uint8_t>*  values, ::System::Collections::Generic::List_1<int32_t>*  lengthList, ::System::Collections::Generic::List_1<int32_t>*  codeList, ::by_ref<int32_t>  maxBits) ;

/// @brief Method Decode, addr 0x9e071ac, size 0x238, virtual false, abstract: false, final false
static inline void Decode(::Meta::Voice::NLayer::Decoder::BitReservoir*  br, int32_t  table, ::by_ref<float_t>  x, ::by_ref<float_t>  y) ;

/// @brief Method Decode, addr 0x9e074d0, size 0x2a4, virtual false, abstract: false, final false
static inline void Decode(::Meta::Voice::NLayer::Decoder::BitReservoir*  br, int32_t  table, ::by_ref<float_t>  x, ::by_ref<float_t>  y, ::by_ref<float_t>  v, ::by_ref<float_t>  w) ;

/// @brief Method DecodeSymbol, addr 0x9e073e4, size 0xec, virtual false, abstract: false, final false
static inline uint8_t DecodeSymbol(::Meta::Voice::NLayer::Decoder::BitReservoir*  br, int32_t  table) ;

/// @brief Method FindPreviousNode, addr 0x9e07c78, size 0x150, virtual false, abstract: false, final false
static inline int32_t FindPreviousNode(::System::Object*  tree, int32_t  idx, ::by_ref<int32_t>  bit) ;

/// @brief Method GetNode, addr 0x9e07774, size 0x1e8, virtual false, abstract: false, final false
static inline ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* GetNode(int32_t  table, ::by_ref<int32_t>  maxBits) ;

/// @brief Method InitTable, addr 0x9e0795c, size 0x31c, virtual false, abstract: false, final false
static inline ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* InitTable(::System::Object*  tree, ::by_ref<int32_t>  maxBits) ;

static inline ::ArrayW<int32_t> getStaticF_LIN_BITS() ;

static inline ::ArrayW<::System::Object*> getStaticF__codeTables() ;

static inline ::ArrayW<float_t> getStaticF__floatLookup() ;

static inline ::ArrayW<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*> getStaticF__llCache() ;

static inline ::ArrayW<int32_t> getStaticF__llCacheMaxBits() ;

static inline void setStaticF_LIN_BITS(::ArrayW<int32_t>  value) ;

static inline void setStaticF__codeTables(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF__floatLookup(::ArrayW<float_t>  value) ;

static inline void setStaticF__llCache(::ArrayW<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>  value) ;

static inline void setStaticF__llCacheMaxBits(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Huffman() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Huffman", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Huffman(Huffman && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Huffman", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Huffman(Huffman const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::NLayer::Decoder::Huffman) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.Huffman/<>c
class CORDL_TYPE Huffman___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::Voice::NLayer::Decoder::Huffman___c*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Comparison_1<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>*  __9__12_0;

static inline ::Meta::Voice::NLayer::Decoder::Huffman___c* New_ctor() ;

/// @brief Method <BuildLinkedList>b__12_0, addr 0x9e08174, size 0x24, virtual false, abstract: false, final false
inline int32_t _BuildLinkedList_b__12_0(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*  i1, ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*  i2) ;

/// @brief Method .ctor, addr 0x9e0816c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::Voice::NLayer::Decoder::Huffman___c* getStaticF___9() ;

static inline ::System::Comparison_1<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>* getStaticF___9__12_0() ;

static inline void setStaticF___9(::Meta::Voice::NLayer::Decoder::Huffman___c*  value) ;

static inline void setStaticF___9__12_0(::System::Comparison_1<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Huffman___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Huffman___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Huffman___c(Huffman___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Huffman___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Huffman___c(Huffman___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::NLayer::Decoder::Huffman___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
// Dependencies System.Object
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.Huffman/HuffmanListNode
class CORDL_TYPE Huffman_HuffmanListNode : public ::System::Object {
public:
// Declarations
/// @brief Field Bits, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Bits, put=__cordl_internal_set_Bits)) int32_t  Bits;

/// @brief Field Length, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Length, put=__cordl_internal_set_Length)) int32_t  Length;

/// @brief Field Mask, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Mask, put=__cordl_internal_set_Mask)) int32_t  Mask;

/// @brief Field Next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*  Next;

/// @brief Field Value, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) uint8_t  Value;

static inline ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_Bits() const;

constexpr int32_t& __cordl_internal_get_Bits() ;

constexpr int32_t const& __cordl_internal_get_Length() const;

constexpr int32_t& __cordl_internal_get_Length() ;

constexpr int32_t const& __cordl_internal_get_Mask() const;

constexpr int32_t& __cordl_internal_get_Mask() ;

constexpr ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* const& __cordl_internal_get_Next() const;

constexpr ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*& __cordl_internal_get_Next() ;

constexpr uint8_t const& __cordl_internal_get_Value() const;

constexpr uint8_t& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_Bits(int32_t  value) ;

constexpr void __cordl_internal_set_Length(int32_t  value) ;

constexpr void __cordl_internal_set_Mask(int32_t  value) ;

constexpr void __cordl_internal_set_Next(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*  value) ;

constexpr void __cordl_internal_set_Value(uint8_t  value) ;

/// @brief Method .ctor, addr 0x9e080fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Huffman_HuffmanListNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Huffman_HuffmanListNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Huffman_HuffmanListNode(Huffman_HuffmanListNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Huffman_HuffmanListNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Huffman_HuffmanListNode(Huffman_HuffmanListNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31385};

/// @brief Field Value, offset: 0x10, size: 0x1, def value: None
 uint8_t  ___Value;

/// @brief Field Length, offset: 0x14, size: 0x4, def value: None
 int32_t  ___Length;

/// @brief Field Bits, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Bits;

/// @brief Field Mask, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___Mask;

/// @brief Field Next, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*  ___Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode, ___Value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode, ___Length) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode, ___Bits) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode, ___Mask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode, ___Next) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode) == 0x28, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
