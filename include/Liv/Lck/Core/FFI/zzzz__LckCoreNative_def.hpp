#pragma once
// IWYU pragma private; include "Liv/Lck/Core/FFI/LckCoreNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckCoreNative)
namespace Liv::Lck::Core::FFI {
struct GameInfo;
}
namespace Liv::Lck::Core::FFI {
class LckCoreNative_start_login_attempt_callback_delegate;
}
namespace Liv::Lck::Core::FFI {
struct LckInfo;
}
namespace Liv::Lck::Core::FFI {
struct ReturnCode;
}
namespace Liv::Lck::Core {
struct LevelFilter;
}
namespace Liv::Lck::Core {
struct LogType;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Liv::Lck::Core::FFI {
class LckCoreNative;
}
namespace Liv::Lck::Core::FFI {
class LckCoreNative_start_login_attempt_callback_delegate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::FFI::LckCoreNative*);
MARK_REF_T(::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::FFI::LckCoreNative*, "Liv.Lck.Core.FFI", "LckCoreNative");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*, "Liv.Lck.Core.FFI", "LckCoreNative/start_login_attempt_callback_delegate");
// Dependencies System.Object
namespace Liv::Lck::Core::FFI {
// Is value type: false
// CS Name: Liv.Lck.Core.FFI.LckCoreNative
class CORDL_TYPE LckCoreNative : public ::System::Object {
public:
// Declarations
using start_login_attempt_callback_delegate = ::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate;

/// @brief Method check_login_attempt_completed, addr 0x9cff2ec, size 0x7c, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::ReturnCode check_login_attempt_completed(::System::IntPtr  complete) ;

/// @brief Method dispose, addr 0x9cfee08, size 0x68, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::ReturnCode dispose() ;

/// @brief Method get_remaining_backoff_time_seconds, addr 0x9cff464, size 0x7c, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::ReturnCode get_remaining_backoff_time_seconds(::System::IntPtr  remaining) ;

/// @brief Method has_user_configured_streaming, addr 0x9cff504, size 0x7c, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::ReturnCode has_user_configured_streaming(::System::IntPtr  configured) ;

/// @brief Method initialize, addr 0x9cfe514, size 0xb8, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::ReturnCode initialize(::System::IntPtr  tracking_id, ::Liv::Lck::Core::FFI::GameInfo  game_info, ::Liv::Lck::Core::FFI::LckInfo  lck_info) ;

/// @brief Method initialize_android, addr 0x9cfe43c, size 0x7c, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::ReturnCode initialize_android(::System::IntPtr  context) ;

/// @brief Method is_user_subscribed, addr 0x9cff5a4, size 0x7c, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::ReturnCode is_user_subscribed(::System::IntPtr  subscribed) ;

/// @brief Method log, addr 0x9cfeccc, size 0xb0, virtual false, abstract: false, final false
static inline void log(::Liv::Lck::Core::LogType  level, ::System::IntPtr  message, ::System::IntPtr  member_name, ::System::IntPtr  file_path, int32_t  line_number) ;

/// @brief Method set_max_log_level, addr 0x9cfde00, size 0x80, virtual false, abstract: false, final false
static inline void set_max_log_level(::Liv::Lck::Core::LevelFilter  level) ;

/// @brief Method start_login_attempt, addr 0x9cff16c, size 0x80, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::FFI::ReturnCode start_login_attempt(::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate*  callback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreNative", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreNative(LckCoreNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreNative", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreNative(LckCoreNative const& ) = delete;

/// @brief Field __DllName offset 0xffffffff size 0x8
static constexpr ::ConstString  __DllName{u"lck_core"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31941};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::FFI::LckCoreNative) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core::FFI
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Liv::Lck::Core::FFI {
// Is value type: false
// CS Name: Liv.Lck.Core.FFI.LckCoreNative/start_login_attempt_callback_delegate
class CORDL_TYPE LckCoreNative_start_login_attempt_callback_delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d020f8, size 0xa8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Liv::Lck::Core::FFI::ReturnCode  return_code, ::System::IntPtr  login_code, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d021a0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d020e4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Liv::Lck::Core::FFI::ReturnCode  return_code, ::System::IntPtr  login_code) ;

static inline ::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9cff0cc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreNative_start_login_attempt_callback_delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreNative_start_login_attempt_callback_delegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreNative_start_login_attempt_callback_delegate(LckCoreNative_start_login_attempt_callback_delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreNative_start_login_attempt_callback_delegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreNative_start_login_attempt_callback_delegate(LckCoreNative_start_login_attempt_callback_delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31940};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::FFI::LckCoreNative_start_login_attempt_callback_delegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::Core::FFI
