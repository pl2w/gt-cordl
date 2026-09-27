#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/DeserializeMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeserializeMethod)
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
class DeserializeMethod;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::DeserializeMethod*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::DeserializeMethod*, "ExitGames.Client.Photon", "DeserializeMethod");
// Dependencies System.MulticastDelegate
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.DeserializeMethod
class CORDL_TYPE DeserializeMethod : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa6d09e4, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t>  serializedCustomObject, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa6d0a04, size 0xc, virtual true, abstract: false, final false
inline ::System::Object* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa6d09d0, size 0x14, virtual true, abstract: false, final false
inline ::System::Object* Invoke(::ArrayW<uint8_t>  serializedCustomObject) ;

static inline ::ExitGames::Client::Photon::DeserializeMethod* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa6d0920, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeserializeMethod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeserializeMethod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeserializeMethod(DeserializeMethod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeserializeMethod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeserializeMethod(DeserializeMethod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26460};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::DeserializeMethod) == 0x80, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
