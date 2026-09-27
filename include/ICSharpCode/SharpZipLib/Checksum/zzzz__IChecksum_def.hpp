#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/Checksum/IChecksum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IChecksum)
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace ICSharpCode::SharpZipLib::Checksum {
class IChecksum;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::Checksum::IChecksum*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::Checksum::IChecksum*, "ICSharpCode.SharpZipLib.Checksum", "IChecksum");
// Dependencies 
namespace ICSharpCode::SharpZipLib::Checksum {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.Checksum.IChecksum
class CORDL_TYPE IChecksum {
public:
// Declarations
 __declspec(property(get=get_Value)) int64_t  Value;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Reset() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(::ArrayW<uint8_t>  buffer) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(int32_t  bval) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Update(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int64_t get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "IChecksum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IChecksum(IChecksum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17442};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ICSharpCode::SharpZipLib::Checksum
