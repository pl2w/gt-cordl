#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SerializeStreamMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializeStreamMethod)
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
class SerializeStreamMethod;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::SerializeStreamMethod*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SerializeStreamMethod*, "ExitGames.Client.Photon", "SerializeStreamMethod");
// Dependencies System.MulticastDelegate
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SerializeStreamMethod
class CORDL_TYPE SerializeStreamMethod : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa6d08d0, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customObject, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa6d08f8, size 0x28, virtual true, abstract: false, final false
inline int16_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa6d08bc, size 0x14, virtual true, abstract: false, final false
inline int16_t Invoke(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customObject) ;

static inline ::ExitGames::Client::Photon::SerializeStreamMethod* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa6d07b0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializeStreamMethod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializeStreamMethod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializeStreamMethod(SerializeStreamMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializeStreamMethod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializeStreamMethod(SerializeStreamMethod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26459};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::SerializeStreamMethod) == 0x80, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
