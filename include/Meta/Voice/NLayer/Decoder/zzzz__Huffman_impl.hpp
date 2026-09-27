#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/Huffman.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__Huffman_def.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__BitReservoir_def.hpp"
#include "Meta/Voice/NLayer/Decoder/zzzz__Huffman_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::Voice::NLayer::Decoder::BitReservoir*, int32_t, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Meta::Voice::NLayer::Decoder::Huffman::Decode)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x9e071ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"Decode", {}, {::i2c::type_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::Voice::NLayer::Decoder::BitReservoir*, int32_t, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Meta::Voice::NLayer::Decoder::Huffman::Decode)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x9e074d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"Decode", {}, {::i2c::type_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman.DecodeSymbol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::Meta::Voice::NLayer::Decoder::BitReservoir*, int32_t)>(&::Meta::Voice::NLayer::Decoder::Huffman::DecodeSymbol)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e073e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"DecodeSymbol", {}, {::i2c::type_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman.GetNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* (*)(int32_t, ::by_ref<int32_t>)>(&::Meta::Voice::NLayer::Decoder::Huffman::GetNode)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x9e07774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"GetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman.InitTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* (*)(::System::Object*, ::by_ref<int32_t>)>(&::Meta::Voice::NLayer::Decoder::Huffman::InitTable)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x9e0795c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"InitTable", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman.FindPreviousNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*, int32_t, ::by_ref<int32_t>)>(&::Meta::Voice::NLayer::Decoder::Huffman::FindPreviousNode)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9e07c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"FindPreviousNode", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman.BuildLinkedList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* (*)(::System::Collections::Generic::List_1<uint8_t>*, ::System::Collections::Generic::List_1<int32_t>*, ::System::Collections::Generic::List_1<int32_t>*, ::by_ref<int32_t>)>(&::Meta::Voice::NLayer::Decoder::Huffman::BuildLinkedList)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x9e07dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"BuildLinkedList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<uint8_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Voice::NLayer::Decoder::Huffman::setStaticF__codeTables(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "_codeTables", ::Meta::Voice::NLayer::Decoder::Huffman*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> Meta::Voice::NLayer::Decoder::Huffman::getStaticF__codeTables()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "_codeTables", ::Meta::Voice::NLayer::Decoder::Huffman*>();
}
inline void Meta::Voice::NLayer::Decoder::Huffman::setStaticF__floatLookup(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "_floatLookup", ::Meta::Voice::NLayer::Decoder::Huffman*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> Meta::Voice::NLayer::Decoder::Huffman::getStaticF__floatLookup()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "_floatLookup", ::Meta::Voice::NLayer::Decoder::Huffman*>();
}
inline void Meta::Voice::NLayer::Decoder::Huffman::setStaticF__llCache(::ArrayW<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>, "_llCache", ::Meta::Voice::NLayer::Decoder::Huffman*>(std::forward<::ArrayW<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>>(value));
}
inline ::ArrayW<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*> Meta::Voice::NLayer::Decoder::Huffman::getStaticF__llCache()  {
return ::cordl_internals::getStaticField<::ArrayW<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>, "_llCache", ::Meta::Voice::NLayer::Decoder::Huffman*>();
}
inline void Meta::Voice::NLayer::Decoder::Huffman::setStaticF__llCacheMaxBits(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "_llCacheMaxBits", ::Meta::Voice::NLayer::Decoder::Huffman*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Meta::Voice::NLayer::Decoder::Huffman::getStaticF__llCacheMaxBits()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "_llCacheMaxBits", ::Meta::Voice::NLayer::Decoder::Huffman*>();
}
inline void Meta::Voice::NLayer::Decoder::Huffman::setStaticF_LIN_BITS(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "LIN_BITS", ::Meta::Voice::NLayer::Decoder::Huffman*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Meta::Voice::NLayer::Decoder::Huffman::getStaticF_LIN_BITS()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "LIN_BITS", ::Meta::Voice::NLayer::Decoder::Huffman*>();
}
inline void Meta::Voice::NLayer::Decoder::Huffman::Decode(::Meta::Voice::NLayer::Decoder::BitReservoir*  br, int32_t  table, ::by_ref<float_t>  x, ::by_ref<float_t>  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"Decode", {}, {::i2c::type_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, br, table, x, y);
}
inline void Meta::Voice::NLayer::Decoder::Huffman::Decode(::Meta::Voice::NLayer::Decoder::BitReservoir*  br, int32_t  table, ::by_ref<float_t>  x, ::by_ref<float_t>  y, ::by_ref<float_t>  v, ::by_ref<float_t>  w)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"Decode", {}, {::i2c::type_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, br, table, x, y, v, w);
}
inline uint8_t Meta::Voice::NLayer::Decoder::Huffman::DecodeSymbol(::Meta::Voice::NLayer::Decoder::BitReservoir*  br, int32_t  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"DecodeSymbol", {}, {::i2c::type_of<::Meta::Voice::NLayer::Decoder::BitReservoir*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, br, table);
}
inline ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* Meta::Voice::NLayer::Decoder::Huffman::GetNode(int32_t  table, ::by_ref<int32_t>  maxBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"GetNode", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>(nullptr, ___internal_method, table, maxBits);
}
inline ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* Meta::Voice::NLayer::Decoder::Huffman::InitTable(::System::Object*  tree, ::by_ref<int32_t>  maxBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"InitTable", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>(nullptr, ___internal_method, tree, maxBits);
}
inline int32_t Meta::Voice::NLayer::Decoder::Huffman::FindPreviousNode(::System::Object*  tree, int32_t  idx, ::by_ref<int32_t>  bit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"FindPreviousNode", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, tree, idx, bit);
}
inline ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* Meta::Voice::NLayer::Decoder::Huffman::BuildLinkedList(::System::Collections::Generic::List_1<uint8_t>*  values, ::System::Collections::Generic::List_1<int32_t>*  lengthList, ::System::Collections::Generic::List_1<int32_t>*  codeList, ::by_ref<int32_t>  maxBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman*>(),
                        {"BuildLinkedList", {}, {::i2c::type_of<::System::Collections::Generic::List_1<uint8_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<int32_t>*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>(nullptr, ___internal_method, values, lengthList, codeList, maxBits);
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::Huffman::Huffman()   {
}
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::Huffman___c::*)()>(&::Meta::Voice::NLayer::Decoder::Huffman___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e0816c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman___c._BuildLinkedList_b__12_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::NLayer::Decoder::Huffman___c::*)(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*, ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*)>(&::Meta::Voice::NLayer::Decoder::Huffman___c::_BuildLinkedList_b__12_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9e08174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman___c*>(),
                        {"<BuildLinkedList>b__12_0", {}, {::i2c::type_of<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>(), ::i2c::type_of<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Voice::NLayer::Decoder::Huffman___c::setStaticF___9(::Meta::Voice::NLayer::Decoder::Huffman___c*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::NLayer::Decoder::Huffman___c*, "<>9", ::Meta::Voice::NLayer::Decoder::Huffman___c*>(std::forward<::Meta::Voice::NLayer::Decoder::Huffman___c*>(value));
}
inline ::Meta::Voice::NLayer::Decoder::Huffman___c* Meta::Voice::NLayer::Decoder::Huffman___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::Voice::NLayer::Decoder::Huffman___c*, "<>9", ::Meta::Voice::NLayer::Decoder::Huffman___c*>();
}
inline void Meta::Voice::NLayer::Decoder::Huffman___c::setStaticF___9__12_0(::System::Comparison_1<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>*, "<>9__12_0", ::Meta::Voice::NLayer::Decoder::Huffman___c*>(std::forward<::System::Comparison_1<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>*>(value));
}
inline ::System::Comparison_1<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>* Meta::Voice::NLayer::Decoder::Huffman___c::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>*, "<>9__12_0", ::Meta::Voice::NLayer::Decoder::Huffman___c*>();
}
inline void Meta::Voice::NLayer::Decoder::Huffman___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Meta::Voice::NLayer::Decoder::Huffman___c::_BuildLinkedList_b__12_0(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*  i1, ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*  i2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman___c*>(),
                        {"<BuildLinkedList>b__12_0", {}, {::i2c::type_of<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>(), ::i2c::type_of<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, i1, i2);
}
inline ::Meta::Voice::NLayer::Decoder::Huffman___c* Meta::Voice::NLayer::Decoder::Huffman___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::Decoder::Huffman___c*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::Huffman___c::Huffman___c()   {
}
//  Writing Method size for method: ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::*)()>(&::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e080fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr uint8_t const& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Value;
}
constexpr void Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_set_Value(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Value = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Length;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Length;
}
constexpr void Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_set_Length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Length = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Bits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bits;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Bits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bits;
}
constexpr void Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_set_Bits(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bits = value;
}
constexpr int32_t& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mask;
}
constexpr int32_t const& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Mask;
}
constexpr void Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_set_Mask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Mask = value;
}
constexpr ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* const& Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_get_Next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Next;
}
constexpr void Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::__cordl_internal_set_Next(::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Next = value;
}
inline void Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode* Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::Decoder::Huffman_HuffmanListNode::Huffman_HuffmanListNode()   {
}
