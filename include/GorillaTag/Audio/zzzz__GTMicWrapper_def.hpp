#pragma once
// IWYU pragma private; include "GorillaTag/Audio/GTMicWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__MicWrapper_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTMicWrapper)
namespace Photon::Voice {
class ILogger;
}
// Forward declare root types
namespace GorillaTag::Audio {
class GTMicWrapper;
}
// Write type traits
MARK_REF_T(::GorillaTag::Audio::GTMicWrapper*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Audio::GTMicWrapper*, "GorillaTag.Audio", "GTMicWrapper");
// Dependencies Photon.Voice.Unity.MicWrapper
namespace GorillaTag::Audio {
// Is value type: false
// CS Name: GorillaTag.Audio.GTMicWrapper
class CORDL_TYPE GTMicWrapper : public ::Photon::Voice::Unity::MicWrapper {
public:
// Declarations
/// @brief Field AnaFreq, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnaFreq, put=__cordl_internal_set_AnaFreq)) ::ArrayW<float_t>  AnaFreq;

/// @brief Field AnaMagn, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_AnaMagn, put=__cordl_internal_set_AnaMagn)) ::ArrayW<float_t>  AnaMagn;

/// @brief Field FfTworksp, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_FfTworksp, put=__cordl_internal_set_FfTworksp)) ::ArrayW<float_t>  FfTworksp;

/// @brief Field InFifo, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_InFifo, put=__cordl_internal_set_InFifo)) ::ArrayW<float_t>  InFifo;

/// @brief Field LastPhase, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastPhase, put=__cordl_internal_set_LastPhase)) ::ArrayW<float_t>  LastPhase;

/// @brief Field MaxFrameLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MaxFrameLength, put=setStaticF_MaxFrameLength)) int32_t  MaxFrameLength;

/// @brief Field OutFifo, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutFifo, put=__cordl_internal_set_OutFifo)) ::ArrayW<float_t>  OutFifo;

/// @brief Field OutputAccum, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OutputAccum, put=__cordl_internal_set_OutputAccum)) ::ArrayW<float_t>  OutputAccum;

/// @brief Field SumPhase, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_SumPhase, put=__cordl_internal_set_SumPhase)) ::ArrayW<float_t>  SumPhase;

/// @brief Field SynFreq, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_SynFreq, put=__cordl_internal_set_SynFreq)) ::ArrayW<float_t>  SynFreq;

/// @brief Field SynMagn, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_SynMagn, put=__cordl_internal_set_SynMagn)) ::ArrayW<float_t>  SynMagn;

/// @brief Field _allowPitchAdjustment, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowPitchAdjustment, put=__cordl_internal_set__allowPitchAdjustment)) bool  _allowPitchAdjustment;

/// @brief Field _allowVolumeAdjustment, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowVolumeAdjustment, put=__cordl_internal_set__allowVolumeAdjustment)) bool  _allowVolumeAdjustment;

/// @brief Field _gRover, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__gRover, put=__cordl_internal_set__gRover)) int64_t  _gRover;

/// @brief Field _pitchAdjustment, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__pitchAdjustment, put=__cordl_internal_set__pitchAdjustment)) float_t  _pitchAdjustment;

/// @brief Field _volumeAdjustment, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__volumeAdjustment, put=__cordl_internal_set__volumeAdjustment)) float_t  _volumeAdjustment;

static inline ::GorillaTag::Audio::GTMicWrapper* New_ctor(::StringW  device, int32_t  suggestedFrequency, bool  allowPitchAdjustment, float_t  pitchAdjustment, bool  allowVolumeAdjustment, float_t  volumeAdjustment, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method PitchShift, addr 0x5d505e8, size 0x7f0, virtual false, abstract: false, final false
inline void PitchShift(float_t  pitchShift, int64_t  numSampsToProcess, int64_t  fftFrameSize, int64_t  osamp, float_t  sampleRate, ::ArrayW<float_t>  indata) ;

/// @brief Method PitchShift, addr 0x5d505d8, size 0x10, virtual false, abstract: false, final false
inline void PitchShift(float_t  pitchShift, int64_t  numSampsToProcess, float_t  sampleRate, ::ArrayW<float_t>  indata) ;

/// @brief Method Read, addr 0x5d50214, size 0x3c4, virtual true, abstract: false, final false
inline bool Read(::ArrayW<float_t>  buffer) ;

/// @brief Method ShortTimeFourierTransform, addr 0x5d50dd8, size 0x31c, virtual false, abstract: false, final false
inline void ShortTimeFourierTransform(::ArrayW<float_t>  fftBuffer, int64_t  fftFrameSize, int64_t  sign) ;

/// @brief Method UpdatePitchAdjustment, addr 0x5d501e8, size 0xc, virtual false, abstract: false, final false
inline void UpdatePitchAdjustment(bool  allow, float_t  pitchAdjustment) ;

/// @brief Method UpdateVolumeAdjustment, addr 0x5d501f4, size 0xc, virtual false, abstract: false, final false
inline void UpdateVolumeAdjustment(bool  allow, float_t  volumeAdjustment) ;

/// @brief Method UpdateWrapper, addr 0x5d50200, size 0x14, virtual false, abstract: false, final false
inline void UpdateWrapper(bool  allowPitchAdjustment, float_t  pitchAdjustment, bool  allowVolumeAdjustment, float_t  volumeAdjustment) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_AnaFreq() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_AnaFreq() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_AnaMagn() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_AnaMagn() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_FfTworksp() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_FfTworksp() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_InFifo() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_InFifo() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_LastPhase() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_LastPhase() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_OutFifo() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_OutFifo() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_OutputAccum() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_OutputAccum() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_SumPhase() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_SumPhase() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_SynFreq() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_SynFreq() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_SynMagn() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_SynMagn() ;

constexpr bool const& __cordl_internal_get__allowPitchAdjustment() const;

constexpr bool& __cordl_internal_get__allowPitchAdjustment() ;

constexpr bool const& __cordl_internal_get__allowVolumeAdjustment() const;

constexpr bool& __cordl_internal_get__allowVolumeAdjustment() ;

constexpr int64_t const& __cordl_internal_get__gRover() const;

constexpr int64_t& __cordl_internal_get__gRover() ;

constexpr float_t const& __cordl_internal_get__pitchAdjustment() const;

constexpr float_t& __cordl_internal_get__pitchAdjustment() ;

constexpr float_t const& __cordl_internal_get__volumeAdjustment() const;

constexpr float_t& __cordl_internal_get__volumeAdjustment() ;

constexpr void __cordl_internal_set_AnaFreq(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_AnaMagn(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_FfTworksp(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_InFifo(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_LastPhase(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_OutFifo(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_OutputAccum(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_SumPhase(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_SynFreq(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_SynMagn(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__allowPitchAdjustment(bool  value) ;

constexpr void __cordl_internal_set__allowVolumeAdjustment(bool  value) ;

constexpr void __cordl_internal_set__gRover(int64_t  value) ;

constexpr void __cordl_internal_set__pitchAdjustment(float_t  value) ;

constexpr void __cordl_internal_set__volumeAdjustment(float_t  value) ;

/// @brief Method .ctor, addr 0x5d4ff7c, size 0x26c, virtual false, abstract: false, final false
inline void _ctor(::StringW  device, int32_t  suggestedFrequency, bool  allowPitchAdjustment, float_t  pitchAdjustment, bool  allowVolumeAdjustment, float_t  volumeAdjustment, ::Photon::Voice::ILogger*  logger) ;

static inline int32_t getStaticF_MaxFrameLength() ;

static inline void setStaticF_MaxFrameLength(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTMicWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTMicWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTMicWrapper(GTMicWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTMicWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTMicWrapper(GTMicWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4788};

/// @brief Field _allowPitchAdjustment, offset: 0x3c, size: 0x1, def value: None
 bool  ____allowPitchAdjustment;

/// @brief Field _pitchAdjustment, offset: 0x40, size: 0x4, def value: None
 float_t  ____pitchAdjustment;

/// @brief Field _allowVolumeAdjustment, offset: 0x44, size: 0x1, def value: None
 bool  ____allowVolumeAdjustment;

/// @brief Field _volumeAdjustment, offset: 0x48, size: 0x4, def value: None
 float_t  ____volumeAdjustment;

/// @brief Field InFifo, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ___InFifo;

/// @brief Field OutFifo, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<float_t>  ___OutFifo;

/// @brief Field FfTworksp, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t>  ___FfTworksp;

/// @brief Field LastPhase, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<float_t>  ___LastPhase;

/// @brief Field SumPhase, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<float_t>  ___SumPhase;

/// @brief Field OutputAccum, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<float_t>  ___OutputAccum;

/// @brief Field AnaFreq, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<float_t>  ___AnaFreq;

/// @brief Field AnaMagn, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<float_t>  ___AnaMagn;

/// @brief Field SynFreq, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<float_t>  ___SynFreq;

/// @brief Field SynMagn, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<float_t>  ___SynMagn;

/// @brief Field _gRover, offset: 0xa0, size: 0x8, def value: None
 int64_t  ____gRover;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ____allowPitchAdjustment) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ____pitchAdjustment) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ____allowVolumeAdjustment) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ____volumeAdjustment) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___InFifo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___OutFifo) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___FfTworksp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___LastPhase) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___SumPhase) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___OutputAccum) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___AnaFreq) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___AnaMagn) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___SynFreq) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ___SynMagn) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Audio::GTMicWrapper, ____gRover) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Audio::GTMicWrapper) == 0xa8, "Size mismatch!");

} // namespace end def GorillaTag::Audio
