#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Deflater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Deflater)
namespace GlobalNamespace {
struct Deflater_CompressionLevel;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
struct DeflateStrategy;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterEngine;
}
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class DeflaterPending;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression {
class Deflater;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater*, "ICSharpCode.SharpZipLib.Zip.Compression", "Deflater");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.Deflater
class CORDL_TYPE Deflater : public ::System::Object {
public:
// Declarations
using CompressionLevel = ::GlobalNamespace::Deflater_CompressionLevel;

 __declspec(property(get=get_Adler)) int32_t  Adler;

 __declspec(property(get=get_IsFinished)) bool  IsFinished;

 __declspec(property(get=get_IsNeedingInput)) bool  IsNeedingInput;

 __declspec(property(get=get_TotalIn)) int64_t  TotalIn;

 __declspec(property(get=get_TotalOut)) int64_t  TotalOut;

/// @brief Field engine, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_engine, put=__cordl_internal_set_engine)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*  engine;

/// @brief Field level, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_level, put=__cordl_internal_set_level)) int32_t  level;

/// @brief Field noZlibHeaderOrFooter, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_noZlibHeaderOrFooter, put=__cordl_internal_set_noZlibHeaderOrFooter)) bool  noZlibHeaderOrFooter;

/// @brief Field pending, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pending, put=__cordl_internal_set_pending)) ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  pending;

/// @brief Field state, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

/// @brief Field totalOut, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalOut, put=__cordl_internal_set_totalOut)) int64_t  totalOut;

/// @brief Method Deflate, addr 0x9fd23f0, size 0x18, virtual false, abstract: false, final false
inline int32_t Deflate(::ArrayW<uint8_t>  output) ;

/// @brief Method Deflate, addr 0x9fd2408, size 0x290, virtual false, abstract: false, final false
inline int32_t Deflate(::ArrayW<uint8_t>  output, int32_t  offset, int32_t  length) ;

/// @brief Method Finish, addr 0x9fd1f38, size 0x10, virtual false, abstract: false, final false
inline void Finish() ;

/// @brief Method Flush, addr 0x9fd1f28, size 0x10, virtual false, abstract: false, final false
inline void Flush() ;

/// @brief Method GetLevel, addr 0x9fd23e8, size 0x8, virtual false, abstract: false, final false
inline int32_t GetLevel() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* New_ctor() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* New_ctor(int32_t  level) ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Deflater* New_ctor(int32_t  level, bool  noZlibHeaderOrFooter) ;

/// @brief Method Reset, addr 0x9fcff6c, size 0x3c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetDictionary, addr 0x9fd29f8, size 0x18, virtual false, abstract: false, final false
inline void SetDictionary(::ArrayW<uint8_t>  dictionary) ;

/// @brief Method SetDictionary, addr 0x9fd2a10, size 0x60, virtual false, abstract: false, final false
inline void SetDictionary(::ArrayW<uint8_t>  dictionary, int32_t  index, int32_t  count) ;

/// @brief Method SetInput, addr 0x9fd1fbc, size 0x18, virtual false, abstract: false, final false
inline void SetInput(::ArrayW<uint8_t>  input) ;

/// @brief Method SetInput, addr 0x9fd1fd4, size 0x68, virtual false, abstract: false, final false
inline void SetInput(::ArrayW<uint8_t>  input, int32_t  offset, int32_t  count) ;

/// @brief Method SetLevel, addr 0x9fceaec, size 0x90, virtual false, abstract: false, final false
inline void SetLevel(int32_t  level) ;

/// @brief Method SetStrategy, addr 0x9fd1df0, size 0x18, virtual false, abstract: false, final false
inline void SetStrategy(::ICSharpCode::SharpZipLib::Zip::Compression::DeflateStrategy  strategy) ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine* const& __cordl_internal_get_engine() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*& __cordl_internal_get_engine() ;

constexpr int32_t const& __cordl_internal_get_level() const;

constexpr int32_t& __cordl_internal_get_level() ;

constexpr bool const& __cordl_internal_get_noZlibHeaderOrFooter() const;

constexpr bool& __cordl_internal_get_noZlibHeaderOrFooter() ;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending* const& __cordl_internal_get_pending() const;

constexpr ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*& __cordl_internal_get_pending() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr int64_t const& __cordl_internal_get_totalOut() const;

constexpr int64_t& __cordl_internal_get_totalOut() ;

constexpr void __cordl_internal_set_engine(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*  value) ;

constexpr void __cordl_internal_set_level(int32_t  value) ;

constexpr void __cordl_internal_set_noZlibHeaderOrFooter(bool  value) ;

constexpr void __cordl_internal_set_pending(::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

constexpr void __cordl_internal_set_totalOut(int64_t  value) ;

/// @brief Method .ctor, addr 0x9fd1c7c, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9fd1c88, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  level) ;

/// @brief Method .ctor, addr 0x9fce50c, size 0x154, virtual false, abstract: false, final false
inline void _ctor(int32_t  level, bool  noZlibHeaderOrFooter) ;

/// @brief Method get_Adler, addr 0x9fd1ec4, size 0x28, virtual false, abstract: false, final false
inline int32_t get_Adler() ;

/// @brief Method get_IsFinished, addr 0x9fd1f48, size 0x34, virtual false, abstract: false, final false
inline bool get_IsFinished() ;

/// @brief Method get_IsNeedingInput, addr 0x9fd1f8c, size 0x20, virtual false, abstract: false, final false
inline bool get_IsNeedingInput() ;

/// @brief Method get_TotalIn, addr 0x9fd1f08, size 0x18, virtual false, abstract: false, final false
inline int64_t get_TotalIn() ;

/// @brief Method get_TotalOut, addr 0x9fd1f20, size 0x8, virtual false, abstract: false, final false
inline int64_t get_TotalOut() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Deflater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Deflater", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Deflater(Deflater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Deflater", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Deflater(Deflater const& ) = delete;

/// @brief Field BEST_COMPRESSION offset 0xffffffff size 0x4
static constexpr int32_t  BEST_COMPRESSION{static_cast<int32_t>(0x9)};

/// @brief Field BEST_SPEED offset 0xffffffff size 0x4
static constexpr int32_t  BEST_SPEED{static_cast<int32_t>(0x1)};

/// @brief Field BUSY_STATE offset 0xffffffff size 0x4
static constexpr int32_t  BUSY_STATE{static_cast<int32_t>(0x10)};

/// @brief Field CLOSED_STATE offset 0xffffffff size 0x4
static constexpr int32_t  CLOSED_STATE{static_cast<int32_t>(0x7f)};

/// @brief Field DEFAULT_COMPRESSION offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_COMPRESSION{static_cast<int32_t>(0xffffffff)};

/// @brief Field DEFLATED offset 0xffffffff size 0x4
static constexpr int32_t  DEFLATED{static_cast<int32_t>(0x8)};

/// @brief Field FINISHED_STATE offset 0xffffffff size 0x4
static constexpr int32_t  FINISHED_STATE{static_cast<int32_t>(0x1e)};

/// @brief Field FINISHING_STATE offset 0xffffffff size 0x4
static constexpr int32_t  FINISHING_STATE{static_cast<int32_t>(0x1c)};

/// @brief Field FLUSHING_STATE offset 0xffffffff size 0x4
static constexpr int32_t  FLUSHING_STATE{static_cast<int32_t>(0x14)};

/// @brief Field INIT_STATE offset 0xffffffff size 0x4
static constexpr int32_t  INIT_STATE{static_cast<int32_t>(0x0)};

/// @brief Field IS_FINISHING offset 0xffffffff size 0x4
static constexpr int32_t  IS_FINISHING{static_cast<int32_t>(0x8)};

/// @brief Field IS_FLUSHING offset 0xffffffff size 0x4
static constexpr int32_t  IS_FLUSHING{static_cast<int32_t>(0x4)};

/// @brief Field IS_SETDICT offset 0xffffffff size 0x4
static constexpr int32_t  IS_SETDICT{static_cast<int32_t>(0x1)};

/// @brief Field NO_COMPRESSION offset 0xffffffff size 0x4
static constexpr int32_t  NO_COMPRESSION{static_cast<int32_t>(0x0)};

/// @brief Field SETDICT_STATE offset 0xffffffff size 0x4
static constexpr int32_t  SETDICT_STATE{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17371};

/// @brief Field level, offset: 0x10, size: 0x4, def value: None
 int32_t  ___level;

/// @brief Field noZlibHeaderOrFooter, offset: 0x14, size: 0x1, def value: None
 bool  ___noZlibHeaderOrFooter;

/// @brief Field state, offset: 0x18, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field totalOut, offset: 0x20, size: 0x8, def value: None
 int64_t  ___totalOut;

/// @brief Field pending, offset: 0x28, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterPending*  ___pending;

/// @brief Field engine, offset: 0x30, size: 0x8, def value: None
 ::ICSharpCode::SharpZipLib::Zip::Compression::DeflaterEngine*  ___engine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater, ___level) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater, ___noZlibHeaderOrFooter) == 0x14, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater, ___state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater, ___totalOut) == 0x20, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater, ___pending) == 0x28, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater, ___engine) == 0x30, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::Deflater) == 0x38, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression
