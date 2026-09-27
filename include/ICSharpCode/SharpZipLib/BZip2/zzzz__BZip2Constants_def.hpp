#pragma once
// IWYU pragma private; include "ICSharpCode/SharpZipLib/BZip2/BZip2Constants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BZip2Constants)
// Forward declare root types
namespace ICSharpCode::SharpZipLib::BZip2 {
class BZip2Constants;
}
// Write type traits
MARK_REF_T(::ICSharpCode::SharpZipLib::BZip2::BZip2Constants*);
DEFINE_IL2CPP_CLASS(::ICSharpCode::SharpZipLib::BZip2::BZip2Constants*, "ICSharpCode.SharpZipLib.BZip2", "BZip2Constants");
// Dependencies System.Object
namespace ICSharpCode::SharpZipLib::BZip2 {
// Is value type: false
// CS Name: ICSharpCode.SharpZipLib.BZip2.BZip2Constants
class CORDL_TYPE BZip2Constants : public ::System::Object {
public:
// Declarations
/// @brief Field RandomNumbers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RandomNumbers, put=setStaticF_RandomNumbers)) ::ArrayW<int32_t>  RandomNumbers;

static inline ::ArrayW<int32_t> getStaticF_RandomNumbers() ;

static inline void setStaticF_RandomNumbers(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BZip2Constants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BZip2Constants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BZip2Constants(BZip2Constants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BZip2Constants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BZip2Constants(BZip2Constants const& ) = delete;

/// @brief Field BaseBlockSize offset 0xffffffff size 0x4
static constexpr int32_t  BaseBlockSize{static_cast<int32_t>(0x186a0)};

/// @brief Field GroupCount offset 0xffffffff size 0x4
static constexpr int32_t  GroupCount{static_cast<int32_t>(0x6)};

/// @brief Field GroupSize offset 0xffffffff size 0x4
static constexpr int32_t  GroupSize{static_cast<int32_t>(0x32)};

/// @brief Field MaximumAlphaSize offset 0xffffffff size 0x4
static constexpr int32_t  MaximumAlphaSize{static_cast<int32_t>(0x102)};

/// @brief Field MaximumCodeLength offset 0xffffffff size 0x4
static constexpr int32_t  MaximumCodeLength{static_cast<int32_t>(0x17)};

/// @brief Field MaximumSelectors offset 0xffffffff size 0x4
static constexpr int32_t  MaximumSelectors{static_cast<int32_t>(0x4652)};

/// @brief Field NumberOfIterations offset 0xffffffff size 0x4
static constexpr int32_t  NumberOfIterations{static_cast<int32_t>(0x4)};

/// @brief Field OvershootBytes offset 0xffffffff size 0x4
static constexpr int32_t  OvershootBytes{static_cast<int32_t>(0x14)};

/// @brief Field RunA offset 0xffffffff size 0x4
static constexpr int32_t  RunA{static_cast<int32_t>(0x0)};

/// @brief Field RunB offset 0xffffffff size 0x4
static constexpr int32_t  RunB{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17444};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ICSharpCode::SharpZipLib::BZip2::BZip2Constants) == 0x10, "Size mismatch!");

} // namespace end def ICSharpCode::SharpZipLib::BZip2
