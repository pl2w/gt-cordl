#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/Decoder/LayerDecoderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/NLayer/zzzz__StereoMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayerDecoderBase)
namespace Meta::Voice::NLayer {
class IMpegFrame;
}
namespace Meta::Voice::NLayer {
struct StereoMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Meta::Voice::NLayer::Decoder {
class LayerDecoderBase;
}
// Write type traits
MARK_REF_T(::Meta::Voice::NLayer::Decoder::LayerDecoderBase*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::NLayer::Decoder::LayerDecoderBase*, "Meta.Voice.NLayer.Decoder", "LayerDecoderBase");
// Dependencies Meta.Voice.NLayer.StereoMode, System.Object
namespace Meta::Voice::NLayer::Decoder {
// Is value type: false
// CS Name: Meta.Voice.NLayer.Decoder.LayerDecoderBase
class CORDL_TYPE LayerDecoderBase : public ::System::Object {
public:
// Declarations
/// @brief Field DEWINDOW_TABLE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DEWINDOW_TABLE, put=setStaticF_DEWINDOW_TABLE)) ::ArrayW<float_t>  DEWINDOW_TABLE;

/// @brief Field SYNTH_COS64_TABLE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SYNTH_COS64_TABLE, put=setStaticF_SYNTH_COS64_TABLE)) ::ArrayW<float_t>  SYNTH_COS64_TABLE;

