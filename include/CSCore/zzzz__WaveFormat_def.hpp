#pragma once
// IWYU pragma private; include "CSCore/WaveFormat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CSCore/zzzz__AudioEncoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaveFormat)
namespace CSCore {
struct AudioEncoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class ICloneable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace CSCore {
class WaveFormat;
}
// Write type traits
MARK_REF_T(::CSCore::WaveFormat*);
DEFINE_IL2CPP_CLASS(::CSCore::WaveFormat*, "CSCore", "WaveFormat");
// Dependencies CSCore.AudioEncoding, System.Object
namespace CSCore {
// Is value type: false
// CS Name: CSCore.WaveFormat
#pragma pack(push, 2)
class CORDL_TYPE WaveFormat : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BitsPerSample, put=set_BitsPerSample)) int32_t  BitsPerSample;

 __declspec(property(get=get_BlockAlign, put=set_BlockAlign)) int32_t  BlockAlign;

 __declspec(property(get=get_BytesPerBlock)) int32_t  BytesPerBlock;

 __declspec(property(get=get_BytesPerSample)) int32_t  BytesPerSample;

 __declspec(property(get=get_BytesPerSecond, put=set_BytesPerSecond)) int32_t  BytesPerSecond;

 __declspec(property(get=get_Channels, put=set_Channels)) int32_t  Channels;

 __declspec(property(get=get_ExtraSize, put=set_ExtraSize)) int32_t  ExtraSize;

 __declspec(property(get=get_SampleRate, put=set_SampleRate)) int32_t  SampleRate;

 __declspec(property(get=get_WaveFormatTag, put=set_WaveFormatTag)) ::CSCore::AudioEncoding  WaveFormatTag;

/// @brief Field _bitsPerSample, offset 0x1e, size 0x2 
 __declspec(property(get=__cordl_internal_get__bitsPerSample, put=__cordl_internal_set__bitsPerSample)) int16_t  _bitsPerSample;

/// @brief Field _blockAlign, offset 0x1c, size 0x2 
 __declspec(property(get=__cordl_internal_get__blockAlign, put=__cordl_internal_set__blockAlign)) int16_t  _blockAlign;

/// @brief Field _bytesPerSecond, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__bytesPerSecond, put=__cordl_internal_set__bytesPerSecond)) int32_t  _bytesPerSecond;

/// @brief Field _channels, offset 0x12, size 0x2 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) int16_t  _channels;

/// @brief Field _encoding, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get__encoding, put=__cordl_internal_set__encoding)) ::CSCore::AudioEncoding  _encoding;

/// @brief Field _extraSize, offset 0x20, size 0x2 
 __declspec(property(get=__cordl_internal_get__extraSize, put=__cordl_internal_set__extraSize)) int16_t  _extraSize;

/// @brief Field _sampleRate, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) int32_t  _sampleRate;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::CSCore::WaveFormat*>"
constexpr operator  ::System::IEquatable_1<::CSCore::WaveFormat*>*() noexcept;

/// @brief Method BytesToMilliseconds, addr 0xa7639ec, size 0x60, virtual false, abstract: false, final false
inline double_t BytesToMilliseconds(int64_t  bytes) ;

/// @brief Method Clone, addr 0xa763e90, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

/// @brief Method Equals, addr 0xa763a4c, size 0x178, virtual true, abstract: false, final false
inline bool Equals(::CSCore::WaveFormat*  other) ;

/// [DebuggerStepThrough]
/// @brief Method GetInformation, addr 0xa763be4, size 0x2ac, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* GetInformation() ;

/// @brief Method MillisecondsToBytes, addr 0xa763974, size 0x78, virtual false, abstract: false, final false
inline int64_t MillisecondsToBytes(double_t  milliseconds) ;

static inline ::CSCore::WaveFormat* New_ctor() ;

static inline ::CSCore::WaveFormat* New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels) ;

static inline ::CSCore::WaveFormat* New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::CSCore::AudioEncoding  encoding) ;

static inline ::CSCore::WaveFormat* New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::CSCore::AudioEncoding  encoding, int32_t  extraSize) ;

/// @brief Method SetBitsPerSampleAndFormatProperties, addr 0xa763ea8, size 0x30, virtual true, abstract: false, final false
inline void SetBitsPerSampleAndFormatProperties(int32_t  bitsPerSample) ;

/// @brief Method SetWaveFormatTagInternal, addr 0xa763e98, size 0x10, virtual true, abstract: false, final false
inline void SetWaveFormatTagInternal(::CSCore::AudioEncoding  waveFormatTag) ;

/// @brief Method ToString, addr 0xa763bc4, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UpdateProperties, addr 0xa763ed8, size 0x98, virtual true, abstract: false, final false
inline void UpdateProperties() ;

constexpr int16_t const& __cordl_internal_get__bitsPerSample() const;

constexpr int16_t& __cordl_internal_get__bitsPerSample() ;

constexpr int16_t const& __cordl_internal_get__blockAlign() const;

constexpr int16_t& __cordl_internal_get__blockAlign() ;

constexpr int32_t const& __cordl_internal_get__bytesPerSecond() const;

constexpr int32_t& __cordl_internal_get__bytesPerSecond() ;

constexpr int16_t const& __cordl_internal_get__channels() const;

constexpr int16_t& __cordl_internal_get__channels() ;

constexpr ::CSCore::AudioEncoding const& __cordl_internal_get__encoding() const;

constexpr ::CSCore::AudioEncoding& __cordl_internal_get__encoding() ;

constexpr int16_t const& __cordl_internal_get__extraSize() const;

constexpr int16_t& __cordl_internal_get__extraSize() ;

constexpr int32_t const& __cordl_internal_get__sampleRate() const;

