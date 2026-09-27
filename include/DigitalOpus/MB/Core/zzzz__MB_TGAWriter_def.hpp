#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TGAWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB_TGAWriter)
namespace System::IO {
class Stream;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MB_TGAWriter;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MB_TGAWriter*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TGAWriter*, "DigitalOpus.MB.Core", "MB_TGAWriter");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MB_TGAWriter
class CORDL_TYPE MB_TGAWriter : public ::System::Object {
public:
// Declarations
/// @brief Method Write, addr 0x9dbe780, size 0x360, virtual false, abstract: false, final false
static inline void Write(::ArrayW<::UnityEngine::Color>  pixels, int32_t  width, int32_t  height, ::System::IO::Stream*  output) ;

/// @brief Method Write, addr 0x9dbe71c, size 0x64, virtual false, abstract: false, final false
static inline void Write(::ArrayW<::UnityEngine::Color>  pixels, int32_t  width, int32_t  height, ::StringW  path) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_TGAWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_TGAWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_TGAWriter(MB_TGAWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_TGAWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_TGAWriter(MB_TGAWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22746};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::DigitalOpus::MB::Core::MB_TGAWriter) == 0x10, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
