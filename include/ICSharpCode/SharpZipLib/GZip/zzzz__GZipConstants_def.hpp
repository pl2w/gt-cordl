#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/GZip/GZipConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GZipConstants)
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::GZip {
class GZipConstants;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::GZip::GZipConstants*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::GZip::GZipConstants*, "ICSharpCode.SharpZipLib.GZip", "GZipConstants");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::GZip {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.GZip.GZipConstants
class CORDL_TYPE GZipConstants : public ::System::Object {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::GZip::GZipConstants* New_ctor() ;

/// @brief Method .ctor, addr 0x9ff6538, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Encoding, addr 0x9ff64a8, size 0x90, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* get_Encoding() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GZipConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GZipConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GZipConstants(GZipConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GZipConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GZipConstants(GZipConstants const& ) = delete;

/// @brief Field CompressionMethodDeflate offset 0xffffffff size 0x1
static constexpr uint8_t  CompressionMethodDeflate{static_cast<uint8_t>(0x8u)};

/// @brief Field ID1 offset 0xffffffff size 0x1
static constexpr uint8_t  ID1{static_cast<uint8_t>(0x1fu)};

/// @brief Field ID2 offset 0xffffffff size 0x1
static constexpr uint8_t  ID2{static_cast<uint8_t>(0x8bu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17404};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::GZip::GZipConstants) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::GZip