constexpr int32_t& __cordl_internal_get__sampleRate() ;

constexpr void __cordl_internal_set__bitsPerSample(int16_t  value) ;

constexpr void __cordl_internal_set__blockAlign(int16_t  value) ;

constexpr void __cordl_internal_set__bytesPerSecond(int32_t  value) ;

constexpr void __cordl_internal_set__channels(int16_t  value) ;

constexpr void __cordl_internal_set__encoding(::CSCore::AudioEncoding  value) ;

constexpr void __cordl_internal_set__extraSize(int16_t  value) ;

constexpr void __cordl_internal_set__sampleRate(int32_t  value) ;

/// @brief Method .ctor, addr 0xa7637f4, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa763834, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels) ;

/// @brief Method .ctor, addr 0xa763840, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::CSCore::AudioEncoding  encoding) ;

/// @brief Method .ctor, addr 0xa763848, size 0x12c, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::CSCore::AudioEncoding  encoding, int32_t  extraSize) ;

/// @brief Method get_BitsPerSample, addr 0xa763744, size 0x8, virtual true, abstract: false, final false
inline int32_t get_BitsPerSample() ;

/// @brief Method get_BlockAlign, addr 0xa763734, size 0x8, virtual true, abstract: false, final false
inline int32_t get_BlockAlign() ;

/// @brief Method get_BytesPerBlock, addr 0xa7637a4, size 0x40, virtual true, abstract: false, final false
inline int32_t get_BytesPerBlock() ;

/// @brief Method get_BytesPerSample, addr 0xa763778, size 0x2c, virtual true, abstract: false, final false
inline int32_t get_BytesPerSample() ;

/// @brief Method get_BytesPerSecond, addr 0xa763724, size 0x8, virtual true, abstract: false, final false
inline int32_t get_BytesPerSecond() ;

/// @brief Method get_Channels, addr 0xa7636dc, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Channels() ;

/// @brief Method get_ExtraSize, addr 0xa763768, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ExtraSize() ;

/// @brief Method get_SampleRate, addr 0xa763700, size 0x8, virtual true, abstract: false, final false
inline int32_t get_SampleRate() ;

/// @brief Method get_WaveFormatTag, addr 0xa7637e4, size 0x8, virtual true, abstract: false, final false
inline ::CSCore::AudioEncoding get_WaveFormatTag() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Convert to "::System::IEquatable_1<::CSCore::WaveFormat*>"
constexpr ::System::IEquatable_1<::CSCore::WaveFormat*>* i___System__IEquatable_1___CSCore__WaveFormat__() noexcept;

/// @brief Method set_BitsPerSample, addr 0xa76374c, size 0x1c, virtual true, abstract: false, final false
inline void set_BitsPerSample(int32_t  value) ;

/// @brief Method set_BlockAlign, addr 0xa76373c, size 0x8, virtual true, abstract: false, final false
inline void set_BlockAlign(int32_t  value) ;

/// @brief Method set_BytesPerSecond, addr 0xa76372c, size 0x8, virtual true, abstract: false, final false
inline void set_BytesPerSecond(int32_t  value) ;

/// @brief Method set_Channels, addr 0xa7636e4, size 0x1c, virtual true, abstract: false, final false
inline void set_Channels(int32_t  value) ;

/// @brief Method set_ExtraSize, addr 0xa763770, size 0x8, virtual true, abstract: false, final false
inline void set_ExtraSize(int32_t  value) ;

/// @brief Method set_SampleRate, addr 0xa763708, size 0x1c, virtual true, abstract: false, final false
inline void set_SampleRate(int32_t  value) ;

/// @brief Method set_WaveFormatTag, addr 0xa7637ec, size 0x8, virtual true, abstract: false, final false
inline void set_WaveFormatTag(::CSCore::AudioEncoding  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveFormat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveFormat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveFormat(WaveFormat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveFormat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveFormat(WaveFormat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28868};

/// @brief Field _encoding, offset: 0x10, size: 0x2, def value: None
 ::CSCore::AudioEncoding  ____encoding;

/// @brief Field _channels, offset: 0x12, size: 0x2, def value: None
 int16_t  ____channels;

/// @brief Field _sampleRate, offset: 0x14, size: 0x4, def value: None
 int32_t  ____sampleRate;

/// @brief Field _bytesPerSecond, offset: 0x18, size: 0x4, def value: None
 int32_t  ____bytesPerSecond;

/// @brief Field _blockAlign, offset: 0x1c, size: 0x2, def value: None
 int16_t  ____blockAlign;

/// @brief Field _bitsPerSample, offset: 0x1e, size: 0x2, def value: None
 int16_t  ____bitsPerSample;

/// @brief Field _extraSize, offset: 0x20, size: 0x2, def value: None
 int16_t  ____extraSize;

/// @brief Size padding 0x22 - 0x28 = 0x6, packed as 0x6
 uint8_t  _cordl_size_padding[0x6];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::CSCore::WaveFormat, ____encoding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::CSCore::WaveFormat, ____channels) == 0x12, "Offset mismatch!");

static_assert(offsetof(::CSCore::WaveFormat, ____sampleRate) == 0x14, "Offset mismatch!");

static_assert(offsetof(::CSCore::WaveFormat, ____bytesPerSecond) == 0x18, "Offset mismatch!");

static_assert(offsetof(::CSCore::WaveFormat, ____blockAlign) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::CSCore::WaveFormat, ____bitsPerSample) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::CSCore::WaveFormat, ____extraSize) == 0x20, "Offset mismatch!");

static_assert(sizeof(::CSCore::WaveFormat) == 0x22, "Size mismatch!");

} // namespace end def CSCore
