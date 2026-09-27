#pragma once
// IWYU pragma private; include "WebSocketSharp/WebSocketFrame.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/zzzz__Fin_def.hpp"
#include "WebSocketSharp/zzzz__Mask_def.hpp"
#include "WebSocketSharp/zzzz__Opcode_def.hpp"
#include "WebSocketSharp/zzzz__Rsv_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebSocketFrame)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace WebSocketSharp {
struct Fin;
}
namespace WebSocketSharp {
struct Opcode;
}
namespace WebSocketSharp {
class PayloadData;
}
namespace WebSocketSharp {
struct Rsv;
}
namespace WebSocketSharp {
class WebSocketFrame__GetEnumerator_d__84;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass65_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass65_1;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass69_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass71_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass73_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass75_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass82_0;
}
// Forward declare root types
namespace WebSocketSharp {
class WebSocketFrame;
}
namespace WebSocketSharp {
class WebSocketFrame__GetEnumerator_d__84;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass65_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass65_1;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass69_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass71_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass73_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass75_0;
}
namespace WebSocketSharp {
class WebSocketFrame___c__DisplayClass82_0;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::WebSocketFrame*);
MARK_REF_T(::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*);
MARK_REF_T(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*);
MARK_REF_T(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1*);
MARK_REF_T(::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0*);
MARK_REF_T(::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0*);
MARK_REF_T(::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0*);
MARK_REF_T(::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0*);
MARK_REF_T(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketFrame*, "WebSocketSharp", "WebSocketFrame");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84*, "WebSocketSharp", "WebSocketFrame/<GetEnumerator>d__84");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*, "WebSocketSharp", "WebSocketFrame/<>c__DisplayClass65_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1*, "WebSocketSharp", "WebSocketFrame/<>c__DisplayClass65_1");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0*, "WebSocketSharp", "WebSocketFrame/<>c__DisplayClass69_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0*, "WebSocketSharp", "WebSocketFrame/<>c__DisplayClass71_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0*, "WebSocketSharp", "WebSocketFrame/<>c__DisplayClass73_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0*, "WebSocketSharp", "WebSocketFrame/<>c__DisplayClass75_0");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0*, "WebSocketSharp", "WebSocketFrame/<>c__DisplayClass82_0");
// Dependencies System.Object, WebSocketSharp.Fin, WebSocketSharp.Mask, WebSocketSharp.Opcode, WebSocketSharp.Rsv
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketFrame
class CORDL_TYPE WebSocketFrame : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__84 = ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84;

using __c__DisplayClass65_0 = ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0;

using __c__DisplayClass65_1 = ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1;

using __c__DisplayClass69_0 = ::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0;

using __c__DisplayClass71_0 = ::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0;

using __c__DisplayClass73_0 = ::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0;

using __c__DisplayClass75_0 = ::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0;

using __c__DisplayClass82_0 = ::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0;

 __declspec(property(get=get_ExactPayloadLength)) uint64_t  ExactPayloadLength;

 __declspec(property(get=get_ExtendedPayloadLengthWidth)) int32_t  ExtendedPayloadLengthWidth;

 __declspec(property(get=get_IsClose)) bool  IsClose;

 __declspec(property(get=get_IsCompressed)) bool  IsCompressed;

 __declspec(property(get=get_IsContinuation)) bool  IsContinuation;

 __declspec(property(get=get_IsData)) bool  IsData;

 __declspec(property(get=get_IsFinal)) bool  IsFinal;

 __declspec(property(get=get_IsFragment)) bool  IsFragment;

 __declspec(property(get=get_IsMasked)) bool  IsMasked;

 __declspec(property(get=get_IsPing)) bool  IsPing;

 __declspec(property(get=get_IsPong)) bool  IsPong;

 __declspec(property(get=get_IsText)) bool  IsText;

 __declspec(property(get=get_Length)) uint64_t  Length;

 __declspec(property(get=get_Opcode)) ::WebSocketSharp::Opcode  Opcode;

 __declspec(property(get=get_PayloadData)) ::WebSocketSharp::PayloadData*  PayloadData;

 __declspec(property(get=get_Rsv2)) ::WebSocketSharp::Rsv  Rsv2;

 __declspec(property(get=get_Rsv3)) ::WebSocketSharp::Rsv  Rsv3;

