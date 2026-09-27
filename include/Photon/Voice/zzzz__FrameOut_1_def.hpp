#pragma once
// IWYU pragma private; include "Photon/Voice/FrameOut_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FrameOut_1)
// Forward declare root types
namespace Photon::Voice {
template<typename T>
class FrameOut_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Photon::Voice::FrameOut_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Photon::Voice::FrameOut_1, "Photon.Voice", "FrameOut`1");
// Dependencies System.Object
namespace Photon::Voice {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Photon.Voice.FrameOut`1<T>
class CORDL_TYPE FrameOut_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Buf, put=set_Buf)) ::ArrayW<T>  Buf;

 __declspec(property(get=get_EndOfStream, put=set_EndOfStream)) bool  EndOfStream;

/// @brief Field <Buf>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Buf_k__BackingField, put=__cordl_internal_set__Buf_k__BackingField)) ::ArrayW<T>  _Buf_k__BackingField;

/// @brief Field <EndOfStream>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__EndOfStream_k__BackingField, put=__cordl_internal_set__EndOfStream_k__BackingField)) bool  _EndOfStream_k__BackingField;

static inline ::Photon::Voice::FrameOut_1<T>* New_ctor(::ArrayW<T>  buf, bool  endOfStream) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Photon::Voice::FrameOut_1<T>* Set(::ArrayW<T>  buf, bool  endOfStream) ;

constexpr ::ArrayW<T> const& __cordl_internal_get__Buf_k__BackingField() const;

constexpr ::ArrayW<T>& __cordl_internal_get__Buf_k__BackingField() ;

constexpr bool const& __cordl_internal_get__EndOfStream_k__BackingField() const;

constexpr bool& __cordl_internal_get__EndOfStream_k__BackingField() ;

constexpr void __cordl_internal_set__Buf_k__BackingField(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__EndOfStream_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  buf, bool  endOfStream) ;

/// [CompilerGenerated]
/// @brief Method get_Buf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> get_Buf() ;

/// [CompilerGenerated]
/// @brief Method get_EndOfStream, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_EndOfStream() ;

/// [CompilerGenerated]
/// @brief Method set_Buf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Buf(::ArrayW<T>  value) ;

/// [CompilerGenerated]
/// @brief Method set_EndOfStream, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_EndOfStream(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FrameOut_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FrameOut_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FrameOut_1(FrameOut_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FrameOut_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FrameOut_1(FrameOut_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28436};

/// [CompilerGenerated]
/// @brief Field <Buf>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ____Buf_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <EndOfStream>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____EndOfStream_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Photon::Voice
