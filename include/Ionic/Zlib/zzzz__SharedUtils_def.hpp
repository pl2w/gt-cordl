#pragma once
// IWYU pragma private; include "Ionic/Zlib/SharedUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedUtils)
namespace System::IO {
class TextReader;
}
// Forward declare root types
namespace Ionic::Zlib {
class SharedUtils;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::SharedUtils*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::SharedUtils*, "Ionic.Zlib", "SharedUtils");
// Dependencies System.Object
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.SharedUtils
class CORDL_TYPE SharedUtils : public ::System::Object {
public:
// Declarations
static inline ::Ionic::Zlib::SharedUtils* New_ctor() ;

/// @brief Method ReadInput, addr 0xa79af84, size 0xfc, virtual false, abstract: false, final false
static inline int32_t ReadInput(::System::IO::TextReader*  sourceTextReader, ::ArrayW<uint8_t>  target, int32_t  start, int32_t  count) ;

/// @brief Method ToByteArray, addr 0xa79b080, size 0x30, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ToByteArray(::StringW  sourceString) ;

/// @brief Method ToCharArray, addr 0xa79b0b0, size 0x30, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t> ToCharArray(::ArrayW<uint8_t>  byteArray) ;

/// @brief Method URShift, addr 0xa79af7c, size 0x8, virtual false, abstract: false, final false
static inline int32_t URShift(int32_t  number, int32_t  bits) ;

/// @brief Method .ctor, addr 0xa79b0e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedUtils(SharedUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedUtils(SharedUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Ionic::Zlib::SharedUtils) == 0x10, "Size mismatch!");

} // namespace end def Ionic::Zlib
