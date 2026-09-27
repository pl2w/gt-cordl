#pragma once
// IWYU pragma private; include "Fusion/HashCodeUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashCodeUtilities)
// Forward declare root types
namespace Fusion {
class HashCodeUtilities;
}
// Write type traits
MARK_REF_T(::Fusion::HashCodeUtilities*);
DEFINE_IL2CPP_CLASS(::Fusion::HashCodeUtilities*, "Fusion", "HashCodeUtilities");
// [Extension]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.HashCodeUtilities
class CORDL_TYPE HashCodeUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method CombineHashCodes, addr 0x5f9e464, size 0xc, virtual false, abstract: false, final false
static inline int32_t CombineHashCodes(int32_t  a, int32_t  b) ;

/// @brief Method CombineHashCodes, addr 0x5f9e470, size 0x14, virtual false, abstract: false, final false
static inline int32_t CombineHashCodes(int32_t  a, int32_t  b, int32_t  c) ;

/// @brief Method GetArrayHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t GetArrayHashCode(T*  ptr, int32_t  length, int32_t  initialHash) ;

/// @brief Method GetHashCodeDeterministic, addr 0x5f9e484, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetHashCodeDeterministic(::ArrayW<uint8_t>  data, int32_t  initialHash) ;

/// @brief Method GetHashCodeDeterministic, addr 0x5f9e4d4, size 0x64, virtual false, abstract: false, final false
static inline int32_t GetHashCodeDeterministic(::StringW  data, int32_t  initialHash) ;

/// @brief Method GetHashCodeDeterministic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t GetHashCodeDeterministic(T  data, int32_t  initialHash) ;

/// @brief Method GetHashCodeDeterministic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline int32_t GetHashCodeDeterministic(T*  data, int32_t  initialHash) ;

/// [Extension]
/// @brief Method GetHashDeterministic, addr 0x5f9e3a4, size 0x18, virtual false, abstract: false, final false
static inline int32_t GetHashDeterministic(::StringW  str, int32_t  initialHash) ;

/// [Extension]
/// @brief Method GetHashDeterministicInternal, addr 0x5f9e3bc, size 0xa8, virtual false, abstract: false, final false
static inline int32_t GetHashDeterministicInternal(::StringW  str, int32_t  len, int32_t  initialHash) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HashCodeUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HashCodeUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HashCodeUtilities(HashCodeUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HashCodeUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HashCodeUtilities(HashCodeUtilities const& ) = delete;

/// @brief Field InitialHash offset 0xffffffff size 0x4
static constexpr int32_t  InitialHash{static_cast<int32_t>(0x15051505)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19043};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::HashCodeUtilities) == 0x10, "Size mismatch!");

} // namespace end def Fusion
