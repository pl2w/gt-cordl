#pragma once
// IWYU pragma private; include "System/Net/CallbackClosure.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CallbackClosure)
namespace System::Threading {
class ExecutionContext;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Net {
class CallbackClosure;
}
// Write type traits
MARK_REF_T(::System::Net::CallbackClosure*);
DEFINE_IL2CPP_CLASS(::System::Net::CallbackClosure*, "System.Net", "CallbackClosure");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CallbackClosure
class CORDL_TYPE CallbackClosure : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AsyncCallback)) ::System::AsyncCallback*  AsyncCallback;

 __declspec(property(get=get_Context)) ::System::Threading::ExecutionContext*  Context;

/// @brief Field _savedCallback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__savedCallback, put=__cordl_internal_set__savedCallback)) ::System::AsyncCallback*  _savedCallback;

/// @brief Field _savedContext, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__savedContext, put=__cordl_internal_set__savedContext)) ::System::Threading::ExecutionContext*  _savedContext;

/// @brief Method IsCompatible, addr 0xada7840, size 0x1c, virtual false, abstract: false, final false
inline bool IsCompatible(::System::AsyncCallback*  callback) ;

static inline ::System::Net::CallbackClosure* New_ctor(::System::Threading::ExecutionContext*  context, ::System::AsyncCallback*  callback) ;

constexpr ::System::AsyncCallback* const& __cordl_internal_get__savedCallback() const;

constexpr ::System::AsyncCallback*& __cordl_internal_get__savedCallback() ;

constexpr ::System::Threading::ExecutionContext* const& __cordl_internal_get__savedContext() const;

constexpr ::System::Threading::ExecutionContext*& __cordl_internal_get__savedContext() ;

constexpr void __cordl_internal_set__savedCallback(::System::AsyncCallback*  value) ;

constexpr void __cordl_internal_set__savedContext(::System::Threading::ExecutionContext*  value) ;

/// @brief Method .ctor, addr 0xada785c, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::ExecutionContext*  context, ::System::AsyncCallback*  callback) ;

/// @brief Method get_AsyncCallback, addr 0xada7fe4, size 0x8, virtual false, abstract: false, final false
inline ::System::AsyncCallback* get_AsyncCallback() ;

/// @brief Method get_Context, addr 0xada7fec, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::ExecutionContext* get_Context() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CallbackClosure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CallbackClosure", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CallbackClosure(CallbackClosure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CallbackClosure", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CallbackClosure(CallbackClosure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10383};

/// @brief Field _savedCallback, offset: 0x10, size: 0x8, def value: None
 ::System::AsyncCallback*  ____savedCallback;

/// @brief Field _savedContext, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::ExecutionContext*  ____savedContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::CallbackClosure, ____savedCallback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::CallbackClosure, ____savedContext) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Net::CallbackClosure) == 0x20, "Size mismatch!");

} // namespace end def System::Net
