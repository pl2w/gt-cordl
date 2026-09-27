#pragma once
// IWYU pragma private; include "System/Net/MonoHttpDate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MonoHttpDate)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Net {
class MonoHttpDate;
}
// Write type traits
MARK_REF_T(::System::Net::MonoHttpDate*);
DEFINE_IL2CPP_CLASS(::System::Net::MonoHttpDate*, "System.Net", "MonoHttpDate");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.MonoHttpDate
class CORDL_TYPE MonoHttpDate : public ::System::Object {
public:
// Declarations
/// @brief Field asctime_date, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_asctime_date, put=setStaticF_asctime_date)) ::StringW  asctime_date;

/// @brief Field formats, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_formats, put=setStaticF_formats)) ::ArrayW<::StringW>  formats;

/// @brief Field rfc1123_date, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rfc1123_date, put=setStaticF_rfc1123_date)) ::StringW  rfc1123_date;

/// @brief Field rfc850_date, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rfc850_date, put=setStaticF_rfc850_date)) ::StringW  rfc850_date;

static inline ::System::Net::MonoHttpDate* New_ctor() ;

/// @brief Method Parse, addr 0xaca1df4, size 0xec, virtual false, abstract: false, final false
static inline ::System::DateTime Parse(::StringW  dateStr) ;

/// @brief Method .ctor, addr 0xacac618, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_asctime_date() ;

static inline ::ArrayW<::StringW> getStaticF_formats() ;

static inline ::StringW getStaticF_rfc1123_date() ;

static inline ::StringW getStaticF_rfc850_date() ;

static inline void setStaticF_asctime_date(::StringW  value) ;

static inline void setStaticF_formats(::ArrayW<::StringW>  value) ;

static inline void setStaticF_rfc1123_date(::StringW  value) ;

static inline void setStaticF_rfc850_date(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonoHttpDate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonoHttpDate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoHttpDate(MonoHttpDate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoHttpDate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoHttpDate(MonoHttpDate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10711};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::MonoHttpDate) == 0x10, "Size mismatch!");

} // namespace end def System::Net
