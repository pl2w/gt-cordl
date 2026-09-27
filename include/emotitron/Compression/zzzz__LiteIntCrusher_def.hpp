#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteIntCrusher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
#include "emotitron/Compression/zzzz__LiteCrusher_1_def.hpp"
#include "emotitron/Compression/zzzz__LiteIntCompressType_def.hpp"
CORDL_MODULE_EXPORT(LiteIntCrusher)
namespace emotitron::Compression {
struct LiteIntCompressType;
}
// Forward declare root types
namespace emotitron::Compression {
class LiteIntCrusher;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::LiteIntCrusher*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::LiteIntCrusher*, "emotitron.Compression", "LiteIntCrusher");
// Dependencies emotitron.Compression.LiteCrusher`1<T>, emotitron.Compression.LiteIntCompressType
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.LiteIntCrusher
class CORDL_TYPE LiteIntCrusher : public ::emotitron::Compression::LiteCrusher_1<int32_t> {
public:
// Declarations
/// @brief Field biggest, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_biggest, put=__cordl_internal_set_biggest)) int32_t  biggest;

/// @brief Field compressType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_compressType, put=__cordl_internal_set_compressType)) ::emotitron::Compression::LiteIntCompressType  compressType;

/// @brief Field max, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) int32_t  max;

/// @brief Field min, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) int32_t  min;

/// @brief Field smallest, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_smallest, put=__cordl_internal_set_smallest)) int32_t  smallest;

/// @brief Method Decode, addr 0x5dd890c, size 0xc, virtual true, abstract: false, final false
inline int32_t Decode(uint32_t  cvalue) ;

/// @brief Method Encode, addr 0x5dd88ec, size 0x20, virtual true, abstract: false, final false
inline uint64_t Encode(int32_t  value) ;

static inline ::emotitron::Compression::LiteIntCrusher* New_ctor() ;

static inline ::emotitron::Compression::LiteIntCrusher* New_ctor(::emotitron::Compression::LiteIntCompressType  comType, int32_t  min, int32_t  max) ;

/// @brief Method ReadValue, addr 0x5dd8860, size 0x8c, virtual true, abstract: false, final false
inline int32_t ReadValue(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method Recalculate, addr 0x5dd86a4, size 0x3c, virtual false, abstract: false, final false
static inline void Recalculate(int32_t  min, int32_t  max, ::by_ref<int32_t>  smallest, ::by_ref<int32_t>  biggest, ::by_ref<int32_t>  bits) ;

/// @brief Method ToString, addr 0x5dd8918, size 0x254, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteCValue, addr 0x5dd8818, size 0x48, virtual true, abstract: false, final false
inline void WriteCValue(uint32_t  cval, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method WriteValue, addr 0x5dd8788, size 0x90, virtual true, abstract: false, final false
inline uint64_t WriteValue(int32_t  val, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

constexpr int32_t const& __cordl_internal_get_biggest() const;

constexpr int32_t& __cordl_internal_get_biggest() ;

constexpr ::emotitron::Compression::LiteIntCompressType const& __cordl_internal_get_compressType() const;

constexpr ::emotitron::Compression::LiteIntCompressType& __cordl_internal_get_compressType() ;

constexpr int32_t const& __cordl_internal_get_max() const;

constexpr int32_t& __cordl_internal_get_max() ;

constexpr int32_t const& __cordl_internal_get_min() const;

constexpr int32_t& __cordl_internal_get_min() ;

constexpr int32_t const& __cordl_internal_get_smallest() const;

constexpr int32_t& __cordl_internal_get_smallest() ;

constexpr void __cordl_internal_set_biggest(int32_t  value) ;

constexpr void __cordl_internal_set_compressType(::emotitron::Compression::LiteIntCompressType  value) ;

constexpr void __cordl_internal_set_max(int32_t  value) ;

constexpr void __cordl_internal_set_min(int32_t  value) ;

constexpr void __cordl_internal_set_smallest(int32_t  value) ;

/// @brief Method .ctor, addr 0x5dd8644, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5dd86e0, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(::emotitron::Compression::LiteIntCompressType  comType, int32_t  min, int32_t  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LiteIntCrusher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LiteIntCrusher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LiteIntCrusher(LiteIntCrusher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LiteIntCrusher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LiteIntCrusher(LiteIntCrusher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5100};

/// [SerializeField]
/// @brief Field compressType, offset: 0x14, size: 0x4, def value: None
 ::emotitron::Compression::LiteIntCompressType  ___compressType;

/// [SerializeField]
/// @brief Field min, offset: 0x18, size: 0x4, def value: None
 int32_t  ___min;

/// [SerializeField]
/// @brief Field max, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___max;

/// [SerializeField]
/// @brief Field smallest, offset: 0x20, size: 0x4, def value: None
 int32_t  ___smallest;

/// [SerializeField]
/// @brief Field biggest, offset: 0x24, size: 0x4, def value: None
 int32_t  ___biggest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::emotitron::Compression::LiteIntCrusher, ___compressType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteIntCrusher, ___min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteIntCrusher, ___max) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteIntCrusher, ___smallest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteIntCrusher, ___biggest) == 0x24, "Offset mismatch!");

static_assert(sizeof(::emotitron::Compression::LiteIntCrusher) == 0x28, "Size mismatch!");

} // namespace end def emotitron::Compression
