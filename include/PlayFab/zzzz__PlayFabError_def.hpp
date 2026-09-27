#pragma once
// IWYU pragma private; include "PlayFab/PlayFabError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/zzzz__PlayFabErrorCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabError)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace PlayFab {
class PlayFabError;
}
// Write type traits
MARK_REF_T(::PlayFab::PlayFabError*);
DEFINE_IL2CPP_CLASS(::PlayFab::PlayFabError*, "PlayFab", "PlayFabError");
// Dependencies PlayFab.PlayFabErrorCode, System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.PlayFabError
class CORDL_TYPE PlayFabError : public ::System::Object {
public:
// Declarations
/// @brief Field ApiEndpoint, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ApiEndpoint, put=__cordl_internal_set_ApiEndpoint)) ::StringW  ApiEndpoint;

/// @brief Field CustomData, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomData, put=__cordl_internal_set_CustomData)) ::System::Object*  CustomData;

/// @brief Field Error, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::PlayFab::PlayFabErrorCode  Error;

/// @brief Field ErrorDetails, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorDetails, put=__cordl_internal_set_ErrorDetails)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*  ErrorDetails;

/// @brief Field ErrorMessage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorMessage, put=__cordl_internal_set_ErrorMessage)) ::StringW  ErrorMessage;

/// @brief Field HttpCode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_HttpCode, put=__cordl_internal_set_HttpCode)) int32_t  HttpCode;

/// @brief Field HttpStatus, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_HttpStatus, put=__cordl_internal_set_HttpStatus)) ::StringW  HttpStatus;

/// @brief Field _tempSb, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__tempSb, put=setStaticF__tempSb)) ::System::Text::StringBuilder*  _tempSb;

/// @brief Method GenerateErrorReport, addr 0xa7dbb50, size 0x558, virtual false, abstract: false, final false
inline ::StringW GenerateErrorReport() ;

static inline ::PlayFab::PlayFabError* New_ctor() ;

/// @brief Method ToString, addr 0xa7dbb4c, size 0x4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_ApiEndpoint() const;

constexpr ::StringW& __cordl_internal_get_ApiEndpoint() ;

constexpr ::System::Object* const& __cordl_internal_get_CustomData() const;

constexpr ::System::Object*& __cordl_internal_get_CustomData() ;

constexpr ::PlayFab::PlayFabErrorCode const& __cordl_internal_get_Error() const;

constexpr ::PlayFab::PlayFabErrorCode& __cordl_internal_get_Error() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get_ErrorDetails() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get_ErrorDetails() ;

constexpr ::StringW const& __cordl_internal_get_ErrorMessage() const;

constexpr ::StringW& __cordl_internal_get_ErrorMessage() ;

constexpr int32_t const& __cordl_internal_get_HttpCode() const;

constexpr int32_t& __cordl_internal_get_HttpCode() ;

constexpr ::StringW const& __cordl_internal_get_HttpStatus() const;

constexpr ::StringW& __cordl_internal_get_HttpStatus() ;

constexpr void __cordl_internal_set_ApiEndpoint(::StringW  value) ;

constexpr void __cordl_internal_set_CustomData(::System::Object*  value) ;

constexpr void __cordl_internal_set_Error(::PlayFab::PlayFabErrorCode  value) ;

constexpr void __cordl_internal_set_ErrorDetails(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_ErrorMessage(::StringW  value) ;

constexpr void __cordl_internal_set_HttpCode(int32_t  value) ;

constexpr void __cordl_internal_set_HttpStatus(::StringW  value) ;

/// @brief Method .ctor, addr 0xa7dc0a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::StringBuilder* getStaticF__tempSb() ;

static inline void setStaticF__tempSb(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabError(PlayFabError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabError(PlayFabError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19510};

/// @brief Field ApiEndpoint, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ApiEndpoint;

/// @brief Field HttpCode, offset: 0x18, size: 0x4, def value: None
 int32_t  ___HttpCode;

/// @brief Field HttpStatus, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___HttpStatus;

/// @brief Field Error, offset: 0x28, size: 0x4, def value: None
 ::PlayFab::PlayFabErrorCode  ___Error;

/// @brief Field ErrorMessage, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___ErrorMessage;

/// @brief Field ErrorDetails, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::StringW>*>*  ___ErrorDetails;

/// @brief Field CustomData, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  ___CustomData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PlayFabError, ___ApiEndpoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabError, ___HttpCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabError, ___HttpStatus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabError, ___Error) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabError, ___ErrorMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabError, ___ErrorDetails) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::PlayFabError, ___CustomData) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PlayFabError) == 0x48, "Size mismatch!");

} // namespace end def PlayFab