/// @brief Field _extPayloadLength, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__extPayloadLength, put=__cordl_internal_set__extPayloadLength)) ::ArrayW<uint8_t>  _extPayloadLength;

/// @brief Field _fin, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__fin, put=__cordl_internal_set__fin)) ::WebSocketSharp::Fin  _fin;

/// @brief Field _mask, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__mask, put=__cordl_internal_set__mask)) ::WebSocketSharp::Mask  _mask;

/// @brief Field _maskingKey, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__maskingKey, put=__cordl_internal_set__maskingKey)) ::ArrayW<uint8_t>  _maskingKey;

/// @brief Field _opcode, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__opcode, put=__cordl_internal_set__opcode)) ::WebSocketSharp::Opcode  _opcode;

/// @brief Field _payloadData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__payloadData, put=__cordl_internal_set__payloadData)) ::WebSocketSharp::PayloadData*  _payloadData;

/// @brief Field _payloadLength, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__payloadLength, put=__cordl_internal_set__payloadLength)) uint8_t  _payloadLength;

/// @brief Field _rsv1, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__rsv1, put=__cordl_internal_set__rsv1)) ::WebSocketSharp::Rsv  _rsv1;

/// @brief Field _rsv2, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__rsv2, put=__cordl_internal_set__rsv2)) ::WebSocketSharp::Rsv  _rsv2;

/// @brief Field _rsv3, offset 0x3b, size 0x1 
 __declspec(property(get=__cordl_internal_get__rsv3, put=__cordl_internal_set__rsv3)) ::WebSocketSharp::Rsv  _rsv3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<uint8_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method CreateCloseFrame, addr 0xb97a284, size 0x74, virtual false, abstract: false, final false
static inline ::WebSocketSharp::WebSocketFrame* CreateCloseFrame(::WebSocketSharp::PayloadData*  payloadData, bool  mask) ;

/// @brief Method CreatePongFrame, addr 0xb97d4b4, size 0x74, virtual false, abstract: false, final false
static inline ::WebSocketSharp::WebSocketFrame* CreatePongFrame(::WebSocketSharp::PayloadData*  payloadData, bool  mask) ;

/// @brief Method GetEnumerator, addr 0xb981eb4, size 0x6c, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<uint8_t>* GetEnumerator() ;

static inline ::WebSocketSharp::WebSocketFrame* New_ctor() ;

static inline ::WebSocketSharp::WebSocketFrame* New_ctor(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  data, bool  compressed, bool  mask) ;

static inline ::WebSocketSharp::WebSocketFrame* New_ctor(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::WebSocketSharp::PayloadData*  payloadData, bool  compressed, bool  mask) ;

/// @brief Method PrintToString, addr 0xb97d8b4, size 0xc, virtual false, abstract: false, final false
inline ::StringW PrintToString(bool  dumped) ;

