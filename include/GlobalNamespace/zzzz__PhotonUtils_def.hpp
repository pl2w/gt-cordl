#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonUtils)
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class NetworkSystem;
}
namespace GlobalNamespace {
class PhotonUtils_CustomTypes;
}
namespace GlobalNamespace {
template<typename T>
class PhotonUtils_EmptyArray_1;
}
namespace GlobalNamespace {
template<typename T>
class StaticArrayBag_1;
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
class PhotonUtils;
}
namespace GlobalNamespace {
class PhotonUtils_CustomTypes;
}
namespace GlobalNamespace {
template<typename T>
class PhotonUtils_EmptyArray_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PhotonUtils*);
MARK_REF_T(::GlobalNamespace::PhotonUtils_CustomTypes*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::PhotonUtils_EmptyArray_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonUtils*, "", "PhotonUtils");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PhotonUtils_CustomTypes*, "", "PhotonUtils/CustomTypes");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::PhotonUtils_EmptyArray_1, "", "PhotonUtils/EmptyArray`1");
// [Extension]
// Dependencies System.MulticastDelegate, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonUtils
class CORDL_TYPE PhotonUtils : public ::System::Object {
public:
// Declarations
using CustomTypes = ::GlobalNamespace::PhotonUtils_CustomTypes;

template<typename T>
using EmptyArray_1 = ::GlobalNamespace::PhotonUtils_EmptyArray_1<T>;

/// @brief Field gLengthToArgsArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gLengthToArgsArray, put=setStaticF_gLengthToArgsArray)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  gLengthToArgsArray;

/// @brief Field gLocalNetPlayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gLocalNetPlayer, put=setStaticF_gLocalNetPlayer)) ::GlobalNamespace::NetPlayer*  gLocalNetPlayer;

/// @brief Field gNetSystem, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gNetSystem, put=setStaticF_gNetSystem)) ::UnityW<::GlobalNamespace::NetworkSystem>  gNetSystem;

/// @brief Method FetchDelegatesNonAlloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::MulticastDelegate*>)
static inline ::by_ref<::ArrayW<T>> FetchDelegatesNonAlloc(T  delegate) ;

/// @brief Method FetchScratchArray, addr 0x5abf454, size 0x14c, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Object*> FetchScratchArray(int32_t  size) ;

/// @brief Method GetNetPlayer, addr 0x5abf9a4, size 0x90, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetPlayer* GetNetPlayer(int32_t  actorNumber) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10, ::by_ref<T11>  arg11) ;

/// [Extension]
/// @brief Method ParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
static inline void ParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10, ::by_ref<T11>  arg11, ::by_ref<T12>  arg12) ;

/// @brief Method TryGetNetSystem, addr 0x5ac00ac, size 0x170, virtual false, abstract: false, final false
static inline bool TryGetNetSystem(::by_ref<::GlobalNamespace::NetworkSystem*>  ns) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10, ::by_ref<T11>  arg11) ;

/// [Extension]
/// @brief Method TryParseArgs, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
static inline bool TryParseArgs(::ArrayW<::System::Object*>  args, int32_t  startIndex, ::by_ref<T1>  arg1, ::by_ref<T2>  arg2, ::by_ref<T3>  arg3, ::by_ref<T4>  arg4, ::by_ref<T5>  arg5, ::by_ref<T6>  arg6, ::by_ref<T7>  arg7, ::by_ref<T8>  arg8, ::by_ref<T9>  arg9, ::by_ref<T10>  arg10, ::by_ref<T11>  arg11, ::by_ref<T12>  arg12) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>* getStaticF_gLengthToArgsArray() ;

static inline ::GlobalNamespace::NetPlayer* getStaticF_gLocalNetPlayer() ;

static inline ::UnityW<::GlobalNamespace::NetworkSystem> getStaticF_gNetSystem() ;

/// @brief Method get_LocalActorNumber, addr 0x5ac021c, size 0x6c, virtual false, abstract: false, final false
static inline int32_t get_LocalActorNumber() ;

/// @brief Method get_LocalNetPlayer, addr 0x5abf5a0, size 0xe4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetPlayer* get_LocalNetPlayer() ;

static inline void setStaticF_gLengthToArgsArray(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::System::Object*>>*  value) ;

static inline void setStaticF_gLocalNetPlayer(::GlobalNamespace::NetPlayer*  value) ;

