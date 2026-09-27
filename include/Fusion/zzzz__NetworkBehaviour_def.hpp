#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviour.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__INetworkInput_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_PropertyData_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_ChangeDetector_Source_def.hpp"
#include "Fusion/zzzz__RpcInvokeData_def.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviour)
namespace Fusion {
class ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper;
}
namespace Fusion {
template<typename T>
class ChangeDetector_NetworkBehaviour_OnChangedCallback_1;
}
namespace Fusion {
class ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper;
}
namespace Fusion {
template<typename T>
class ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1;
}
namespace Fusion {
template<typename T>
class ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1;
}
namespace Fusion {
template<typename T>
class ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1;
}
namespace Fusion {
class IDespawned;
}
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
class ISpawned;
}
namespace Fusion {
struct NetworkBehaviourBuffer;
}
namespace Fusion {
struct NetworkBehaviourId;
}
namespace Fusion {
class NetworkBehaviour_ChangeDetector;
}
namespace Fusion {
class NetworkBehaviour_PropertyReaderData;
}
namespace Fusion {
class NetworkBehaviour_ReadersForType;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
struct Tick;
}
namespace GlobalNamespace {
struct ChangeDetector_NetworkBehaviour_Enumerable;
}
namespace GlobalNamespace {
struct ChangeDetector_NetworkBehaviour_Enumerator;
}
namespace GlobalNamespace {
struct ChangeDetector_NetworkBehaviour_PropertyData;
}
namespace GlobalNamespace {
struct ChangeDetector_NetworkBehaviour_Source;
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
template<typename T>
struct NetworkBehaviour_ArrayReader_1;
}
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviour_BehaviourReader_1;
}
namespace GlobalNamespace {
template<typename K,typename V>
struct NetworkBehaviour_DictionaryReader_2;
}
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviour_LinkListReader_1;
}
namespace GlobalNamespace {
template<typename T>
struct NetworkBehaviour_PropertyReader_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Fusion {
class ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper;
}
namespace Fusion {
template<typename T>
class ChangeDetector_NetworkBehaviour_OnChangedCallback_1;
}
namespace Fusion {
class ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper;
}
namespace Fusion {
template<typename T>
class ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1;
}
namespace Fusion {
template<typename T>
class ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1;
}
namespace Fusion {
template<typename T>
class ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1;
}
namespace Fusion {
class NetworkBehaviour;
}
namespace Fusion {
class NetworkBehaviour_ChangeDetector;
}
namespace Fusion {
class NetworkBehaviour_PropertyReaderData;
}
namespace Fusion {
class NetworkBehaviour_ReadersForType;
}
// Write type traits
MARK_REF_T(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*);
MARK_GEN_REF_T_PTR(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1);
MARK_REF_T(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*);
MARK_GEN_REF_T_PTR(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1);
MARK_GEN_REF_T_PTR(::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1);
MARK_GEN_REF_T_PTR(::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1);
MARK_REF_T(::Fusion::NetworkBehaviour*);
MARK_REF_T(::Fusion::NetworkBehaviour_ChangeDetector*);
MARK_REF_T(::Fusion::NetworkBehaviour_PropertyReaderData*);
MARK_REF_T(::Fusion::NetworkBehaviour_ReadersForType*);
DEFINE_IL2CPP_CLASS(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper*, "Fusion", "NetworkBehaviour/ChangeDetector/OnChangedCallbackWrapper");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1, "Fusion", "NetworkBehaviour/ChangeDetector/OnChangedCallback`1");
DEFINE_IL2CPP_CLASS(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper*, "Fusion", "NetworkBehaviour/ChangeDetector/OnChangedPrevCallbackWrapper");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1, "Fusion", "NetworkBehaviour/ChangeDetector/OnChangedPrevCallback`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1, "Fusion", "NetworkBehaviour/ChangeDetector/<>c__DisplayClass10_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1, "Fusion", "NetworkBehaviour/ChangeDetector/<>c__DisplayClass9_0`1");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviour*, "Fusion", "NetworkBehaviour");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviour_ChangeDetector*, "Fusion", "NetworkBehaviour/ChangeDetector");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviour_PropertyReaderData*, "Fusion", "NetworkBehaviour/PropertyReaderData");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviour_ReadersForType*, "Fusion", "NetworkBehaviour/ReadersForType");
// Dependencies Fusion.NetworkBehaviour, Fusion.NetworkBehaviour::ChangeDetector::PropertyData, Fusion.NetworkBehaviour::ChangeDetector::Source, Fusion.Tick, System.Nullable`1<T>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBehaviour/ChangeDetector
class CORDL_TYPE NetworkBehaviour_ChangeDetector : public ::System::Object {
public:
// Declarations
using OnChangedCallbackWrapper = ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper;

template<typename T>
using OnChangedCallback_1 = ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>;

using OnChangedPrevCallbackWrapper = ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper;

template<typename T>
using OnChangedPrevCallback_1 = ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>;

template<typename T>
using __c__DisplayClass10_0_1 = ::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>;

template<typename T>
using __c__DisplayClass9_0_1 = ::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>;

using Enumerable = ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable;

using Enumerator = ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerator;

using PropertyData = ::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData;

using Source = ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source;

/// @brief Field InvokeCallbacks, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_InvokeCallbacks, put=__cordl_internal_set_InvokeCallbacks)) bool  InvokeCallbacks;

/// @brief Field _changed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__changed, put=__cordl_internal_set__changed)) ::ArrayW<::StringW>  _changed;

/// @brief Field _changedProperty, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__changedProperty, put=__cordl_internal_set__changedProperty)) ::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>  _changedProperty;

/// @brief Field _hasChangeCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__hasChangeCallbacks, put=setStaticF__hasChangeCallbacks)) ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  _hasChangeCallbacks;

/// @brief Field _instance, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get__instance, put=__cordl_internal_set__instance)) ::System::Nullable_1<int32_t>  _instance;

/// @brief Field _propertyMappings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__propertyMappings, put=setStaticF__propertyMappings)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>>*  _propertyMappings;

/// @brief Field _source, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__source, put=__cordl_internal_set__source)) ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source  _source;

/// @brief Field _sourceTick, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__sourceTick, put=__cordl_internal_set__sourceTick)) ::Fusion::Tick  _sourceTick;

/// @brief Field _words, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__words, put=__cordl_internal_set__words)) ::ArrayW<int32_t>  _words;

/// @brief Field _wordsPrevious, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__wordsPrevious, put=__cordl_internal_set__wordsPrevious)) int32_t*  _wordsPrevious;

/// @brief Method AddPropertiesToMappingForType, addr 0x5f81448, size 0x720, virtual false, abstract: false, final false
static inline void AddPropertiesToMappingForType(::System::Type*  type, ::System::Collections::Generic::List_1<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>*  result, ::System::Reflection::BindingFlags  bindingFlags, ::by_ref<bool>  hasChangeCallbacks) ;

/// @brief Method DetectChanges, addr 0x5f7f630, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable DetectChanges(::Fusion::NetworkBehaviour*  b, bool  copyChanges) ;

/// @brief Method DetectChanges, addr 0x5f81c28, size 0x4, virtual false, abstract: false, final false
inline ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable DetectChanges(::Fusion::NetworkBehaviour*  b, ::by_ref<::Fusion::NetworkBehaviourBuffer>  previous, ::by_ref<::Fusion::NetworkBehaviourBuffer>  current, bool  copyChanges) ;

/// @brief Method DetectChangesInternal, addr 0x5f81c2c, size 0x5e8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Enumerable DetectChangesInternal(::Fusion::NetworkBehaviour*  b, ::by_ref<::Fusion::NetworkBehaviourBuffer>  previous, ::by_ref<::Fusion::NetworkBehaviourBuffer>  current, bool  copyChanges) ;

/// @brief Method Finalize, addr 0x5f81b68, size 0xc0, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetPropertyMappping, addr 0x5f8110c, size 0x33c, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData> GetPropertyMappping(::System::Type*  type) ;

/// @brief Method GetWrapper, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
static inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper* GetWrapper(::System::Reflection::MethodInfo*  methodInfo) ;

/// @brief Method GetWrapperPrev, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
static inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper* GetWrapperPrev(::System::Reflection::MethodInfo*  methodInfo) ;

/// @brief Method HasChangeCallbacks, addr 0x5f7f700, size 0x100, virtual false, abstract: false, final false
static inline bool HasChangeCallbacks(::System::Type*  type) ;

/// @brief Method Init, addr 0x5f801ec, size 0x26c, virtual false, abstract: false, final false
inline void Init(::Fusion::NetworkBehaviour*  networkBehaviour, ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source  source, bool  copyInitial) ;

static inline ::Fusion::NetworkBehaviour_ChangeDetector* New_ctor() ;

constexpr bool const& __cordl_internal_get_InvokeCallbacks() const;

constexpr bool& __cordl_internal_get_InvokeCallbacks() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__changed() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__changed() ;

constexpr ::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData> const& __cordl_internal_get__changedProperty() const;

constexpr ::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>& __cordl_internal_get__changedProperty() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__instance() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__instance() ;

constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source const& __cordl_internal_get__source() const;

constexpr ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source& __cordl_internal_get__source() ;

constexpr ::Fusion::Tick const& __cordl_internal_get__sourceTick() const;

constexpr ::Fusion::Tick& __cordl_internal_get__sourceTick() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__words() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__words() ;

constexpr int32_t* const& __cordl_internal_get__wordsPrevious() const;

constexpr int32_t*& __cordl_internal_get__wordsPrevious() ;

constexpr void __cordl_internal_set_InvokeCallbacks(bool  value) ;

constexpr void __cordl_internal_set__changed(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__changedProperty(::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>  value) ;

constexpr void __cordl_internal_set__instance(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set__source(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source  value) ;

constexpr void __cordl_internal_set__sourceTick(::Fusion::Tick  value) ;

constexpr void __cordl_internal_set__words(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__wordsPrevious(int32_t*  value) ;

/// @brief Method .ctor, addr 0x5f801e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,bool>* getStaticF__hasChangeCallbacks() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>>* getStaticF__propertyMappings() ;

static inline void setStaticF__hasChangeCallbacks(::System::Collections::Generic::Dictionary_2<::System::Type*,bool>*  value) ;

static inline void setStaticF__propertyMappings(::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour_ChangeDetector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour_ChangeDetector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBehaviour_ChangeDetector(NetworkBehaviour_ChangeDetector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour_ChangeDetector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBehaviour_ChangeDetector(NetworkBehaviour_ChangeDetector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18913};

/// @brief Field _instance, offset: 0x10, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ____instance;

/// @brief Field _words, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____words;

/// @brief Field _wordsPrevious, offset: 0x28, size: 0x8, def value: None
 int32_t*  ____wordsPrevious;

/// @brief Field _source, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source  ____source;

/// @brief Field _sourceTick, offset: 0x34, size: 0x4, def value: None
 ::Fusion::Tick  ____sourceTick;

/// @brief Field _changed, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____changed;

/// @brief Field _changedProperty, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ChangeDetector_NetworkBehaviour_PropertyData>  ____changedProperty;

/// @brief Field InvokeCallbacks, offset: 0x48, size: 0x1, def value: None
 bool  ___InvokeCallbacks;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkBehaviour_ChangeDetector, ____instance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_ChangeDetector, ____words) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_ChangeDetector, ____wordsPrevious) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_ChangeDetector, ____source) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_ChangeDetector, ____sourceTick) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_ChangeDetector, ____changed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_ChangeDetector, ____changedProperty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_ChangeDetector, ___InvokeCallbacks) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkBehaviour_ChangeDetector) == 0x48, "Size mismatch!");

} // namespace end def Fusion
// [ScriptHelp(BackColor = (Fusion.ScriptHeaderBackColor)2)]
// [HelpURL("https://doc.photonengine.com/fusion/current/manual/network-object#networkbehaviour")]
// Dependencies Fusion.INetworkInput, Fusion.RpcInvokeData, Fusion.SimulationBehaviour
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBehaviour
class CORDL_TYPE NetworkBehaviour : public ::Fusion::SimulationBehaviour {
public:
// Declarations
using ChangeDetector = ::Fusion::NetworkBehaviour_ChangeDetector;

using PropertyReaderData = ::Fusion::NetworkBehaviour_PropertyReaderData;

using ReadersForType = ::Fusion::NetworkBehaviour_ReadersForType;

template<typename T>
using ArrayReader_1 = ::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T>;

template<typename T>
using BehaviourReader_1 = ::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>;

template<typename K,typename V>
using DictionaryReader_2 = ::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K, V>;

template<typename T>
using LinkListReader_1 = ::GlobalNamespace::NetworkBehaviour_LinkListReader_1<T>;

template<typename T>
using PropertyReader_1 = ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>;

