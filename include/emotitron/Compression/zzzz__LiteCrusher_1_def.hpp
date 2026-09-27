#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteCrusher_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
#include "emotitron/Compression/zzzz__LiteCrusher_def.hpp"
CORDL_MODULE_EXPORT(LiteCrusher_1)
// Forward declare root types
namespace emotitron::Compression {
template<typename T>
class LiteCrusher_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::emotitron::Compression::LiteCrusher_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::emotitron::Compression::LiteCrusher_1, "emotitron.Compression", "LiteCrusher`1");
// Dependencies emotitron.Compression.LiteCrusher
namespace emotitron::Compression {
// cpp template
template<typename T>
// Is value type: false
// CS Name: emotitron.Compression.LiteCrusher`1<T>
class CORDL_TYPE LiteCrusher_1 : public ::emotitron::Compression::LiteCrusher {
public:
// Declarations
/// @brief Method Decode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T Decode(uint32_t  val) ;

/// @brief Method Encode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline uint64_t Encode(T  val) ;

static inline ::emotitron::Compression::LiteCrusher_1<T>* New_ctor() ;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline T ReadValue(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method WriteCValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void WriteCValue(uint32_t  val, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method WriteValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline uint64_t WriteValue(T  val, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LiteCrusher_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LiteCrusher_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LiteCrusher_1(LiteCrusher_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LiteCrusher_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LiteCrusher_1(LiteCrusher_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5096};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def emotitron::Compression