static inline void setStaticF_gNetSystem(::UnityW<::GlobalNamespace::NetworkSystem>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonUtils(PhotonUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonUtils(PhotonUtils const& ) = delete;

/// @brief Field ARG_ARRAYS offset 0xffffffff size 0x4
static constexpr int32_t  ARG_ARRAYS{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PhotonUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PhotonUtils/CustomTypes
class CORDL_TYPE PhotonUtils_CustomTypes : public ::System::Object {
public:
// Declarations
/// @brief Field _arrayBag, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__arrayBag, put=setStaticF__arrayBag)) ::GlobalNamespace::StaticArrayBag_1<uint8_t>*  _arrayBag;

/// @brief Field memVox, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memVox, put=setStaticF_memVox)) ::ArrayW<uint8_t>  memVox;

/// @brief Method CastToBytes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::ArrayW<uint8_t> CastToBytes(T  data) ;

/// @brief Method CastToStruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T CastToStruct(::ArrayW<uint8_t>  bytes) ;

/// @brief Method DeserializeBoundsInt, addr 0x5ac0ae4, size 0xac, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeBoundsInt(::ArrayW<uint8_t>  data) ;

/// @brief Method DeserializeColor32, addr 0x5ac0970, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeColor32(::ArrayW<uint8_t>  data) ;

/// @brief Method DeserializeInt3, addr 0x5ac0c48, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeInt3(::ArrayW<uint8_t>  data) ;

/// @brief Method DeserializeVoxel, addr 0x5ac130c, size 0x1ec, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeVoxel(::ExitGames::Client::Photon::StreamBuffer*  stream, int16_t  length) ;

/// @brief Method DeserializeVoxelAction, addr 0x5ac0da0, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeVoxelAction(::ArrayW<uint8_t>  data) ;

/// @brief Method DeserializeVoxelMineOperation, addr 0x5ac1094, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeVoxelMineOperation(::ArrayW<uint8_t>  data) ;

/// @brief Method DeserializeVoxelOperation, addr 0x5ac0f14, size 0xac, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeVoxelOperation(::ArrayW<uint8_t>  data) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method InitOnLoad, addr 0x5ac038c, size 0x534, virtual false, abstract: false, final false
static inline void InitOnLoad() ;

/// @brief Method SerializeBoundsInt, addr 0x5ac0a10, size 0xd4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeBoundsInt(::System::Object*  value) ;

/// @brief Method SerializeColor32, addr 0x5ac08c0, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeColor32(::System::Object*  value) ;

/// @brief Method SerializeInt3, addr 0x5ac0b90, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeInt3(::System::Object*  value) ;

/// @brief Method SerializeVoxel, addr 0x5ac1144, size 0x1c8, virtual false, abstract: false, final false
static inline int16_t SerializeVoxel(::ExitGames::Client::Photon::StreamBuffer*  stream, ::System::Object*  value) ;

/// @brief Method SerializeVoxelAction, addr 0x5ac0cec, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeVoxelAction(::System::Object*  value) ;

/// @brief Method SerializeVoxelMineOperation, addr 0x5ac0fc0, size 0xd4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeVoxelMineOperation(::System::Object*  value) ;

/// @brief Method SerializeVoxelOperation, addr 0x5ac0e40, size 0xd4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SerializeVoxelOperation(::System::Object*  value) ;

static inline ::GlobalNamespace::StaticArrayBag_1<uint8_t>* getStaticF__arrayBag() ;

static inline ::ArrayW<uint8_t> getStaticF_memVox() ;

static inline void setStaticF__arrayBag(::GlobalNamespace::StaticArrayBag_1<uint8_t>*  value) ;

static inline void setStaticF_memVox(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonUtils_CustomTypes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonUtils_CustomTypes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonUtils_CustomTypes(PhotonUtils_CustomTypes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonUtils_CustomTypes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonUtils_CustomTypes(PhotonUtils_CustomTypes const& ) = delete;

/// @brief Field LEN_C32 offset 0xffffffff size 0x2
static constexpr int16_t  LEN_C32{static_cast<int16_t>(0x4)};

/// @brief Field SizeVox offset 0xffffffff size 0x4
static constexpr int32_t  SizeVox{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3340};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PhotonUtils_CustomTypes) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: PhotonUtils/EmptyArray`1<T>
class CORDL_TYPE PhotonUtils_EmptyArray_1 : public ::System::Object {
public:
// Declarations
/// @brief Field gEmpty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gEmpty, put=setStaticF_gEmpty)) ::ArrayW<T>  gEmpty;

/// @brief Method Ref, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::by_ref<::ArrayW<T>> Ref() ;

static inline ::ArrayW<T> getStaticF_gEmpty() ;

static inline void setStaticF_gEmpty(::ArrayW<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonUtils_EmptyArray_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonUtils_EmptyArray_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonUtils_EmptyArray_1(PhotonUtils_EmptyArray_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonUtils_EmptyArray_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonUtils_EmptyArray_1(PhotonUtils_EmptyArray_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
