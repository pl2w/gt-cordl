#pragma once
// IWYU pragma private; include "Oculus/Platform/Request.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Request)
namespace GlobalNamespace {
struct Request__Gen_d__8;
}
namespace Oculus::Platform {
class Message_Callback;
}
namespace Oculus::Platform {
class Message;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Oculus::Platform {
class Request;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::Request*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::Request*, "Oculus.Platform", "Request");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.Request
class CORDL_TYPE Request : public ::System::Object {
public:
// Declarations
using _Gen_d__8 = ::GlobalNamespace::Request__Gen_d__8;

 __declspec(property(get=get_RequestID, put=set_RequestID)) uint64_t  RequestID;

/// @brief Field <RequestID>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__RequestID_k__BackingField, put=__cordl_internal_set__RequestID_k__BackingField)) uint64_t  _RequestID_k__BackingField;

/// @brief Field callback_, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback_, put=__cordl_internal_set_callback_)) ::Oculus::Platform::Message_Callback*  callback_;

/// @brief Field tcs_, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tcs_, put=__cordl_internal_set_tcs_)) ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  tcs_;

/// [AsyncStateMachine(typeof(Oculus.Platform.Request::<Gen>d__8))]
/// @brief Method Gen, addr 0xa54ee00, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message*>* Gen() ;

/// @brief Method GetAwaiter, addr 0xa54ef08, size 0x54, virtual false, abstract: false, final false
inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> GetAwaiter() ;

/// @brief Method HandleMessage, addr 0xa54ef5c, size 0xc0, virtual true, abstract: false, final false
inline void HandleMessage(::Oculus::Platform::Message*  msg) ;

static inline ::Oculus::Platform::Request* New_ctor(uint64_t  requestID) ;

/// @brief Method OnComplete, addr 0xa54ed84, size 0x7c, virtual false, abstract: false, final false
inline ::Oculus::Platform::Request* OnComplete(::Oculus::Platform::Message_Callback*  callback) ;

/// @brief Method RunCallbacks, addr 0xa54f01c, size 0x74, virtual false, abstract: false, final false
static inline void RunCallbacks(uint32_t  limit) ;

constexpr uint64_t const& __cordl_internal_get__RequestID_k__BackingField() const;

constexpr uint64_t& __cordl_internal_get__RequestID_k__BackingField() ;

constexpr ::Oculus::Platform::Message_Callback* const& __cordl_internal_get_callback_() const;

constexpr ::Oculus::Platform::Message_Callback*& __cordl_internal_get_callback_() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>* const& __cordl_internal_get_tcs_() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*& __cordl_internal_get_tcs_() ;

constexpr void __cordl_internal_set__RequestID_k__BackingField(uint64_t  value) ;

constexpr void __cordl_internal_set_callback_(::Oculus::Platform::Message_Callback*  value) ;

constexpr void __cordl_internal_set_tcs_(::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  value) ;

/// @brief Method .ctor, addr 0xa54ccec, size 0x28, virtual false, abstract: false, final false
inline void _ctor(uint64_t  requestID) ;

/// [CompilerGenerated]
/// @brief Method get_RequestID, addr 0xa54ed74, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_RequestID() ;

/// [CompilerGenerated]
/// @brief Method set_RequestID, addr 0xa54ed7c, size 0x8, virtual false, abstract: false, final false
inline void set_RequestID(uint64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Request() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Request(Request && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Request", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Request(Request const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26904};

/// @brief Field tcs_, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<::Oculus::Platform::Message*>*  ___tcs_;

/// @brief Field callback_, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Platform::Message_Callback*  ___callback_;

/// [CompilerGenerated]
/// @brief Field <RequestID>k__BackingField, offset: 0x20, size: 0x8, def value: None
 uint64_t  ____RequestID_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Platform::Request, ___tcs_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Request, ___callback_) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Request, ____RequestID_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Platform::Request) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Platform
