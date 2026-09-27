#pragma once
// IWYU pragma private; include "CSCore/WaveFormatExtensible.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CSCore/zzzz__ChannelMask_def.hpp"
#include "CSCore/zzzz__WaveFormat_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaveFormatExtensible)
namespace CSCore {
struct AudioEncoding;
}
namespace CSCore {
struct ChannelMask;
}
namespace CSCore {
class WaveFormat;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace CSCore {
class WaveFormatExtensible;
}
// Write type traits
MARK_REF_T(::CSCore::WaveFormatExtensible*);
DEFINE_IL2CPP_CLASS(::CSCore::WaveFormatExtensible*, "CSCore", "WaveFormatExtensible");
// Dependencies CSCore.ChannelMask, CSCore.WaveFormat, System.Guid
namespace CSCore {
// Is value type: false
// CS Name: CSCore.WaveFormatExtensible
#pragma pack(push, 2)
class CORDL_TYPE WaveFormatExtensible : public ::CSCore::WaveFormat {
public:
// Declarations
 __declspec(property(get=get_ChannelMask, put=set_ChannelMask)) ::CSCore::ChannelMask  ChannelMask;

 __declspec(property(get=get_SamplesPerBlock, put=set_SamplesPerBlock)) int32_t  SamplesPerBlock;

 __declspec(property(get=get_SubFormat, put=set_SubFormat)) ::System::Guid  SubFormat;

 __declspec(property(get=get_ValidBitsPerSample, put=set_ValidBitsPerSample)) int32_t  ValidBitsPerSample;

/// @brief Field _channelMask, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__channelMask, put=__cordl_internal_set__channelMask)) ::CSCore::ChannelMask  _channelMask;

/// @brief Field _samplesUnion, offset 0x12, size 0x2 
 __declspec(property(get=__cordl_internal_get__samplesUnion, put=__cordl_internal_set__samplesUnion)) int16_t  _samplesUnion;

/// @brief Field _subFormat, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__subFormat, put=__cordl_internal_set__subFormat)) ::System::Guid  _subFormat;

/// @brief Method Clone, addr 0xa7644d0, size 0x8, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

static inline ::CSCore::WaveFormatExtensible* New_ctor() ;

static inline ::CSCore::WaveFormatExtensible* New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::System::Guid  subFormat) ;

static inline ::CSCore::WaveFormatExtensible* New_ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::System::Guid  subFormat, ::CSCore::ChannelMask  channelMask) ;

/// @brief Method SetWaveFormatTagInternal, addr 0xa7644d8, size 0x68, virtual true, abstract: false, final false
inline void SetWaveFormatTagInternal(::CSCore::AudioEncoding  waveFormatTag) ;

/// @brief Method SubTypeFromWaveFormat, addr 0xa763f70, size 0x108, virtual false, abstract: false, final false
static inline ::System::Guid SubTypeFromWaveFormat(::CSCore::WaveFormat*  waveFormat) ;

/// [DebuggerStepThrough]
/// @brief Method ToString, addr 0xa764540, size 0x14c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToWaveFormat, addr 0xa7643d8, size 0xf8, virtual false, abstract: false, final false
inline ::CSCore::WaveFormat* ToWaveFormat() ;

constexpr ::CSCore::ChannelMask const& __cordl_internal_get__channelMask() const;

constexpr ::CSCore::ChannelMask& __cordl_internal_get__channelMask() ;

constexpr int16_t const& __cordl_internal_get__samplesUnion() const;

constexpr int16_t& __cordl_internal_get__samplesUnion() ;

constexpr ::System::Guid const& __cordl_internal_get__subFormat() const;

constexpr ::System::Guid& __cordl_internal_get__subFormat() ;

constexpr void __cordl_internal_set__channelMask(::CSCore::ChannelMask  value) ;

constexpr void __cordl_internal_set__samplesUnion(int16_t  value) ;

constexpr void __cordl_internal_set__subFormat(::System::Guid  value) ;

/// @brief Method .ctor, addr 0xa7640bc, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa7640fc, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::System::Guid  subFormat) ;

/// @brief Method .ctor, addr 0xa7641c0, size 0x218, virtual false, abstract: false, final false
inline void _ctor(int32_t  sampleRate, int32_t  bits, int32_t  channels, ::System::Guid  subFormat, ::CSCore::ChannelMask  channelMask) ;

/// @brief Method get_ChannelMask, addr 0xa764098, size 0x8, virtual false, abstract: false, final false
inline ::CSCore::ChannelMask get_ChannelMask() ;

/// @brief Method get_SamplesPerBlock, addr 0xa764088, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SamplesPerBlock() ;

/// @brief Method get_SubFormat, addr 0xa7640a8, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_SubFormat() ;

/// @brief Method get_ValidBitsPerSample, addr 0xa764078, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ValidBitsPerSample() ;

/// @brief Method set_ChannelMask, addr 0xa7640a0, size 0x8, virtual false, abstract: false, final false
inline void set_ChannelMask(::CSCore::ChannelMask  value) ;

/// @brief Method set_SamplesPerBlock, addr 0xa764090, size 0x8, virtual false, abstract: false, final false
inline void set_SamplesPerBlock(int32_t  value) ;

/// @brief Method set_SubFormat, addr 0xa7640b4, size 0x8, virtual false, abstract: false, final false
inline void set_SubFormat(::System::Guid  value) ;

/// @brief Method set_ValidBitsPerSample, addr 0xa764080, size 0x8, virtual false, abstract: false, final false
inline void set_ValidBitsPerSample(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveFormatExtensible() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveFormatExtensible", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveFormatExtensible(WaveFormatExtensible && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveFormatExtensible", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveFormatExtensible(WaveFormatExtensible const& ) = delete;

/// @brief Field WaveFormatExtensibleExtraSize offset 0xffffffff size 0x4
static constexpr int32_t  WaveFormatExtensibleExtraSize{static_cast<int32_t>(0x16)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28869};

/// @brief Field _samplesUnion, offset: 0x12, size: 0x2, def value: None
 int16_t  ____samplesUnion;

/// @brief Field _channelMask, offset: 0x14, size: 0x4, def value: None
 ::CSCore::ChannelMask  ____channelMask;

/// @brief Field _subFormat, offset: 0x18, size: 0x10, def value: None
 ::System::Guid  ____subFormat;

/// @brief Size padding 0x38 - 0x28 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::CSCore::WaveFormatExtensible, ____samplesUnion) == 0x12, "Offset mismatch!");

static_assert(offsetof(::CSCore::WaveFormatExtensible, ____channelMask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::CSCore::WaveFormatExtensible, ____subFormat) == 0x18, "Offset mismatch!");

static_assert(sizeof(::CSCore::WaveFormatExtensible) == 0x38, "Size mismatch!");

} // namespace end def CSCore
