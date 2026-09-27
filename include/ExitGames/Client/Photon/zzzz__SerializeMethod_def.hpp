#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SerializeMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializeMethod)
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
class SerializeMethod;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::SerializeMethod*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SerializeMethod*, "ExitGames.Client.Photon", "SerializeMethod");
// Dependencies System.MulticastDelegate
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SerializeMethod
class CORDL_TYPE SerializeMethod : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa6d0784, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  customObject, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa6d07a4, size 0xc, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa6d0770, size 0x14, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Invoke(::System::Object*  customObject) ;

static inline ::ExitGames::Client::Photon::SerializeMethod* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa6d0668, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializeMethod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializeMethod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializeMethod(SerializeMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializeMethod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializeMethod(SerializeMethod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26458};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::SerializeMethod) == 0x80, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
