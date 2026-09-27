#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerIIDecoderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerDecoderBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayerIIDecoderBase)
namespace Meta::Voice::NLayer {
class IMpegFrame;
}
// Forward declare root types
namespace Meta::Voice::NLayer::Decoder {
class LayerIIDecoderBase;
}
// Write type traits
MARK_REF_T(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase*, "Meta.Voice.NLayer.Decoder", "LayerIIDecoderBase");
// Dependencies Meta.Voice.NLayer.Decoder.LayerDecoderBase
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.LayerIIDecoderBase
class CORDL_TYPE LayerIIDecoderBase : public ::Meta::Voice::NLayer::Decoder::LayerDecoderBase {
public:
// Declarations
/// @brief Field _C, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__C, put=setStaticF__C)) ::ArrayW<float_t>  _C;

/// @brief Field _D, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__D, put=setStaticF__D)) ::ArrayW<float_t>  _D;

/// @brief Field _allocLookupTable, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__allocLookupTable, put=__cordl_internal_set__allocLookupTable)) ::ArrayW<::ArrayW<int32_t>>  _allocLookupTable;

/// @brief Field _allocation, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__allocation, put=__cordl_internal_set__allocation)) ::ArrayW<::ArrayW<int32_t>>  _allocation;

/// @brief Field _channels, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__channels, put=__cordl_internal_set__channels)) int32_t  _channels;

/// @brief Field _denormalMultiplier, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__denormalMultiplier, put=setStaticF__denormalMultiplier)) ::ArrayW<float_t>  _denormalMultiplier;

/// @brief Field _granuleCount, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__granuleCount, put=__cordl_internal_set__granuleCount)) int32_t  _granuleCount;

/// @brief Field _groupedC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__groupedC, put=setStaticF__groupedC)) ::ArrayW<float_t>  _groupedC;

/// @brief Field _groupedD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__groupedD, put=setStaticF__groupedD)) ::ArrayW<float_t>  _groupedD;

/// @brief Field _jsbound, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__jsbound, put=__cordl_internal_set__jsbound)) int32_t  _jsbound;

/// @brief Field _polyPhaseBuf, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__polyPhaseBuf, put=__cordl_internal_set__polyPhaseBuf)) ::ArrayW<float_t>  _polyPhaseBuf;

/// @brief Field _samples, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__samples, put=__cordl_internal_set__samples)) ::ArrayW<::ArrayW<int32_t>>  _samples;

/// @brief Field _scalefac, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__scalefac, put=__cordl_internal_set__scalefac)) ::ArrayW<::ArrayW<::ArrayW<int32_t>>>  _scalefac;

/// @brief Field _scfsi, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__scfsi, put=__cordl_internal_set__scfsi)) ::ArrayW<::ArrayW<int32_t>>  _scfsi;

/// @brief Method DecodeFrame, addr 0x9e0a678, size 0x168, virtual true, abstract: false, final false
inline int32_t DecodeFrame(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<float_t>  ch0, ::ArrayW<float_t>  ch1) ;

/// @brief Method DecodeSamples, addr 0x9e0b6cc, size 0x498, virtual false, abstract: false, final false
inline int32_t DecodeSamples(::ArrayW<float_t>  ch0, ::ArrayW<float_t>  ch1) ;

/// @brief Method GetRateTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::ArrayW<int32_t> GetRateTable(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

/// @brief Method InitFrame, addr 0x9e0a7e0, size 0x140, virtual false, abstract: false, final false
inline void InitFrame(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

static inline ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase* New_ctor(::ArrayW<::ArrayW<int32_t>>  allocLookupTable, int32_t  granuleCount) ;

/// @brief Method ReadAllocation, addr 0x9e0a920, size 0x330, virtual false, abstract: false, final false
inline void ReadAllocation(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<int32_t>  rateTable) ;

/// @brief Method ReadSamples, addr 0x9e0b304, size 0x3c8, virtual false, abstract: false, final false
inline void ReadSamples(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

/// @brief Method ReadScaleFactorSelection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ReadScaleFactorSelection(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<::ArrayW<int32_t>>  scfsi, int32_t  channels) ;

/// @brief Method ReadScaleFactors, addr 0x9e0ac50, size 0x6b4, virtual false, abstract: false, final false
inline void ReadScaleFactors(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__allocLookupTable() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__allocLookupTable() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__allocation() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__allocation() ;

constexpr int32_t const& __cordl_internal_get__channels() const;

constexpr int32_t& __cordl_internal_get__channels() ;

constexpr int32_t const& __cordl_internal_get__granuleCount() const;

constexpr int32_t& __cordl_internal_get__granuleCount() ;

constexpr int32_t const& __cordl_internal_get__jsbound() const;

constexpr int32_t& __cordl_internal_get__jsbound() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__polyPhaseBuf() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__polyPhaseBuf() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__samples() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__samples() ;

constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>> const& __cordl_internal_get__scalefac() const;

constexpr ::ArrayW<::ArrayW<::ArrayW<int32_t>>>& __cordl_internal_get__scalefac() ;

constexpr ::ArrayW<::ArrayW<int32_t>> const& __cordl_internal_get__scfsi() const;

constexpr ::ArrayW<::ArrayW<int32_t>>& __cordl_internal_get__scfsi() ;

constexpr void __cordl_internal_set__allocLookupTable(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__allocation(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__channels(int32_t  value) ;

constexpr void __cordl_internal_set__granuleCount(int32_t  value) ;

constexpr void __cordl_internal_set__jsbound(int32_t  value) ;

constexpr void __cordl_internal_set__polyPhaseBuf(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__samples(::ArrayW<::ArrayW<int32_t>>  value) ;

constexpr void __cordl_internal_set__scalefac(::ArrayW<::ArrayW<::ArrayW<int32_t>>>  value) ;

constexpr void __cordl_internal_set__scfsi(::ArrayW<::ArrayW<int32_t>>  value) ;

/// @brief Method .ctor, addr 0x9e096f4, size 0x38c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::ArrayW<int32_t>>  allocLookupTable, int32_t  granuleCount) ;

static inline ::ArrayW<float_t> getStaticF__C() ;

static inline ::ArrayW<float_t> getStaticF__D() ;

static inline ::ArrayW<float_t> getStaticF__denormalMultiplier() ;

static inline ::ArrayW<float_t> getStaticF__groupedC() ;

static inline ::ArrayW<float_t> getStaticF__groupedD() ;

static inline void setStaticF__C(::ArrayW<float_t>  value) ;

static inline void setStaticF__D(::ArrayW<float_t>  value) ;

static inline void setStaticF__denormalMultiplier(::ArrayW<float_t>  value) ;

static inline void setStaticF__groupedC(::ArrayW<float_t>  value) ;

static inline void setStaticF__groupedD(::ArrayW<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerIIDecoderBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerIIDecoderBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerIIDecoderBase(LayerIIDecoderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerIIDecoderBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerIIDecoderBase(LayerIIDecoderBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31391};

/// @brief Field _channels, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____channels;

/// @brief Field _jsbound, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____jsbound;

/// @brief Field _granuleCount, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____granuleCount;

/// @brief Field _allocLookupTable, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____allocLookupTable;

/// @brief Field _scfsi, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____scfsi;

/// @brief Field _samples, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____samples;

/// @brief Field _scalefac, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::ArrayW<int32_t>>>  ____scalefac;

/// @brief Field _polyPhaseBuf, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<float_t>  ____polyPhaseBuf;

/// @brief Field _allocation, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::ArrayW<int32_t>>  ____allocation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase, ____channels) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase, ____jsbound) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase, ____granuleCount) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase, ____allocLookupTable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase, ____scfsi) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase, ____samples) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase, ____scalefac) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase, ____polyPhaseBuf) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase, ____allocation) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase) == 0xe0, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
