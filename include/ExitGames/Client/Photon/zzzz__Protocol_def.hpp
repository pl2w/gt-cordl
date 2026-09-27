#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Protocol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Protocol)
namespace ExitGames::Client::Photon {
class CustomType;
}
namespace ExitGames::Client::Photon {
class DeserializeMethod;
}
namespace ExitGames::Client::Photon {
class DeserializeStreamMethod;
}
namespace ExitGames::Client::Photon {
class IProtocol;
}
namespace ExitGames::Client::Photon {
class SerializeMethod;
}
namespace ExitGames::Client::Photon {
class SerializeStreamMethod;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class Protocol;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::Protocol*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::Protocol*, "ExitGames.Client.Photon", "Protocol");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.Protocol
class CORDL_TYPE Protocol : public ::System::Object {
public:
// Declarations
/// @brief Field CodeDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CodeDict, put=setStaticF_CodeDict)) ::System::Collections::Generic::Dictionary_2<uint8_t,::ExitGames::Client::Photon::CustomType*>*  CodeDict;

/// @brief Field ProtocolDefault, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ProtocolDefault, put=setStaticF_ProtocolDefault)) ::ExitGames::Client::Photon::IProtocol*  ProtocolDefault;

/// @brief Field TypeDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TypeDict, put=setStaticF_TypeDict)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::CustomType*>*  TypeDict;

/// @brief Field memDeserialize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memDeserialize, put=setStaticF_memDeserialize)) ::ArrayW<uint8_t>  memDeserialize;

/// @brief Field memFloatBlock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memFloatBlock, put=setStaticF_memFloatBlock)) ::ArrayW<float_t>  memFloatBlock;

/// [Obsolete]
/// @brief Method Deserialize, addr 0xa6d0fd0, size 0x1a8, virtual false, abstract: false, final false
static inline ::System::Object* Deserialize(::ArrayW<uint8_t>  serializedData) ;

/// @brief Method Deserialize, addr 0xa6d158c, size 0x20c, virtual false, abstract: false, final false
static inline void Deserialize(::by_ref<float_t>  value, ::ArrayW<uint8_t>  source, ::by_ref<int32_t>  offset) ;

/// @brief Method Deserialize, addr 0xa6d1534, size 0x58, virtual false, abstract: false, final false
static inline void Deserialize(::by_ref<int16_t>  value, ::ArrayW<uint8_t>  source, ::by_ref<int32_t>  offset) ;

/// @brief Method Deserialize, addr 0xa6d14a0, size 0x94, virtual false, abstract: false, final false
static inline void Deserialize(::by_ref<int32_t>  value, ::ArrayW<uint8_t>  source, ::by_ref<int32_t>  offset) ;

static inline ::ExitGames::Client::Photon::Protocol* New_ctor() ;

/// [Obsolete]
/// @brief Method Serialize, addr 0xa6d0c6c, size 0x1a8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Serialize(::System::Object*  obj) ;

/// @brief Method Serialize, addr 0xa6d1278, size 0x228, virtual false, abstract: false, final false
static inline void Serialize(float_t  value, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  targetOffset) ;

/// @brief Method Serialize, addr 0xa6d1178, size 0x5c, virtual false, abstract: false, final false
static inline void Serialize(int16_t  value, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  targetOffset) ;

/// @brief Method Serialize, addr 0xa6d11d4, size 0xa4, virtual false, abstract: false, final false
static inline void Serialize(int32_t  value, ::ArrayW<uint8_t>  target, ::by_ref<int32_t>  targetOffset) ;

/// @brief Method TryRegisterType, addr 0xa6cfc68, size 0x1a0, virtual false, abstract: false, final false
static inline bool TryRegisterType(::System::Type*  type, uint8_t  typeCode, ::ExitGames::Client::Photon::SerializeMethod*  serializeFunction, ::ExitGames::Client::Photon::DeserializeMethod*  deserializeFunction) ;

/// @brief Method TryRegisterType, addr 0xa6cfe84, size 0x1a0, virtual false, abstract: false, final false
static inline bool TryRegisterType(::System::Type*  type, uint8_t  typeCode, ::ExitGames::Client::Photon::SerializeStreamMethod*  serializeFunction, ::ExitGames::Client::Photon::DeserializeStreamMethod*  deserializeFunction) ;

/// @brief Method .ctor, addr 0xa6d1798, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<uint8_t,::ExitGames::Client::Photon::CustomType*>* getStaticF_CodeDict() ;

static inline ::ExitGames::Client::Photon::IProtocol* getStaticF_ProtocolDefault() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::CustomType*>* getStaticF_TypeDict() ;

static inline ::ArrayW<uint8_t> getStaticF_memDeserialize() ;

static inline ::ArrayW<float_t> getStaticF_memFloatBlock() ;

static inline void setStaticF_CodeDict(::System::Collections::Generic::Dictionary_2<uint8_t,::ExitGames::Client::Photon::CustomType*>*  value) ;

static inline void setStaticF_ProtocolDefault(::ExitGames::Client::Photon::IProtocol*  value) ;

static inline void setStaticF_TypeDict(::System::Collections::Generic::Dictionary_2<::System::Type*,::ExitGames::Client::Photon::CustomType*>*  value) ;

static inline void setStaticF_memDeserialize(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_memFloatBlock(::ArrayW<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Protocol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Protocol", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Protocol(Protocol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Protocol", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Protocol(Protocol const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26463};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::Protocol) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon
