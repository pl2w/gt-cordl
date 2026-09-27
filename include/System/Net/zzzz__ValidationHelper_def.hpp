#pragma once
// IWYU pragma private; include "System/Net/ValidationHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidationHelper)
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class ValidationHelper;
}
// Write type traits
MARK_REF_T(::System::Net::ValidationHelper*);
DEFINE_IL2CPP_CLASS(::System::Net::ValidationHelper*, "System.Net", "ValidationHelper");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ValidationHelper
class CORDL_TYPE ValidationHelper : public ::System::Object {
public:
// Declarations
/// @brief Field EmptyArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmptyArray, put=setStaticF_EmptyArray)) ::ArrayW<::StringW>  EmptyArray;

/// @brief Field InvalidMethodChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvalidMethodChars, put=setStaticF_InvalidMethodChars)) ::ArrayW<char16_t>  InvalidMethodChars;

/// @brief Field InvalidParamChars, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InvalidParamChars, put=setStaticF_InvalidParamChars)) ::ArrayW<char16_t>  InvalidParamChars;

/// @brief Method ExceptionMessage, addr 0xac5a470, size 0xdc, virtual false, abstract: false, final false
static inline ::StringW ExceptionMessage(::System::Exception*  exception) ;

/// @brief Method HashString, addr 0xac5a54c, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW HashString(::System::Object*  objectValue) ;

/// @brief Method IsBlankString, addr 0xac5a674, size 0x1c, virtual false, abstract: false, final false
static inline bool IsBlankString(::StringW  stringValue) ;

/// @brief Method IsInvalidHttpString, addr 0xac5a5fc, size 0x78, virtual false, abstract: false, final false
static inline bool IsInvalidHttpString(::StringW  stringValue) ;

/// @brief Method MakeEmptyArrayNull, addr 0xac54f3c, size 0x14, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> MakeEmptyArrayNull(::ArrayW<::StringW>  stringArray) ;

/// @brief Method MakeStringNull, addr 0xac54d04, size 0x14, virtual false, abstract: false, final false
static inline ::StringW MakeStringNull(::StringW  stringValue) ;

/// @brief Method ToString, addr 0xac569c4, size 0x1a4, virtual false, abstract: false, final false
static inline ::StringW ToString(::System::Object*  objectValue) ;

/// @brief Method ValidateRange, addr 0xac5a69c, size 0x10, virtual false, abstract: false, final false
static inline bool ValidateRange(int32_t  actual, int32_t  fromAllowed, int32_t  toAllowed) ;

/// @brief Method ValidateSegment, addr 0xac5a6ac, size 0x14c, virtual false, abstract: false, final false
static inline void ValidateSegment(::System::ArraySegment_1<uint8_t>  segment) ;

/// @brief Method ValidateTcpPort, addr 0xac5a690, size 0xc, virtual false, abstract: false, final false
static inline bool ValidateTcpPort(int32_t  port) ;

static inline ::ArrayW<::StringW> getStaticF_EmptyArray() ;

static inline ::ArrayW<char16_t> getStaticF_InvalidMethodChars() ;

static inline ::ArrayW<char16_t> getStaticF_InvalidParamChars() ;

static inline void setStaticF_EmptyArray(::ArrayW<::StringW>  value) ;

static inline void setStaticF_InvalidMethodChars(::ArrayW<char16_t>  value) ;

static inline void setStaticF_InvalidParamChars(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValidationHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValidationHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ValidationHelper(ValidationHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValidationHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValidationHelper(ValidationHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10513};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::ValidationHelper) == 0x10, "Size mismatch!");

} // namespace end def System::Net
