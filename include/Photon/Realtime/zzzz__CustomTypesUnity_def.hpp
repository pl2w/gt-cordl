#pragma once
// IWYU pragma private; include "Photon/Realtime/CustomTypesUnity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomTypesUnity)
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class CustomTypesUnity;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::CustomTypesUnity*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::CustomTypesUnity*, "Photon.Realtime", "CustomTypesUnity");
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.CustomTypesUnity
class CORDL_TYPE CustomTypesUnity : public ::System::Object {
public:
// Declarations
/// @brief Field memQuarternion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memQuarternion, put=setStaticF_memQuarternion)) ::ArrayW<uint8_t>  memQuarternion;

/// @brief Field memVector2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memVector2, put=setStaticF_memVector2)) ::ArrayW<uint8_t>  memVector2;

/// @brief Field memVector3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memVector3, put=setStaticF_memVector3)) ::ArrayW<uint8_t>  memVector3;

/// @brief Method DeserializeQuaternion, addr 0xa6f7938, size 0x284, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeQuaternion(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length) ;

/// @brief Method DeserializeVector2, addr 0xa6f74f8, size 0x20c, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeVector2(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length) ;

/// @brief Method DeserializeVector3, addr 0xa6f70c0, size 0x240, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeVector3(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length) ;

/// @brief Method Register, addr 0xa6f6c1c, size 0x28c, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method SerializeQuaternion, addr 0xa6f7704, size 0x234, virtual false, abstract: false, final false
static inline int16_t SerializeQuaternion(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject) ;

/// @brief Method SerializeVector2, addr 0xa6f7300, size 0x1f8, virtual false, abstract: false, final false
static inline int16_t SerializeVector2(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject) ;

/// @brief Method SerializeVector3, addr 0xa6f6ea8, size 0x218, virtual false, abstract: false, final false
static inline int16_t SerializeVector3(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject) ;

static inline ::ArrayW<uint8_t> getStaticF_memQuarternion() ;

static inline ::ArrayW<uint8_t> getStaticF_memVector2() ;

static inline ::ArrayW<uint8_t> getStaticF_memVector3() ;

static inline void setStaticF_memQuarternion(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_memVector2(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_memVector3(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomTypesUnity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomTypesUnity", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomTypesUnity(CustomTypesUnity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomTypesUnity", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomTypesUnity(CustomTypesUnity const& ) = delete;

/// @brief Field SizeQuat offset 0xffffffff size 0x4
static constexpr int32_t  SizeQuat{static_cast<int32_t>(0x10)};

/// @brief Field SizeV2 offset 0xffffffff size 0x4
static constexpr int32_t  SizeV2{static_cast<int32_t>(0x8)};

/// @brief Field SizeV3 offset 0xffffffff size 0x4
static constexpr int32_t  SizeV3{static_cast<int32_t>(0xc)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29838};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Realtime::CustomTypesUnity) == 0x10, "Size mismatch!");

} // namespace end def Photon::Realtime
