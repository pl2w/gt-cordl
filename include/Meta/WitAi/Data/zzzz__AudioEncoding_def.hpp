#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioEncoding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Data/zzzz__AudioEncoding_Endian_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioEncoding)
namespace GlobalNamespace {
struct AudioEncoding_Endian;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class AudioEncoding;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::AudioEncoding*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::AudioEncoding*, "Meta.WitAi.Data", "AudioEncoding");
// Dependencies Meta.WitAi.Data.AudioEncoding::Endian, System.Object
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.AudioEncoding
class CORDL_TYPE AudioEncoding : public ::System::Object {
public:
// Declarations
using Endian = ::GlobalNamespace::AudioEncoding_Endian;

/// @brief Field bits, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_bits, put=__cordl_internal_set_bits)) int32_t  bits;

/// @brief Field encoding, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoding, put=__cordl_internal_set_encoding)) ::StringW  encoding;

/// @brief Field endian, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_endian, put=__cordl_internal_set_endian)) ::GlobalNamespace::AudioEncoding_Endian  endian;

/// @brief Field numChannels, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_numChannels, put=__cordl_internal_set_numChannels)) int32_t  numChannels;

/// @brief Field samplerate, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_samplerate, put=__cordl_internal_set_samplerate)) int32_t  samplerate;

static inline ::Meta::WitAi::Data::AudioEncoding* New_ctor() ;

/// @brief Method ToString, addr 0x9e18ea4, size 0x200, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_bits() const;

constexpr int32_t& __cordl_internal_get_bits() ;

constexpr ::StringW const& __cordl_internal_get_encoding() const;

constexpr ::StringW& __cordl_internal_get_encoding() ;

constexpr ::GlobalNamespace::AudioEncoding_Endian const& __cordl_internal_get_endian() const;

constexpr ::GlobalNamespace::AudioEncoding_Endian& __cordl_internal_get_endian() ;

constexpr int32_t const& __cordl_internal_get_numChannels() const;

constexpr int32_t& __cordl_internal_get_numChannels() ;

constexpr int32_t const& __cordl_internal_get_samplerate() const;

constexpr int32_t& __cordl_internal_get_samplerate() ;

constexpr void __cordl_internal_set_bits(int32_t  value) ;

constexpr void __cordl_internal_set_encoding(::StringW  value) ;

constexpr void __cordl_internal_set_endian(::GlobalNamespace::AudioEncoding_Endian  value) ;

constexpr void __cordl_internal_set_numChannels(int32_t  value) ;

constexpr void __cordl_internal_set_samplerate(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e15bb8, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioEncoding() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioEncoding", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioEncoding(AudioEncoding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioEncoding", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioEncoding(AudioEncoding const& ) = delete;

/// @brief Field BITS_BYTE offset 0xffffffff size 0x4
static constexpr int32_t  BITS_BYTE{static_cast<int32_t>(0x8)};

/// @brief Field BITS_INT offset 0xffffffff size 0x4
static constexpr int32_t  BITS_INT{static_cast<int32_t>(0x20)};

/// @brief Field BITS_LONG offset 0xffffffff size 0x4
static constexpr int32_t  BITS_LONG{static_cast<int32_t>(0x40)};

/// @brief Field BITS_SHORT offset 0xffffffff size 0x4
static constexpr int32_t  BITS_SHORT{static_cast<int32_t>(0x10)};

/// @brief Field ENCODING_SIGNED offset 0xffffffff size 0x8
static constexpr ::ConstString  ENCODING_SIGNED{u"signed-integer"};

/// @brief Field ENCODING_UNSIGNED offset 0xffffffff size 0x8
static constexpr ::ConstString  ENCODING_UNSIGNED{u"unsigned-integer"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32776};

/// @brief Field numChannels, offset: 0x10, size: 0x4, def value: None
 int32_t  ___numChannels;

/// @brief Field samplerate, offset: 0x14, size: 0x4, def value: None
 int32_t  ___samplerate;

/// @brief Field encoding, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___encoding;

/// @brief Field bits, offset: 0x20, size: 0x4, def value: None
 int32_t  ___bits;

/// @brief Field endian, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::AudioEncoding_Endian  ___endian;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::AudioEncoding, ___numChannels) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioEncoding, ___samplerate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioEncoding, ___encoding) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioEncoding, ___bits) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioEncoding, ___endian) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::AudioEncoding) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
