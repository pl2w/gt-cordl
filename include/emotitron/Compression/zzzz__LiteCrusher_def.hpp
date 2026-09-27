#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteCrusher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LiteCrusher)
// Forward declare root types
namespace emotitron::Compression {
class LiteCrusher;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::LiteCrusher*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::LiteCrusher*, "emotitron.Compression", "LiteCrusher");
// Dependencies System.Object
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.LiteCrusher
class CORDL_TYPE LiteCrusher : public ::System::Object {
public:
// Declarations
/// @brief Field bits, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_bits, put=__cordl_internal_set_bits)) int32_t  bits;

/// @brief Method GetBitsForMaxValue, addr 0x5dd7e38, size 0x20, virtual false, abstract: false, final false
static inline int32_t GetBitsForMaxValue(uint32_t  maxvalue) ;

static inline ::emotitron::Compression::LiteCrusher* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_bits() const;

constexpr int32_t& __cordl_internal_get_bits() ;

constexpr void __cordl_internal_set_bits(int32_t  value) ;

/// @brief Method .ctor, addr 0x5dd7e58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LiteCrusher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LiteCrusher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LiteCrusher(LiteCrusher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LiteCrusher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LiteCrusher(LiteCrusher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5095};

/// [SerializeField]
/// @brief Field bits, offset: 0x10, size: 0x4, def value: None
 int32_t  ___bits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::emotitron::Compression::LiteCrusher, ___bits) == 0x10, "Offset mismatch!");

static_assert(sizeof(::emotitron::Compression::LiteCrusher) == 0x18, "Size mismatch!");

} // namespace end def emotitron::Compression
