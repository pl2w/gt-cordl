#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerIIDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/NLayer/Decoder/zzzz__LayerIIDecoderBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerIIDecoder)
namespace Meta::Voice::NLayer {
class IMpegFrame;
}
// Forward declare root types
namespace Meta::Voice::NLayer::Decoder {
class LayerIIDecoder;
}
// Write type traits
MARK_REF_T(::Meta::Voice::NLayer::Decoder::LayerIIDecoder*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::LayerIIDecoder*, "Meta.Voice.NLayer.Decoder", "LayerIIDecoder");
// Dependencies Meta.Voice.NLayer.Decoder.LayerIIDecoderBase
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.LayerIIDecoder
class CORDL_TYPE LayerIIDecoder : public ::Meta::Voice::NLayer::Decoder::LayerIIDecoderBase {
public:
// Declarations
/// @brief Field _allocLookupTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__allocLookupTable, put=setStaticF__allocLookupTable)) ::ArrayW<::ArrayW<int32_t>>  _allocLookupTable;

/// @brief Field _rateLookupTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rateLookupTable, put=setStaticF__rateLookupTable)) ::ArrayW<::ArrayW<int32_t>>  _rateLookupTable;

/// @brief Method GetRateTable, addr 0x9e0a010, size 0x54, virtual true, abstract: false, final false
inline ::ArrayW<int32_t> GetRateTable(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

static inline ::Meta::Voice::NLayer::Decoder::LayerIIDecoder* New_ctor() ;

/// @brief Method ReadScaleFactorSelection, addr 0x9e0a064, size 0x13c, virtual true, abstract: false, final false
inline void ReadScaleFactorSelection(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<::ArrayW<int32_t>>  scfsi, int32_t  channels) ;

/// @brief Method SelectTable, addr 0x9e09be8, size 0x428, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t> SelectTable(::Meta::Voice::NLayer::IMpegFrame*  frame) ;

/// @brief Method .ctor, addr 0x9e05e94, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<int32_t>> getStaticF__allocLookupTable() ;

static inline ::ArrayW<::ArrayW<int32_t>> getStaticF__rateLookupTable() ;

static inline void setStaticF__allocLookupTable(::ArrayW<::ArrayW<int32_t>>  value) ;

static inline void setStaticF__rateLookupTable(::ArrayW<::ArrayW<int32_t>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerIIDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerIIDecoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerIIDecoder(LayerIIDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerIIDecoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerIIDecoder(LayerIIDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31390};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::NLayer::Decoder::LayerIIDecoder) == 0xe0, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
