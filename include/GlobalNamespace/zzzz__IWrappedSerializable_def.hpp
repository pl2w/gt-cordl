#pragma once
// IWYU pragma private; include "GlobalNamespace/IWrappedSerializable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWrappedSerializable)
namespace Fusion {
class INetworkStruct;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class IWrappedSerializable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IWrappedSerializable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IWrappedSerializable*, "", "IWrappedSerializable");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IWrappedSerializable
class CORDL_TYPE IWrappedSerializable {
public:
// Declarations
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() noexcept;

/// @brief Method OnSerializeRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSerializeRead(::System::Object*  newData) ;

/// @brief Method OnSerializeRead, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method OnSerializeWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* OnSerializeWrite() ;

/// @brief Method OnSerializeWrite, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IWrappedSerializable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWrappedSerializable(IWrappedSerializable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2128};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
