#pragma once
// IWYU pragma private; include "UnityEngine/SpookyHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpookyHash)
namespace GlobalNamespace {
struct SpookyHash_U;
}
// Forward declare root types
namespace UnityEngine {
class SpookyHash;
}
// Write type traits
MARK_REF_T(::UnityEngine::SpookyHash*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SpookyHash*, "UnityEngine", "SpookyHash");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SpookyHash
class CORDL_TYPE SpookyHash : public ::System::Object {
public:
// Declarations
using U = ::GlobalNamespace::SpookyHash_U;

/// @brief Method End, addr 0xb5c4ce8, size 0x1b8, virtual false, abstract: false, final false
static inline void End(uint64_t*  data, ::by_ref<uint64_t>  h0, ::by_ref<uint64_t>  h1, ::by_ref<uint64_t>  h2, ::by_ref<uint64_t>  h3, ::by_ref<uint64_t>  h4, ::by_ref<uint64_t>  h5, ::by_ref<uint64_t>  h6, ::by_ref<uint64_t>  h7, ::by_ref<uint64_t>  h8, ::by_ref<uint64_t>  h9, ::by_ref<uint64_t>  h10, ::by_ref<uint64_t>  h11) ;

/// @brief Method EndPartial, addr 0xb5c4ea0, size 0x1f4, virtual false, abstract: false, final false
static inline void EndPartial(::by_ref<uint64_t>  h0, ::by_ref<uint64_t>  h1, ::by_ref<uint64_t>  h2, ::by_ref<uint64_t>  h3, ::by_ref<uint64_t>  h4, ::by_ref<uint64_t>  h5, ::by_ref<uint64_t>  h6, ::by_ref<uint64_t>  h7, ::by_ref<uint64_t>  h8, ::by_ref<uint64_t>  h9, ::by_ref<uint64_t>  h10, ::by_ref<uint64_t>  h11) ;

/// @brief Method Hash, addr 0xb5c43e0, size 0x2a4, virtual false, abstract: false, final false
static inline void Hash(void*  message, uint64_t  length, uint64_t*  hash1, uint64_t*  hash2) ;

/// @brief Method Mix, addr 0xb5c4940, size 0x3a8, virtual false, abstract: false, final false
static inline void Mix(uint64_t*  data, ::by_ref<uint64_t>  s0, ::by_ref<uint64_t>  s1, ::by_ref<uint64_t>  s2, ::by_ref<uint64_t>  s3, ::by_ref<uint64_t>  s4, ::by_ref<uint64_t>  s5, ::by_ref<uint64_t>  s6, ::by_ref<uint64_t>  s7, ::by_ref<uint64_t>  s8, ::by_ref<uint64_t>  s9, ::by_ref<uint64_t>  s10, ::by_ref<uint64_t>  s11) ;

/// @brief Method Rot64, addr 0xb5c5094, size 0x14, virtual false, abstract: false, final false
static inline void Rot64(::by_ref<uint64_t>  x, int32_t  k) ;

/// @brief Method Short, addr 0xb5c4684, size 0x2b4, virtual false, abstract: false, final false
static inline void Short(void*  message, uint64_t  length, uint64_t*  hash1, uint64_t*  hash2) ;

/// @brief Method ShortEnd, addr 0xb5c525c, size 0x194, virtual false, abstract: false, final false
static inline void ShortEnd(::by_ref<uint64_t>  h0, ::by_ref<uint64_t>  h1, ::by_ref<uint64_t>  h2, ::by_ref<uint64_t>  h3) ;

/// @brief Method ShortMix, addr 0xb5c50a8, size 0x1b4, virtual false, abstract: false, final false
static inline void ShortMix(::by_ref<uint64_t>  h0, ::by_ref<uint64_t>  h1, ::by_ref<uint64_t>  h2, ::by_ref<uint64_t>  h3) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpookyHash() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpookyHash", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpookyHash(SpookyHash && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpookyHash", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpookyHash(SpookyHash const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14965};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::SpookyHash) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
