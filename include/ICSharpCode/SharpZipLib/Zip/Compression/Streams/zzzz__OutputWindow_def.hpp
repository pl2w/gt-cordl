#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Zip/Compression/Streams/OutputWindow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OutputWindow)
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class StreamManipulator;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
class OutputWindow;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow*, "ICSharpCode.SharpZipLib.Zip.Compression.Streams", "OutputWindow");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
class CORDL_TYPE OutputWindow : public ::System::Object {
public:
// Declarations
/// @brief Field window, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_window, put=__cordl_internal_set_window)) ::ArrayW<uint8_t>  window;

/// @brief Field windowEnd, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_windowEnd, put=__cordl_internal_set_windowEnd)) int32_t  windowEnd;

/// @brief Field windowFilled, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_windowFilled, put=__cordl_internal_set_windowFilled)) int32_t  windowFilled;

/// @brief Method CopyDict, addr 0x9fd7c00, size 0xcc, virtual false, abstract: false, final false
inline void CopyDict(::ArrayW<uint8_t>  dictionary, int32_t  offset, int32_t  length) ;

/// @brief Method CopyOutput, addr 0x9fd8180, size 0xe8, virtual false, abstract: false, final false
inline int32_t CopyOutput(::ArrayW<uint8_t>  output, int32_t  offset, int32_t  len) ;

/// @brief Method CopyStored, addr 0x9fd76dc, size 0xfc, virtual false, abstract: false, final false
inline int32_t CopyStored(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::StreamManipulator*  input, int32_t  length) ;

/// @brief Method GetAvailable, addr 0x9fda70c, size 0x8, virtual false, abstract: false, final false
inline int32_t GetAvailable() ;

/// @brief Method GetFreeSpace, addr 0x9fd6b6c, size 0x10, virtual false, abstract: false, final false
inline int32_t GetFreeSpace() ;

static inline ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow* New_ctor() ;

/// @brief Method Repeat, addr 0x9fd6dd4, size 0x134, virtual false, abstract: false, final false
inline void Repeat(int32_t  length, int32_t  distance) ;

/// @brief Method Reset, addr 0x9fd64d8, size 0x8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SlowRepeat, addr 0x9fda50c, size 0x74, virtual false, abstract: false, final false
inline void SlowRepeat(int32_t  repStart, int32_t  length, int32_t  distance) ;

/// @brief Method Write, addr 0x9fd6b7c, size 0xa4, virtual false, abstract: false, final false
inline void Write(int32_t  value) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_window() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_window() ;

constexpr int32_t const& __cordl_internal_get_windowEnd() const;

constexpr int32_t& __cordl_internal_get_windowEnd() ;

constexpr int32_t const& __cordl_internal_get_windowFilled() const;

constexpr int32_t& __cordl_internal_get_windowFilled() ;

constexpr void __cordl_internal_set_window(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_windowEnd(int32_t  value) ;

constexpr void __cordl_internal_set_windowFilled(int32_t  value) ;

/// @brief Method .ctor, addr 0x9fd646c, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OutputWindow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OutputWindow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OutputWindow(OutputWindow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutputWindow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutputWindow(OutputWindow const& ) = delete;

/// @brief Field WindowMask offset 0xffffffff size 0x4
static constexpr int32_t  WindowMask{static_cast<int32_t>(0x7fff)};

/// @brief Field WindowSize offset 0xffffffff size 0x4
static constexpr int32_t  WindowSize{static_cast<int32_t>(0x8000)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17386};

/// @brief Field window, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___window;

/// @brief Field windowEnd, offset: 0x18, size: 0x4, def value: None
 int32_t  ___windowEnd;

/// @brief Field windowFilled, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___windowFilled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow, ___window) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow, ___windowEnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow, ___windowFilled) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::ICSharpCode::SharpZipLib::Zip::Compression::Streams::OutputWindow) == 0x20, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Zip::Compression::Streams
