#pragma once
// IWYU pragma private; include "Modio/Error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Errors/zzzz__ErrorCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Error)
namespace Modio::Errors {
struct ErrorCode;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio {
class Error;
}
// Write type traits
MARK_REF_T(::Modio::Error*);
DEFINE_IL2CPP_CLASS(::Modio::Error*, "Modio", "Error");
// Dependencies Modio.Errors.ErrorCode, System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.Error
class CORDL_TYPE Error : public ::System::Object {
public:
// Declarations
/// @brief Field Code, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Code, put=__cordl_internal_set_Code)) ::Modio::Errors::ErrorCode  Code;

/// @brief Field CustomMessage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomMessage, put=__cordl_internal_set_CustomMessage)) ::StringW  CustomMessage;

 __declspec(property(get=get_IsSilent)) bool  IsSilent;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Error*  None;

/// @brief Field Unknown, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Unknown, put=setStaticF_Unknown)) ::Modio::Error*  Unknown;

/// @brief Convert operator to "::System::IEquatable_1<::Modio::Error*>"
constexpr operator  ::System::IEquatable_1<::Modio::Error*>*() noexcept;

/// @brief Method Equals, addr 0xa004d40, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa004d20, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::Modio::Error*  other) ;

/// @brief Method GetHashCode, addr 0xa004ddc, size 0xc, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetMessage, addr 0xa004bf8, size 0x2c, virtual true, abstract: false, final false
inline ::StringW GetMessage() ;

static inline ::Modio::Error* New_ctor(::Modio::Errors::ErrorCode  code) ;

static inline ::Modio::Error* New_ctor(::Modio::Errors::ErrorCode  code, ::StringW  customMessage) ;

/// @brief Method ToString, addr 0xa004cbc, size 0x64, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::Modio::Errors::ErrorCode const& __cordl_internal_get_Code() const;

constexpr ::Modio::Errors::ErrorCode& __cordl_internal_get_Code() ;

constexpr ::StringW const& __cordl_internal_get_CustomMessage() const;

constexpr ::StringW& __cordl_internal_get_CustomMessage() ;

constexpr void __cordl_internal_set_Code(::Modio::Errors::ErrorCode  value) ;

constexpr void __cordl_internal_set_CustomMessage(::StringW  value) ;

/// @brief Method .ctor, addr 0xa004b78, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::ErrorCode  code) ;

/// @brief Method .ctor, addr 0xa004ba0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::ErrorCode  code, ::StringW  customMessage) ;

static inline ::Modio::Error* getStaticF_None() ;

static inline ::Modio::Error* getStaticF_Unknown() ;

/// @brief Method get_IsSilent, addr 0xa004bd8, size 0x20, virtual false, abstract: false, final false
inline bool get_IsSilent() ;

/// @brief Convert to "::System::IEquatable_1<::Modio::Error*>"
constexpr ::System::IEquatable_1<::Modio::Error*>* i___System__IEquatable_1___Modio__Error__() noexcept;

/// @brief Method op_Explicit, addr 0xa004c40, size 0x7c, virtual false, abstract: false, final false
static inline ::Modio::Error* op_Explicit___Modio__Error_(::Modio::Errors::ErrorCode  errorCode) ;

/// @brief Method op_Implicit, addr 0xa004c24, size 0x1c, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Modio::Error*  error) ;

static inline void setStaticF_None(::Modio::Error*  value) ;

static inline void setStaticF_Unknown(::Modio::Error*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Error() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Error(Error && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Error(Error const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17449};

/// @brief Field Code, offset: 0x10, size: 0x8, def value: None
 ::Modio::Errors::ErrorCode  ___Code;

/// @brief Field CustomMessage, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CustomMessage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Error, ___Code) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Error, ___CustomMessage) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Error) == 0x20, "Size mismatch!");

} // namespace end def Modio
