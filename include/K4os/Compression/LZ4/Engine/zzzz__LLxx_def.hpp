#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LLxx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LLxx)
namespace System {
class NotImplementedException;
}
// Forward declare root types
namespace K4os::Compression::LZ4::Engine {
class LLxx;
}
// Write type traits
MARK_REF_T(::K4os::Compression::LZ4::Engine::LLxx*);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::Engine::LLxx*, "K4os.Compression.LZ4.Engine", "LLxx");
// Dependencies System.Object
namespace K4os::Compression::LZ4::Engine {
// Is value type: false
// CS Name: K4os.Compression.LZ4.Engine.LLxx
class CORDL_TYPE LLxx : public ::System::Object {
public:
// Declarations
/// @brief Method AlgorithmNotImplemented, addr 0x9cbc7e4, size 0x180, virtual false, abstract: false, final false
static inline ::System::NotImplementedException* AlgorithmNotImplemented(::StringW  action) ;

/// @brief Method LZ4_compress_HC, addr 0x9cb8f58, size 0x188, virtual false, abstract: false, final false
static inline int32_t LZ4_compress_HC(uint8_t*  source, uint8_t*  target, int32_t  sourceLength, int32_t  targetLength, int32_t  level) ;

/// @brief Method LZ4_compress_fast, addr 0x9cb90e0, size 0x188, virtual false, abstract: false, final false
static inline int32_t LZ4_compress_fast(uint8_t*  source, uint8_t*  target, int32_t  sourceLength, int32_t  targetLength, int32_t  acceleration) ;

/// @brief Method LZ4_decompress_safe, addr 0x9cb936c, size 0x17c, virtual false, abstract: false, final false
static inline int32_t LZ4_decompress_safe(uint8_t*  source, uint8_t*  target, int32_t  sourceLength, int32_t  targetLength) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LLxx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LLxx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LLxx(LLxx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LLxx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LLxx(LLxx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31597};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::K4os::Compression::LZ4::Engine::LLxx) == 0x10, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4::Engine
