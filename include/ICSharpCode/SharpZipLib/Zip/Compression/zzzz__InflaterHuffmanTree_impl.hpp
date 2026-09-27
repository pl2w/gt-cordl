#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/InflaterHuffmanTree.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/zzzz__InflaterHuffmanTree_def.hpp"
#include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/zzzz__StreamManipulator_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::*)(::System::Collections::Generic::IList_1<uint8_t>*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9fd8d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<uint8_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree.BuildTree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::*)(::System::Collections::Generic::IList_1<uint8_t>*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::BuildTree)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0x9fd9158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(),
                        {"BuildTree", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<uint8_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree.GetSymbol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::*)(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*)>(&::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::GetSymbol)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9fd6c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(),
                        {"GetSymbol", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int16_t>& ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::__cordl_internal_get_tree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree;
}
constexpr ::ArrayW<int16_t> const& ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::__cordl_internal_get_tree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tree;
}
constexpr void ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::__cordl_internal_set_tree(::ArrayW<int16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tree = value;
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::setStaticF_defLitLenTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value)  {
::cordl_internals::setStaticField<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*, "defLitLenTree", ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(std::forward<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(value));
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::getStaticF_defLitLenTree()  {
return ::cordl_internals::getStaticField<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*, "defLitLenTree", ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>();
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::setStaticF_defDistTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value)  {
::cordl_internals::setStaticField<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*, "defDistTree", ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(std::forward<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(value));
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::getStaticF_defDistTree()  {
return ::cordl_internals::getStaticField<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*, "defDistTree", ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>();
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::_ctor(::System::Collections::Generic::IList_1<uint8_t>*  codeLengths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<uint8_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codeLengths);
}
inline void ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::BuildTree(::System::Collections::Generic::IList_1<uint8_t>*  codeLengths)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(),
                        {"BuildTree", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<uint8_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, codeLengths);
}
inline int32_t ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::GetSymbol(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(),
                        {"GetSymbol", {}, {::i2c::type_of<::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, input);
}
inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::New_ctor(::System::Collections::Generic::IList_1<uint8_t>*  codeLengths)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*>(codeLengths));
}
// Ctor Parameters []
constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree::InflaterHuffmanTree()   {
}
