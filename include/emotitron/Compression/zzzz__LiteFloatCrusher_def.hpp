#pragma once
// IWYU pragma private; include "emotitron/Compression/LiteFloatCrusher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
#include "emotitron/Compression/zzzz__LiteCrusher_1_def.hpp"
#include "emotitron/Compression/zzzz__LiteFloatCompressType_def.hpp"
CORDL_MODULE_EXPORT(LiteFloatCrusher)
namespace emotitron::Compression {
struct LiteFloatCompressType;
}
// Forward declare root types
namespace emotitron::Compression {
class LiteFloatCrusher;
}
// Write type traits
MARK_REF_T(::emotitron::Compression::LiteFloatCrusher*);
DEFINE_IL2CPP_CLASS(::emotitron::Compression::LiteFloatCrusher*, "emotitron.Compression", "LiteFloatCrusher");
// Dependencies emotitron.Compression.LiteCrusher`1<T>, emotitron.Compression.LiteFloatCompressType
namespace emotitron::Compression {
// Is value type: false
// CS Name: emotitron.Compression.LiteFloatCrusher
class CORDL_TYPE LiteFloatCrusher : public ::emotitron::Compression::LiteCrusher_1<float_t> {
public:
// Declarations
/// @brief Field accurateCenter, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_accurateCenter, put=__cordl_internal_set_accurateCenter)) bool  accurateCenter;

/// @brief Field compressType, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_compressType, put=__cordl_internal_set_compressType)) ::emotitron::Compression::LiteFloatCompressType  compressType;

/// @brief Field decoder, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_decoder, put=__cordl_internal_set_decoder)) float_t  decoder;

/// @brief Field encoder, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_encoder, put=__cordl_internal_set_encoder)) float_t  encoder;

/// @brief Field max, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) float_t  max;

/// @brief Field maxCVal, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxCVal, put=__cordl_internal_set_maxCVal)) uint64_t  maxCVal;

/// @brief Field min, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_min, put=__cordl_internal_set_min)) float_t  min;

/// @brief Method Decode, addr 0x5dd8100, size 0xb4, virtual true, abstract: false, final false
inline float_t Decode(uint32_t  cval) ;

/// @brief Method Encode, addr 0x5dd8040, size 0xc0, virtual true, abstract: false, final false
inline uint64_t Encode(float_t  val) ;

static inline ::emotitron::Compression::LiteFloatCrusher* New_ctor() ;

static inline ::emotitron::Compression::LiteFloatCrusher* New_ctor(::emotitron::Compression::LiteFloatCompressType  compressType, float_t  min, float_t  max, bool  accurateCenter) ;

/// @brief Method ReadValue, addr 0x5dd82b8, size 0xd8, virtual true, abstract: false, final false
inline float_t ReadValue(::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method Recalculate, addr 0x5dd7ef0, size 0x64, virtual false, abstract: false, final false
static inline void Recalculate(::emotitron::Compression::LiteFloatCompressType  compressType, float_t  min, float_t  max, bool  accurateCenter, ::by_ref<int32_t>  bits, ::by_ref<float_t>  encoder, ::by_ref<float_t>  decoder, ::by_ref<uint64_t>  maxCVal) ;

/// @brief Method ToString, addr 0x5dd8390, size 0x2b4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method WriteCValue, addr 0x5dd82a0, size 0x18, virtual true, abstract: false, final false
inline void WriteCValue(uint32_t  cval, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

/// @brief Method WriteValue, addr 0x5dd81bc, size 0xe4, virtual true, abstract: false, final false
inline uint64_t WriteValue(float_t  val, ::ArrayW<uint8_t>  buffer, ::by_ref<int32_t>  bitposition) ;

constexpr bool const& __cordl_internal_get_accurateCenter() const;

constexpr bool& __cordl_internal_get_accurateCenter() ;

constexpr ::emotitron::Compression::LiteFloatCompressType const& __cordl_internal_get_compressType() const;

constexpr ::emotitron::Compression::LiteFloatCompressType& __cordl_internal_get_compressType() ;

constexpr float_t const& __cordl_internal_get_decoder() const;

constexpr float_t& __cordl_internal_get_decoder() ;

constexpr float_t const& __cordl_internal_get_encoder() const;

constexpr float_t& __cordl_internal_get_encoder() ;

constexpr float_t const& __cordl_internal_get_max() const;

constexpr float_t& __cordl_internal_get_max() ;

constexpr uint64_t const& __cordl_internal_get_maxCVal() const;

constexpr uint64_t& __cordl_internal_get_maxCVal() ;

constexpr float_t const& __cordl_internal_get_min() const;

constexpr float_t& __cordl_internal_get_min() ;

constexpr void __cordl_internal_set_accurateCenter(bool  value) ;

constexpr void __cordl_internal_set_compressType(::emotitron::Compression::LiteFloatCompressType  value) ;

constexpr void __cordl_internal_set_decoder(float_t  value) ;

constexpr void __cordl_internal_set_encoder(float_t  value) ;

constexpr void __cordl_internal_set_max(float_t  value) ;

constexpr void __cordl_internal_set_maxCVal(uint64_t  value) ;

constexpr void __cordl_internal_set_min(float_t  value) ;

/// @brief Method .ctor, addr 0x5dd7e60, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5dd7f54, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::emotitron::Compression::LiteFloatCompressType  compressType, float_t  min, float_t  max, bool  accurateCenter) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LiteFloatCrusher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LiteFloatCrusher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LiteFloatCrusher(LiteFloatCrusher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LiteFloatCrusher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LiteFloatCrusher(LiteFloatCrusher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5098};

/// [SerializeField]
/// @brief Field min, offset: 0x14, size: 0x4, def value: None
 float_t  ___min;

/// [SerializeField]
/// @brief Field max, offset: 0x18, size: 0x4, def value: None
 float_t  ___max;

/// [SerializeField]
/// @brief Field compressType, offset: 0x1c, size: 0x4, def value: None
 ::emotitron::Compression::LiteFloatCompressType  ___compressType;

/// [SerializeField]
/// @brief Field accurateCenter, offset: 0x20, size: 0x1, def value: None
 bool  ___accurateCenter;

/// [SerializeField]
/// @brief Field encoder, offset: 0x24, size: 0x4, def value: None
 float_t  ___encoder;

/// [SerializeField]
/// @brief Field decoder, offset: 0x28, size: 0x4, def value: None
 float_t  ___decoder;

/// [SerializeField]
/// @brief Field maxCVal, offset: 0x30, size: 0x8, def value: None
 uint64_t  ___maxCVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::emotitron::Compression::LiteFloatCrusher, ___min) == 0x14, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteFloatCrusher, ___max) == 0x18, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteFloatCrusher, ___compressType) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteFloatCrusher, ___accurateCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteFloatCrusher, ___encoder) == 0x24, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteFloatCrusher, ___decoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::emotitron::Compression::LiteFloatCrusher, ___maxCVal) == 0x30, "Offset mismatch!");

static_assert(sizeof(::emotitron::Compression::LiteFloatCrusher) == 0x38, "Size mismatch!");

} // namespace end def emotitron::Compression
