#pragma once
// IWYU pragma private; include "Photon/Voice/RawCodec.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RawCodec)
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
template<typename T>
class RawCodec_Decoder_1;
}
namespace Photon::Voice {
template<typename T>
class RawCodec_Encoder_1;
}
namespace Photon::Voice {
class RawCodec_ShortToFloat;
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
class RawCodec;
}
namespace Photon::Voice {
template<typename T>
class RawCodec_Decoder_1;
}
namespace Photon::Voice {
template<typename T>
class RawCodec_Encoder_1;
}
namespace Photon::Voice {
class RawCodec_ShortToFloat;
}
// Write type traits
MARK_REF_T(::Photon::Voice::RawCodec*);
MARK_GEN_REF_T_PTR(::Photon::Voice::RawCodec_Decoder_1);
MARK_GEN_REF_T_PTR(::Photon::Voice::RawCodec_Encoder_1);
MARK_REF_T(::Photon::Voice::RawCodec_ShortToFloat*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::RawCodec*, "Photon.Voice", "RawCodec");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::RawCodec_Decoder_1, "Photon.Voice", "RawCodec/Decoder`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::RawCodec_Encoder_1, "Photon.Voice", "RawCodec/Encoder`1");
DEFINE_IL2CPP_CLASS(::Photon::Voice::RawCodec_ShortToFloat*, "Photon.Voice", "RawCodec/ShortToFloat");
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.RawCodec
class CORDL_TYPE RawCodec : public ::System::Object {
public:
// Declarations
template<typename T>
using Decoder_1 = ::Photon::Voice::RawCodec_Decoder_1<T>;

template<typename T>
using Encoder_1 = ::Photon::Voice::RawCodec_Encoder_1<T>;

using ShortToFloat = ::Photon::Voice::RawCodec_ShortToFloat;

static inline ::Photon::Voice::RawCodec* New_ctor() ;

/// @brief Method .ctor, addr 0xa747ebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RawCodec() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RawCodec", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RawCodec(RawCodec && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RawCodec", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RawCodec(RawCodec const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28430};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::RawCodec) == 0x10, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// Is value type: false
// CS Name: Photon.Voice.RawCodec/ShortToFloat
class CORDL_TYPE RawCodec_ShortToFloat : public ::System::Object {
public:
// Declarations
/// @brief Field buf, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buf, put=__cordl_internal_set_buf)) ::ArrayW<float_t>  buf;

/// @brief Field output, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  output;

static inline ::Photon::Voice::RawCodec_ShortToFloat* New_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  output) ;

/// @brief Method Output, addr 0xa747f44, size 0x138, virtual false, abstract: false, final false
inline void Output(::Photon::Voice::FrameOut_1<int16_t>*  shortBuf) ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_buf() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_buf() ;

constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>* const& __cordl_internal_get_output() const;

constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*& __cordl_internal_get_output() ;

constexpr void __cordl_internal_set_buf(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_output(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  value) ;

/// @brief Method .ctor, addr 0xa747ec4, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  output) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RawCodec_ShortToFloat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RawCodec_ShortToFloat", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RawCodec_ShortToFloat(RawCodec_ShortToFloat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RawCodec_ShortToFloat", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RawCodec_ShortToFloat(RawCodec_ShortToFloat const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28429};

/// @brief Field output, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Photon::Voice::FrameOut_1<float_t>*>*  ___output;

/// @brief Field buf, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t>  ___buf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::RawCodec_ShortToFloat, ___output) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::RawCodec_ShortToFloat, ___buf) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::RawCodec_ShortToFloat) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.RawCodec/Decoder`1<T>
class CORDL_TYPE RawCodec_Decoder_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

/// @brief Field <Error>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field buf, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buf, put=__cordl_internal_set_buf)) ::ArrayW<T>  buf;

/// @brief Field output, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output;

/// @brief Field sizeofT, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeofT, put=__cordl_internal_set_sizeofT)) int32_t  sizeofT;

/// @brief Convert operator to "::Photon::Voice::IDecoder"
constexpr operator  ::Photon::Voice::IDecoder*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Input, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Input(::by_ref<::Photon::Voice::FrameBuffer>  byteBuf) ;

static inline ::Photon::Voice::RawCodec_Decoder_1<T>* New_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output) ;

/// @brief Method Open, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Open(::Photon::Voice::VoiceInfo  info) ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_buf() const;

constexpr ::ArrayW<T>& __cordl_internal_get_buf() ;

constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>* const& __cordl_internal_get_output() const;

constexpr ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*& __cordl_internal_get_output() ;

constexpr int32_t const& __cordl_internal_get_sizeofT() const;

constexpr int32_t& __cordl_internal_get_sizeofT() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_buf(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_output(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  value) ;

constexpr void __cordl_internal_set_sizeofT(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  output) ;

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
constexpr RawCodec_Decoder_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RawCodec_Decoder_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RawCodec_Decoder_1(RawCodec_Decoder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RawCodec_Decoder_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RawCodec_Decoder_1(RawCodec_Decoder_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28428};

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

/// @brief Field buf, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<T>  ___buf;

/// @brief Field sizeofT, offset: 0x20, size: 0x4, def value: None
 int32_t  ___sizeofT;

/// @brief Field output, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*  ___output;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
// Dependencies System.ArraySegment`1<T>, System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.RawCodec/Encoder`1<T>
class CORDL_TYPE RawCodec_Encoder_1 : public ::System::Object {
public:
// Declarations
/// @brief Field EmptyBuffer, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_EmptyBuffer, put=setStaticF_EmptyBuffer)) ::System::ArraySegment_1<uint8_t>  EmptyBuffer;

 __declspec(property(get=get_Error, put=set_Error)) ::StringW  Error;

 __declspec(property(get=get_Output, put=set_Output)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  Output;

/// @brief Field <Error>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Error_k__BackingField, put=__cordl_internal_set__Error_k__BackingField)) ::StringW  _Error_k__BackingField;

/// @brief Field <Output>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Output_k__BackingField, put=__cordl_internal_set__Output_k__BackingField)) ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  _Output_k__BackingField;

/// @brief Field byteBuf, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_byteBuf, put=__cordl_internal_set_byteBuf)) ::ArrayW<uint8_t>  byteBuf;

/// @brief Field sizeofT, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeofT, put=__cordl_internal_set_sizeofT)) int32_t  sizeofT;

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

static inline ::Photon::Voice::RawCodec_Encoder_1<T>* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__Error_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Error_k__BackingField() ;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>* const& __cordl_internal_get__Output_k__BackingField() const;

constexpr ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*& __cordl_internal_get__Output_k__BackingField() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_byteBuf() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_byteBuf() ;

constexpr int32_t const& __cordl_internal_get_sizeofT() const;

constexpr int32_t& __cordl_internal_get_sizeofT() ;

constexpr void __cordl_internal_set__Error_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Output_k__BackingField(::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  value) ;

constexpr void __cordl_internal_set_byteBuf(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_sizeofT(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

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
constexpr RawCodec_Encoder_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RawCodec_Encoder_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RawCodec_Encoder_1(RawCodec_Encoder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RawCodec_Encoder_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RawCodec_Encoder_1(RawCodec_Encoder_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28427};

/// [CompilerGenerated]
/// @brief Field <Error>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Error_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Output>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Action_2<::System::ArraySegment_1<uint8_t>,::Photon::Voice::FrameFlags>*  ____Output_k__BackingField;

/// @brief Field sizeofT, offset: 0x20, size: 0x4, def value: None
 int32_t  ___sizeofT;

/// @brief Field byteBuf, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___byteBuf;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