 __declspec(property(get=get_ChangedTick)) ::Fusion::Tick  ChangedTick;

/// @brief Field DefaultReplicated, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_DefaultReplicated, put=__cordl_internal_set_DefaultReplicated)) bool  DefaultReplicated;

 __declspec(property(get=get_DynamicWordCount)) ::System::Nullable_1<int32_t>  DynamicWordCount;

 __declspec(property(get=get_HasInputAuthority)) bool  HasInputAuthority;

 __declspec(property(get=get_HasStateAuthority)) bool  HasStateAuthority;

 __declspec(property(get=get_Id)) ::Fusion::NetworkBehaviourId  Id;

/// @brief Field InvokeRpc, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_InvokeRpc, put=__cordl_internal_set_InvokeRpc)) bool  InvokeRpc;

 __declspec(property(get=get_IsEditorWritable)) bool  IsEditorWritable;

 __declspec(property(get=get_IsProxy)) bool  IsProxy;

/// @brief Field ObjectIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_ObjectIndex, put=__cordl_internal_set_ObjectIndex)) int32_t  ObjectIndex;

/// @brief Field Ptr, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_Ptr, put=__cordl_internal_set_Ptr)) int32_t*  Ptr;

/// @brief Field RpcCache, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_RpcCache, put=__cordl_internal_set_RpcCache)) ::ArrayW<::Fusion::RpcInvokeData>  RpcCache;

