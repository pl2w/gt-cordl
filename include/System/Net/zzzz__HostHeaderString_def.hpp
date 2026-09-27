#pragma once
// IWYU pragma private; include "System/Net/HostHeaderString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HostHeaderString)
// Forward declare root types
namespace System::Net {
class HostHeaderString;
}
// Write type traits
MARK_REF_T(::System::Net::HostHeaderString*);
DEFINE_IL2CPP_CLASS(::System::Net::HostHeaderString*, "System.Net", "HostHeaderString");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HostHeaderString
class CORDL_TYPE HostHeaderString : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ByteCount)) int32_t  ByteCount;

 __declspec(property(get=get_Bytes)) ::ArrayW<uint8_t>  Bytes;

 __declspec(property(get=get_String, put=set_String)) ::StringW  String;

/// @brief Field m_Bytes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Bytes, put=__cordl_internal_set_m_Bytes)) ::ArrayW<uint8_t>  m_Bytes;

/// @brief Field m_Converted, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Converted, put=__cordl_internal_set_m_Converted)) bool  m_Converted;

/// @brief Field m_String, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_String, put=__cordl_internal_set_m_String)) ::StringW  m_String;

/// @brief Method Convert, addr 0xac63358, size 0xd4, virtual false, abstract: false, final false
inline void Convert() ;

/// @brief Method Copy, addr 0xac63498, size 0x44, virtual false, abstract: false, final false
inline void Copy(::ArrayW<uint8_t>  destBytes, int32_t  destByteIndex) ;

/// @brief Method Init, addr 0xac632ec, size 0x28, virtual false, abstract: false, final false
inline void Init(::StringW  s) ;

static inline ::System::Net::HostHeaderString* New_ctor() ;

static inline ::System::Net::HostHeaderString* New_ctor(::StringW  s) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_m_Bytes() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_m_Bytes() ;

constexpr bool const& __cordl_internal_get_m_Converted() const;

constexpr bool& __cordl_internal_get_m_Converted() ;

constexpr ::StringW const& __cordl_internal_get_m_String() const;

constexpr ::StringW& __cordl_internal_get_m_String() ;

constexpr void __cordl_internal_set_m_Bytes(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_m_Converted(bool  value) ;

constexpr void __cordl_internal_set_m_String(::StringW  value) ;

/// @brief Method .ctor, addr 0xac632b4, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xac63314, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  s) ;

/// @brief Method get_ByteCount, addr 0xac6345c, size 0x24, virtual false, abstract: false, final false
inline int32_t get_ByteCount() ;

/// @brief Method get_Bytes, addr 0xac63480, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Bytes() ;

/// @brief Method get_String, addr 0xac6342c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_String() ;

/// @brief Method set_String, addr 0xac63434, size 0x28, virtual false, abstract: false, final false
inline void set_String(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HostHeaderString() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HostHeaderString", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HostHeaderString(HostHeaderString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HostHeaderString", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HostHeaderString(HostHeaderString const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10559};

/// @brief Field m_Converted, offset: 0x10, size: 0x1, def value: None
 bool  ___m_Converted;

/// @brief Field m_String, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_String;

/// @brief Field m_Bytes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___m_Bytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::HostHeaderString, ___m_Converted) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::HostHeaderString, ___m_String) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::HostHeaderString, ___m_Bytes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::Net::HostHeaderString) == 0x28, "Size mismatch!");

} // namespace end def System::Net
