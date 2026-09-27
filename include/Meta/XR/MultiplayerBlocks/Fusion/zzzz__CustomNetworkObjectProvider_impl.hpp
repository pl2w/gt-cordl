#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/CustomNetworkObjectProvider.hpp"
#include "Fusion/zzzz__NetworkObjectProviderDefault_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__CustomNetworkObjectProvider_def.hpp"
#include "Fusion/zzzz__NetworkObjectAcquireResult_def.hpp"
#include "Fusion/zzzz__NetworkObjectBaker_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "Fusion/zzzz__NetworkPrefabAcquireContext_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider.get_Baker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectBaker* (*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::get_Baker)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9f5d7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(),
                        {"get_Baker", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider.RegisterCustomNetworkObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::System::Func_1<::UnityW<::UnityEngine::GameObject>>*)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::RegisterCustomNetworkObject)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9f5d8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(),
                        {"RegisterCustomNetworkObject", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider.AcquirePrefabInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectAcquireResult (::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::*)(::Fusion::NetworkRunner*, ::by_ref<::Fusion::NetworkPrefabAcquireContext>, ::by_ref<::Fusion::NetworkObject*>)>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::AcquirePrefabInstance)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9f5d9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(),
                    {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f5dbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::setStaticF__baker(::Fusion::NetworkObjectBaker*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkObjectBaker*, "_baker", ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(std::forward<::Fusion::NetworkObjectBaker*>(value));
}
inline ::Fusion::NetworkObjectBaker* Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::getStaticF__baker()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkObjectBaker*, "_baker", ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>();
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::setStaticF_CustomSpawnDict(::System::Collections::Generic::Dictionary_2<uint32_t,::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>*, "CustomSpawnDict", ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(std::forward<::System::Collections::Generic::Dictionary_2<uint32_t,::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<uint32_t,::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>* Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::getStaticF_CustomSpawnDict()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<uint32_t,::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>*, "CustomSpawnDict", ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>();
}
inline ::Fusion::NetworkObjectBaker* Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::get_Baker()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(),
                        {"get_Baker", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectBaker*>(nullptr, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::RegisterCustomNetworkObject(uint32_t  customPrefabID, ::System::Func_1<::UnityW<::UnityEngine::GameObject>>*  func)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(),
                        {"RegisterCustomNetworkObject", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Func_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, customPrefabID, func);
}
inline ::Fusion::NetworkObjectAcquireResult Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::AcquirePrefabInstance(::Fusion::NetworkRunner*  runner, /* [IsReadOnly] */ ::by_ref<::Fusion::NetworkPrefabAcquireContext>  context, ::by_ref<::Fusion::NetworkObject*>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectAcquireResult>(this, ___internal_method, runner, context, result);
}
inline void Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider* Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::CustomNetworkObjectProvider::CustomNetworkObjectProvider()   {
}