/// @brief Method ReadFrameAsync, addr 0xb97f3c4, size 0x114, virtual false, abstract: false, final false
static inline void ReadFrameAsync(::System::IO::Stream*  stream, bool  unmask, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb981f5c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToArray, addr 0xb97a2f8, size 0x330, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> ToArray() ;

/// @brief Method ToString, addr 0xb981f48, size 0x14, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Unmask, addr 0xb97a73c, size 0x88, virtual false, abstract: false, final false
inline void Unmask() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__extPayloadLength() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__extPayloadLength() ;

constexpr ::WebSocketSharp::Fin const& __cordl_internal_get__fin() const;

constexpr ::WebSocketSharp::Fin& __cordl_internal_get__fin() ;

constexpr ::WebSocketSharp::Mask const& __cordl_internal_get__mask() const;

constexpr ::WebSocketSharp::Mask& __cordl_internal_get__mask() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__maskingKey() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__maskingKey() ;

constexpr ::WebSocketSharp::Opcode const& __cordl_internal_get__opcode() const;

constexpr ::WebSocketSharp::Opcode& __cordl_internal_get__opcode() ;

constexpr ::WebSocketSharp::PayloadData* const& __cordl_internal_get__payloadData() const;

constexpr ::WebSocketSharp::PayloadData*& __cordl_internal_get__payloadData() ;

constexpr uint8_t const& __cordl_internal_get__payloadLength() const;

constexpr uint8_t& __cordl_internal_get__payloadLength() ;

constexpr ::WebSocketSharp::Rsv const& __cordl_internal_get__rsv1() const;

constexpr ::WebSocketSharp::Rsv& __cordl_internal_get__rsv1() ;

constexpr ::WebSocketSharp::Rsv const& __cordl_internal_get__rsv2() const;

constexpr ::WebSocketSharp::Rsv& __cordl_internal_get__rsv2() ;

constexpr ::WebSocketSharp::Rsv const& __cordl_internal_get__rsv3() const;

constexpr ::WebSocketSharp::Rsv& __cordl_internal_get__rsv3() ;

constexpr void __cordl_internal_set__extPayloadLength(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__fin(::WebSocketSharp::Fin  value) ;

constexpr void __cordl_internal_set__mask(::WebSocketSharp::Mask  value) ;

constexpr void __cordl_internal_set__maskingKey(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__opcode(::WebSocketSharp::Opcode  value) ;

constexpr void __cordl_internal_set__payloadData(::WebSocketSharp::PayloadData*  value) ;

constexpr void __cordl_internal_set__payloadLength(uint8_t  value) ;

constexpr void __cordl_internal_set__rsv1(::WebSocketSharp::Rsv  value) ;

constexpr void __cordl_internal_set__rsv2(::WebSocketSharp::Rsv  value) ;

constexpr void __cordl_internal_set__rsv3(::WebSocketSharp::Rsv  value) ;

/// @brief Method .ctor, addr 0xb98074c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb97e238, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  data, bool  compressed, bool  mask) ;

/// @brief Method .ctor, addr 0xb980754, size 0x1cc, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::WebSocketSharp::PayloadData*  payloadData, bool  compressed, bool  mask) ;

/// @brief Method createMaskingKey, addr 0xb980920, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> createMaskingKey() ;

/// @brief Method dump, addr 0xb980ac8, size 0x600, virtual false, abstract: false, final false
static inline ::StringW dump(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method get_ExactPayloadLength, addr 0xb9809bc, size 0x9c, virtual false, abstract: false, final false
inline uint64_t get_ExactPayloadLength() ;

/// @brief Method get_ExtendedPayloadLengthWidth, addr 0xb980a58, size 0x20, virtual false, abstract: false, final false
inline int32_t get_ExtendedPayloadLengthWidth() ;

/// @brief Method get_IsClose, addr 0xb97d7f0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsClose() ;

/// @brief Method get_IsCompressed, addr 0xb979a04, size 0x10, virtual false, abstract: false, final false
inline bool get_IsCompressed() ;

/// @brief Method get_IsContinuation, addr 0xb97d288, size 0x10, virtual false, abstract: false, final false
inline bool get_IsContinuation() ;

/// @brief Method get_IsData, addr 0xb9799f0, size 0x14, virtual false, abstract: false, final false
inline bool get_IsData() ;

/// @brief Method get_IsFinal, addr 0xb97d298, size 0x10, virtual false, abstract: false, final false
inline bool get_IsFinal() ;

/// @brief Method get_IsFragment, addr 0xb97d7b0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsFragment() ;

/// @brief Method get_IsMasked, addr 0xb9799e0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsMasked() ;

/// @brief Method get_IsPing, addr 0xb97d7d0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPing() ;

/// @brief Method get_IsPong, addr 0xb97d7e0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsPong() ;

/// @brief Method get_IsText, addr 0xb980a78, size 0x10, virtual false, abstract: false, final false
inline bool get_IsText() ;

/// @brief Method get_Length, addr 0xb980a88, size 0x40, virtual false, abstract: false, final false
inline uint64_t get_Length() ;

/// @brief Method get_Opcode, addr 0xb977aac, size 0x8, virtual false, abstract: false, final false
inline ::WebSocketSharp::Opcode get_Opcode() ;

/// @brief Method get_PayloadData, addr 0xb977ab4, size 0x8, virtual false, abstract: false, final false
inline ::WebSocketSharp::PayloadData* get_PayloadData() ;

/// @brief Method get_Rsv2, addr 0xb979a14, size 0x8, virtual false, abstract: false, final false
inline ::WebSocketSharp::Rsv get_Rsv2() ;

/// @brief Method get_Rsv3, addr 0xb979a1c, size 0x8, virtual false, abstract: false, final false
inline ::WebSocketSharp::Rsv get_Rsv3() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<uint8_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<uint8_t>* i___System__Collections__Generic__IEnumerable_1_uint8_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Method print, addr 0xb9810d0, size 0x49c, virtual false, abstract: false, final false
static inline ::StringW print(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method processHeader, addr 0xb98161c, size 0x1c4, virtual false, abstract: false, final false
static inline ::WebSocketSharp::WebSocketFrame* processHeader(::ArrayW<uint8_t>  header) ;

/// @brief Method readExtendedPayloadLengthAsync, addr 0xb9817e0, size 0x1ac, virtual false, abstract: false, final false
static inline void readExtendedPayloadLengthAsync(::System::IO::Stream*  stream, ::WebSocketSharp::WebSocketFrame*  frame, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error) ;

/// @brief Method readHeaderAsync, addr 0xb981994, size 0xfc, virtual false, abstract: false, final false
static inline void readHeaderAsync(::System::IO::Stream*  stream, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error) ;

/// @brief Method readMaskingKeyAsync, addr 0xb981a98, size 0x19c, virtual false, abstract: false, final false
static inline void readMaskingKeyAsync(::System::IO::Stream*  stream, ::WebSocketSharp::WebSocketFrame*  frame, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error) ;

/// @brief Method readPayloadDataAsync, addr 0xb981c3c, size 0x268, virtual false, abstract: false, final false
static inline void readPayloadDataAsync(::System::IO::Stream*  stream, ::WebSocketSharp::WebSocketFrame*  frame, ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed, ::System::Action_1<::System::Exception*>*  error) ;

/// @brief Method utf8Decode, addr 0xb98156c, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW utf8Decode(::ArrayW<uint8_t>  bytes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketFrame() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketFrame(WebSocketFrame && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketFrame(WebSocketFrame const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30351};

/// @brief Field _extPayloadLength, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____extPayloadLength;

/// @brief Field _fin, offset: 0x18, size: 0x1, def value: None
 ::WebSocketSharp::Fin  ____fin;

/// @brief Field _mask, offset: 0x19, size: 0x1, def value: None
 ::WebSocketSharp::Mask  ____mask;

/// @brief Field _maskingKey, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____maskingKey;

/// @brief Field _opcode, offset: 0x28, size: 0x1, def value: None
 ::WebSocketSharp::Opcode  ____opcode;

/// @brief Field _payloadData, offset: 0x30, size: 0x8, def value: None
 ::WebSocketSharp::PayloadData*  ____payloadData;

/// @brief Field _payloadLength, offset: 0x38, size: 0x1, def value: None
 uint8_t  ____payloadLength;

/// @brief Field _rsv1, offset: 0x39, size: 0x1, def value: None
 ::WebSocketSharp::Rsv  ____rsv1;

/// @brief Field _rsv2, offset: 0x3a, size: 0x1, def value: None
 ::WebSocketSharp::Rsv  ____rsv2;

/// @brief Field _rsv3, offset: 0x3b, size: 0x1, def value: None
 ::WebSocketSharp::Rsv  ____rsv3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____extPayloadLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____fin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____mask) == 0x19, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____maskingKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____opcode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____payloadData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____payloadLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____rsv1) == 0x39, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____rsv2) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame, ____rsv3) == 0x3b, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketFrame) == 0x40, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketFrame/<GetEnumerator>d__84
