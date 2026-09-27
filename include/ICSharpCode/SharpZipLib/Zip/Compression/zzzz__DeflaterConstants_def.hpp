#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/DeflaterConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeflaterConstants)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterConstants;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterConstants*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterConstants*, "ICSharpCode.SharpZipLib.Zip.Compression", "DeflaterConstants");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.DeflaterConstants
class CORDL_TYPE DeflaterConstants : public ::System::Object {
public:
// Declarations
/// @brief Field COMPR_FUNC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_COMPR_FUNC, put=setStaticF_COMPR_FUNC)) ::ArrayW<int32_t>  COMPR_FUNC;

/// @brief Field GOOD_LENGTH, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GOOD_LENGTH, put=setStaticF_GOOD_LENGTH)) ::ArrayW<int32_t>  GOOD_LENGTH;

/// @brief Field MAX_BLOCK_SIZE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAX_BLOCK_SIZE, put=setStaticF_MAX_BLOCK_SIZE)) int32_t  MAX_BLOCK_SIZE;

/// @brief Field MAX_CHAIN, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MAX_CHAIN, put=setStaticF_MAX_CHAIN)) ::ArrayW<int32_t>  MAX_CHAIN;

/// @brief Field MAX_LAZY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MAX_LAZY, put=setStaticF_MAX_LAZY)) ::ArrayW<int32_t>  MAX_LAZY;

/// @brief Field NICE_LENGTH, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NICE_LENGTH, put=setStaticF_NICE_LENGTH)) ::ArrayW<int32_t>  NICE_LENGTH;

static inline ::ArrayW<int32_t> getStaticF_COMPR_FUNC() ;

static inline ::ArrayW<int32_t> getStaticF_GOOD_LENGTH() ;

static inline int32_t getStaticF_MAX_BLOCK_SIZE() ;

static inline ::ArrayW<int32_t> getStaticF_MAX_CHAIN() ;

static inline ::ArrayW<int32_t> getStaticF_MAX_LAZY() ;

static inline ::ArrayW<int32_t> getStaticF_NICE_LENGTH() ;

static inline void setStaticF_COMPR_FUNC(::ArrayW<int32_t>  value) ;

static inline void setStaticF_GOOD_LENGTH(::ArrayW<int32_t>  value) ;

static inline void setStaticF_MAX_BLOCK_SIZE(int32_t  value) ;

static inline void setStaticF_MAX_CHAIN(::ArrayW<int32_t>  value) ;

static inline void setStaticF_MAX_LAZY(::ArrayW<int32_t>  value) ;

static inline void setStaticF_NICE_LENGTH(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeflaterConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeflaterConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeflaterConstants(DeflaterConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeflaterConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeflaterConstants(DeflaterConstants const& ) = delete;

/// @brief Field DEBUGGING offset 0xffffffff size 0x1
static constexpr bool  DEBUGGING{false};

/// @brief Field DEFAULT_MEM_LEVEL offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_MEM_LEVEL{static_cast<int32_t>(0x8)};

/// @brief Field DEFLATE_FAST offset 0xffffffff size 0x4
static constexpr int32_t  DEFLATE_FAST{static_cast<int32_t>(0x1)};

/// @brief Field DEFLATE_SLOW offset 0xffffffff size 0x4
static constexpr int32_t  DEFLATE_SLOW{static_cast<int32_t>(0x2)};

/// @brief Field DEFLATE_STORED offset 0xffffffff size 0x4
static constexpr int32_t  DEFLATE_STORED{static_cast<int32_t>(0x0)};

/// @brief Field DYN_TREES offset 0xffffffff size 0x4
static constexpr int32_t  DYN_TREES{static_cast<int32_t>(0x2)};

/// @brief Field HASH_BITS offset 0xffffffff size 0x4
static constexpr int32_t  HASH_BITS{static_cast<int32_t>(0xf)};

/// @brief Field HASH_MASK offset 0xffffffff size 0x4
static constexpr int32_t  HASH_MASK{static_cast<int32_t>(0x7fff)};

/// @brief Field HASH_SHIFT offset 0xffffffff size 0x4
static constexpr int32_t  HASH_SHIFT{static_cast<int32_t>(0x5)};

/// @brief Field HASH_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  HASH_SIZE{static_cast<int32_t>(0x8000)};

/// @brief Field MAX_DIST offset 0xffffffff size 0x4
static constexpr int32_t  MAX_DIST{static_cast<int32_t>(0x7efa)};

/// @brief Field MAX_MATCH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_MATCH{static_cast<int32_t>(0x102)};

/// @brief Field MAX_WBITS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_WBITS{static_cast<int32_t>(0xf)};

/// @brief Field MIN_LOOKAHEAD offset 0xffffffff size 0x4
static constexpr int32_t  MIN_LOOKAHEAD{static_cast<int32_t>(0x106)};

/// @brief Field MIN_MATCH offset 0xffffffff size 0x4
static constexpr int32_t  MIN_MATCH{static_cast<int32_t>(0x3)};

/// @brief Field PENDING_BUF_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  PENDING_BUF_SIZE{static_cast<int32_t>(0x10000)};

/// @brief Field PRESET_DICT offset 0xffffffff size 0x4
static constexpr int32_t  PRESET_DICT{static_cast<int32_t>(0x20)};

/// @brief Field STATIC_TREES offset 0xffffffff size 0x4
static constexpr int32_t  STATIC_TREES{static_cast<int32_t>(0x1)};

/// @brief Field STORED_BLOCK offset 0xffffffff size 0x4
static constexpr int32_t  STORED_BLOCK{static_cast<int32_t>(0x0)};

/// @brief Field WMASK offset 0xffffffff size 0x4
static constexpr int32_t  WMASK{static_cast<int32_t>(0x7fff)};

/// @brief Field WSIZE offset 0xffffffff size 0x4
static constexpr int32_t  WSIZE{static_cast<int32_t>(0x8000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17372};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterConstants) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
