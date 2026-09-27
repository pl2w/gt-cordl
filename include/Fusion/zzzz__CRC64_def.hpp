#pragma once
// IWYU pragma private; include "Fusion/CRC64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CRC64)
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace Fusion {
class CRC64;
}
// Write type traits
MARK_REF_T(::Fusion::CRC64*);
DEFINE_IL2CPP_CLASS(::Fusion::CRC64*, "Fusion", "CRC64");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.CRC64
class CORDL_TYPE CRC64 : public ::System::Object {
public:
// Declarations
/// @brief Field _tab, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__tab, put=setStaticF__tab)) ::ArrayW<uint64_t>  _tab;

/// @brief Method Compute, addr 0x5f3ca0c, size 0xc8, virtual false, abstract: false, final false
static inline uint64_t Compute(uint64_t  crc, uint8_t*  data, int32_t  offset, int32_t  length) ;

/// @brief Method Compute, addr 0x5f3cad4, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t Compute(::System::ReadOnlySpan_1<int32_t>  data) ;

/// @brief Method Compute, addr 0x5f3c9a0, size 0x6c, virtual false, abstract: false, final false
static inline uint64_t Compute(uint8_t*  data, int32_t  length) ;

static inline ::ArrayW<uint64_t> getStaticF__tab() ;

static inline void setStaticF__tab(::ArrayW<uint64_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CRC64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CRC64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CRC64(CRC64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CRC64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CRC64(CRC64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31262};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::CRC64) == 0x10, "Size mismatch!");

} // namespace end def Fusion