 __declspec(property(get=get_StateBuffer)) ::Fusion::NetworkBehaviourBuffer  StateBuffer;

 __declspec(property(get=get_StateBufferIsValid)) bool  StateBufferIsValid;

/// @brief Field WordCount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_WordCount, put=__cordl_internal_set_WordCount)) int32_t  WordCount;

/// @brief [TupleElementNames(new[] { "offset", "count" })]
 __declspec(property(get=get_WordInfo)) ::System::ValueTuple_2<int32_t,int32_t>  WordInfo;

/// @brief Field WordOffset, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_WordOffset, put=__cordl_internal_set_WordOffset)) int32_t  WordOffset;

/// @brief Field _onRenderCallbacksDetector, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__onRenderCallbacksDetector, put=__cordl_internal_set__onRenderCallbacksDetector)) ::Fusion::NetworkBehaviour_ChangeDetector*  _onRenderCallbacksDetector;

/// @brief Field _readersByType, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__readersByType, put=setStaticF__readersByType)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::NetworkBehaviour_ReadersForType*>*  _readersByType;

/// @brief Field _readersForType, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__readersForType, put=__cordl_internal_set__readersForType)) ::Fusion::NetworkBehaviour_ReadersForType*  _readersForType;

/// @brief Convert operator to "::Fusion::IDespawned"
constexpr operator  ::Fusion::IDespawned*() noexcept;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>*() noexcept;

/// @brief Convert operator to "::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>"
constexpr operator  ::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Convert operator to "::Fusion::ISpawned"
constexpr operator  ::Fusion::ISpawned*() noexcept;

/// @brief Method CopyBackingFieldsToState, addr 0x5f7f5f0, size 0x4, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  firstTime) ;

/// @brief Method CopyStateFrom, addr 0x5f7f47c, size 0x114, virtual false, abstract: false, final false
inline void CopyStateFrom(::Fusion::NetworkBehaviour*  source) ;

/// @brief Method CopyStateToBackingFields, addr 0x5f7f5f4, size 0x4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method Despawned, addr 0x5f7f888, size 0x4, virtual true, abstract: false, final false
inline void Despawned(::Fusion::NetworkRunner*  runner, bool  hasState) ;

/// @brief Method FixedUpdateNetwork, addr 0x5f7f590, size 0x4, virtual true, abstract: false, final false
inline void FixedUpdateNetwork() ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.GetElementHashCode, addr 0x5f807f0, size 0x20, virtual true, abstract: false, final true
inline int32_t Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__GetElementHashCode(::Fusion::NetworkBehaviour*  element) ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.GetElementWordCount, addr 0x5f8087c, size 0x8, virtual true, abstract: false, final true
inline int32_t Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__GetElementWordCount() ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.Read, addr 0x5f80884, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::Fusion::NetworkBehaviour> Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__Read(uint8_t*  data, int32_t  index) ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.ReadRef, addr 0x5f80894, size 0x4c, virtual true, abstract: false, final true
inline ::by_ref<::UnityW<::Fusion::NetworkBehaviour>> Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkBehaviour>.Write, addr 0x5f808e0, size 0x2c, virtual true, abstract: false, final true
inline void Fusion_IElementReaderWriter_Fusion_NetworkBehaviour__Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkBehaviour*  element) ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkObject>.GetElementHashCode, addr 0x5f80914, size 0x7c, virtual true, abstract: false, final true
inline int32_t Fusion_IElementReaderWriter_Fusion_NetworkObject__GetElementHashCode(::Fusion::NetworkObject*  element) ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkObject>.GetElementWordCount, addr 0x5f8090c, size 0x8, virtual true, abstract: false, final true
inline int32_t Fusion_IElementReaderWriter_Fusion_NetworkObject__GetElementWordCount() ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkObject>.Read, addr 0x5f80990, size 0x28, virtual true, abstract: false, final true
inline ::UnityW<::Fusion::NetworkObject> Fusion_IElementReaderWriter_Fusion_NetworkObject__Read(uint8_t*  data, int32_t  index) ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkObject>.ReadRef, addr 0x5f809b8, size 0x4c, virtual true, abstract: false, final true
inline ::by_ref<::UnityW<::Fusion::NetworkObject>> Fusion_IElementReaderWriter_Fusion_NetworkObject__ReadRef(uint8_t*  data, int32_t  index) ;

/// @brief Method Fusion.IElementReaderWriter<Fusion.NetworkObject>.Write, addr 0x5f80a04, size 0x30, virtual true, abstract: false, final true
inline void Fusion_IElementReaderWriter_Fusion_NetworkObject__Write(uint8_t*  data, int32_t  index, ::Fusion::NetworkObject*  element) ;

/// @brief Method GetArrayReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T> GetArrayReader(::System::Type*  behaviourType, ::StringW  property, ::Fusion::IElementReaderWriter_1<T>*  readerWriter) ;

/// @brief Method GetArrayReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::GlobalNamespace::NetworkBehaviour_ArrayReader_1<T> GetArrayReader(::StringW  property) ;

/// @brief Method GetBehaviourReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T> GetBehaviourReader(::StringW  property) ;

/// @brief Method GetBehaviourReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T> GetBehaviourReader(::Fusion::NetworkRunner*  runner, ::System::Type*  behaviourType, ::StringW  property) ;

/// @brief Method GetBehaviourReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TBehaviour,typename TProperty>
static inline ::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<TProperty> GetBehaviourReader(::Fusion::NetworkRunner*  runner, ::StringW  property) ;

/// @brief Method GetChangeDetector, addr 0x5f7f800, size 0x84, virtual false, abstract: false, final false
inline ::Fusion::NetworkBehaviour_ChangeDetector* GetChangeDetector(::GlobalNamespace::ChangeDetector_NetworkBehaviour_Source  source, bool  copyInitial) ;

/// @brief Method GetDictionaryReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename K,typename V>
static inline ::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V> GetDictionaryReader(::System::Type*  behaviourType, ::StringW  property, ::Fusion::IElementReaderWriter_1<K>*  keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  valueReaderWriter) ;

/// @brief Method GetDictionaryReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename K,typename V>
inline ::GlobalNamespace::NetworkBehaviour_DictionaryReader_2<K,V> GetDictionaryReader(::StringW  property) ;

/// @brief Method GetInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::System::Nullable_1<T> GetInput() ;

/// @brief Method GetInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::INetworkInput*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool GetInput(::by_ref<T>  input) ;

/// @brief Method GetLinkListReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::NetworkBehaviour_LinkListReader_1<T> GetLinkListReader(::System::Type*  behaviourType, ::StringW  property, ::Fusion::IElementReaderWriter_1<T>*  readerWriter) ;

/// @brief Method GetLinkListReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::GlobalNamespace::NetworkBehaviour_LinkListReader_1<T> GetLinkListReader(::StringW  property) ;

/// @brief Method GetLocalAuthorityMask, addr 0x5f7f354, size 0xd8, virtual false, abstract: false, final false
inline int32_t GetLocalAuthorityMask() ;

/// @brief Method GetPropertyReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T> GetPropertyReader(::System::Type*  behaviourType, ::StringW  property) ;

/// @brief Method GetPropertyReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T> GetPropertyReader(::StringW  property) ;

/// @brief Method GetPropertyReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T> GetPropertyReader(::Fusion::NetworkBehaviour_ReadersForType*  readersForType, ::StringW  property) ;

/// @brief Method GetPropertyReader, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TBehaviour,typename TProperty>
requires(::cordl_internals::value_type_constraint<TProperty> && ::cordl_internals::default_constructor_constraint<TProperty>)
static inline ::GlobalNamespace::NetworkBehaviour_PropertyReader_1<TProperty> GetPropertyReader(::StringW  property) ;

/// @brief Method GetPropertyReaderData, addr 0x5f7fcdc, size 0x500, virtual false, abstract: false, final false
static inline ::Fusion::NetworkBehaviour_PropertyReaderData* GetPropertyReaderData(::Fusion::NetworkBehaviour_ReadersForType*  readersForType, ::StringW  property, ::System::Type*  typeExpected) ;

/// @brief Method GetReadersForType, addr 0x5f7f88c, size 0x188, virtual false, abstract: false, final false
static inline ::Fusion::NetworkBehaviour_ReadersForType* GetReadersForType(::System::Type*  type) ;

/// @brief Method InvokeWeavedCode, addr 0x5f80780, size 0x4, virtual false, abstract: false, final false
static inline void InvokeWeavedCode() ;

/// @brief Method IsArray, addr 0x5f7fa9c, size 0xc0, virtual false, abstract: false, final false
static inline bool IsArray(::System::Type*  type) ;

/// @brief Method IsDict, addr 0x5f7fc1c, size 0xc0, virtual false, abstract: false, final false
static inline bool IsDict(::System::Type*  type) ;

/// @brief Method IsList, addr 0x5f7fb5c, size 0xc0, virtual false, abstract: false, final false
static inline bool IsList(::System::Type*  type) ;

/// @brief Method MakeInitializer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::NetworkBehaviourUtils_ArrayInitializer_1<T> MakeInitializer(::ArrayW<T>  array) ;

/// @brief Method MakeInitializer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename K,typename V>
static inline ::GlobalNamespace::NetworkBehaviourUtils_DictionaryInitializer_2<K,V> MakeInitializer(::System::Collections::Generic::Dictionary_2<K,V>*  dictionary) ;

/// @brief Method MakeOwned, addr 0x5f80784, size 0x3c, virtual false, abstract: false, final false
inline void MakeOwned(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, int32_t  index) ;

/// @brief Method MakePtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* MakePtr() ;

/// @brief Method MakePtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* MakePtr(T  defaultValue) ;

/// @brief Method MakeRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::by_ref<T> MakeRef() ;

/// @brief Method MakeRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::by_ref<T> MakeRef(T  defaultValue) ;

/// @brief Method MakeUnowned, addr 0x5f807c0, size 0x30, virtual false, abstract: false, final false
inline void MakeUnowned() ;

/// [Obsolete("Use NetworkUnwrap(NetworkRunner, NetworkBehaviourId) instead", true)]
/// @brief Method NetworkDeserialize, addr 0x5f8050c, size 0x38, virtual false, abstract: false, final false
static inline int32_t NetworkDeserialize(::Fusion::NetworkRunner*  runner, uint8_t*  data, ::by_ref<::Fusion::NetworkBehaviour*>  result) ;

/// [Obsolete("Use NetworkWrap(NetworkBehaviour) instead", true)]
/// @brief Method NetworkSerialize, addr 0x5f804d4, size 0x38, virtual false, abstract: false, final false
static inline int32_t NetworkSerialize(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkBehaviour*  obj, uint8_t*  data) ;

/// [NetworkDeserializeMethod]
/// @brief Method NetworkUnwrap, addr 0x5f80590, size 0x104, virtual false, abstract: false, final false
static inline ::UnityW<::Fusion::NetworkBehaviour> NetworkUnwrap(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkBehaviourId  wrapper) ;

/// [NetworkSerializeMethod]
/// @brief Method NetworkWrap, addr 0x5f8054c, size 0x44, virtual false, abstract: false, final false
static inline ::Fusion::NetworkBehaviourId NetworkWrap(::Fusion::NetworkBehaviour*  obj) ;

/// [Obsolete("Use NetworkWrap(NetworkBehaviour) instead")]
/// @brief Method NetworkWrap, addr 0x5f80544, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkBehaviourId NetworkWrap(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkBehaviour*  obj) ;

static inline ::Fusion::NetworkBehaviour* New_ctor() ;

/// @brief Method PreRender, addr 0x5f7f5f8, size 0x38, virtual true, abstract: false, final false
inline void PreRender() ;

/// @brief Method PreSpawned, addr 0x5f7f65c, size 0xa4, virtual false, abstract: false, final false
inline void PreSpawned() ;

/// @brief Method ReinterpretState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::by_ref<T> ReinterpretState(int32_t  offset) ;

/// [Obsolete("Not called anymore, used ReplicateTo(PlayerRef, bool) instead")]
/// @brief Method ReplicateTo, addr 0x5f804cc, size 0x8, virtual true, abstract: false, final false
inline bool ReplicateTo(::Fusion::PlayerRef  player) ;

/// @brief Method ReplicateTo, addr 0x5f7f42c, size 0x2c, virtual false, abstract: false, final false
inline void ReplicateTo(::Fusion::PlayerRef  player, bool  replicate) ;

/// @brief Method ReplicateToAll, addr 0x5f7f458, size 0x24, virtual false, abstract: false, final false
inline void ReplicateToAll(bool  replicate) ;

/// @brief Method ResetState, addr 0x5f7f594, size 0x5c, virtual false, abstract: false, final false
inline void ResetState() ;

/// @brief Method Spawned, addr 0x5f7f884, size 0x4, virtual true, abstract: false, final false
inline void Spawned() ;

/// @brief Method TryGetSnapshotsBuffers, addr 0x5f80458, size 0x54, virtual false, abstract: false, final false
inline bool TryGetSnapshotsBuffers(::by_ref<::Fusion::NetworkBehaviourBuffer>  from, ::by_ref<::Fusion::NetworkBehaviourBuffer>  to, ::by_ref<float_t>  alpha) ;

constexpr bool const& __cordl_internal_get_DefaultReplicated() const;

constexpr bool& __cordl_internal_get_DefaultReplicated() ;

constexpr bool const& __cordl_internal_get_InvokeRpc() const;

constexpr bool& __cordl_internal_get_InvokeRpc() ;

constexpr int32_t const& __cordl_internal_get_ObjectIndex() const;

constexpr int32_t& __cordl_internal_get_ObjectIndex() ;

constexpr int32_t* const& __cordl_internal_get_Ptr() const;

constexpr int32_t*& __cordl_internal_get_Ptr() ;

constexpr ::ArrayW<::Fusion::RpcInvokeData> const& __cordl_internal_get_RpcCache() const;

constexpr ::ArrayW<::Fusion::RpcInvokeData>& __cordl_internal_get_RpcCache() ;

constexpr int32_t const& __cordl_internal_get_WordCount() const;

constexpr int32_t& __cordl_internal_get_WordCount() ;

constexpr int32_t const& __cordl_internal_get_WordOffset() const;

constexpr int32_t& __cordl_internal_get_WordOffset() ;

constexpr ::Fusion::NetworkBehaviour_ChangeDetector* const& __cordl_internal_get__onRenderCallbacksDetector() const;

constexpr ::Fusion::NetworkBehaviour_ChangeDetector*& __cordl_internal_get__onRenderCallbacksDetector() ;

constexpr ::Fusion::NetworkBehaviour_ReadersForType* const& __cordl_internal_get__readersForType() const;

constexpr ::Fusion::NetworkBehaviour_ReadersForType*& __cordl_internal_get__readersForType() ;

constexpr void __cordl_internal_set_DefaultReplicated(bool  value) ;

constexpr void __cordl_internal_set_InvokeRpc(bool  value) ;

constexpr void __cordl_internal_set_ObjectIndex(int32_t  value) ;

constexpr void __cordl_internal_set_Ptr(int32_t*  value) ;

constexpr void __cordl_internal_set_RpcCache(::ArrayW<::Fusion::RpcInvokeData>  value) ;

constexpr void __cordl_internal_set_WordCount(int32_t  value) ;

constexpr void __cordl_internal_set_WordOffset(int32_t  value) ;

constexpr void __cordl_internal_set__onRenderCallbacksDetector(::Fusion::NetworkBehaviour_ChangeDetector*  value) ;

constexpr void __cordl_internal_set__readersForType(::Fusion::NetworkBehaviour_ReadersForType*  value) ;

/// @brief Method .ctor, addr 0x5f80a34, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::NetworkBehaviour_ReadersForType*>* getStaticF__readersByType() ;

/// @brief Method get_ChangedTick, addr 0x5f7f248, size 0x3c, virtual false, abstract: false, final false
inline ::Fusion::Tick get_ChangedTick() ;

/// @brief Method get_DynamicWordCount, addr 0x5f7f304, size 0x8, virtual true, abstract: false, final false
inline ::System::Nullable_1<int32_t> get_DynamicWordCount() ;

/// @brief Method get_HasInputAuthority, addr 0x5f7f2a4, size 0x20, virtual false, abstract: false, final false
inline bool get_HasInputAuthority() ;

/// @brief Method get_HasStateAuthority, addr 0x5f7f2c4, size 0x20, virtual false, abstract: false, final false
inline bool get_HasStateAuthority() ;

/// @brief Method get_Id, addr 0x5f7f284, size 0x20, virtual false, abstract: false, final false
inline ::Fusion::NetworkBehaviourId get_Id() ;

/// @brief Method get_IsEditorWritable, addr 0x5f7f30c, size 0x48, virtual false, abstract: false, final false
inline bool get_IsEditorWritable() ;

/// @brief Method get_IsProxy, addr 0x5f7f2e4, size 0x20, virtual false, abstract: false, final false
inline bool get_IsProxy() ;

/// @brief Method get_StateBuffer, addr 0x5f7f1ac, size 0x30, virtual false, abstract: false, final false
inline ::Fusion::NetworkBehaviourBuffer get_StateBuffer() ;

/// @brief Method get_StateBufferIsValid, addr 0x5f7f19c, size 0x10, virtual false, abstract: false, final false
inline bool get_StateBufferIsValid() ;

/// @brief Method get_WordInfo, addr 0x5f7f1e8, size 0x60, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,int32_t> get_WordInfo() ;

/// @brief Convert to "::Fusion::IDespawned"
constexpr ::Fusion::IDespawned* i___Fusion__IDespawned() noexcept;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkBehaviour>>* i___Fusion__IElementReaderWriter_1___UnityW___Fusion__NetworkBehaviour__() noexcept;

/// @brief Convert to "::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>"
constexpr ::Fusion::IElementReaderWriter_1<::UnityW<::Fusion::NetworkObject>>* i___Fusion__IElementReaderWriter_1___UnityW___Fusion__NetworkObject__() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// @brief Convert to "::Fusion::ISpawned"
constexpr ::Fusion::ISpawned* i___Fusion__ISpawned() noexcept;

/// @brief Method op_Implicit, addr 0x5f80700, size 0x80, virtual false, abstract: false, final false
static inline ::Fusion::NetworkBehaviourId op_Implicit___Fusion__NetworkBehaviourId(::Fusion::NetworkBehaviour*  behaviour) ;

static inline void setStaticF__readersByType(::System::Collections::Generic::Dictionary_2<::System::Type*,::Fusion::NetworkBehaviour_ReadersForType*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBehaviour(NetworkBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBehaviour(NetworkBehaviour const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18914};

/// @brief Field _readersForType, offset: 0x48, size: 0x8, def value: None
 ::Fusion::NetworkBehaviour_ReadersForType*  ____readersForType;

/// [Preserve]
/// @brief Field Ptr, offset: 0x50, size: 0x8, def value: None
 int32_t*  ___Ptr;

/// @brief Field InvokeRpc, offset: 0x58, size: 0x1, def value: None
 bool  ___InvokeRpc;

/// @brief Field RpcCache, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::Fusion::RpcInvokeData>  ___RpcCache;

/// @brief Field ObjectIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___ObjectIndex;

/// @brief Field WordOffset, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___WordOffset;

/// @brief Field WordCount, offset: 0x70, size: 0x4, def value: None
 int32_t  ___WordCount;

/// @brief Field DefaultReplicated, offset: 0x74, size: 0x1, def value: None
 bool  ___DefaultReplicated;

/// @brief Field _onRenderCallbacksDetector, offset: 0x78, size: 0x8, def value: None
 ::Fusion::NetworkBehaviour_ChangeDetector*  ____onRenderCallbacksDetector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkBehaviour, ____readersForType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour, ___Ptr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour, ___InvokeRpc) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour, ___RpcCache) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour, ___ObjectIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour, ___WordOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour, ___WordCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour, ___DefaultReplicated) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour, ____onRenderCallbacksDetector) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkBehaviour) == 0x80, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/<>c__DisplayClass9_0`1<T>
class CORDL_TYPE ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*  callback;

static inline ::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1<T>* New_ctor() ;

/// @brief Method <GetWrapperPrev>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _GetWrapperPrev_b__0(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::NetworkBehaviourBuffer  prev) ;

constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>* const& __cordl_internal_get_callback() const;

constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1(ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1(ChangeDetector_NetworkBehaviour___c__DisplayClass9_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18912};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/<>c__DisplayClass10_0`1<T>
class CORDL_TYPE ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field callback, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*  callback;

static inline ::Fusion::ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1<T>* New_ctor() ;

/// @brief Method <GetWrapper>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _GetWrapper_b__0(::Fusion::NetworkBehaviour*  behaviour) ;

constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>* const& __cordl_internal_get_callback() const;

constexpr ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*& __cordl_internal_get_callback() ;

constexpr void __cordl_internal_set_callback(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1(ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1(ChangeDetector_NetworkBehaviour___c__DisplayClass10_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18911};

/// @brief Field callback, offset: 0x10, size: 0x8, def value: None
 ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>*  ___callback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/OnChangedCallbackWrapper
class CORDL_TYPE ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5f82608, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkBehaviour*  b, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5f82628, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5f825f4, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::NetworkBehaviour*  b) ;

static inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f824ec, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper(ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper(ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18908};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallbackWrapper) == 0x80, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/OnChangedCallback`1<T>
class CORDL_TYPE ChangeDetector_NetworkBehaviour_OnChangedCallback_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  b, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T  b) ;

static inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedCallback_1<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour_OnChangedCallback_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour_OnChangedCallback_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeDetector_NetworkBehaviour_OnChangedCallback_1(ChangeDetector_NetworkBehaviour_OnChangedCallback_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour_OnChangedCallback_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeDetector_NetworkBehaviour_OnChangedCallback_1(ChangeDetector_NetworkBehaviour_OnChangedCallback_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18907};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/OnChangedPrevCallbackWrapper
class CORDL_TYPE ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5f8244c, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Fusion::NetworkBehaviour*  b, ::Fusion::NetworkBehaviourBuffer  prev, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5f824e0, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5f82438, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Fusion::NetworkBehaviour*  b, ::Fusion::NetworkBehaviourBuffer  prev) ;

static inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5f8232c, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper(ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper(ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18906};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallbackWrapper) == 0x80, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.MulticastDelegate
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkBehaviour/ChangeDetector/OnChangedPrevCallback`1<T>
class CORDL_TYPE ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  b, ::Fusion::NetworkBehaviourBuffer  prev, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(T  b, ::Fusion::NetworkBehaviourBuffer  prev) ;

static inline ::Fusion::ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1(ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1(ChangeDetector_NetworkBehaviour_OnChangedPrevCallback_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18905};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// Dependencies System.Object, System.Reflection.PropertyInfo
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBehaviour/ReadersForType
class CORDL_TYPE NetworkBehaviour_ReadersForType : public ::System::Object {
public:
// Declarations
/// @brief Field Properties, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Properties, put=__cordl_internal_set_Properties)) ::ArrayW<::System::Reflection::PropertyInfo*>  Properties;

/// @brief Field PropertyReaders, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PropertyReaders, put=__cordl_internal_set_PropertyReaders)) ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::NetworkBehaviour_PropertyReaderData*>*  PropertyReaders;

static inline ::Fusion::NetworkBehaviour_ReadersForType* New_ctor() ;

constexpr ::ArrayW<::System::Reflection::PropertyInfo*> const& __cordl_internal_get_Properties() const;

constexpr ::ArrayW<::System::Reflection::PropertyInfo*>& __cordl_internal_get_Properties() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::NetworkBehaviour_PropertyReaderData*>* const& __cordl_internal_get_PropertyReaders() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::NetworkBehaviour_PropertyReaderData*>*& __cordl_internal_get_PropertyReaders() ;

constexpr void __cordl_internal_set_Properties(::ArrayW<::System::Reflection::PropertyInfo*>  value) ;

constexpr void __cordl_internal_set_PropertyReaders(::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::NetworkBehaviour_PropertyReaderData*>*  value) ;

/// @brief Method .ctor, addr 0x5f7fa14, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour_ReadersForType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour_ReadersForType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBehaviour_ReadersForType(NetworkBehaviour_ReadersForType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour_ReadersForType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBehaviour_ReadersForType(NetworkBehaviour_ReadersForType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18902};

/// @brief Field Properties, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Reflection::PropertyInfo*>  ___Properties;

/// @brief Field PropertyReaders, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Fusion::NetworkBehaviour_PropertyReaderData*>*  ___PropertyReaders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkBehaviour_ReadersForType, ___Properties) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_ReadersForType, ___PropertyReaders) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkBehaviour_ReadersForType) == 0x20, "Size mismatch!");

} // namespace end def Fusion
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkBehaviour/PropertyReaderData
class CORDL_TYPE NetworkBehaviour_PropertyReaderData : public ::System::Object {
public:
// Declarations
/// @brief Field Capacity, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Capacity, put=__cordl_internal_set_Capacity)) int32_t  Capacity;

/// @brief [CompilerGenerated]
 __declspec(property(get=get_EqualityContract)) ::System::Type*  EqualityContract;

/// @brief Field KeyReaderWriterType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_KeyReaderWriterType, put=__cordl_internal_set_KeyReaderWriterType)) ::System::Type*  KeyReaderWriterType;

/// @brief Field Offset, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Offset, put=__cordl_internal_set_Offset)) int32_t  Offset;

/// @brief Field ValueReaderWriterType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ValueReaderWriterType, put=__cordl_internal_set_ValueReaderWriterType)) ::System::Type*  ValueReaderWriterType;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>*() noexcept;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method Equals, addr 0x5f80e70, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method Equals, addr 0x5f80ef8, size 0x16c, virtual true, abstract: false, final false
inline bool Equals(::Fusion::NetworkBehaviour_PropertyReaderData*  other) ;

/// [CompilerGenerated]
/// @brief Method GetHashCode, addr 0x5f80d34, size 0x13c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Fusion::NetworkBehaviour_PropertyReaderData* New_ctor() ;

/// @brief [CompilerGenerated]
static inline ::Fusion::NetworkBehaviour_PropertyReaderData* New_ctor(::Fusion::NetworkBehaviour_PropertyReaderData*  original) ;

/// [CompilerGenerated]
/// @brief Method PrintMembers, addr 0x5f80ba4, size 0x134, virtual true, abstract: false, final false
inline bool PrintMembers(::System::Text::StringBuilder*  builder) ;

/// [CompilerGenerated]
/// @brief Method ToString, addr 0x5f80abc, size 0xe8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [CompilerGenerated]
/// @brief Method <Clone>$, addr 0x5f81064, size 0x58, virtual true, abstract: false, final false
inline ::Fusion::NetworkBehaviour_PropertyReaderData* _Clone_$() ;

constexpr int32_t const& __cordl_internal_get_Capacity() const;

constexpr int32_t& __cordl_internal_get_Capacity() ;

constexpr ::System::Type* const& __cordl_internal_get_KeyReaderWriterType() const;

constexpr ::System::Type*& __cordl_internal_get_KeyReaderWriterType() ;

constexpr int32_t const& __cordl_internal_get_Offset() const;

constexpr int32_t& __cordl_internal_get_Offset() ;

constexpr ::System::Type* const& __cordl_internal_get_ValueReaderWriterType() const;

constexpr ::System::Type*& __cordl_internal_get_ValueReaderWriterType() ;

constexpr void __cordl_internal_set_Capacity(int32_t  value) ;

constexpr void __cordl_internal_set_KeyReaderWriterType(::System::Type*  value) ;

constexpr void __cordl_internal_set_Offset(int32_t  value) ;

constexpr void __cordl_internal_set_ValueReaderWriterType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x5f801dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method .ctor, addr 0x5f810bc, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkBehaviour_PropertyReaderData*  original) ;

/// [CompilerGenerated]
/// @brief Method get_EqualityContract, addr 0x5f80a5c, size 0x60, virtual true, abstract: false, final false
inline ::System::Type* get_EqualityContract() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>"
constexpr ::System::IEquatable_1<::Fusion::NetworkBehaviour_PropertyReaderData*>* i___System__IEquatable_1___Fusion__NetworkBehaviour_PropertyReaderData__() noexcept;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method op_Equality, addr 0x5f80d14, size 0x20, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkBehaviour_PropertyReaderData*  left, ::Fusion::NetworkBehaviour_PropertyReaderData*  right) ;

/// [NullableContext(2)]
/// [CompilerGenerated]
/// @brief Method op_Inequality, addr 0x5f80cd8, size 0x3c, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkBehaviour_PropertyReaderData*  left, ::Fusion::NetworkBehaviour_PropertyReaderData*  right) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviour_PropertyReaderData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour_PropertyReaderData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkBehaviour_PropertyReaderData(NetworkBehaviour_PropertyReaderData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkBehaviour_PropertyReaderData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkBehaviour_PropertyReaderData(NetworkBehaviour_PropertyReaderData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18900};

/// @brief Field Offset, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Offset;

/// @brief Field Capacity, offset: 0x14, size: 0x4, def value: None
 int32_t  ___Capacity;

/// [Nullable(0)]
/// @brief Field KeyReaderWriterType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___KeyReaderWriterType;

/// [Nullable(0)]
/// @brief Field ValueReaderWriterType, offset: 0x20, size: 0x8, def value: None
 ::System::Type*  ___ValueReaderWriterType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkBehaviour_PropertyReaderData, ___Offset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_PropertyReaderData, ___Capacity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_PropertyReaderData, ___KeyReaderWriterType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkBehaviour_PropertyReaderData, ___ValueReaderWriterType) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkBehaviour_PropertyReaderData) == 0x28, "Size mismatch!");

} // namespace end def Fusion
