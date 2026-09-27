#pragma once
// IWYU pragma private; include "GlobalNamespace/NetCrossoverUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetCrossoverUtils)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace Fusion {
class SessionProperty;
}
namespace GlobalNamespace {
template<typename T>
struct RPCArgBuffer_1;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class NetCrossoverUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::NetCrossoverUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetCrossoverUtils*, "", "NetCrossoverUtils");
// [Extension]
// Dependencies Fusion.INetworkStruct, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NetCrossoverUtils
class CORDL_TYPE NetCrossoverUtils : public ::System::Object {
public:
// Declarations
/// @brief Field FixedBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FixedBuffer, put=setStaticF_FixedBuffer)) ::ArrayW<uint8_t>  FixedBuffer;

/// [Extension]
/// @brief Method PopulateWithRPCData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void PopulateWithRPCData(::by_ref<::GlobalNamespace::RPCArgBuffer_1<T>>  argBuffer, ::ArrayW<uint8_t>  data) ;

/// @brief Method Prewarm, addr 0x56e7438, size 0x74, virtual false, abstract: false, final false
static inline void Prewarm() ;

/// @brief Method ReadNetDataFromBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkStruct*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::Object* ReadNetDataFromBuffer(::Photon::Pun::PhotonStream*  stream) ;

/// [Extension]
/// @brief Method SerializeToRPCData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void SerializeToRPCData(::by_ref<::GlobalNamespace::RPCArgBuffer_1<T>>  argBuffer) ;

/// [Extension]
/// @brief Method ToPropDict, addr 0x56e3a68, size 0x1b0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::SessionProperty*>* ToPropDict(::ExitGames::Client::Photon::Hashtable*  hash) ;

/// [Extension]
/// @brief Method WriteNetDataToBuffer, addr 0x56e74ac, size 0x28c, virtual false, abstract: false, final false
static inline void WriteNetDataToBuffer(::System::Object*  data, ::Photon::Pun::PhotonStream*  stream) ;

/// [Extension]
/// @brief Method WriteNetDataToBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkStruct*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void WriteNetDataToBuffer(T  data, ::Photon::Pun::PhotonStream*  stream) ;

static inline ::ArrayW<uint8_t> getStaticF_FixedBuffer() ;

static inline void setStaticF_FixedBuffer(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetCrossoverUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetCrossoverUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetCrossoverUtils(NetCrossoverUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetCrossoverUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetCrossoverUtils(NetCrossoverUtils const& ) = delete;

/// @brief Field MaxParameterByteLength offset 0xffffffff size 0x4
static constexpr int32_t  MaxParameterByteLength{static_cast<int32_t>(0x800)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1109};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::NetCrossoverUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
