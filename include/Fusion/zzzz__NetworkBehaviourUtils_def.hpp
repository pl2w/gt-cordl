#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviourUtils)
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace Fusion {
class NetworkBehaviourUtils___c;
}
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
template<typename K,typename V>
struct NetworkDictionary_2;
}
namespace Fusion {
template<typename T>
struct NetworkLinkedList_1;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct RpcInvokeData;
}
namespace Fusion {
class RpcStaticInvokeDelegate;
}
namespace Fusion {
template<typename TKey,typename TValue>
class SerializableDictionary_2;
}
namespace Fusion {
class SimulationBehaviour;
}
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviourUtils_ArrayInitializer_1;
}
namespace GlobalNamespace {
template<typename K,typename V>
struct NetworkBehaviourUtils_DictionaryInitializer_2;
}
namespace GlobalNamespace {
struct NetworkBehaviourUtils_MetaData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion {
class NetworkBehaviourUtils;
}
namespace Fusion {
class NetworkBehaviourUtils___c;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkBehaviourUtils*);
MARK_REF_T(::Fusion::NetworkBehaviourUtils___c*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviourUtils*, "Fusion", "NetworkBehaviourUtils");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviourUtils___c*, "Fusion", "NetworkBehaviourUtils/<>c");
// Dependencies System.Collections.Generic.IDictionary`2<TKey, TValue>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBehaviourUtils
class CORDL_TYPE NetworkBehaviourUtils : public ::System::Object {
public:
// Declarations
using __c = ::Fusion::NetworkBehaviourUtils___c;

template<typename T>
using ArrayInitializer_1 = ::GlobalNamespace::NetworkBehaviourUtils_ArrayInitializer_1<T>;

template<typename K,typename V>
using DictionaryInitializer_2 = ::GlobalNamespace::NetworkBehaviourUtils_DictionaryInitializer_2<K, V>;

using MetaData = ::GlobalNamespace::NetworkBehaviourUtils_MetaData;

/// @brief Field InvokeRpc, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_InvokeRpc, put=setStaticF_InvokeRpc)) bool  InvokeRpc;

/// @brief Field _invokerDelegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__invokerDelegates, put=setStaticF__invokerDelegates)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::Fusion::RpcInvokeData>>*  _invokerDelegates;

/// @brief Field _metaData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__metaData, put=setStaticF__metaData)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::NetworkBehaviourUtils_MetaData>*  _metaData;

/// @brief Field _staticInvokers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__staticInvokers, put=setStaticF__staticInvokers)) ::System::Collections::Generic::SortedList_2<::StringW,::Fusion::RpcStaticInvokeDelegate*>*  _staticInvokers;

/// @brief Field _wordCounts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__wordCounts, put=setStaticF__wordCounts)) ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  _wordCounts;

/// @brief Method CloneArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T> CloneArray(::ArrayW<T>  array) ;

/// @brief Method CopyFromNetworkArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void CopyFromNetworkArray(::Fusion::NetworkArray_1<T>  networkArray, ::by_ref<::ArrayW<T>>  dstArray) ;

/// @brief Method CopyFromNetworkDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename D,typename K,typename V>
requires(::cordl_internals::type_constraint<D, ::System::Collections::Generic::IDictionary_2<K,V>*> && ::cordl_internals::default_constructor_constraint<D> && ::cordl_internals::value_type_constraint<K> && ::cordl_internals::default_constructor_constraint<K> && ::cordl_internals::value_type_constraint<V> && ::cordl_internals::default_constructor_constraint<V>)
static inline void CopyFromNetworkDictionary(::Fusion::NetworkDictionary_2<K,V>  networkDictionary, ::by_ref<D>  dictionary) ;

/// @brief Method CopyFromNetworkList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void CopyFromNetworkList(::Fusion::NetworkLinkedList_1<T>  networkList, ::by_ref<::ArrayW<T>>  dstArray) ;

/// @brief Method GetMetaData, addr 0x5f835ec, size 0xa0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NetworkBehaviourUtils_MetaData GetMetaData(::System::Type*  type) ;

/// @brief Method GetRpcStaticIndexOrThrow, addr 0x5f842b4, size 0xdc, virtual false, abstract: false, final false
static inline int32_t GetRpcStaticIndexOrThrow(::StringW  key) ;

/// @brief Method GetStaticWordCount, addr 0x5f8390c, size 0x16c, virtual false, abstract: false, final false
static inline int32_t GetStaticWordCount(::System::Type*  type) ;

/// @brief Method GetWordCount, addr 0x5f83760, size 0x1ac, virtual false, abstract: false, final false
static inline int32_t GetWordCount(::Fusion::NetworkBehaviour*  behaviour) ;

/// @brief Method HasStaticWordCount, addr 0x5f83a78, size 0xac, virtual false, abstract: false, final false
static inline bool HasStaticWordCount(::System::Type*  type) ;

/// @brief Method InitializeNetworkArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void InitializeNetworkArray(::Fusion::NetworkArray_1<T>  networkArray, ::ArrayW<T>  sourceArray, ::StringW  name) ;

/// @brief Method InitializeNetworkDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename D,typename K,typename V>
requires(::cordl_internals::type_constraint<D, ::System::Collections::Generic::IDictionary_2<K,V>*> && ::cordl_internals::value_type_constraint<K> && ::cordl_internals::default_constructor_constraint<K> && ::cordl_internals::value_type_constraint<V> && ::cordl_internals::default_constructor_constraint<V>)
static inline void InitializeNetworkDictionary(::Fusion::NetworkDictionary_2<K,V>  networkDictionary, D  dictionary, ::StringW  name) ;

/// @brief Method InitializeNetworkList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void InitializeNetworkList(::Fusion::NetworkLinkedList_1<T>  networkList, ::ArrayW<T>  sourceArray, ::StringW  name) ;

/// @brief Method InternalOnDestroy, addr 0x5f848f4, size 0x94, virtual false, abstract: false, final false
static inline void InternalOnDestroy(::Fusion::SimulationBehaviour*  obj) ;

/// @brief Method InternalOnDisable, addr 0x5f84a1c, size 0x94, virtual false, abstract: false, final false
static inline void InternalOnDisable(::Fusion::SimulationBehaviour*  obj) ;

/// @brief Method InternalOnEnable, addr 0x5f84988, size 0x94, virtual false, abstract: false, final false
static inline void InternalOnEnable(::Fusion::SimulationBehaviour*  obj) ;

/// @brief Method MakeSerializableDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename K,typename V>
requires(::cordl_internals::value_type_constraint<K> && ::cordl_internals::default_constructor_constraint<K> && ::cordl_internals::value_type_constraint<V> && ::cordl_internals::default_constructor_constraint<V>)
static inline ::Fusion::SerializableDictionary_2<K,V>* MakeSerializableDictionary(::System::Collections::Generic::Dictionary_2<K,V>*  dictionary) ;

/// @brief Method NotifyLocalSimulationNotAllowedToSendRpc, addr 0x5f84684, size 0xd0, virtual false, abstract: false, final false
static inline void NotifyLocalSimulationNotAllowedToSendRpc(::StringW  rpc, ::Fusion::NetworkObject*  obj, int32_t  sources) ;

/// @brief Method NotifyLocalTargetedRpcCulled, addr 0x5f84754, size 0xc0, virtual false, abstract: false, final false
static inline void NotifyLocalTargetedRpcCulled(::Fusion::PlayerRef  player, ::StringW  methodName) ;

/// @brief Method NotifyNetworkUnwrapFailed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void NotifyNetworkUnwrapFailed(T  wrapper, ::System::Type*  valueType) ;

/// @brief Method NotifyNetworkWrapFailed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void NotifyNetworkWrapFailed(T  value) ;

/// @brief Method NotifyNetworkWrapFailed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void NotifyNetworkWrapFailed(T  value, ::System::Type*  wrapperType) ;

/// @brief Method NotifyRpcPayloadSizeExceeded, addr 0x5f844ec, size 0xd8, virtual false, abstract: false, final false
static inline void NotifyRpcPayloadSizeExceeded(::StringW  rpc, int32_t  size) ;

/// @brief Method NotifyRpcTargetUnreachable, addr 0x5f845c4, size 0xc0, virtual false, abstract: false, final false
static inline void NotifyRpcTargetUnreachable(::Fusion::PlayerRef  player, ::StringW  rpc) ;

/// @brief Method RegisterMetaData, addr 0x5f8368c, size 0xd4, virtual false, abstract: false, final false
static inline void RegisterMetaData(::System::Type*  type) ;

/// @brief Method RegisterRpcInvokeDelegates, addr 0x5f83bb0, size 0x674, virtual false, abstract: false, final false
static inline void RegisterRpcInvokeDelegates(::System::Type*  type) ;

/// @brief Method ResetStatics, addr 0x5f834ec, size 0x100, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method ShouldRegisterRpcInvokeDelegates, addr 0x5f83b24, size 0x8c, virtual false, abstract: false, final false
static inline bool ShouldRegisterRpcInvokeDelegates(::System::Type*  type) ;

/// @brief Method ThrowIfBehaviourNotInitialized, addr 0x5f84814, size 0xe0, virtual false, abstract: false, final false
static inline void ThrowIfBehaviourNotInitialized(::Fusion::NetworkBehaviour*  behaviour) ;

/// @brief Method TryGetRpcInvokeDelegateArray, addr 0x5f84224, size 0x90, virtual false, abstract: false, final false
static inline bool TryGetRpcInvokeDelegateArray(::System::Type*  type, ::by_ref<::ArrayW<::Fusion::RpcInvokeData>>  delegates) ;

/// @brief Method TryGetRpcStaticInvokeDelegate, addr 0x5f84390, size 0x15c, virtual false, abstract: false, final false
static inline bool TryGetRpcStaticInvokeDelegate(int32_t  index, ::by_ref<::Fusion::RpcStaticInvokeDelegate*>  del) ;

static inline bool getStaticF_InvokeRpc() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::Fusion::RpcInvokeData>>* getStaticF__invokerDelegates() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::NetworkBehaviourUtils_MetaData>* getStaticF__metaData() ;

static inline ::System::Collections::Generic::SortedList_2<::StringW,::Fusion::RpcStaticInvokeDelegate*>* getStaticF__staticInvokers() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* getStaticF__wordCounts() ;

static inline void setStaticF_InvokeRpc(bool  value) ;

static inline void setStaticF__invokerDelegates(::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::Fusion::RpcInvokeData>>*  value) ;

static inline void setStaticF__metaData(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::NetworkBehaviourUtils_MetaData>*  value) ;

static inline void setStaticF__staticInvokers(::System::Collections::Generic::SortedList_2<::StringW,::Fusion::RpcStaticInvokeDelegate*>*  value) ;

static inline void setStaticF__wordCounts(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviourUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviourUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBehaviourUtils(NetworkBehaviourUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviourUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBehaviourUtils(NetworkBehaviourUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18922};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkBehaviourUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBehaviourUtils/<>c
class CORDL_TYPE NetworkBehaviourUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::NetworkBehaviourUtils___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Comparison_1<::Fusion::RpcInvokeData>*  __9__13_0;

static inline ::Fusion::NetworkBehaviourUtils___c* New_ctor() ;

/// @brief Method <RegisterRpcInvokeDelegates>b__13_0, addr 0x5f84cd0, size 0x14, virtual false, abstract: false, final false
inline int32_t _RegisterRpcInvokeDelegates_b__13_0(::Fusion::RpcInvokeData  a, ::Fusion::RpcInvokeData  b) ;

/// @brief Method .ctor, addr 0x5f84cc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::NetworkBehaviourUtils___c* getStaticF___9() ;

static inline ::System::Comparison_1<::Fusion::RpcInvokeData>* getStaticF___9__13_0() ;

static inline void setStaticF___9(::Fusion::NetworkBehaviourUtils___c*  value) ;

static inline void setStaticF___9__13_0(::System::Comparison_1<::Fusion::RpcInvokeData>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviourUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviourUtils___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBehaviourUtils___c(NetworkBehaviourUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviourUtils___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBehaviourUtils___c(NetworkBehaviourUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18921};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkBehaviourUtils___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
