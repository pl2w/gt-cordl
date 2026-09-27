#pragma once
// IWYU pragma private; include "Liv/Lck/LckResult_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__LckError_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckResult_1)
namespace Liv::Lck {
class ILckResult;
}
namespace Liv::Lck {
struct LckError;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Liv::Lck::LckResult_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Liv::Lck::LckResult_1, "Liv.Lck", "LckResult`1");
// Dependencies Liv.Lck.LckError, System.Nullable`1<T>, System.Object
namespace Liv::Lck {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Liv.Lck.LckResult`1<T>
class CORDL_TYPE LckResult_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Error)) ::System::Nullable_1<::Liv::Lck::LckError>  Error;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_Result)) T  Result;

 __declspec(property(get=get_Success)) bool  Success;

/// @brief Field _error, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__error, put=__cordl_internal_set__error)) ::System::Nullable_1<::Liv::Lck::LckError>  _error;

/// @brief Field _message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__message, put=__cordl_internal_set__message)) ::StringW  _message;

/// @brief Field _result, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__result, put=__cordl_internal_set__result)) T  _result;

/// @brief Field _success, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__success, put=__cordl_internal_set__success)) bool  _success;

/// @brief Convert operator to "::Liv::Lck::ILckResult"
constexpr operator  ::Liv::Lck::ILckResult*() noexcept;

/// @brief Method NewError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Liv::Lck::LckResult_1<T>* NewError(::Liv::Lck::LckError  error, ::StringW  message) ;

/// @brief Method NewSuccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Liv::Lck::LckResult_1<T>* NewSuccess(T  result) ;

static inline ::Liv::Lck::LckResult_1<T>* New_ctor(bool  success, ::StringW  message, ::System::Nullable_1<::Liv::Lck::LckError>  error, T  result) ;

constexpr ::System::Nullable_1<::Liv::Lck::LckError> const& __cordl_internal_get__error() const;

constexpr ::System::Nullable_1<::Liv::Lck::LckError>& __cordl_internal_get__error() ;

constexpr ::StringW const& __cordl_internal_get__message() const;

constexpr ::StringW& __cordl_internal_get__message() ;

constexpr T const& __cordl_internal_get__result() const;

constexpr T& __cordl_internal_get__result() ;

constexpr bool const& __cordl_internal_get__success() const;

constexpr bool& __cordl_internal_get__success() ;

constexpr void __cordl_internal_set__error(::System::Nullable_1<::Liv::Lck::LckError>  value) ;

constexpr void __cordl_internal_set__message(::StringW  value) ;

constexpr void __cordl_internal_set__result(T  value) ;

constexpr void __cordl_internal_set__success(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(bool  success, ::StringW  message, ::System::Nullable_1<::Liv::Lck::LckError>  error, T  result) ;

/// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Nullable_1<::Liv::Lck::LckError> get_Error() ;

/// @brief Method get_Message, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::StringW get_Message() ;

/// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Result() ;

/// @brief Method get_Success, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_Success() ;

/// @brief Convert to "::Liv::Lck::ILckResult"
constexpr ::Liv::Lck::ILckResult* i___Liv__Lck__ILckResult() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckResult_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckResult_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckResult_1(LckResult_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckResult_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckResult_1(LckResult_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24789};

/// @brief Field _success, offset: 0x10, size: 0x1, def value: None
 bool  ____success;

/// @brief Field _message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____message;

/// @brief Field _error, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::Liv::Lck::LckError>  ____error;

/// @brief Field _result, offset: 0x30, size: 0x8, def value: None
 T  ____result;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