class CORDL_TYPE WebSocketFrame__GetEnumerator_d__84 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Byte__get_Current)) uint8_t  System_Collections_Generic_IEnumerator_System_Byte__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) uint8_t  __2__current;

/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::WebSocketSharp::WebSocketFrame*  __4__this;

/// @brief Field <>s__1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___s__1, put=__cordl_internal_set___s__1)) ::ArrayW<uint8_t>  __s__1;

/// @brief Field <>s__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___s__2, put=__cordl_internal_set___s__2)) int32_t  __s__2;

/// @brief Field <b>5__3, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__b_5__3, put=__cordl_internal_set__b_5__3)) uint8_t  _b_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<uint8_t>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb9826c4, size 0xc0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Byte>.get_Current, addr 0xb982784, size 0x8, virtual true, abstract: false, final true
inline uint8_t System_Collections_Generic_IEnumerator_System_Byte__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb98278c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb9827c4, size 0x28, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb9826c0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr uint8_t const& __cordl_internal_get___2__current() const;

constexpr uint8_t& __cordl_internal_get___2__current() ;

constexpr ::WebSocketSharp::WebSocketFrame* const& __cordl_internal_get___4__this() const;

constexpr ::WebSocketSharp::WebSocketFrame*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get___s__1() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get___s__1() ;

