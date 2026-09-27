#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/CustomTypesUnity.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomTypesUnity)
namespace ExitGames::Client::Photon {
class DeserializeStreamMethod;
}
namespace ExitGames::Client::Photon {
class SerializeStreamMethod;
}
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace Fusion::Photon::Realtime {
class CustomTypesUnity___O;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class CustomTypesUnity;
}
namespace Fusion::Photon::Realtime {
class CustomTypesUnity___O;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::CustomTypesUnity*);
MARK_REF_T(::Fusion::Photon::Realtime::CustomTypesUnity___O*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::CustomTypesUnity*, "Fusion.Photon.Realtime", "CustomTypesUnity");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::CustomTypesUnity___O*, "Fusion.Photon.Realtime", "CustomTypesUnity/<>O");
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.CustomTypesUnity
class CORDL_TYPE CustomTypesUnity : public ::System::Object {
public:
// Declarations
using __O = ::Fusion::Photon::Realtime::CustomTypesUnity___O;

/// @brief Field memQuarternion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memQuarternion, put=setStaticF_memQuarternion)) ::ArrayW<uint8_t>  memQuarternion;

/// @brief Field memVector2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memVector2, put=setStaticF_memVector2)) ::ArrayW<uint8_t>  memVector2;

/// @brief Field memVector3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memVector3, put=setStaticF_memVector3)) ::ArrayW<uint8_t>  memVector3;

/// @brief Method DeserializeQuaternion, addr 0x5f4d5d8, size 0x270, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeQuaternion(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length) ;

/// @brief Method DeserializeVector2, addr 0x5f4d1ac, size 0x1f8, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeVector2(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length) ;

/// @brief Method DeserializeVector3, addr 0x5f4cd88, size 0x22c, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeVector3(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length) ;

/// @brief Method Register, addr 0x5f4c7a4, size 0x3cc, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method SerializeQuaternion, addr 0x5f4d3a4, size 0x234, virtual false, abstract: false, final false
static inline int16_t SerializeQuaternion(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject) ;

/// @brief Method SerializeVector2, addr 0x5f4cfb4, size 0x1f8, virtual false, abstract: false, final false
static inline int16_t SerializeVector2(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject) ;

/// @brief Method SerializeVector3, addr 0x5f4cb70, size 0x218, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28041};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::CustomTypesUnity) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.CustomTypesUnity/<>O
class CORDL_TYPE CustomTypesUnity___O : public ::System::Object {
public:
// Declarations
/// @brief Field <0>__SerializeVector2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__0___SerializeVector2, put=setStaticF__0___SerializeVector2)) ::ExitGames::Client::Photon::SerializeStreamMethod*  _0___SerializeVector2;

/// @brief Field <1>__DeserializeVector2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__1___DeserializeVector2, put=setStaticF__1___DeserializeVector2)) ::ExitGames::Client::Photon::DeserializeStreamMethod*  _1___DeserializeVector2;

/// @brief Field <2>__SerializeVector3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__2___SerializeVector3, put=setStaticF__2___SerializeVector3)) ::ExitGames::Client::Photon::SerializeStreamMethod*  _2___SerializeVector3;

/// @brief Field <3>__DeserializeVector3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__3___DeserializeVector3, put=setStaticF__3___DeserializeVector3)) ::ExitGames::Client::Photon::DeserializeStreamMethod*  _3___DeserializeVector3;

/// @brief Field <4>__SerializeQuaternion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__4___SerializeQuaternion, put=setStaticF__4___SerializeQuaternion)) ::ExitGames::Client::Photon::SerializeStreamMethod*  _4___SerializeQuaternion;

/// @brief Field <5>__DeserializeQuaternion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__5___DeserializeQuaternion, put=setStaticF__5___DeserializeQuaternion)) ::ExitGames::Client::Photon::DeserializeStreamMethod*  _5___DeserializeQuaternion;

static inline ::ExitGames::Client::Photon::SerializeStreamMethod* getStaticF__0___SerializeVector2() ;

static inline ::ExitGames::Client::Photon::DeserializeStreamMethod* getStaticF__1___DeserializeVector2() ;

static inline ::ExitGames::Client::Photon::SerializeStreamMethod* getStaticF__2___SerializeVector3() ;

static inline ::ExitGames::Client::Photon::DeserializeStreamMethod* getStaticF__3___DeserializeVector3() ;

static inline ::ExitGames::Client::Photon::SerializeStreamMethod* getStaticF__4___SerializeQuaternion() ;

static inline ::ExitGames::Client::Photon::DeserializeStreamMethod* getStaticF__5___DeserializeQuaternion() ;

static inline void setStaticF__0___SerializeVector2(::ExitGames::Client::Photon::SerializeStreamMethod*  value) ;

static inline void setStaticF__1___DeserializeVector2(::ExitGames::Client::Photon::DeserializeStreamMethod*  value) ;

static inline void setStaticF__2___SerializeVector3(::ExitGames::Client::Photon::SerializeStreamMethod*  value) ;

static inline void setStaticF__3___DeserializeVector3(::ExitGames::Client::Photon::DeserializeStreamMethod*  value) ;

static inline void setStaticF__4___SerializeQuaternion(::ExitGames::Client::Photon::SerializeStreamMethod*  value) ;

static inline void setStaticF__5___DeserializeQuaternion(::ExitGames::Client::Photon::DeserializeStreamMethod*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomTypesUnity___O() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomTypesUnity___O", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomTypesUnity___O(CustomTypesUnity___O && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomTypesUnity___O", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomTypesUnity___O(CustomTypesUnity___O const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28040};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::CustomTypesUnity___O) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
