#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NCommandPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NCommandPool)
namespace ExitGames::Client::Photon {
class EnetPeer;
}
namespace ExitGames::Client::Photon {
class NCommand;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class NCommandPool;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::NCommandPool*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::NCommandPool*, "ExitGames.Client.Photon", "NCommandPool");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.NCommandPool
class CORDL_TYPE NCommandPool : public ::System::Object {
public:
// Declarations
/// @brief Field pool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pool, put=__cordl_internal_set_pool)) ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>*  pool;

/// @brief Method Acquire, addr 0xa6ba408, size 0x1c8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::NCommand* Acquire(::ExitGames::Client::Photon::EnetPeer*  peer, uint8_t  commandType, ::ExitGames::Client::Photon::StreamBuffer*  payload, uint8_t  channel) ;

/// @brief Method Acquire, addr 0xa6c182c, size 0x1b4, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::NCommand* Acquire(::ExitGames::Client::Photon::EnetPeer*  peer, ::ArrayW<uint8_t>  inBuff, ::by_ref<int32_t>  readingOffset) ;

static inline ::ExitGames::Client::Photon::NCommandPool* New_ctor() ;

/// @brief Method Release, addr 0xa6c54a4, size 0x140, virtual false, abstract: false, final false
inline void Release(::ExitGames::Client::Photon::NCommand*  nCommand) ;

constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>* const& __cordl_internal_get_pool() const;

constexpr ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>*& __cordl_internal_get_pool() ;

constexpr void __cordl_internal_set_pool(::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>*  value) ;

/// @brief Method .ctor, addr 0xa6b9658, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NCommandPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NCommandPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NCommandPool(NCommandPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NCommandPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NCommandPool(NCommandPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26434};

/// @brief Field pool, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::ExitGames::Client::Photon::NCommand*>*  ___pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::NCommandPool, ___pool) == 0x10, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::NCommandPool) == 0x18, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
