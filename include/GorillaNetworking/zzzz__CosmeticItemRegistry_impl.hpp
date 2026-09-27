#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticItemRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticItemRegistry_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticItemInstance_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemRegistry.get_Rig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GorillaNetworking::CosmeticItemRegistry::*)()>(&::GorillaNetworking::CosmeticItemRegistry::get_Rig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c52b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {"get_Rig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemRegistry.RefreshRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemRegistry::*)()>(&::GorillaNetworking::CosmeticItemRegistry::RefreshRig)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c52b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {"RefreshRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemRegistry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemRegistry::*)(::GlobalNamespace::VRRig*)>(&::GorillaNetworking::CosmeticItemRegistry::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c52b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemRegistry.InitializeCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemRegistry::*)(::UnityEngine::GameObject*, bool)>(&::GorillaNetworking::CosmeticItemRegistry::InitializeCosmetic)> {
  constexpr static std::size_t size = 0x8e4;
  constexpr static std::size_t addrs = 0x5c52c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {"InitializeCosmetic", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemRegistry.Cosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaNetworking::CosmeticItemInstance* (::GorillaNetworking::CosmeticItemRegistry::*)(::StringW)>(&::GorillaNetworking::CosmeticItemRegistry::Cosmetic)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5c4d53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {"Cosmetic", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::CosmeticItemInstance*>*& GorillaNetworking::CosmeticItemRegistry::__cordl_internal_get__nameToCosmeticMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameToCosmeticMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::CosmeticItemInstance*>* const& GorillaNetworking::CosmeticItemRegistry::__cordl_internal_get__nameToCosmeticMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nameToCosmeticMap;
}
constexpr void GorillaNetworking::CosmeticItemRegistry::__cordl_internal_set__nameToCosmeticMap(::System::Collections::Generic::Dictionary_2<::StringW,::GorillaNetworking::CosmeticItemInstance*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nameToCosmeticMap = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*& GorillaNetworking::CosmeticItemRegistry::__cordl_internal_get_initializedCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializedCosmetics;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaNetworking::CosmeticItemRegistry::__cordl_internal_get_initializedCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initializedCosmetics;
}
constexpr void GorillaNetworking::CosmeticItemRegistry::__cordl_internal_set_initializedCosmetics(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initializedCosmetics = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaNetworking::CosmeticItemRegistry::__cordl_internal_get__nullItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nullItem;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaNetworking::CosmeticItemRegistry::__cordl_internal_get__nullItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nullItem;
}
constexpr void GorillaNetworking::CosmeticItemRegistry::__cordl_internal_set__nullItem(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nullItem = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaNetworking::CosmeticItemRegistry::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaNetworking::CosmeticItemRegistry::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GorillaNetworking::CosmeticItemRegistry::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
inline ::UnityW<::GlobalNamespace::VRRig> GorillaNetworking::CosmeticItemRegistry::get_Rig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {"get_Rig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticItemRegistry::RefreshRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {"RefreshRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticItemRegistry::_ctor(::GlobalNamespace::VRRig*  _rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _rig);
}
inline void GorillaNetworking::CosmeticItemRegistry::InitializeCosmetic(::UnityEngine::GameObject*  cosmeticGObj, bool  isOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {"InitializeCosmetic", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticGObj, isOverride);
}
inline ::GorillaNetworking::CosmeticItemInstance* GorillaNetworking::CosmeticItemRegistry::Cosmetic(::StringW  itemName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemRegistry*>(),
                        {"Cosmetic", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaNetworking::CosmeticItemInstance*>(this, ___internal_method, itemName);
}
inline ::GorillaNetworking::CosmeticItemRegistry* GorillaNetworking::CosmeticItemRegistry::New_ctor(::GlobalNamespace::VRRig*  _rig)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticItemRegistry*>(_rig));
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticItemRegistry::CosmeticItemRegistry()   {
}
