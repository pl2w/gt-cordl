#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Lzw/LzwConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LzwConstants)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Lzw {
class LzwConstants;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Lzw::LzwConstants*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Lzw::LzwConstants*, "ICSharpCode.SharpZipLib.Lzw", "LzwConstants");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::Lzw {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Lzw.LzwConstants
class CORDL_TYPE LzwConstants : public ::System::Object {
public:
// Declarations
static inline ::ICSharpCode::SharpZipLib::Lzw::LzwConstants* New_ctor() ;

/// @brief Method .ctor, addr 0x9ff4bc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LzwConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LzwConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LzwConstants(LzwConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LzwConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LzwConstants(LzwConstants const& ) = delete;

/// @brief Field BIT_MASK offset 0xffffffff size 0x4
static constexpr int32_t  BIT_MASK{static_cast<int32_t>(0x1f)};

/// @brief Field BLOCK_MODE_MASK offset 0xffffffff size 0x4
static constexpr int32_t  BLOCK_MODE_MASK{static_cast<int32_t>(0x80)};

/// @brief Field EXTENDED_MASK offset 0xffffffff size 0x4
static constexpr int32_t  EXTENDED_MASK{static_cast<int32_t>(0x20)};

/// @brief Field HDR_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  HDR_SIZE{static_cast<int32_t>(0x3)};

/// @brief Field INIT_BITS offset 0xffffffff size 0x4
static constexpr int32_t  INIT_BITS{static_cast<int32_t>(0x9)};

/// @brief Field MAGIC offset 0xffffffff size 0x4
static constexpr int32_t  MAGIC{static_cast<int32_t>(0x1f9d)};

/// @brief Field MAX_BITS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_BITS{static_cast<int32_t>(0x10)};

/// @brief Field RESERVED_MASK offset 0xffffffff size 0x4
static constexpr int32_t  RESERVED_MASK{static_cast<int32_t>(0x60)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17400};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::Lzw::LzwConstants) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::Lzw
