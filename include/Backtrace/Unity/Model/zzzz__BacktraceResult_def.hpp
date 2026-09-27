#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/BacktraceResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Backtrace/Unity/Types/zzzz__BacktraceResultStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BacktraceResult)
namespace Backtrace::Unity::Model {
class BacktraceResult_BacktraceRawResult;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Backtrace::Unity::Model {
class BacktraceResult;
}
namespace Backtrace::Unity::Model {
class BacktraceResult_BacktraceRawResult;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::BacktraceResult*);
MARK_REF_T(::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceResult*, "Backtrace.Unity.Model", "BacktraceResult");
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult*, "Backtrace.Unity.Model", "BacktraceResult/BacktraceRawResult");
// Dependencies Backtrace.Unity.Types.BacktraceResultStatus, System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceResult
class CORDL_TYPE BacktraceResult : public ::System::Object {
public:
// Declarations
using BacktraceRawResult = ::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult;

/// @brief Field InnerExceptionResult, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_InnerExceptionResult, put=__cordl_internal_set_InnerExceptionResult)) ::Backtrace::Unity::Model::BacktraceResult*  InnerExceptionResult;

 __declspec(property(get=get_Message, put=set_Message)) ::StringW  Message;

 __declspec(property(get=get_Object, put=set_Object)) ::StringW  Object;

 __declspec(property(get=get_RxId, put=set_RxId)) ::StringW  RxId;

/// @brief Field Status, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::Backtrace::Unity::Types::BacktraceResultStatus  Status;

/// @brief Field _rxId, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rxId, put=__cordl_internal_set__rxId)) ::StringW  _rxId;

/// @brief Field message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_message, put=__cordl_internal_set_message)) ::StringW  message;

/// @brief Field object, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_object, put=__cordl_internal_set_object)) ::StringW  object;

/// @brief Field response, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_response, put=__cordl_internal_set_response)) ::StringW  response;

/// @brief Method AddInnerResult, addr 0x5f12644, size 0x18, virtual false, abstract: false, final false
inline void AddInnerResult(::Backtrace::Unity::Model::BacktraceResult*  innerResult) ;

/// @brief Method FromJson, addr 0x5f07548, size 0x1a8, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Model::BacktraceResult* FromJson(::StringW  json) ;

static inline ::Backtrace::Unity::Model::BacktraceResult* New_ctor() ;

/// @brief Method OnLimitReached, addr 0x5f125c0, size 0x84, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Model::BacktraceResult* OnLimitReached() ;

/// @brief Method OnNetworkError, addr 0x5f076f0, size 0x90, virtual false, abstract: false, final false
static inline ::Backtrace::Unity::Model::BacktraceResult* OnNetworkError(::System::Exception*  exception) ;

constexpr ::Backtrace::Unity::Model::BacktraceResult* const& __cordl_internal_get_InnerExceptionResult() const;

constexpr ::Backtrace::Unity::Model::BacktraceResult*& __cordl_internal_get_InnerExceptionResult() ;

constexpr ::Backtrace::Unity::Types::BacktraceResultStatus const& __cordl_internal_get_Status() const;

constexpr ::Backtrace::Unity::Types::BacktraceResultStatus& __cordl_internal_get_Status() ;

constexpr ::StringW const& __cordl_internal_get__rxId() const;

constexpr ::StringW& __cordl_internal_get__rxId() ;

constexpr ::StringW const& __cordl_internal_get_message() const;

constexpr ::StringW& __cordl_internal_get_message() ;

constexpr ::StringW const& __cordl_internal_get_object() const;

constexpr ::StringW& __cordl_internal_get_object() ;

constexpr ::StringW const& __cordl_internal_get_response() const;

constexpr ::StringW& __cordl_internal_get_response() ;

constexpr void __cordl_internal_set_InnerExceptionResult(::Backtrace::Unity::Model::BacktraceResult*  value) ;

constexpr void __cordl_internal_set_Status(::Backtrace::Unity::Types::BacktraceResultStatus  value) ;

constexpr void __cordl_internal_set__rxId(::StringW  value) ;

constexpr void __cordl_internal_set_message(::StringW  value) ;

constexpr void __cordl_internal_set_object(::StringW  value) ;

constexpr void __cordl_internal_set_response(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f07538, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Message, addr 0x5f12558, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

/// @brief Method get_Object, addr 0x5f12568, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Object() ;

/// @brief Method get_RxId, addr 0x5f12594, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_RxId() ;

/// @brief Method set_Message, addr 0x5f12560, size 0x8, virtual false, abstract: false, final false
inline void set_Message(::StringW  value) ;

/// @brief Method set_Object, addr 0x5f12570, size 0x24, virtual false, abstract: false, final false
inline void set_Object(::StringW  value) ;

/// @brief Method set_RxId, addr 0x5f1259c, size 0x24, virtual false, abstract: false, final false
inline void set_RxId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceResult(BacktraceResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceResult(BacktraceResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27600};

/// @brief Field InnerExceptionResult, offset: 0x10, size: 0x8, def value: None
 ::Backtrace::Unity::Model::BacktraceResult*  ___InnerExceptionResult;

/// @brief Field message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___message;

/// @brief Field response, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___response;

/// @brief Field Status, offset: 0x28, size: 0x4, def value: None
 ::Backtrace::Unity::Types::BacktraceResultStatus  ___Status;

/// @brief Field object, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___object;

/// @brief Field _rxId, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____rxId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceResult, ___InnerExceptionResult) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceResult, ___message) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceResult, ___response) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceResult, ___Status) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceResult, ___object) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceResult, ____rxId) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceResult) == 0x40, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
// Dependencies System.Object
namespace Backtrace::Unity::Model {
// Is value type: false
// CS Name: Backtrace.Unity.Model.BacktraceResult/BacktraceRawResult
class CORDL_TYPE BacktraceResult_BacktraceRawResult : public ::System::Object {
public:
// Declarations
/// @brief Field _rxid, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__rxid, put=__cordl_internal_set__rxid)) ::StringW  _rxid;

/// @brief Field response, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_response, put=__cordl_internal_set_response)) ::StringW  response;

static inline ::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__rxid() const;

constexpr ::StringW& __cordl_internal_get__rxid() ;

constexpr ::StringW const& __cordl_internal_get_response() const;

constexpr ::StringW& __cordl_internal_get_response() ;

constexpr void __cordl_internal_set__rxid(::StringW  value) ;

constexpr void __cordl_internal_set_response(::StringW  value) ;

/// @brief Method .ctor, addr 0x5f1265c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BacktraceResult_BacktraceRawResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BacktraceResult_BacktraceRawResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BacktraceResult_BacktraceRawResult(BacktraceResult_BacktraceRawResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BacktraceResult_BacktraceRawResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BacktraceResult_BacktraceRawResult(BacktraceResult_BacktraceRawResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27599};

/// @brief Field response, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___response;

/// @brief Field _rxid, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____rxid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult, ___response) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult, ____rxid) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::BacktraceResult_BacktraceRawResult) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model
