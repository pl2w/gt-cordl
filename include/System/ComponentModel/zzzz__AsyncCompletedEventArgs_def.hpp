#pragma once
// IWYU pragma private; include "System/ComponentModel/AsyncCompletedEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(AsyncCompletedEventArgs)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class AsyncCompletedEventArgs;
}
// Write type traits
MARK_REF_T(::System::ComponentModel::AsyncCompletedEventArgs*);
DEFINE_IL2CPP_CLASS(::System::ComponentModel::AsyncCompletedEventArgs*, "System.ComponentModel", "AsyncCompletedEventArgs");
// Dependencies System.EventArgs
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.AsyncCompletedEventArgs
class CORDL_TYPE AsyncCompletedEventArgs : public ::System::EventArgs {
public:
// Declarations
/// @brief [SRDescription("True if operation was cancelled.")]
 __declspec(property(get=get_Cancelled)) bool  Cancelled;

/// @brief [SRDescription("Exception that occurred during operation.  Null if no error.")]
 __declspec(property(get=get_Error)) ::System::Exception*  Error;

/// @brief [SRDescription("User-supplied state to identify operation.")]
 __declspec(property(get=get_UserState)) ::System::Object*  UserState;

/// @brief Field cancelled, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_cancelled, put=__cordl_internal_set_cancelled)) bool  cancelled;

/// @brief Field error, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_error, put=__cordl_internal_set_error)) ::System::Exception*  error;

/// @brief Field userState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_userState, put=__cordl_internal_set_userState)) ::System::Object*  userState;

/// [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
/// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
static inline ::System::ComponentModel::AsyncCompletedEventArgs* New_ctor() ;

static inline ::System::ComponentModel::AsyncCompletedEventArgs* New_ctor(::System::Exception*  error, bool  cancelled, ::System::Object*  userState) ;

/// @brief Method RaiseExceptionIfNecessary, addr 0xad6c5b0, size 0xd4, virtual false, abstract: false, final false
inline void RaiseExceptionIfNecessary() ;

constexpr bool const& __cordl_internal_get_cancelled() const;

constexpr bool& __cordl_internal_get_cancelled() ;

constexpr ::System::Exception* const& __cordl_internal_get_error() const;

constexpr ::System::Exception*& __cordl_internal_get_error() ;

constexpr ::System::Object* const& __cordl_internal_get_userState() const;

constexpr ::System::Object*& __cordl_internal_get_userState() ;

constexpr void __cordl_internal_set_cancelled(bool  value) ;

constexpr void __cordl_internal_set_error(::System::Exception*  value) ;

constexpr void __cordl_internal_set_userState(::System::Object*  value) ;

/// [Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief Method .ctor, addr 0xad6c4a4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xad6c4fc, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  error, bool  cancelled, ::System::Object*  userState) ;

/// @brief Method get_Cancelled, addr 0xad6c598, size 0x8, virtual false, abstract: false, final false
inline bool get_Cancelled() ;

/// @brief Method get_Error, addr 0xad6c5a0, size 0x8, virtual false, abstract: false, final false
inline ::System::Exception* get_Error() ;

/// @brief Method get_UserState, addr 0xad6c5a8, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_UserState() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncCompletedEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncCompletedEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncCompletedEventArgs(AsyncCompletedEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCompletedEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncCompletedEventArgs(AsyncCompletedEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10256};

/// @brief Field error, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ___error;

/// @brief Field cancelled, offset: 0x18, size: 0x1, def value: None
 bool  ___cancelled;

/// @brief Field userState, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___userState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ComponentModel::AsyncCompletedEventArgs, ___error) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AsyncCompletedEventArgs, ___cancelled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::AsyncCompletedEventArgs, ___userState) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::ComponentModel::AsyncCompletedEventArgs) == 0x28, "Size mismatch!");

} // namespace end def System::ComponentModel