constexpr int32_t const& __cordl_internal_get___s__2() const;

constexpr int32_t& __cordl_internal_get___s__2() ;

constexpr uint8_t const& __cordl_internal_get__b_5__3() const;

constexpr uint8_t& __cordl_internal_get__b_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(uint8_t  value) ;

constexpr void __cordl_internal_set___4__this(::WebSocketSharp::WebSocketFrame*  value) ;

constexpr void __cordl_internal_set___s__1(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set___s__2(int32_t  value) ;

constexpr void __cordl_internal_set__b_5__3(uint8_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb981f20, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<uint8_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<uint8_t>* i___System__Collections__Generic__IEnumerator_1_uint8_t_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketFrame__GetEnumerator_d__84() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame__GetEnumerator_d__84", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketFrame__GetEnumerator_d__84(WebSocketFrame__GetEnumerator_d__84 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame__GetEnumerator_d__84", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketFrame__GetEnumerator_d__84(WebSocketFrame__GetEnumerator_d__84 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30350};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x14, size: 0x1, def value: None
 uint8_t  _____2__current;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::WebSocketSharp::WebSocketFrame*  _____4__this;

/// @brief Field <>s__1, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _____s__1;

/// @brief Field <>s__2, offset: 0x28, size: 0x4, def value: None
 int32_t  _____s__2;

/// @brief Field <b>5__3, offset: 0x2c, size: 0x1, def value: None
 uint8_t  ____b_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84, _____2__current) == 0x14, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84, _____s__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84, _____s__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84, ____b_5__3) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketFrame__GetEnumerator_d__84) == 0x30, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketFrame/<>c__DisplayClass82_0
class CORDL_TYPE WebSocketFrame___c__DisplayClass82_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__1, put=__cordl_internal_set___9__1)) ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  __9__1;

/// @brief Field <>9__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__2, put=__cordl_internal_set___9__2)) ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  __9__2;

/// @brief Field <>9__3, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__3, put=__cordl_internal_set___9__3)) ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  __9__3;

/// @brief Field completed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed;

/// @brief Field error, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::System::Action_1<::System::Exception*>*  error;

/// @brief Field stream, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_stream, put=__cordl_internal_set_stream)) ::System::IO::Stream*  stream;

/// @brief Field unmask, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_unmask, put=__cordl_internal_set_unmask)) bool  unmask;

static inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0* New_ctor() ;

/// @brief Method <ReadFrameAsync>b__0, addr 0xb982470, size 0xac, virtual false, abstract: false, final false
inline void _ReadFrameAsync_b__0(::WebSocketSharp::WebSocketFrame*  frame) ;

/// @brief Method <ReadFrameAsync>b__1, addr 0xb98251c, size 0xac, virtual false, abstract: false, final false
inline void _ReadFrameAsync_b__1(::WebSocketSharp::WebSocketFrame*  frame1) ;

