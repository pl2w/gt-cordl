#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerIDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIDecoderBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerIDecoder)
namespace Meta::Voice::NLayer {
class IMpegFrame;
}
// Forward declare root types
namespace Meta::Voice::NLayer::Decoder {
class LayerIDecoder;
}
// Write type traits
MARK_REF_T(::Meta::Voice::NLayer::Decoder::LayerIDecoder*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::LayerIDecoder*, "Meta.Voice.NLayer.Decoder", "LayerIDecoder");
// Dependencies Meta.Voice.NLayer.Decoder.LayerIIDecoderBase
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.LayerIDecoder
class CORDL_TYPE LayerIDecoder : public ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase {
public:
// Declarations
/// @brief Field _allocLookupTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__allocLookupTable, put=setStaticF__allocLookupTable)) ::ArrayW<::ArrayW<int32_t>>  _allocLookupTable;

/// @brief Field _rateTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rateTable, put=setStaticF__rateTable)) ::ArrayW<int32_t>  _rateTable;

/// @brief Method GetRateTable, addr 0x9e09a80, size 0x58, virtual true, abstract: false, final false
inline ::ArrayW<int32_t> GetRateTable(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

static inline ::Meta::Voice::NLayer::Decoder::LayerIDecoder* New_ctor() ;

/// @brief Method ReadScaleFactorSelection, addr 0x9e09ad8, size 0x4, virtual true, abstract: false, final false
inline void ReadScaleFactorSelection(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<::ArrayW<int32_t>>  scfsi, int32_t  channels) ;

/// @brief Method .ctor, addr 0x9e05e04, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<int32_t>> getStaticF__allocLookupTable() ;

static inline ::ArrayW<int32_t> getStaticF__rateTable() ;

static inline void setStaticF__allocLookupTable(::ArrayW<::ArrayW<int32_t>>  value) ;

static inline void setStaticF__rateTable(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerIDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerIDecoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerIDecoder(LayerIDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerIDecoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerIDecoder(LayerIDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::NLayer::Decoder::LayerIDecoder) == 0xe0, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
