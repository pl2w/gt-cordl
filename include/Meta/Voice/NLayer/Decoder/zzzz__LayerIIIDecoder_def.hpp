#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerIIIDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerDecoderBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayerIIIDecoder)
namespace Meta::Voice::NLayer::Decoder {
class BitReservoir;
}
namespace Meta::Voice::NLayer::Decoder {
class LayerIIIDecoder_HybridMDCT;
}
namespace Meta::Voice::NLayer {
class IMpegFrame;
}
namespace Meta::Voice::NLayer {
struct MpegChannelMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::Voice::NLayer::Decoder {
class LayerIIIDecoder;
}
namespace Meta::Voice::NLayer::Decoder {
class LayerIIIDecoder_HybridMDCT;
}
// Write type traits
MARK_REF_T(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*);
MARK_REF_T(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*, "Meta.Voice.NLayer.Decoder", "LayerIIIDecoder");
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*, "Meta.Voice.NLayer.Decoder", "LayerIIIDecoder/HybridMDCT");
// Dependencies Meta.Voice.NLayer.Decoder.LayerDecoderBase
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.LayerIIIDecoder
class CORDL_TYPE LayerIIIDecoder : public ::Meta::Voice::NLayer::Decoder::LayerDecoderBase {
public:
// Declarations
using HybridMDCT = ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT;

/// @brief Field GAIN_TAB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GAIN_TAB, put=setStaticF_GAIN_TAB)) ::ArrayW<float_t>  GAIN_TAB;

/// @brief Field POW2_TAB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_POW2_TAB, put=setStaticF_POW2_TAB)) ::ArrayW<float_t>  POW2_TAB;

/// @brief Field PRETAB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PRETAB, put=setStaticF_PRETAB)) ::ArrayW<int32_t>  PRETAB;

/// @brief Field _bigValues, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__bigValues, put=__cordl_internal_set__bigValues)) ::ArrayW<::ArrayW<int32_t>>  _bigValues;

/// @brief Field _bitRes, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__bitRes, put=__cordl_internal_set__bitRes)) ::Meta::Voice::NLayer::Decoder::BitReservoir*  _bitRes;

/// @brief Field _blockSplitFlag, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__blockSplitFlag, put=__cordl_internal_set__blockSplitFlag)) ::ArrayW<::ArrayW<bool>>  _blockSplitFlag;

/// @brief Field _blockType, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__blockType, put=__cordl_internal_set__blockType)) ::ArrayW<::ArrayW<int32_t>>  _blockType;

/// @brief Field _cbLookupL, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__cbLookupL, put=__cordl_internal_set__cbLookupL)) ::ArrayW<uint8_t>  _cbLookupL;

/// @brief Field _cbLookupS, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__cbLookupS, put=__cordl_internal_set__cbLookupS)) ::ArrayW<uint8_t>  _cbLookupS;

/// @brief Field _cbLookupSR, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get__cbLookupSR, put=__cordl_internal_set__cbLookupSR)) int32_t  _cbLookupSR;

/// @brief Field _cbwLookupS, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__cbwLookupS, put=__cordl_internal_set__cbwLookupS)) ::ArrayW<uint8_t>  _cbwLookupS;

/// @brief Field _chanBufs, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__chanBufs, put=__cordl_internal_set__chanBufs)) ::ArrayW<::ArrayW<float_t>>  _chanBufs;

/// @brief Field _channels, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) int32_t  _channels;

/// @brief Field _count1TableSelect, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__count1TableSelect, put=__cordl_internal_set__count1TableSelect)) ::ArrayW<::ArrayW<int32_t>>  _count1TableSelect;

/// @brief Field _globalGain, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__globalGain, put=__cordl_internal_set__globalGain)) ::ArrayW<::ArrayW<float_t>>  _globalGain;

/// @brief Field _hybrid, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__hybrid, put=__cordl_internal_set__hybrid)) ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*  _hybrid;

/// @brief Field _isRatio, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__isRatio, put=setStaticF__isRatio)) ::ArrayW<::ArrayW<float_t>>  _isRatio;

/// @brief Field _lsfRatio, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lsfRatio, put=setStaticF__lsfRatio)) ::ArrayW<::ArrayW<::ArrayW<float_t>>>  _lsfRatio;

/// @brief Field _mainDataBegin, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__mainDataBegin, put=__cordl_internal_set__mainDataBegin)) int32_t  _mainDataBegin;

/// @brief Field _mixedBlockFlag, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixedBlockFlag, put=__cordl_internal_set__mixedBlockFlag)) ::ArrayW<::ArrayW<bool>>  _mixedBlockFlag;

/// @brief Field _part23Length, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__part23Length, put=__cordl_internal_set__part23Length)) ::ArrayW<::ArrayW<int32_t>>  _part23Length;

/// @brief Field _polyPhase, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__polyPhase, put=__cordl_internal_set__polyPhase)) ::ArrayW<float_t>  _polyPhase;

/// @brief Field _preflag, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__preflag, put=__cordl_internal_set__preflag)) ::ArrayW<::ArrayW<int32_t>>  _preflag;

/// @brief Field _privBits, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__privBits, put=__cordl_internal_set__privBits)) int32_t  _privBits;

/// @brief Field _readLsfScalefactorsBuffer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__readLsfScalefactorsBuffer, put=__cordl_internal_set__readLsfScalefactorsBuffer)) ::ArrayW<int32_t>  _readLsfScalefactorsBuffer;

/// @brief Field _readLsfScalefactorsSlen, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__readLsfScalefactorsSlen, put=__cordl_internal_set__readLsfScalefactorsSlen)) ::ArrayW<int32_t>  _readLsfScalefactorsSlen;

/// @brief Field _regionAddress1, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__regionAddress1, put=__cordl_internal_set__regionAddress1)) ::ArrayW<::ArrayW<int32_t>>  _regionAddress1;

/// @brief Field _regionAddress2, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__regionAddress2, put=__cordl_internal_set__regionAddress2)) ::ArrayW<::ArrayW<int32_t>>  _regionAddress2;

/// @brief Field _reorderBuf, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__reorderBuf, put=__cordl_internal_set__reorderBuf)) ::ArrayW<float_t>  _reorderBuf;

/// @brief Field _samples, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__samples, put=__cordl_internal_set__samples)) ::ArrayW<::ArrayW<float_t>>  _samples;

/// @brief Field _sca, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sca, put=setStaticF__sca)) ::ArrayW<float_t>  _sca;

/// @brief Field _scalefac, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalefac, put=__cordl_internal_set__scalefac)) ::ArrayW<::ArrayW<::ArrayW<int32_t>>>  _scalefac;

/// @brief Field _scalefacCompress, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalefacCompress, put=__cordl_internal_set__scalefacCompress)) ::ArrayW<::ArrayW<int32_t>>  _scalefacCompress;

/// @brief Field _scalefacScale, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalefacScale, put=__cordl_internal_set__scalefacScale)) ::ArrayW<::ArrayW<float_t>>  _scalefacScale;

/// @brief Field _scfsi, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__scfsi, put=__cordl_internal_set__scfsi)) ::ArrayW<::ArrayW<int32_t>>  _scfsi;

/// @brief Field _scs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__scs, put=setStaticF__scs)) ::ArrayW<float_t>  _scs;

/// @brief Field _sfBandIndexL, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__sfBandIndexL, put=__cordl_internal_set__sfBandIndexL)) ::ArrayW<int32_t>  _sfBandIndexL;

/// @brief Field _sfBandIndexLTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sfBandIndexLTable, put=setStaticF__sfBandIndexLTable)) ::ArrayW<::ArrayW<int32_t>>  _sfBandIndexLTable;

/// @brief Field _sfBandIndexS, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__sfBandIndexS, put=__cordl_internal_set__sfBandIndexS)) ::ArrayW<int32_t>  _sfBandIndexS;

/// @brief Field _sfBandIndexSTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sfBandIndexSTable, put=setStaticF__sfBandIndexSTable)) ::ArrayW<::ArrayW<int32_t>>  _sfBandIndexSTable;

/// @brief Field _sfbBlockCntTab, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__sfbBlockCntTab, put=setStaticF__sfbBlockCntTab)) ::ArrayW<::ArrayW<::ArrayW<int32_t>>>  _sfbBlockCntTab;

/// @brief Field _slen, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__slen, put=setStaticF__slen)) ::ArrayW<::ArrayW<int32_t>>  _slen;

/// @brief Field _subblockGain, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__subblockGain, put=__cordl_internal_set__subblockGain)) ::ArrayW<::ArrayW<::ArrayW<float_t>>>  _subblockGain;

/// @brief Field _tableSelect, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__tableSelect, put=__cordl_internal_set__tableSelect)) ::ArrayW<::ArrayW<::ArrayW<int32_t>>>  _tableSelect;

/// @brief Method AntiAlias, addr 0x9e11bd4, size 0x190, virtual false, abstract: false, final false
inline void AntiAlias(::ArrayW<float_t>  buf, bool  mixedBlock) ;

/// @brief Method ApplyFullStereo, addr 0x9e124fc, size 0xa8, virtual false, abstract: false, final false
inline void ApplyFullStereo(int32_t  i, int32_t  sb) ;

/// @brief Method ApplyIStereo, addr 0x9e12760, size 0x1bc, virtual false, abstract: false, final false
inline void ApplyIStereo(int32_t  i, int32_t  sb, int32_t  isPos) ;

/// @brief Method ApplyLsfIStereo, addr 0x9e125a4, size 0x1bc, virtual false, abstract: false, final false
inline void ApplyLsfIStereo(int32_t  i, int32_t  sb, int32_t  isPos, int32_t  scalefacCompress) ;

/// @brief Method ApplyMidSide, addr 0x9e123e0, size 0x11c, virtual false, abstract: false, final false
inline void ApplyMidSide(int32_t  i, int32_t  sb) ;

/// @brief Method DecodeFrame, addr 0x9e0bfa4, size 0x5d4, virtual true, abstract: false, final false
inline int32_t DecodeFrame(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<float_t>  ch0, ::ArrayW<float_t>  ch1) ;

/// @brief Method Dequantize, addr 0x9e11f8c, size 0x454, virtual false, abstract: false, final false
inline float_t Dequantize(int32_t  idx, float_t  val, int32_t  gr, int32_t  ch) ;

/// @brief Method FrequencyInversion, addr 0x9e11e60, size 0x64, virtual false, abstract: false, final false
inline void FrequencyInversion(::ArrayW<float_t>  buf) ;

/// @brief Method InversePolyphase, addr 0x9e11ec4, size 0xc8, virtual false, abstract: false, final false
inline void InversePolyphase(::ArrayW<float_t>  buf, int32_t  ch, int32_t  ofs, ::ArrayW<float_t>  outBuf) ;

static inline ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder* New_ctor() ;

/// @brief Method PrepTables, addr 0x9e0e834, size 0x710, virtual false, abstract: false, final false
inline void PrepTables(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

/// @brief Method ReadLsfScalefactors, addr 0x9e0fe94, size 0x9ac, virtual false, abstract: false, final false
inline int32_t ReadLsfScalefactors(int32_t  gr, int32_t  ch, int32_t  chanModeExt) ;

/// @brief Method ReadSamples, addr 0x9e10840, size 0x8d8, virtual false, abstract: false, final false
inline void ReadSamples(int32_t  sfBits, int32_t  gr, int32_t  ch) ;

/// @brief Method ReadScalefactors, addr 0x9e0ef44, size 0xf50, virtual false, abstract: false, final false
inline int32_t ReadScalefactors(int32_t  gr, int32_t  ch) ;

/// @brief Method ReadSideInfo, addr 0x9e0c578, size 0x22bc, virtual false, abstract: false, final false
inline void ReadSideInfo(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

/// @brief Method Reorder, addr 0x9e11aa0, size 0x134, virtual false, abstract: false, final false
inline void Reorder(::ArrayW<float_t>  buf, bool  mixedBlock) ;

/// @brief Method Stereo, addr 0x9e11118, size 0x988, virtual false, abstract: false, final false
inline void Stereo(::Meta::Voice::NLayer::MpegChannelMode  channelMode, int32_t  chanModeExt, int32_t  gr, bool  lsf) ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__bigValues() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__bigValues() ;

constexpr ::Meta::Voice::NLayer::Decoder::BitReservoir* const& __cordl_internal_get__bitRes() const;

constexpr ::Meta::Voice::NLayer::Decoder::BitReservoir*& __cordl_internal_get__bitRes() ;

constexpr ::ArrayW<::ArrayW<bool>> const& __cordl_internal_get__blockSplitFlag() const;

constexpr ::ArrayW<::ArrayW<bool>>& __cordl_internal_get__blockSplitFlag() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__blockType() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__blockType() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__cbLookupL() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__cbLookupL() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__cbLookupS() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__cbLookupS() ;

constexpr int32_t const& __cordl_internal_get__cbLookupSR() const;

constexpr int32_t& __cordl_internal_get__cbLookupSR() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__cbwLookupS() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__cbwLookupS() ;

constexpr ::ArrayW<::ArrayW<float_t>> const& __cordl_internal_get__chanBufs() const;

constexpr ::ArrayW<::ArrayW<float_t>>& __cordl_internal_get__chanBufs() ;

constexpr int32_t const& __cordl_internal_get__channels() const;

constexpr int32_t& __cordl_internal_get__channels() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__count1TableSelect() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__count1TableSelect() ;

constexpr ::ArrayW<::ArrayW<float_t>> const& __cordl_internal_get__globalGain() const;

constexpr ::ArrayW<::ArrayW<float_t>>& __cordl_internal_get__globalGain() ;

constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT* const& __cordl_internal_get__hybrid() const;

constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*& __cordl_internal_get__hybrid() ;

constexpr int32_t const& __cordl_internal_get__mainDataBegin() const;

constexpr int32_t& __cordl_internal_get__mainDataBegin() ;

constexpr ::ArrayW<::ArrayW<bool>> const& __cordl_internal_get__mixedBlockFlag() const;

constexpr ::ArrayW<::ArrayW<bool>>& __cordl_internal_get__mixedBlockFlag() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__part23Length() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__part23Length() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__polyPhase() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__polyPhase() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__preflag() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__preflag() ;

constexpr int32_t const& __cordl_internal_get__privBits() const;

constexpr int32_t& __cordl_internal_get__privBits() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__readLsfScalefactorsBuffer() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__readLsfScalefactorsBuffer() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__readLsfScalefactorsSlen() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__readLsfScalefactorsSlen() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__regionAddress1() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__regionAddress1() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__regionAddress2() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__regionAddress2() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__reorderBuf() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__reorderBuf() ;

constexpr ::ArrayW<::ArrayW<float_t>> const& __cordl_internal_get__samples() const;

constexpr ::ArrayW<::ArrayW<float_t>>& __cordl_internal_get__samples() ;

constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>> const& __cordl_internal_get__scalefac() const;

constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>>& __cordl_internal_get__scalefac() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__scalefacCompress() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__scalefacCompress() ;

constexpr ::ArrayW<::ArrayW<float_t>> const& __cordl_internal_get__scalefacScale() const;

constexpr ::ArrayW<::ArrayW<float_t>>& __cordl_internal_get__scalefacScale() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__scfsi() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__scfsi() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__sfBandIndexL() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__sfBandIndexL() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__sfBandIndexS() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__sfBandIndexS() ;

constexpr ::ArrayW<::ArrayW<::ArrayW<float_t>>> const& __cordl_internal_get__subblockGain() const;

constexpr ::ArrayW<::ArrayW<::ArrayW<float_t>>>& __cordl_internal_get__subblockGain() ;

constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>> const& __cordl_internal_get__tableSelect() const;

constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>>& __cordl_internal_get__tableSelect() ;

constexpr void __cordl_internal_set__bigValues(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__bitRes(::Meta::Voice::NLayer::Decoder::BitReservoir*  value) ;

constexpr void __cordl_internal_set__blockSplitFlag(::ArrayW<::ArrayW<bool>>  value) ;

constexpr void __cordl_internal_set__blockType(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__cbLookupL(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__cbLookupS(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__cbLookupSR(int32_t  value) ;

constexpr void __cordl_internal_set__cbwLookupS(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__chanBufs(::ArrayW<::ArrayW<float_t>>  value) ;

constexpr void __cordl_internal_set__channels(int32_t  value) ;

constexpr void __cordl_internal_set__count1TableSelect(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__globalGain(::ArrayW<::ArrayW<float_t>>  value) ;

constexpr void __cordl_internal_set__hybrid(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*  value) ;

constexpr void __cordl_internal_set__mainDataBegin(int32_t  value) ;

constexpr void __cordl_internal_set__mixedBlockFlag(::ArrayW<::ArrayW<bool>>  value) ;

constexpr void __cordl_internal_set__part23Length(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__polyPhase(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__preflag(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__privBits(int32_t  value) ;

constexpr void __cordl_internal_set__readLsfScalefactorsBuffer(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__readLsfScalefactorsSlen(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__regionAddress1(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__regionAddress2(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__reorderBuf(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__samples(::ArrayW<::ArrayW<float_t>>  value) ;

constexpr void __cordl_internal_set__scalefac(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value) ;

constexpr void __cordl_internal_set__scalefacCompress(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__scalefacScale(::ArrayW<::ArrayW<float_t>>  value) ;

constexpr void __cordl_internal_set__scfsi(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__sfBandIndexL(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__sfBandIndexS(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__subblockGain(::ArrayW<::ArrayW<::ArrayW<float_t>>>  value) ;

constexpr void __cordl_internal_set__tableSelect(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value) ;

/// @brief Method .ctor, addr 0x9e04bb4, size 0xd34, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<float_t> getStaticF_GAIN_TAB() ;

static inline ::ArrayW<float_t> getStaticF_POW2_TAB() ;

static inline ::ArrayW<int32_t> getStaticF_PRETAB() ;

static inline ::ArrayW<::ArrayW<float_t>> getStaticF__isRatio() ;

static inline ::ArrayW<::ArrayW<::ArrayW<float_t>>> getStaticF__lsfRatio() ;

static inline ::ArrayW<float_t> getStaticF__sca() ;

static inline ::ArrayW<float_t> getStaticF__scs() ;

static inline ::ArrayW<::ArrayW<int32_t>> getStaticF__sfBandIndexLTable() ;

static inline ::ArrayW<::ArrayW<int32_t>> getStaticF__sfBandIndexSTable() ;

static inline ::ArrayW<::ArrayW<::ArrayW<int32_t>>> getStaticF__sfbBlockCntTab() ;

static inline ::ArrayW<::ArrayW<int32_t>> getStaticF__slen() ;

static inline void setStaticF_GAIN_TAB(::ArrayW<float_t>  value) ;

static inline void setStaticF_POW2_TAB(::ArrayW<float_t>  value) ;

static inline void setStaticF_PRETAB(::ArrayW<int32_t>  value) ;

static inline void setStaticF__isRatio(::ArrayW<::ArrayW<float_t>>  value) ;

static inline void setStaticF__lsfRatio(::ArrayW<::ArrayW<::ArrayW<float_t>>>  value) ;

static inline void setStaticF__sca(::ArrayW<float_t>  value) ;

static inline void setStaticF__scs(::ArrayW<float_t>  value) ;

static inline void setStaticF__sfBandIndexLTable(::ArrayW<::ArrayW<int32_t>>  value) ;

static inline void setStaticF__sfBandIndexSTable(::ArrayW<::ArrayW<int32_t>>  value) ;

static inline void setStaticF__sfbBlockCntTab(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value) ;

static inline void setStaticF__slen(::ArrayW<::ArrayW<int32_t>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerIIIDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerIIIDecoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerIIIDecoder(LayerIIIDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerIIIDecoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerIIIDecoder(LayerIIIDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31393};

/// @brief Field _chanBufs, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t>>  ____chanBufs;

/// @brief Field _readLsfScalefactorsSlen, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____readLsfScalefactorsSlen;

/// @brief Field _readLsfScalefactorsBuffer, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____readLsfScalefactorsBuffer;

/// @brief Field _hybrid, offset: 0xb8, size: 0x8, def value: None
 ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT*  ____hybrid;

/// @brief Field _bitRes, offset: 0xc0, size: 0x8, def value: None
 ::Meta::Voice::NLayer::Decoder::BitReservoir*  ____bitRes;

/// @brief Field _channels, offset: 0xc8, size: 0x4, def value: None
 int32_t  ____channels;

/// @brief Field _privBits, offset: 0xcc, size: 0x4, def value: None
 int32_t  ____privBits;

/// @brief Field _mainDataBegin, offset: 0xd0, size: 0x4, def value: None
 int32_t  ____mainDataBegin;

/// @brief Field _scfsi, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____scfsi;

/// @brief Field _part23Length, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____part23Length;

/// @brief Field _bigValues, offset: 0xe8, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____bigValues;

/// @brief Field _globalGain, offset: 0xf0, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t>>  ____globalGain;

/// @brief Field _scalefacCompress, offset: 0xf8, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____scalefacCompress;

/// @brief Field _blockSplitFlag, offset: 0x100, size: 0x8, def value: None
 ::ArrayW<::ArrayW<bool>>  ____blockSplitFlag;

/// @brief Field _mixedBlockFlag, offset: 0x108, size: 0x8, def value: None
 ::ArrayW<::ArrayW<bool>>  ____mixedBlockFlag;

/// @brief Field _blockType, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____blockType;

/// @brief Field _tableSelect, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::ArrayW<int32_t>>>  ____tableSelect;

/// @brief Field _subblockGain, offset: 0x120, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::ArrayW<float_t>>>  ____subblockGain;

/// @brief Field _regionAddress1, offset: 0x128, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____regionAddress1;

/// @brief Field _regionAddress2, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____regionAddress2;

/// @brief Field _preflag, offset: 0x138, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____preflag;

/// @brief Field _scalefacScale, offset: 0x140, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t>>  ____scalefacScale;

/// @brief Field _count1TableSelect, offset: 0x148, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____count1TableSelect;

/// @brief Field _sfBandIndexL, offset: 0x150, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____sfBandIndexL;

/// @brief Field _sfBandIndexS, offset: 0x158, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____sfBandIndexS;

/// @brief Field _cbLookupL, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____cbLookupL;

/// @brief Field _cbLookupS, offset: 0x168, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____cbLookupS;

/// @brief Field _cbwLookupS, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____cbwLookupS;

/// @brief Field _cbLookupSR, offset: 0x178, size: 0x4, def value: None
 int32_t  ____cbLookupSR;

/// @brief Field _scalefac, offset: 0x180, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::ArrayW<int32_t>>>  ____scalefac;

/// @brief Field _samples, offset: 0x188, size: 0x8, def value: None
 ::ArrayW<::ArrayW<float_t>>  ____samples;

/// @brief Field _reorderBuf, offset: 0x190, size: 0x8, def value: None
 ::ArrayW<float_t>  ____reorderBuf;

/// @brief Field _polyPhase, offset: 0x198, size: 0x8, def value: None
 ::ArrayW<float_t>  ____polyPhase;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____chanBufs) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____readLsfScalefactorsSlen) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____readLsfScalefactorsBuffer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____hybrid) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____bitRes) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____channels) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____privBits) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____mainDataBegin) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____scfsi) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____part23Length) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____bigValues) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____globalGain) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____scalefacCompress) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____blockSplitFlag) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____mixedBlockFlag) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____blockType) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____tableSelect) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____subblockGain) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____regionAddress1) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____regionAddress2) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____preflag) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____scalefacScale) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____count1TableSelect) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____sfBandIndexL) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____sfBandIndexS) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____cbLookupL) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____cbLookupS) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____cbwLookupS) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____cbLookupSR) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____scalefac) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____samples) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____reorderBuf) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder, ____polyPhase) == 0x198, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder) == 0x1a0, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
