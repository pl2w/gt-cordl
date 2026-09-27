#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/InflaterHuffmanTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InflaterHuffmanTree)
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class StreamManipulator;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class InflaterHuffmanTree;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*, "ICSharpCode.SharpZipLib.Zip.Compression", "InflaterHuffmanTree");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
class CORDL_TYPE InflaterHuffmanTree : public ::System::Object {
public:
// Declarations
/// @brief Field defDistTree, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defDistTree, put=setStaticF_defDistTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  defDistTree;

/// @brief Field defLitLenTree, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defLitLenTree, put=setStaticF_defLitLenTree)) ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  defLitLenTree;

/// @brief Field tree, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tree, put=__cordl_internal_set_tree)) ::ArrayW<int16_t>  tree;

/// @brief Method BuildTree, addr 0x9fd9158, size 0x508, virtual false, abstract: false, final false
inline void BuildTree(::System::Collections::Generic::IList_1<uint8_t>*  codeLengths) ;

/// @brief Method GetSymbol, addr 0x9fd6c20, size 0x1b4, virtual false, abstract: false, final false
inline int32_t GetSymbol(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  input) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* New_ctor(::System::Collections::Generic::IList_1<uint8_t>*  codeLengths) ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_tree() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_tree() ;

constexpr void __cordl_internal_set_tree(::ArrayW<int16_t>  value) ;

/// @brief Method .ctor, addr 0x9fd8d78, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IList_1<uint8_t>*  codeLengths) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* getStaticF_defDistTree() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree* getStaticF_defLitLenTree() ;

static inline void setStaticF_defDistTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value) ;

static inline void setStaticF_defLitLenTree(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InflaterHuffmanTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InflaterHuffmanTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InflaterHuffmanTree(InflaterHuffmanTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InflaterHuffmanTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InflaterHuffmanTree(InflaterHuffmanTree const& ) = delete;

/// @brief Field MAX_BITLEN offset 0xffffffff size 0x4
static constexpr int32_t  MAX_BITLEN{static_cast<int32_t>(0xf)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17381};

/// @brief Field tree, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___tree;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree, ___tree) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::InflaterHuffmanTree) == 0x18, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
