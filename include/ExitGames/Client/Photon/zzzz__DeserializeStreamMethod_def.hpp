#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/DeserializeStreamMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeserializeStreamMethod)
namespace ExitGames::Client::Photon {
class StreamBuffer;
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
namespace ExitGames::Client::Photon {
class DeserializeStreamMethod;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::DeserializeStreamMethod*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::DeserializeStreamMethod*, "ExitGames.Client.Photon", "DeserializeStreamMethod");
// Dependencies System.MulticastDelegate
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.DeserializeStreamMethod
class CORDL_TYPE DeserializeStreamMethod : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa6d0b30, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa6d0b90, size 0xc, virtual true, abstract: false, final false
inline ::System::Object* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa6d0b1c, size 0x14, virtual true, abstract: false, final false
inline ::System::Object* Invoke(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length) ;

static inline ::ExitGames::Client::Photon::DeserializeStreamMethod* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa6d0a10, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeserializeStreamMethod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeserializeStreamMethod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeserializeStreamMethod(DeserializeStreamMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeserializeStreamMethod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeserializeStreamMethod(DeserializeStreamMethod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::DeserializeStreamMethod) == 0x80, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
