#pragma once
// IWYU pragma private; include "Fusion/Primes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Primes)
// Forward declare root types
namespace Fusion {
class Primes;
}
// Write type traits
MARK_REF_T(::Fusion::Primes*);
DEFINE_IL2CPP_CLASS(::Fusion::Primes*, "Fusion", "Primes");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Primes
class CORDL_TYPE Primes : public ::System::Object {
public:
// Declarations
/// @brief Field _primeTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__primeTable, put=setStaticF__primeTable)) ::ArrayW<int32_t>  _primeTable;

/// @brief Method GetNextPrime, addr 0x5f3f938, size 0x1c0, virtual false, abstract: false, final false
static inline int32_t GetNextPrime(int32_t  value) ;

/// @brief Method IsPrime, addr 0x5f3f870, size 0xc8, virtual false, abstract: false, final false
static inline bool IsPrime(int32_t  value) ;

static inline ::ArrayW<int32_t> getStaticF__primeTable() ;

static inline void setStaticF__primeTable(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Primes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Primes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Primes(Primes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Primes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Primes(Primes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31307};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Primes) == 0x10, "Size mismatch!");

} // namespace end def Fusion
