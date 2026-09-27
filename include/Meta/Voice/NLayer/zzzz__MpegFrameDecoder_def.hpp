#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/MpegFrameDecoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/NLayer/zzzz__StereoMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MpegFrameDecoder)
namespace Meta::Voice::NLayer::Decoder {
class LayerIDecoder;
}
namespace Meta::Voice::NLayer::Decoder {
class LayerIIDecoder;
}
namespace Meta::Voice::NLayer::Decoder {
class LayerIIIDecoder;
}
namespace Meta::Voice::NLayer {
class IMpegFrame;
}
namespace Meta::Voice::NLayer {
struct StereoMode;
}
namespace System {
class Array;
}
// Forward declare root types
namespace Meta::Voice::NLayer {
class MpegFrameDecoder;
}
// Write type traits
MARK_REF_T(::Meta::Voice::NLayer::MpegFrameDecoder*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::MpegFrameDecoder*, "Meta.Voice.NLayer", "MpegFrameDecoder");
// Dependencies Meta.Voice.NLayer.StereoMode, System.Object
namespace Meta::Voice::NLayer {
// Is value type: false
// CS Name: Meta.Voice.NLayer.MpegFrameDecoder
class CORDL_TYPE MpegFrameDecoder : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_StereoMode)) ::Meta::Voice::NLayer::StereoMode  StereoMode;

/// @brief Field <StereoMode>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__StereoMode_k__BackingField, put=__cordl_internal_set__StereoMode_k__BackingField)) ::Meta::Voice::NLayer::StereoMode  _StereoMode_k__BackingField;

/// @brief Field _ch0, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ch0, put=__cordl_internal_set__ch0)) ::ArrayW<float_t>  _ch0;

/// @brief Field _ch1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ch1, put=__cordl_internal_set__ch1)) ::ArrayW<float_t>  _ch1;

/// @brief Field _eqFactors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__eqFactors, put=__cordl_internal_set__eqFactors)) ::ArrayW<float_t>  _eqFactors;

/// @brief Field _layerIDecoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__layerIDecoder, put=__cordl_internal_set__layerIDecoder)) ::Meta::Voice::NLayer::Decoder::LayerIDecoder*  _layerIDecoder;

/// @brief Field _layerIIDecoder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__layerIIDecoder, put=__cordl_internal_set__layerIIDecoder)) ::Meta::Voice::NLayer::Decoder::LayerIIDecoder*  _layerIIDecoder;

/// @brief Field _layerIIIDecoder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__layerIIIDecoder, put=__cordl_internal_set__layerIIIDecoder)) ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*  _layerIIIDecoder;

/// @brief Method DecodeFrame, addr 0x9e058f0, size 0x1fc, virtual false, abstract: false, final false
inline int32_t DecodeFrame(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<float_t>  dest, int32_t  destOffset) ;

/// @brief Method DecodeFrameImpl, addr 0x9e05aec, size 0x318, virtual false, abstract: false, final false
inline int32_t DecodeFrameImpl(::Meta::Voice::NLayer::IMpegFrame*  frame, ::System::Array*  dest, int32_t  destOffset) ;

static inline ::Meta::Voice::NLayer::MpegFrameDecoder* New_ctor() ;

constexpr ::Meta::Voice::NLayer::StereoMode const& __cordl_internal_get__StereoMode_k__BackingField() const;

constexpr ::Meta::Voice::NLayer::StereoMode& __cordl_internal_get__StereoMode_k__BackingField() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ch0() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ch0() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__ch1() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__ch1() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__eqFactors() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__eqFactors() ;

constexpr ::Meta::Voice::NLayer::Decoder::LayerIDecoder* const& __cordl_internal_get__layerIDecoder() const;

constexpr ::Meta::Voice::NLayer::Decoder::LayerIDecoder*& __cordl_internal_get__layerIDecoder() ;

constexpr ::Meta::Voice::NLayer::Decoder::LayerIIDecoder* const& __cordl_internal_get__layerIIDecoder() const;

constexpr ::Meta::Voice::NLayer::Decoder::LayerIIDecoder*& __cordl_internal_get__layerIIDecoder() ;

constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder* const& __cordl_internal_get__layerIIIDecoder() const;

constexpr ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*& __cordl_internal_get__layerIIIDecoder() ;

constexpr void __cordl_internal_set__StereoMode_k__BackingField(::Meta::Voice::NLayer::StereoMode  value) ;

constexpr void __cordl_internal_set__ch0(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__ch1(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__eqFactors(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__layerIDecoder(::Meta::Voice::NLayer::Decoder::LayerIDecoder*  value) ;

constexpr void __cordl_internal_set__layerIIDecoder(::Meta::Voice::NLayer::Decoder::LayerIIDecoder*  value) ;

constexpr void __cordl_internal_set__layerIIIDecoder(::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*  value) ;

/// @brief Method .ctor, addr 0x9e04af8, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_StereoMode, addr 0x9e058e8, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::NLayer::StereoMode get_StereoMode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MpegFrameDecoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MpegFrameDecoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MpegFrameDecoder(MpegFrameDecoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MpegFrameDecoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MpegFrameDecoder(MpegFrameDecoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31383};

/// @brief Field _layerIDecoder, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::NLayer::Decoder::LayerIDecoder*  ____layerIDecoder;

/// @brief Field _layerIIDecoder, offset: 0x18, size: 0x8, def value: None
 ::Meta::Voice::NLayer::Decoder::LayerIIDecoder*  ____layerIIDecoder;

/// @brief Field _layerIIIDecoder, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::NLayer::Decoder::LayerIIIDecoder*  ____layerIIIDecoder;

/// @brief Field _eqFactors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ____eqFactors;

/// @brief Field _ch0, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ch0;

/// @brief Field _ch1, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____ch1;

/// [CompilerGenerated]
/// @brief Field <StereoMode>k__BackingField, offset: 0x40, size: 0x4, def value: None
 ::Meta::Voice::NLayer::StereoMode  ____StereoMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::MpegFrameDecoder, ____layerIDecoder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::MpegFrameDecoder, ____layerIIDecoder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::MpegFrameDecoder, ____layerIIIDecoder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::MpegFrameDecoder, ____eqFactors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::MpegFrameDecoder, ____ch0) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::MpegFrameDecoder, ____ch1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::MpegFrameDecoder, ____StereoMode_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::MpegFrameDecoder) == 0x48, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer
