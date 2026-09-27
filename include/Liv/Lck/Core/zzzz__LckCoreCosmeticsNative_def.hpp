#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckCoreCosmeticsNative.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LckCoreCosmeticsNative)
namespace Liv::Lck::Core {
struct CosmeticsReturnCode;
}
namespace Liv::Lck::Core {
class LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate;
}
namespace Liv::Lck::Core {
class LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate;
}
namespace Liv::Lck::Core {
class LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate;
}
namespace Liv::Lck::Core {
struct SerializationType;
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
namespace System {
struct UIntPtr;
}
// Forward declare root types
namespace Liv::Lck::Core {
class LckCoreCosmeticsNative;
}
namespace Liv::Lck::Core {
class LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate;
}
namespace Liv::Lck::Core {
class LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate;
}
namespace Liv::Lck::Core {
class LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Core::LckCoreCosmeticsNative*);
MARK_REF_T(::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*);
MARK_REF_T(::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*);
MARK_REF_T(::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCoreCosmeticsNative*, "Liv.Lck.Core", "LckCoreCosmeticsNative");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*, "Liv.Lck.Core", "LckCoreCosmeticsNative/announce_player_presence_for_session_on_presence_expiry_received_delegate");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*, "Liv.Lck.Core", "LckCoreCosmeticsNative/get_local_user_cosmetics_on_cosmetic_available_delegate");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*, "Liv.Lck.Core", "LckCoreCosmeticsNative/get_user_cosmetics_for_session_on_cosmetic_available_delegate");
// Dependencies System.Object
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCoreCosmeticsNative
class CORDL_TYPE LckCoreCosmeticsNative : public ::System::Object {
public:
// Declarations
using announce_player_presence_for_session_on_presence_expiry_received_delegate = ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate;

using get_local_user_cosmetics_on_cosmetic_available_delegate = ::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate;

using get_user_cosmetics_for_session_on_cosmetic_available_delegate = ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate;

/// @brief Method announce_player_presence_for_session, addr 0x9d010c8, size 0xa0, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::CosmeticsReturnCode announce_player_presence_for_session(::System::IntPtr  player_id, ::System::IntPtr  session_id, ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate*  on_presence_expiry_received) ;

/// @brief Method get_local_user_cosmetics, addr 0x9d01048, size 0x80, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::CosmeticsReturnCode get_local_user_cosmetics(::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate*  on_cosmetic_available) ;

/// @brief Method get_user_cosmetics_for_session, addr 0x9d00fa0, size 0xa8, virtual false, abstract: false, final false
static inline ::Liv::Lck::Core::CosmeticsReturnCode get_user_cosmetics_for_session(::System::IntPtr  player_ids_array_ptr, ::System::UIntPtr  player_ids_len, ::System::IntPtr  session_id, ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate*  on_cosmetic_available) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsNative() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsNative", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreCosmeticsNative(LckCoreCosmeticsNative && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsNative", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreCosmeticsNative(LckCoreCosmeticsNative const& ) = delete;

/// @brief Field __DllName offset 0xffffffff size 0x8
static constexpr ::ConstString  __DllName{u"lck_core"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31926};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::LckCoreCosmeticsNative) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Core
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCoreCosmeticsNative/get_user_cosmetics_for_session_on_cosmetic_available_delegate
class CORDL_TYPE LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d014b4, size 0xbc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  serialized_cosmetic_data_ptr, ::System::UIntPtr  serialized_data_length, ::Liv::Lck::Core::SerializationType  serialization_type, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d01570, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d014a0, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  serialized_cosmetic_data_ptr, ::System::UIntPtr  serialized_data_length, ::Liv::Lck::Core::SerializationType  serialization_type) ;

static inline ::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d01400, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate(LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate(LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31925};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::LckCoreCosmeticsNative_get_user_cosmetics_for_session_on_cosmetic_available_delegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::Core
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCoreCosmeticsNative/get_local_user_cosmetics_on_cosmetic_available_delegate
class CORDL_TYPE LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d01338, size 0xbc, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  serialized_cosmetic_data_ptr, ::System::UIntPtr  serialized_data_length, ::Liv::Lck::Core::SerializationType  serialization_type, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d013f4, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d01324, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  serialized_cosmetic_data_ptr, ::System::UIntPtr  serialized_data_length, ::Liv::Lck::Core::SerializationType  serialization_type) ;

static inline ::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d01284, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate(LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate(LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31924};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::LckCoreCosmeticsNative_get_local_user_cosmetics_on_cosmetic_available_delegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::Core
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace Liv::Lck::Core {
// Is value type: false
// CS Name: Liv.Lck.Core.LckCoreCosmeticsNative/announce_player_presence_for_session_on_presence_expiry_received_delegate
class CORDL_TYPE LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d0121c, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  time_until_expiration_seconds, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d01278, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d01208, size 0x14, virtual true, abstract: false, final false
inline void Invoke(uint64_t  time_until_expiration_seconds) ;

static inline ::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d01168, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate(LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate(LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31923};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Core::LckCoreCosmeticsNative_announce_player_presence_for_session_on_presence_expiry_received_delegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::Core
