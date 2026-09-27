#pragma once
// IWYU pragma private; include "Photon/Voice/OpusCodec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusCodec)
namespace GlobalNamespace {
struct OpusCodec_FrameDuration;
}
namespace POpusCodec {
template<typename T>
class OpusDecoder_1;
}
namespace POpusCodec {
class OpusEncoder;
}
namespace Photon::Voice {
struct FrameBuffer;
}
namespace Photon::Voice {
struct FrameFlags;
}
namespace Photon::Voice {
template<typename T>
class FrameOut_1;
}
namespace Photon::Voice {
class IDecoder;
}
namespace Photon::Voice {
template<typename B>
class IEncoderDirect_1;
}
namespace Photon::Voice {
class IEncoder;
}
namespace Photon::Voice {
class ILogger;
}
namespace Photon::Voice {
class OpusCodec_DecoderFactory;
}
namespace Photon::Voice {
template<typename T>
class OpusCodec_Decoder_1;
}
namespace Photon::Voice {
class OpusCodec_EncoderFloat;
}
namespace Photon::Voice {
class OpusCodec_EncoderShort;
}
namespace Photon::Voice {
template<typename T>
class OpusCodec_Encoder_1;
}
namespace Photon::Voice {
class OpusCodec_Factory;
}
namespace Photon::Voice {
class OpusCodec_Util;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Photon::Voice {
class OpusCodec;
}
namespace Photon::Voice {
class OpusCodec_DecoderFactory;
}
namespace Photon::Voice {
template<typename T>
class OpusCodec_Decoder_1;
}
namespace Photon::Voice {
class OpusCodec_EncoderFloat;
}
namespace Photon::Voice {
class OpusCodec_EncoderShort;
}
namespace Photon::Voice {
template<typename T>
class OpusCodec_Encoder_1;
}
namespace Photon::Voice {
class OpusCodec_Factory;
}
namespace Photon::Voice {
class OpusCodec_Util;
}
// Write type traits
MARK_REF_T(::Photon::Voice::OpusCodec*);
MARK_REF_T(::Photon::Voice::OpusCodec_DecoderFactory*);
MARK_GEN_REF_T_PTR(::Photon::Voice::OpusCodec_Decoder_1);
MARK_REF_T(::Photon::Voice::OpusCodec_EncoderFloat*);
MARK_REF_T(::Photon::Voice::OpusCodec_EncoderShort*);
MARK_GEN_REF_T_PTR(::Photon::Voice::OpusCodec_Encoder_1);
MARK_REF_T(::Photon::Voice::OpusCodec_Factory*);
MARK_REF_T(::Photon::Voice::OpusCodec_Util*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::OpusCodec*, "Photon.Voice", "OpusCodec");
DEFINE_IL2CPP_CLASS(::Photon::Voice::OpusCodec_DecoderFactory*, "Photon.Voice", "OpusCodec/DecoderFactory");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::OpusCodec_Decoder_1, "Photon.Voice", "OpusCodec/Decoder`1");
DEFINE_IL2CPP_CLASS(::Photon::Voice::OpusCodec_EncoderFloat*, "Photon.Voice", "OpusCodec/EncoderFloat");
DEFINE_IL2CPP_CLASS(::Photon::Voice::OpusCodec_EncoderShort*, "Photon.Voice", "OpusCodec/EncoderShort");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::OpusCodec_Encoder_1, "Photon.Voice", "OpusCodec/Encoder`1");
DEFINE_IL2CPP_CLASS(::Photon::Voice::OpusCodec_Factory*, "Photon.Voice", "OpusCodec/Factory");
DEFINE_IL2CPP_CLASS(::Photon::Voice::OpusCodec_Util*, "Photon.Voice", "OpusCodec/Util");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.OpusCodec
class CORDL_TYPE OpusCodec : public ::System::Object {
public:
// Declarations
using FrameDuration = ::GlobalNamespace::OpusCodec_FrameDuration;

using DecoderFactory = ::Photon::Voice::OpusCodec_DecoderFactory;

template<typename T>
using Decoder_1 = ::Photon::Voice::OpusCodec_Decoder_1<T>;

using EncoderFloat = ::Photon::Voice::OpusCodec_EncoderFloat;

using EncoderShort = ::Photon::Voice::OpusCodec_EncoderShort;

template<typename T>
using Encoder_1 = ::Photon::Voice::OpusCodec_Encoder_1<T>;

using Factory = ::Photon::Voice::OpusCodec_Factory;

using Util = ::Photon::Voice::OpusCodec_Util;

static inline ::Photon::Voice::OpusCodec* New_ctor() ;

/// @brief Method .ctor, addr 0xa746738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Version, addr 0xa746734, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_Version() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusCodec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusCodec(OpusCodec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusCodec(OpusCodec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28425};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::OpusCodec) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.OpusCodec/Util
class CORDL_TYPE OpusCodec_Util : public ::System::Object {
public:
// Declarations
static inline ::Photon::Voice::OpusCodec_Util* New_ctor() ;

/// @brief Method .ctor, addr 0xa746c28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method bestEncoderSampleRate, addr 0xa7468c8, size 0x360, virtual false, abstract: false, final false
static inline int32_t bestEncoderSampleRate(int32_t  f) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusCodec_Util() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_Util", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusCodec_Util(OpusCodec_Util && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_Util", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusCodec_Util(OpusCodec_Util const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28424};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::OpusCodec_Util) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.OpusCodec/Decoder`1<T>
class CORDL_TYPE OpusCodec_Decoder_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

/// @brief Field <Error>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field decoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_decoder, put=__cordl_internal_set_decoder)) ::POpusCodec::OpusDecoder_1<T>*  decoder;

/// @brief Field frameOut, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameOut, put=__cordl_internal_set_frameOut)) ::Photon::Voice::FrameOut_1<T>*  frameOut;

/// @brief Field logger, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::ILogger*  logger;

/// @brief Field output, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output;

/// @brief Convert operator to "::Photon::Voice::IDecoder"
constexpr operator  ::Photon::Voice::IDecoder*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Input, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Input(::by_ref<::Photon::Voice::FrameBuffer>  buf) ;

static inline ::Photon::Voice::OpusCodec_Decoder_1<T>* New_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method Open, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Open(::Photon::Voice::VoiceInfo  i) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::POpusCodec::OpusDecoder_1<T>* const& __cordl_internal_get_decoder() const;

constexpr ::POpusCodec::OpusDecoder_1<T>*& __cordl_internal_get_decoder() ;

constexpr ::Photon::Voice::FrameOut_1<T>* const& __cordl_internal_get_frameOut() const;

constexpr ::Photon::Voice::FrameOut_1<T>*& __cordl_internal_get_frameOut() ;

constexpr ::Photon::Voice::ILogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::ILogger*& __cordl_internal_get_logger() ;

constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>* const& __cordl_internal_get_output() const;

constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*& __cordl_internal_get_output() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_decoder(::POpusCodec::OpusDecoder_1<T>*  value) ;

constexpr void __cordl_internal_set_frameOut(::Photon::Voice::FrameOut_1<T>*  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::ILogger*  value) ;

constexpr void __cordl_internal_set_output(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output, ::Photon::Voice::ILogger*  logger) ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// @brief Convert to "::Photon::Voice::IDecoder"
constexpr ::Photon::Voice::IDecoder* i___Photon__Voice__IDecoder() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusCodec_Decoder_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_Decoder_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusCodec_Decoder_1(OpusCodec_Decoder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_Decoder_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusCodec_Decoder_1(OpusCodec_Decoder_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28423};

/// @brief Field decoder, offset: 0x10, size: 0x8, def value: None
 ::POpusCodec::OpusDecoder_1<T>*  ___decoder;

/// @brief Field logger, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::ILogger*  ___logger;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

/// @brief Field output, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  ___output;

/// @brief Field frameOut, offset: 0x30, size: 0x8, def value: None
 ::Photon::Voice::FrameOut_1<T>*  ___frameOut;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies Photon.Voice.OpusCodec::Encoder`1<T>
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.OpusCodec/EncoderShort
class CORDL_TYPE OpusCodec_EncoderShort : public ::Photon::Voice::OpusCodec_Encoder_1<int16_t> {
public:
// Declarations
static inline ::Photon::Voice::OpusCodec_EncoderShort* New_ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method .ctor, addr 0xa746804, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method encodeTyped, addr 0xa7468b4, size 0x14, virtual true, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> encodeTyped(::ArrayW<int16_t>  buf) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusCodec_EncoderShort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_EncoderShort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusCodec_EncoderShort(OpusCodec_EncoderShort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_EncoderShort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusCodec_EncoderShort(OpusCodec_EncoderShort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28422};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::OpusCodec_EncoderShort) == 0x30, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies Photon.Voice.OpusCodec::Encoder`1<T>
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.OpusCodec/EncoderFloat
class CORDL_TYPE OpusCodec_EncoderFloat : public ::Photon::Voice::OpusCodec_Encoder_1<float_t> {
public:
// Declarations
static inline ::Photon::Voice::OpusCodec_EncoderFloat* New_ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method .ctor, addr 0xa746740, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method encodeTyped, addr 0xa7467f0, size 0x14, virtual true, abstract: false, final false
inline ::System::ArraySegment_1<uint8_t> encodeTyped(::ArrayW<float_t>  buf) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusCodec_EncoderFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_EncoderFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusCodec_EncoderFloat(OpusCodec_EncoderFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_EncoderFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusCodec_EncoderFloat(OpusCodec_EncoderFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28421};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::OpusCodec_EncoderFloat) == 0x30, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.ArraySegment`1<T>, System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.OpusCodec/Encoder`1<T>
class CORDL_TYPE OpusCodec_Encoder_1 : public ::System::Object {
public:
// Declarations
/// @brief Field EmptyBuffer, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_EmptyBuffer, put=setStaticF_EmptyBuffer)) ::System::ArraySegment_1<uint8_t>  EmptyBuffer;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_Output, put=set_Output)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  Output;

/// @brief Field <Error>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field <Output>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Output_k__BackingField, put=__cordl_internal_set__Output_k__BackingField)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  _Output_k__BackingField;

/// @brief Field disposed, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field encoder, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_encoder, put=__cordl_internal_set_encoder)) ::POpusCodec::OpusEncoder*  encoder;

/// @brief Convert operator to "::Photon::Voice::IEncoder"
constexpr operator  ::Photon::Voice::IEncoder*() noexcept;

/// @brief Convert operator to "::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>"
constexpr operator  ::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method DequeueOutput, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ArraySegment_1<uint8_t> DequeueOutput(::by_ref<::Photon::Voice::FrameFlags>  flags) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EndOfStream, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void EndOfStream() ;

/// @brief Method GetPlatformAPI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename I>
requires(::cordl_internals::reference_type_constraint<I>)
inline I GetPlatformAPI() ;

/// @brief Method Input, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Input(::ArrayW<T>  buf) ;

static inline ::Photon::Voice::OpusCodec_Encoder_1<T>* New_ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>* const& __cordl_internal_get__Output_k__BackingField() const;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*& __cordl_internal_get__Output_k__BackingField() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr ::POpusCodec::OpusEncoder* const& __cordl_internal_get_encoder() const;

constexpr ::POpusCodec::OpusEncoder*& __cordl_internal_get_encoder() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Output_k__BackingField(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_encoder(::POpusCodec::OpusEncoder*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger) ;

/// @brief Method encodeTyped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::ArraySegment_1<uint8_t> encodeTyped(::ArrayW<T>  buf) ;

static inline ::System::ArraySegment_1<uint8_t> getStaticF_EmptyBuffer() ;

/// [CompilerGenerated]
/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Error() ;

/// [CompilerGenerated]
/// @brief Method get_Output, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>* get_Output() ;

/// @brief Convert to "::Photon::Voice::IEncoder"
constexpr ::Photon::Voice::IEncoder* i___Photon__Voice__IEncoder() noexcept;

/// @brief Convert to "::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>"
constexpr ::Photon::Voice::IEncoderDirect_1<::ArrayW<T>>* i___Photon__Voice__IEncoderDirect_1___ArrayW_T__() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_EmptyBuffer(::System::ArraySegment_1<uint8_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Error, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Error(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Output, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Output(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusCodec_Encoder_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_Encoder_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusCodec_Encoder_1(OpusCodec_Encoder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_Encoder_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusCodec_Encoder_1(OpusCodec_Encoder_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28420};

/// @brief Field encoder, offset: 0x10, size: 0x8, def value: None
 ::POpusCodec::OpusEncoder*  ___encoder;

/// @brief Field disposed, offset: 0x18, size: 0x1, def value: None
 bool  ___disposed;

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Output>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  ____Output_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.OpusCodec/DecoderFactory
class CORDL_TYPE OpusCodec_DecoderFactory : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Photon::Voice::IEncoder* Create(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusCodec_DecoderFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_DecoderFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusCodec_DecoderFactory(OpusCodec_DecoderFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_DecoderFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusCodec_DecoderFactory(OpusCodec_DecoderFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28419};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::OpusCodec_DecoderFactory) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.OpusCodec/Factory
class CORDL_TYPE OpusCodec_Factory : public ::System::Object {
public:
// Declarations
/// @brief Method CreateEncoder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename B>
static inline ::Photon::Voice::IEncoder* CreateEncoder(::Photon::Voice::VoiceInfo  i, ::Photon::Voice::ILogger*  logger) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpusCodec_Factory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_Factory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpusCodec_Factory(OpusCodec_Factory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpusCodec_Factory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpusCodec_Factory(OpusCodec_Factory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28418};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::OpusCodec_Factory) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