/// @brief Method <ReadFrameAsync>b__2, addr 0xb9825c8, size 0xac, virtual false, abstract: false, final false
inline void _ReadFrameAsync_b__2(::WebSocketSharp::WebSocketFrame*  frame2) ;

/// @brief Method <ReadFrameAsync>b__3, addr 0xb982674, size 0x4c, virtual false, abstract: false, final false
inline void _ReadFrameAsync_b__3(::WebSocketSharp::WebSocketFrame*  frame3) ;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& __cordl_internal_get___9__1() const;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& __cordl_internal_get___9__1() ;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& __cordl_internal_get___9__2() const;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& __cordl_internal_get___9__2() ;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& __cordl_internal_get___9__3() const;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& __cordl_internal_get___9__3() ;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& __cordl_internal_get_completed() const;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_error() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_error() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get_stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get_stream() ;

constexpr bool const& __cordl_internal_get_unmask() const;

constexpr bool& __cordl_internal_get_unmask() ;

constexpr void __cordl_internal_set___9__1(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value) ;

constexpr void __cordl_internal_set___9__2(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value) ;

constexpr void __cordl_internal_set___9__3(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value) ;

constexpr void __cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value) ;

constexpr void __cordl_internal_set_error(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_stream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set_unmask(bool  value) ;

/// @brief Method .ctor, addr 0xb981eac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketFrame___c__DisplayClass82_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass82_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketFrame___c__DisplayClass82_0(WebSocketFrame___c__DisplayClass82_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass82_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketFrame___c__DisplayClass82_0(WebSocketFrame___c__DisplayClass82_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30349};

/// @brief Field stream, offset: 0x10, size: 0x8, def value: None
 ::System::IO::Stream*  ___stream;

/// @brief Field unmask, offset: 0x18, size: 0x1, def value: None
 bool  ___unmask;

/// @brief Field completed, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  ___completed;

/// @brief Field error, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___error;

/// @brief Field <>9__3, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  _____9__3;

/// @brief Field <>9__2, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  _____9__2;

/// @brief Field <>9__1, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  _____9__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0, ___stream) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0, ___unmask) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0, ___completed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0, ___error) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0, _____9__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0, _____9__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0, _____9__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketFrame___c__DisplayClass82_0) == 0x48, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketFrame/<>c__DisplayClass75_0
class CORDL_TYPE WebSocketFrame___c__DisplayClass75_0 : public ::System::Object {
public:
// Declarations
/// @brief Field completed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed;

/// @brief Field frame, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_frame, put=__cordl_internal_set_frame)) ::WebSocketSharp::WebSocketFrame*  frame;

/// @brief Field len, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_len, put=__cordl_internal_set_len)) int64_t  len;

static inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0* New_ctor() ;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& __cordl_internal_get_completed() const;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& __cordl_internal_get_completed() ;

constexpr ::WebSocketSharp::WebSocketFrame* const& __cordl_internal_get_frame() const;

constexpr ::WebSocketSharp::WebSocketFrame*& __cordl_internal_get_frame() ;

constexpr int64_t const& __cordl_internal_get_len() const;

constexpr int64_t& __cordl_internal_get_len() ;

constexpr void __cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value) ;

constexpr void __cordl_internal_set_frame(::WebSocketSharp::WebSocketFrame*  value) ;

constexpr void __cordl_internal_set_len(int64_t  value) ;

/// @brief Method .ctor, addr 0xb981ea4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <readPayloadDataAsync>b__0, addr 0xb982370, size 0x100, virtual false, abstract: false, final false
inline void _readPayloadDataAsync_b__0(::ArrayW<uint8_t>  bytes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketFrame___c__DisplayClass75_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass75_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketFrame___c__DisplayClass75_0(WebSocketFrame___c__DisplayClass75_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass75_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketFrame___c__DisplayClass75_0(WebSocketFrame___c__DisplayClass75_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30348};

/// @brief Field len, offset: 0x10, size: 0x8, def value: None
 int64_t  ___len;

/// @brief Field frame, offset: 0x18, size: 0x8, def value: None
 ::WebSocketSharp::WebSocketFrame*  ___frame;

/// @brief Field completed, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  ___completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0, ___len) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0, ___frame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0, ___completed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketFrame___c__DisplayClass75_0) == 0x28, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketFrame/<>c__DisplayClass73_0
class CORDL_TYPE WebSocketFrame___c__DisplayClass73_0 : public ::System::Object {
public:
// Declarations
/// @brief Field completed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed;

/// @brief Field frame, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_frame, put=__cordl_internal_set_frame)) ::WebSocketSharp::WebSocketFrame*  frame;

/// @brief Field len, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_len, put=__cordl_internal_set_len)) int32_t  len;

static inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0* New_ctor() ;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& __cordl_internal_get_completed() const;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& __cordl_internal_get_completed() ;

constexpr ::WebSocketSharp::WebSocketFrame* const& __cordl_internal_get_frame() const;

constexpr ::WebSocketSharp::WebSocketFrame*& __cordl_internal_get_frame() ;

constexpr int32_t const& __cordl_internal_get_len() const;

constexpr int32_t& __cordl_internal_get_len() ;

constexpr void __cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value) ;

constexpr void __cordl_internal_set_frame(::WebSocketSharp::WebSocketFrame*  value) ;

constexpr void __cordl_internal_set_len(int32_t  value) ;

/// @brief Method .ctor, addr 0xb981c34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <readMaskingKeyAsync>b__0, addr 0xb9822d4, size 0x9c, virtual false, abstract: false, final false
inline void _readMaskingKeyAsync_b__0(::ArrayW<uint8_t>  bytes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketFrame___c__DisplayClass73_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass73_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketFrame___c__DisplayClass73_0(WebSocketFrame___c__DisplayClass73_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass73_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketFrame___c__DisplayClass73_0(WebSocketFrame___c__DisplayClass73_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30347};

/// @brief Field len, offset: 0x10, size: 0x4, def value: None
 int32_t  ___len;

/// @brief Field frame, offset: 0x18, size: 0x8, def value: None
 ::WebSocketSharp::WebSocketFrame*  ___frame;

/// @brief Field completed, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  ___completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0, ___len) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0, ___frame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0, ___completed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketFrame___c__DisplayClass73_0) == 0x28, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketFrame/<>c__DisplayClass71_0
class CORDL_TYPE WebSocketFrame___c__DisplayClass71_0 : public ::System::Object {
public:
// Declarations
/// @brief Field completed, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed;

static inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0* New_ctor() ;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& __cordl_internal_get_completed() const;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& __cordl_internal_get_completed() ;

constexpr void __cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value) ;

/// @brief Method .ctor, addr 0xb981a90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <readHeaderAsync>b__0, addr 0xb9822a0, size 0x34, virtual false, abstract: false, final false
inline void _readHeaderAsync_b__0(::ArrayW<uint8_t>  bytes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketFrame___c__DisplayClass71_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass71_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketFrame___c__DisplayClass71_0(WebSocketFrame___c__DisplayClass71_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass71_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketFrame___c__DisplayClass71_0(WebSocketFrame___c__DisplayClass71_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30346};

/// @brief Field completed, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  ___completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0, ___completed) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketFrame___c__DisplayClass71_0) == 0x18, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketFrame/<>c__DisplayClass69_0
class CORDL_TYPE WebSocketFrame___c__DisplayClass69_0 : public ::System::Object {
public:
// Declarations
/// @brief Field completed, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  completed;

/// @brief Field frame, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_frame, put=__cordl_internal_set_frame)) ::WebSocketSharp::WebSocketFrame*  frame;

/// @brief Field len, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_len, put=__cordl_internal_set_len)) int32_t  len;

static inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0* New_ctor() ;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& __cordl_internal_get_completed() const;

constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& __cordl_internal_get_completed() ;

constexpr ::WebSocketSharp::WebSocketFrame* const& __cordl_internal_get_frame() const;

constexpr ::WebSocketSharp::WebSocketFrame*& __cordl_internal_get_frame() ;

constexpr int32_t const& __cordl_internal_get_len() const;

constexpr int32_t& __cordl_internal_get_len() ;

constexpr void __cordl_internal_set_completed(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value) ;

constexpr void __cordl_internal_set_frame(::WebSocketSharp::WebSocketFrame*  value) ;

constexpr void __cordl_internal_set_len(int32_t  value) ;

/// @brief Method .ctor, addr 0xb98198c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <readExtendedPayloadLengthAsync>b__0, addr 0xb982204, size 0x9c, virtual false, abstract: false, final false
inline void _readExtendedPayloadLengthAsync_b__0(::ArrayW<uint8_t>  bytes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketFrame___c__DisplayClass69_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass69_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketFrame___c__DisplayClass69_0(WebSocketFrame___c__DisplayClass69_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass69_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketFrame___c__DisplayClass69_0(WebSocketFrame___c__DisplayClass69_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30345};

/// @brief Field len, offset: 0x10, size: 0x4, def value: None
 int32_t  ___len;

/// @brief Field frame, offset: 0x18, size: 0x8, def value: None
 ::WebSocketSharp::WebSocketFrame*  ___frame;

/// @brief Field completed, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  ___completed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0, ___len) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0, ___frame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0, ___completed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketFrame___c__DisplayClass69_0) == 0x28, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_1
class CORDL_TYPE WebSocketFrame___c__DisplayClass65_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*  CS$__8__locals1;

/// @brief Field lineCnt, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineCnt, put=__cordl_internal_set_lineCnt)) int64_t  lineCnt;

static inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1* New_ctor() ;

constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr int64_t const& __cordl_internal_get_lineCnt() const;

constexpr int64_t& __cordl_internal_get_lineCnt() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*  value) ;

constexpr void __cordl_internal_set_lineCnt(int64_t  value) ;

/// @brief Method .ctor, addr 0xb982020, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <dump>b__1, addr 0xb982028, size 0x1dc, virtual false, abstract: false, final false
inline void _dump_b__1(::StringW  arg1, ::StringW  arg2, ::StringW  arg3, ::StringW  arg4) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketFrame___c__DisplayClass65_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass65_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketFrame___c__DisplayClass65_1(WebSocketFrame___c__DisplayClass65_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass65_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketFrame___c__DisplayClass65_1(WebSocketFrame___c__DisplayClass65_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30344};

/// @brief Field lineCnt, offset: 0x10, size: 0x8, def value: None
 int64_t  ___lineCnt;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1, ___lineCnt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_1) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketFrame/<>c__DisplayClass65_0
class CORDL_TYPE WebSocketFrame___c__DisplayClass65_0 : public ::System::Object {
public:
// Declarations
/// @brief Field buff, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buff, put=__cordl_internal_set_buff)) ::System::Text::StringBuilder*  buff;

/// @brief Field lineFmt, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineFmt, put=__cordl_internal_set_lineFmt)) ::StringW  lineFmt;

static inline ::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0* New_ctor() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_buff() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_buff() ;

constexpr ::StringW const& __cordl_internal_get_lineFmt() const;

constexpr ::StringW& __cordl_internal_get_lineFmt() ;

constexpr void __cordl_internal_set_buff(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_lineFmt(::StringW  value) ;

/// @brief Method .ctor, addr 0xb9810c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <dump>b__0, addr 0xb981f60, size 0xc0, virtual false, abstract: false, final false
inline ::System::Action_4<::StringW,::StringW,::StringW,::StringW>* _dump_b__0() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketFrame___c__DisplayClass65_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass65_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketFrame___c__DisplayClass65_0(WebSocketFrame___c__DisplayClass65_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketFrame___c__DisplayClass65_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketFrame___c__DisplayClass65_0(WebSocketFrame___c__DisplayClass65_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30343};

/// @brief Field buff, offset: 0x10, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___buff;

/// @brief Field lineFmt, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___lineFmt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0, ___buff) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0, ___lineFmt) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketFrame___c__DisplayClass65_0) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp
