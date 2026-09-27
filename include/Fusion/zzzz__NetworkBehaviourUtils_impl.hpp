#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourUtils.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviourUtils_def.hpp"
#include "Fusion/zzzz__NetworkArray_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourUtils_ArrayInitializer_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourUtils_DictionaryInitializer_2_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourUtils_MetaData_def.hpp"
#include "Fusion/zzzz__NetworkBehaviourUtils_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__NetworkDictionary_2_def.hpp"
#include "Fusion/zzzz__NetworkLinkedList_1_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include "Fusion/zzzz__RpcInvokeData_def.hpp"
#include "Fusion/zzzz__RpcStaticInvokeDelegate_def.hpp"
#include "Fusion/zzzz__SerializableDictionary_2_def.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.ResetStatics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::NetworkBehaviourUtils::ResetStatics)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5f834ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"ResetStatics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.GetMetaData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetworkBehaviourUtils_MetaData (*)(::System::Type*)>(&::Fusion::NetworkBehaviourUtils::GetMetaData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f835ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"GetMetaData", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.RegisterMetaData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::Fusion::NetworkBehaviourUtils::RegisterMetaData)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f8368c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"RegisterMetaData", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.GetWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkBehaviourUtils::GetWordCount)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5f83760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"GetWordCount", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.HasStaticWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Fusion::NetworkBehaviourUtils::HasStaticWordCount)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f83a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"HasStaticWordCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.GetStaticWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Fusion::NetworkBehaviourUtils::GetStaticWordCount)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5f8390c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"GetStaticWordCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.ShouldRegisterRpcInvokeDelegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::Fusion::NetworkBehaviourUtils::ShouldRegisterRpcInvokeDelegates)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f83b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"ShouldRegisterRpcInvokeDelegates", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.RegisterRpcInvokeDelegates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::Fusion::NetworkBehaviourUtils::RegisterRpcInvokeDelegates)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x5f83bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"RegisterRpcInvokeDelegates", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.TryGetRpcInvokeDelegateArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::by_ref<::ArrayW<::Fusion::RpcInvokeData>>)>(&::Fusion::NetworkBehaviourUtils::TryGetRpcInvokeDelegateArray)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f84224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"TryGetRpcInvokeDelegateArray", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::ArrayW<::Fusion::RpcInvokeData>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.GetRpcStaticIndexOrThrow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Fusion::NetworkBehaviourUtils::GetRpcStaticIndexOrThrow)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f842b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"GetRpcStaticIndexOrThrow", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.TryGetRpcStaticInvokeDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::Fusion::RpcStaticInvokeDelegate*>)>(&::Fusion::NetworkBehaviourUtils::TryGetRpcStaticInvokeDelegate)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5f84390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"TryGetRpcStaticInvokeDelegate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::RpcStaticInvokeDelegate*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.NotifyRpcPayloadSizeExceeded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, int32_t)>(&::Fusion::NetworkBehaviourUtils::NotifyRpcPayloadSizeExceeded)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f844ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"NotifyRpcPayloadSizeExceeded", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.NotifyRpcTargetUnreachable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::PlayerRef, ::StringW)>(&::Fusion::NetworkBehaviourUtils::NotifyRpcTargetUnreachable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f845c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"NotifyRpcTargetUnreachable", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.NotifyLocalSimulationNotAllowedToSendRpc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::Fusion::NetworkObject*, int32_t)>(&::Fusion::NetworkBehaviourUtils::NotifyLocalSimulationNotAllowedToSendRpc)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5f84684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"NotifyLocalSimulationNotAllowedToSendRpc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.NotifyLocalTargetedRpcCulled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::PlayerRef, ::StringW)>(&::Fusion::NetworkBehaviourUtils::NotifyLocalTargetedRpcCulled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f84754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"NotifyLocalTargetedRpcCulled", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.ThrowIfBehaviourNotInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*)>(&::Fusion::NetworkBehaviourUtils::ThrowIfBehaviourNotInitialized)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f84814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"ThrowIfBehaviourNotInitialized", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.InternalOnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkBehaviourUtils::InternalOnDestroy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f848f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"InternalOnDestroy", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.InternalOnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkBehaviourUtils::InternalOnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f84988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"InternalOnEnable", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils.InternalOnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::SimulationBehaviour*)>(&::Fusion::NetworkBehaviourUtils::InternalOnDisable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f84a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"InternalOnDisable", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkBehaviourUtils::setStaticF__wordCounts(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "_wordCounts", ::Fusion::NetworkBehaviourUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* Fusion::NetworkBehaviourUtils::getStaticF__wordCounts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "_wordCounts", ::Fusion::NetworkBehaviourUtils*>();
}
inline void Fusion::NetworkBehaviourUtils::setStaticF__invokerDelegates(::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::Fusion::RpcInvokeData>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::Fusion::RpcInvokeData>>*, "_invokerDelegates", ::Fusion::NetworkBehaviourUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::Fusion::RpcInvokeData>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::Fusion::RpcInvokeData>>* Fusion::NetworkBehaviourUtils::getStaticF__invokerDelegates()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::ArrayW<::Fusion::RpcInvokeData>>*, "_invokerDelegates", ::Fusion::NetworkBehaviourUtils*>();
}
inline void Fusion::NetworkBehaviourUtils::setStaticF__staticInvokers(::System::Collections::Generic::SortedList_2<::StringW,::Fusion::RpcStaticInvokeDelegate*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::SortedList_2<::StringW,::Fusion::RpcStaticInvokeDelegate*>*, "_staticInvokers", ::Fusion::NetworkBehaviourUtils*>(std::forward<::System::Collections::Generic::SortedList_2<::StringW,::Fusion::RpcStaticInvokeDelegate*>*>(value));
}
inline ::System::Collections::Generic::SortedList_2<::StringW,::Fusion::RpcStaticInvokeDelegate*>* Fusion::NetworkBehaviourUtils::getStaticF__staticInvokers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::SortedList_2<::StringW,::Fusion::RpcStaticInvokeDelegate*>*, "_staticInvokers", ::Fusion::NetworkBehaviourUtils*>();
}
inline void Fusion::NetworkBehaviourUtils::setStaticF__metaData(::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::NetworkBehaviourUtils_MetaData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::NetworkBehaviourUtils_MetaData>*, "_metaData", ::Fusion::NetworkBehaviourUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::NetworkBehaviourUtils_MetaData>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::NetworkBehaviourUtils_MetaData>* Fusion::NetworkBehaviourUtils::getStaticF__metaData()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::GlobalNamespace::NetworkBehaviourUtils_MetaData>*, "_metaData", ::Fusion::NetworkBehaviourUtils*>();
}
inline void Fusion::NetworkBehaviourUtils::setStaticF_InvokeRpc(bool  value)  {
::cordl_internals::setStaticField<bool, "InvokeRpc", ::Fusion::NetworkBehaviourUtils*>(std::forward<bool>(value));
}
inline bool Fusion::NetworkBehaviourUtils::getStaticF_InvokeRpc()  {
return ::cordl_internals::getStaticField<bool, "InvokeRpc", ::Fusion::NetworkBehaviourUtils*>();
}
inline void Fusion::NetworkBehaviourUtils::ResetStatics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"ResetStatics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::NetworkBehaviourUtils_MetaData Fusion::NetworkBehaviourUtils::GetMetaData(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"GetMetaData", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetworkBehaviourUtils_MetaData>(nullptr, ___internal_method, type);
}
inline void Fusion::NetworkBehaviourUtils::RegisterMetaData(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"RegisterMetaData", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline int32_t Fusion::NetworkBehaviourUtils::GetWordCount(::Fusion::NetworkBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"GetWordCount", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, behaviour);
}
inline bool Fusion::NetworkBehaviourUtils::HasStaticWordCount(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"HasStaticWordCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline int32_t Fusion::NetworkBehaviourUtils::GetStaticWordCount(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"GetStaticWordCount", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline bool Fusion::NetworkBehaviourUtils::ShouldRegisterRpcInvokeDelegates(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"ShouldRegisterRpcInvokeDelegates", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline void Fusion::NetworkBehaviourUtils::RegisterRpcInvokeDelegates(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"RegisterRpcInvokeDelegates", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline bool Fusion::NetworkBehaviourUtils::TryGetRpcInvokeDelegateArray(::System::Type*  type, ::by_ref<::ArrayW<::Fusion::RpcInvokeData>>  delegates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"TryGetRpcInvokeDelegateArray", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::ArrayW<::Fusion::RpcInvokeData>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type, delegates);
}
inline int32_t Fusion::NetworkBehaviourUtils::GetRpcStaticIndexOrThrow(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"GetRpcStaticIndexOrThrow", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, key);
}
inline bool Fusion::NetworkBehaviourUtils::TryGetRpcStaticInvokeDelegate(int32_t  index, ::by_ref<::Fusion::RpcStaticInvokeDelegate*>  del)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"TryGetRpcStaticInvokeDelegate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Fusion::RpcStaticInvokeDelegate*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, index, del);
}
inline void Fusion::NetworkBehaviourUtils::NotifyRpcPayloadSizeExceeded(::StringW  rpc, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"NotifyRpcPayloadSizeExceeded", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rpc, size);
}
inline void Fusion::NetworkBehaviourUtils::NotifyRpcTargetUnreachable(::Fusion::PlayerRef  player, ::StringW  rpc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"NotifyRpcTargetUnreachable", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, rpc);
}
inline void Fusion::NetworkBehaviourUtils::NotifyLocalSimulationNotAllowedToSendRpc(::StringW  rpc, ::Fusion::NetworkObject*  obj, int32_t  sources)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"NotifyLocalSimulationNotAllowedToSendRpc", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::NetworkObject*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rpc, obj, sources);
}
inline void Fusion::NetworkBehaviourUtils::NotifyLocalTargetedRpcCulled(::Fusion::PlayerRef  player, ::StringW  methodName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"NotifyLocalTargetedRpcCulled", {}, {::i2c::type_of<::Fusion::PlayerRef>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, methodName);
}
inline void Fusion::NetworkBehaviourUtils::ThrowIfBehaviourNotInitialized(::Fusion::NetworkBehaviour*  behaviour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"ThrowIfBehaviourNotInitialized", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour);
}
template<typename T>
inline void Fusion::NetworkBehaviourUtils::NotifyNetworkWrapFailed(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"NotifyNetworkWrapFailed", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template<typename T>
inline void Fusion::NetworkBehaviourUtils::NotifyNetworkWrapFailed(T  value, ::System::Type*  wrapperType)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"NotifyNetworkWrapFailed", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Type*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, wrapperType);
}
template<typename T>
inline void Fusion::NetworkBehaviourUtils::NotifyNetworkUnwrapFailed(T  wrapper, ::System::Type*  valueType)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"NotifyNetworkUnwrapFailed", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Type*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, wrapper, valueType);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::NetworkBehaviourUtils::InitializeNetworkArray(::Fusion::NetworkArray_1<T>  networkArray, ::ArrayW<T>  sourceArray, ::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"InitializeNetworkArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkArray_1<T>>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkArray, sourceArray, name);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::NetworkBehaviourUtils::CopyFromNetworkArray(::Fusion::NetworkArray_1<T>  networkArray, ::by_ref<::ArrayW<T>>  dstArray)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"CopyFromNetworkArray", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkArray_1<T>>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkArray, dstArray);
}
template<typename T>
inline ::ArrayW<T> Fusion::NetworkBehaviourUtils::CloneArray(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"CloneArray", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::NetworkBehaviourUtils::InitializeNetworkList(::Fusion::NetworkLinkedList_1<T>  networkList, ::ArrayW<T>  sourceArray, ::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"InitializeNetworkList", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkLinkedList_1<T>>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkList, sourceArray, name);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void Fusion::NetworkBehaviourUtils::CopyFromNetworkList(::Fusion::NetworkLinkedList_1<T>  networkList, ::by_ref<::ArrayW<T>>  dstArray)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"CopyFromNetworkList", {::i2c::class_of<T>()}, {::i2c::type_of<::Fusion::NetworkLinkedList_1<T>>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkList, dstArray);
}
inline void Fusion::NetworkBehaviourUtils::InternalOnDestroy(::Fusion::SimulationBehaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"InternalOnDestroy", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void Fusion::NetworkBehaviourUtils::InternalOnEnable(::Fusion::SimulationBehaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"InternalOnEnable", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void Fusion::NetworkBehaviourUtils::InternalOnDisable(::Fusion::SimulationBehaviour*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                        {"InternalOnDisable", {}, {::i2c::type_of<::Fusion::SimulationBehaviour*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
template<typename D,typename K,typename V>
requires(::cordl_internals::type_constraint<D, ::System::Collections::Generic::IDictionary_2<K,V>*> && ::cordl_internals::value_type_constraint<K> && ::cordl_internals::default_constructor_constraint<K> && ::cordl_internals::value_type_constraint<V> && ::cordl_internals::default_constructor_constraint<V>)
inline void Fusion::NetworkBehaviourUtils::InitializeNetworkDictionary(::Fusion::NetworkDictionary_2<K,V>  networkDictionary, D  dictionary, ::StringW  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"InitializeNetworkDictionary", {::i2c::class_of<D>(), ::i2c::class_of<K>(), ::i2c::class_of<V>()}, {::i2c::type_of<::Fusion::NetworkDictionary_2<K,V>>(), ::i2c::type_of<D>(), ::i2c::type_of<::StringW>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<D>(), ::i2c::class_of<K>(), ::i2c::class_of<V>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkDictionary, dictionary, name);
}
template<typename D,typename K,typename V>
requires(::cordl_internals::type_constraint<D, ::System::Collections::Generic::IDictionary_2<K,V>*> && ::cordl_internals::default_constructor_constraint<D> && ::cordl_internals::value_type_constraint<K> && ::cordl_internals::default_constructor_constraint<K> && ::cordl_internals::value_type_constraint<V> && ::cordl_internals::default_constructor_constraint<V>)
inline void Fusion::NetworkBehaviourUtils::CopyFromNetworkDictionary(::Fusion::NetworkDictionary_2<K,V>  networkDictionary, ::by_ref<D>  dictionary)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"CopyFromNetworkDictionary", {::i2c::class_of<D>(), ::i2c::class_of<K>(), ::i2c::class_of<V>()}, {::i2c::type_of<::Fusion::NetworkDictionary_2<K,V>>(), ::i2c::type_of<::by_ref<D>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<D>(), ::i2c::class_of<K>(), ::i2c::class_of<V>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, networkDictionary, dictionary);
}
template<typename K,typename V>
requires(::cordl_internals::value_type_constraint<K> && ::cordl_internals::default_constructor_constraint<K> && ::cordl_internals::value_type_constraint<V> && ::cordl_internals::default_constructor_constraint<V>)
inline ::Fusion::SerializableDictionary_2<K,V>* Fusion::NetworkBehaviourUtils::MakeSerializableDictionary(::System::Collections::Generic::Dictionary_2<K,V>*  dictionary)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourUtils*>(),
                    {"MakeSerializableDictionary", {::i2c::class_of<K>(), ::i2c::class_of<V>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<K,V>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<K>(), ::i2c::class_of<V>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Fusion::SerializableDictionary_2<K,V>*>(nullptr, ___internal_method, dictionary);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBehaviourUtils::NetworkBehaviourUtils()   {
}
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviourUtils___c::*)()>(&::Fusion::NetworkBehaviourUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f84cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourUtils___c._RegisterRpcInvokeDelegates_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviourUtils___c::*)(::Fusion::RpcInvokeData, ::Fusion::RpcInvokeData)>(&::Fusion::NetworkBehaviourUtils___c::_RegisterRpcInvokeDelegates_b__13_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f84cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils___c*>(),
                        {"<RegisterRpcInvokeDelegates>b__13_0", {}, {::i2c::type_of<::Fusion::RpcInvokeData>(), ::i2c::type_of<::Fusion::RpcInvokeData>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::NetworkBehaviourUtils___c::setStaticF___9(::Fusion::NetworkBehaviourUtils___c*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkBehaviourUtils___c*, "<>9", ::Fusion::NetworkBehaviourUtils___c*>(std::forward<::Fusion::NetworkBehaviourUtils___c*>(value));
}
inline ::Fusion::NetworkBehaviourUtils___c* Fusion::NetworkBehaviourUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkBehaviourUtils___c*, "<>9", ::Fusion::NetworkBehaviourUtils___c*>();
}
inline void Fusion::NetworkBehaviourUtils___c::setStaticF___9__13_0(::System::Comparison_1<::Fusion::RpcInvokeData>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::Fusion::RpcInvokeData>*, "<>9__13_0", ::Fusion::NetworkBehaviourUtils___c*>(std::forward<::System::Comparison_1<::Fusion::RpcInvokeData>*>(value));
}
inline ::System::Comparison_1<::Fusion::RpcInvokeData>* Fusion::NetworkBehaviourUtils___c::getStaticF___9__13_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::Fusion::RpcInvokeData>*, "<>9__13_0", ::Fusion::NetworkBehaviourUtils___c*>();
}
inline void Fusion::NetworkBehaviourUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Fusion::NetworkBehaviourUtils___c::_RegisterRpcInvokeDelegates_b__13_0(::Fusion::RpcInvokeData  a, ::Fusion::RpcInvokeData  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourUtils___c*>(),
                        {"<RegisterRpcInvokeDelegates>b__13_0", {}, {::i2c::type_of<::Fusion::RpcInvokeData>(), ::i2c::type_of<::Fusion::RpcInvokeData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::Fusion::NetworkBehaviourUtils___c* Fusion::NetworkBehaviourUtils___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkBehaviourUtils___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBehaviourUtils___c::NetworkBehaviourUtils___c()   {
}