 __declspec(property(get=get_StereoMode, put=set_StereoMode)) ::Meta::Voice::NLayer::StereoMode  StereoMode;

/// @brief Field <StereoMode>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__StereoMode_k__BackingField, put=__cordl_internal_set__StereoMode_k__BackingField)) ::Meta::Voice::NLayer::StereoMode  _StereoMode_k__BackingField;

/// @brief Field _bufOffset, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__bufOffset, put=__cordl_internal_set__bufOffset)) ::System::Collections::Generic::List_1<int32_t>*  _bufOffset;

/// @brief Field _eq, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__eq, put=__cordl_internal_set__eq)) ::ArrayW<float_t>  _eq;

/// @brief Field _synBuf, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__synBuf, put=__cordl_internal_set__synBuf)) ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  _synBuf;

/// @brief Field _synBufFirst, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__synBufFirst, put=__cordl_internal_set__synBufFirst)) ::ArrayW<float_t>  _synBufFirst;

/// @brief Field ei16, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ei16, put=__cordl_internal_set_ei16)) ::ArrayW<float_t>  ei16;

/// @brief Field ei32, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ei32, put=__cordl_internal_set_ei32)) ::ArrayW<float_t>  ei32;

/// @brief Field ei8, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_ei8, put=__cordl_internal_set_ei8)) ::ArrayW<float_t>  ei8;

/// @brief Field eo16, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_eo16, put=__cordl_internal_set_eo16)) ::ArrayW<float_t>  eo16;

/// @brief Field eo32, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_eo32, put=__cordl_internal_set_eo32)) ::ArrayW<float_t>  eo32;

/// @brief Field ippuv, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ippuv, put=__cordl_internal_set_ippuv)) ::ArrayW<float_t>  ippuv;

/// @brief Field oi16, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_oi16, put=__cordl_internal_set_oi16)) ::ArrayW<float_t>  oi16;

/// @brief Field oi32, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_oi32, put=__cordl_internal_set_oi32)) ::ArrayW<float_t>  oi32;

/// @brief Field oi8, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_oi8, put=__cordl_internal_set_oi8)) ::ArrayW<float_t>  oi8;

/// @brief Field oo16, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_oo16, put=__cordl_internal_set_oo16)) ::ArrayW<float_t>  oo16;

/// @brief Field oo32, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_oo32, put=__cordl_internal_set_oo32)) ::ArrayW<float_t>  oo32;

/// @brief Field oo8, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_oo8, put=__cordl_internal_set_oo8)) ::ArrayW<float_t>  oo8;

/// @brief Field tmp8, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmp8, put=__cordl_internal_set_tmp8)) ::ArrayW<float_t>  tmp8;

/// @brief Method BuildUVec, addr 0x9e0897c, size 0x164, virtual false, abstract: false, final false
inline void BuildUVec(::ArrayW<float_t>  u_vec, ::ArrayW<float_t>  cur_synbuf, int32_t  k) ;

/// @brief Method DCT16, addr 0x9e08e28, size 0x458, virtual false, abstract: false, final false
inline void DCT16(::ArrayW<float_t>  _in, ::ArrayW<float_t>  _out) ;

/// @brief Method DCT32, addr 0x9e08760, size 0x21c, virtual false, abstract: false, final false
inline void DCT32(::ArrayW<float_t>  _in, ::ArrayW<float_t>  _out, int32_t  k) ;

/// @brief Method DCT8, addr 0x9e09280, size 0x390, virtual false, abstract: false, final false
inline void DCT8(::ArrayW<float_t>  _in, ::ArrayW<float_t>  _out) ;

/// @brief Method DecodeFrame, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t DecodeFrame(::Meta::Voice::NLayer::IMpegFrame*  frame, ::ArrayW<float_t>  ch0, ::ArrayW<float_t>  ch1) ;

/// @brief Method DewindowOutput, addr 0x9e08ae0, size 0x348, virtual false, abstract: false, final false
inline void DewindowOutput(::ArrayW<float_t>  u_vec, ::ArrayW<float_t>  samples) ;

/// @brief Method GetBufAndOffset, addr 0x9e084f0, size 0x270, virtual false, abstract: false, final false
inline void GetBufAndOffset(int32_t  channel, ::by_ref<::ArrayW<float_t>>  synBuf, ::by_ref<int32_t>  k) ;

/// @brief Method InversePolyPhase, addr 0x9e08430, size 0xc0, virtual false, abstract: false, final false
inline void InversePolyPhase(int32_t  channel, ::ArrayW<float_t>  data) ;

static inline ::Meta::Voice::NLayer::Decoder::LayerDecoderBase* New_ctor() ;

/// @brief Method SetEQ, addr 0x9e05f24, size 0x1c, virtual false, abstract: false, final false
inline void SetEQ(::ArrayW<float_t>  eq) ;

constexpr ::Meta::Voice::NLayer::StereoMode const& __cordl_internal_get__StereoMode_k__BackingField() const;

constexpr ::Meta::Voice::NLayer::StereoMode& __cordl_internal_get__StereoMode_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get__bufOffset() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get__bufOffset() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__eq() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__eq() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& __cordl_internal_get__synBuf() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& __cordl_internal_get__synBuf() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__synBufFirst() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__synBufFirst() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_ei16() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_ei16() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_ei32() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_ei32() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_ei8() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_ei8() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_eo16() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_eo16() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_eo32() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_eo32() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_ippuv() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_ippuv() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_oi16() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_oi16() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_oi32() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_oi32() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_oi8() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_oi8() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_oo16() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_oo16() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_oo32() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_oo32() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_oo8() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_oo8() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_tmp8() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_tmp8() ;

constexpr void __cordl_internal_set__StereoMode_k__BackingField(::Meta::Voice::NLayer::StereoMode  value) ;

constexpr void __cordl_internal_set__bufOffset(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__eq(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__synBuf(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value) ;

constexpr void __cordl_internal_set__synBufFirst(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_ei16(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_ei32(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_ei8(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_eo16(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_eo32(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_ippuv(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_oi16(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_oi32(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_oi8(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_oo16(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_oo32(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_oo8(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_tmp8(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x9e08198, size 0x288, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<float_t> getStaticF_DEWINDOW_TABLE() ;

static inline ::ArrayW<float_t> getStaticF_SYNTH_COS64_TABLE() ;

/// [CompilerGenerated]
/// @brief Method get_StereoMode, addr 0x9e08420, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::NLayer::StereoMode get_StereoMode() ;

static inline void setStaticF_DEWINDOW_TABLE(::ArrayW<float_t>  value) ;

static inline void setStaticF_SYNTH_COS64_TABLE(::ArrayW<float_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_StereoMode, addr 0x9e08428, size 0x8, virtual false, abstract: false, final false
inline void set_StereoMode(::Meta::Voice::NLayer::StereoMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LayerDecoderBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LayerDecoderBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerDecoderBase(LayerDecoderBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerDecoderBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerDecoderBase(LayerDecoderBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31388};

/// @brief Field _synBuf, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  ____synBuf;

/// @brief Field _bufOffset, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ____bufOffset;

/// @brief Field _eq, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ____eq;

/// [CompilerGenerated]
/// @brief Field <StereoMode>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Meta::Voice::NLayer::StereoMode  ____StereoMode_k__BackingField;

/// @brief Field ippuv, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t>  ___ippuv;

/// @brief Field _synBufFirst, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____synBufFirst;

/// @brief Field ei32, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ___ei32;

/// @brief Field eo32, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ___eo32;

/// @brief Field oi32, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<float_t>  ___oi32;

/// @brief Field oo32, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<float_t>  ___oo32;

/// @brief Field ei16, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t>  ___ei16;

/// @brief Field eo16, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<float_t>  ___eo16;

/// @brief Field oi16, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<float_t>  ___oi16;

/// @brief Field oo16, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<float_t>  ___oo16;

/// @brief Field ei8, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<float_t>  ___ei8;

/// @brief Field tmp8, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<float_t>  ___tmp8;

/// @brief Field oi8, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<float_t>  ___oi8;

/// @brief Field oo8, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<float_t>  ___oo8;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ____synBuf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ____bufOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ____eq) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ____StereoMode_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___ippuv) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ____synBufFirst) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___ei32) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___eo32) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___oi32) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___oo32) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___ei16) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___eo16) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___oi16) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___oo16) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___ei8) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___tmp8) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___oi8) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase, ___oo8) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::NLayer::Decoder::LayerDecoderBase) == 0xa0, "Size mismatch!");

} // namespace end def Meta::Voice::NLayer::Decoder