// Dependencies System.Object
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.LayerIIIDecoder/HybridMDCT
class CORDL_TYPE LayerIIIDecoder_HybridMDCT : public ::System::Object {
public:
// Declarations
/// @brief Field _ShortIMDCT_H, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShortIMDCT_H, put=__cordl_internal_set__ShortIMDCT_H)) ::ArrayW<float_t>  _ShortIMDCT_H;

/// @brief Field _ShortIMDCT_even_idct, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShortIMDCT_even_idct, put=__cordl_internal_set__ShortIMDCT_even_idct)) ::ArrayW<float_t>  _ShortIMDCT_even_idct;

/// @brief Field _ShortIMDCT_h, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShortIMDCT_h, put=__cordl_internal_set__ShortIMDCT_h)) ::ArrayW<float_t>  _ShortIMDCT_h;

/// @brief Field _ShortIMDCT_odd_idct, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShortIMDCT_odd_idct, put=__cordl_internal_set__ShortIMDCT_odd_idct)) ::ArrayW<float_t>  _ShortIMDCT_odd_idct;

/// @brief Field _imdctResult, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdctResult, put=__cordl_internal_set__imdctResult)) ::ArrayW<float_t>  _imdctResult;

/// @brief Field _imdctTemp, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdctTemp, put=__cordl_internal_set__imdctTemp)) ::ArrayW<float_t>  _imdctTemp;

/// @brief Field _imdct_9pt_even_idct, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdct_9pt_even_idct, put=__cordl_internal_set__imdct_9pt_even_idct)) ::ArrayW<float_t>  _imdct_9pt_even_idct;

/// @brief Field _imdct_9pt_odd_idct, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdct_9pt_odd_idct, put=__cordl_internal_set__imdct_9pt_odd_idct)) ::ArrayW<float_t>  _imdct_9pt_odd_idct;

/// @brief Field _imdct_H, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdct_H, put=__cordl_internal_set__imdct_H)) ::ArrayW<float_t>  _imdct_H;

/// @brief Field _imdct_even, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdct_even, put=__cordl_internal_set__imdct_even)) ::ArrayW<float_t>  _imdct_even;

/// @brief Field _imdct_even_idct, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdct_even_idct, put=__cordl_internal_set__imdct_even_idct)) ::ArrayW<float_t>  _imdct_even_idct;

/// @brief Field _imdct_h, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdct_h, put=__cordl_internal_set__imdct_h)) ::ArrayW<float_t>  _imdct_h;

/// @brief Field _imdct_odd, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdct_odd, put=__cordl_internal_set__imdct_odd)) ::ArrayW<float_t>  _imdct_odd;

/// @brief Field _imdct_odd_idct, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__imdct_odd_idct, put=__cordl_internal_set__imdct_odd_idct)) ::ArrayW<float_t>  _imdct_odd_idct;

/// @brief Field _nextBlock, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextBlock, put=__cordl_internal_set__nextBlock)) ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  _nextBlock;

/// @brief Field _nextBlockFirst, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__nextBlockFirst, put=__cordl_internal_set__nextBlockFirst)) ::ArrayW<float_t>  _nextBlockFirst;

/// @brief Field _prevBlock, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__prevBlock, put=__cordl_internal_set__prevBlock)) ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  _prevBlock;

/// @brief Field _prevBlockFirst, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__prevBlockFirst, put=__cordl_internal_set__prevBlockFirst)) ::ArrayW<float_t>  _prevBlockFirst;

/// @brief Field _swin, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__swin, put=setStaticF__swin)) ::ArrayW<::ArrayW<float_t>>  _swin;

/// @brief Field icos72_table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_icos72_table, put=setStaticF_icos72_table)) ::ArrayW<float_t>  icos72_table;

/// @brief Method Apply, addr 0x9e11d64, size 0xfc, virtual false, abstract: false, final false
inline void Apply(::ArrayW<float_t>  fsIn, int32_t  channel, int32_t  blockType, bool  doMixed) ;

/// @brief Method GetPrevBlock, addr 0x9e140fc, size 0x2a8, virtual false, abstract: false, final false
inline void GetPrevBlock(int32_t  channel, ::by_ref<::ArrayW<float_t>>  prevBlock, ::by_ref<::ArrayW<float_t>>  nextBlock) ;

/// @brief Method ICOS36_A, addr 0x9e14fbc, size 0x88, virtual false, abstract: false, final false
static inline float_t ICOS36_A(int32_t  i) ;

/// @brief Method ICOS72_A, addr 0x9e15044, size 0x80, virtual false, abstract: false, final false
static inline float_t ICOS72_A(int32_t  i) ;

/// @brief Method LongIMDCT, addr 0x9e14810, size 0x4d4, virtual false, abstract: false, final false
inline void LongIMDCT(::ArrayW<float_t>  invec, ::ArrayW<float_t>  outvec) ;

/// @brief Method LongImpl, addr 0x9e143a4, size 0x1dc, virtual false, abstract: false, final false
inline void LongImpl(::ArrayW<float_t>  fsIn, int32_t  sbStart, int32_t  sbLimit, ::ArrayW<float_t>  nextblck, int32_t  blockType) ;

static inline ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT* New_ctor() ;

/// @brief Method ShortIMDCT, addr 0x9e150c4, size 0x488, virtual false, abstract: false, final false
inline void ShortIMDCT(::ArrayW<float_t>  invec, int32_t  inIdx, ::ArrayW<float_t>  outvec) ;

/// @brief Method ShortImpl, addr 0x9e14580, size 0x290, virtual false, abstract: false, final false
inline void ShortImpl(::ArrayW<float_t>  fsIn, int32_t  sbStart, ::ArrayW<float_t>  nextblck) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ShortIMDCT_H() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ShortIMDCT_H() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ShortIMDCT_even_idct() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ShortIMDCT_even_idct() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ShortIMDCT_h() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ShortIMDCT_h() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ShortIMDCT_odd_idct() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ShortIMDCT_odd_idct() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdctResult() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdctResult() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdctTemp() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdctTemp() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdct_9pt_even_idct() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdct_9pt_even_idct() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdct_9pt_odd_idct() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdct_9pt_odd_idct() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdct_H() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdct_H() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdct_even() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdct_even() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdct_even_idct() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdct_even_idct() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdct_h() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdct_h() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdct_odd() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdct_odd() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__imdct_odd_idct() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__imdct_odd_idct() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& __cordl_internal_get__nextBlock() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& __cordl_internal_get__nextBlock() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__nextBlockFirst() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__nextBlockFirst() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& __cordl_internal_get__prevBlock() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& __cordl_internal_get__prevBlock() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__prevBlockFirst() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__prevBlockFirst() ;

constexpr void __cordl_internal_set__ShortIMDCT_H(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__ShortIMDCT_even_idct(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__ShortIMDCT_h(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__ShortIMDCT_odd_idct(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdctResult(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdctTemp(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdct_9pt_even_idct(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdct_9pt_odd_idct(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdct_H(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdct_even(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdct_even_idct(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdct_h(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdct_odd(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__imdct_odd_idct(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__nextBlock(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value) ;

constexpr void __cordl_internal_set__nextBlockFirst(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__prevBlock(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value) ;

constexpr void __cordl_internal_set__prevBlockFirst(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x9e0bd24, size 0x280, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<float_t>> getStaticF__swin() ;

static inline ::ArrayW<float_t> getStaticF_icos72_table() ;

/// @brief Method imdct_9pt, addr 0x9e14ce4, size 0x2d8, virtual false, abstract: false, final false
inline void imdct_9pt(::ArrayW<float_t>  invec, ::ArrayW<float_t>  outvec) ;

static inline void setStaticF__swin(::ArrayW<::ArrayW<float_t>>  value) ;

static inline void setStaticF_icos72_table(::ArrayW<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerIIIDecoder_HybridMDCT() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerIIIDecoder_HybridMDCT", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerIIIDecoder_HybridMDCT(LayerIIIDecoder_HybridMDCT && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerIIIDecoder_HybridMDCT", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerIIIDecoder_HybridMDCT(LayerIIIDecoder_HybridMDCT const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31392};

/// @brief Field _prevBlock, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  ____prevBlock;

/// @brief Field _nextBlock, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  ____nextBlock;

/// @brief Field _prevBlockFirst, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ____prevBlockFirst;

/// @brief Field _nextBlockFirst, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ____nextBlockFirst;

/// @brief Field _imdctTemp, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdctTemp;

/// @brief Field _imdctResult, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdctResult;

/// @brief Field _imdct_H, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdct_H;

/// @brief Field _imdct_h, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdct_h;

/// @brief Field _imdct_even, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdct_even;

/// @brief Field _imdct_odd, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdct_odd;

/// @brief Field _imdct_even_idct, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdct_even_idct;

/// @brief Field _imdct_odd_idct, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdct_odd_idct;

/// @brief Field _imdct_9pt_even_idct, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdct_9pt_even_idct;

/// @brief Field _imdct_9pt_odd_idct, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<float_t>  ____imdct_9pt_odd_idct;

/// @brief Field _ShortIMDCT_H, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ShortIMDCT_H;

/// @brief Field _ShortIMDCT_h, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ShortIMDCT_h;

/// @brief Field _ShortIMDCT_even_idct, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ShortIMDCT_even_idct;

/// @brief Field _ShortIMDCT_odd_idct, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ShortIMDCT_odd_idct;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____prevBlock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____nextBlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____prevBlockFirst) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____nextBlockFirst) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdctTemp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdctResult) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdct_H) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdct_h) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdct_even) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdct_odd) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdct_even_idct) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdct_odd_idct) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdct_9pt_even_idct) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____imdct_9pt_odd_idct) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____ShortIMDCT_H) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____ShortIMDCT_h) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____ShortIMDCT_even_idct) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT, ____ShortIMDCT_odd_idct) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder_HybridMDCT) == 0xa0, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
