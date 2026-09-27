#pragma once
// IWYU pragma private; include "GorillaNetworking/CosmeticItemInstance.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAnchorAntiIntersectOffsets_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticItemInstance_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_def.hpp"
#include "GlobalNamespace/zzzz__VRRigAnchorOverrides_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemInstance.get_ActiveSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CosmeticsController_CosmeticSlots (::GorillaNetworking::CosmeticItemInstance::*)()>(&::GorillaNetworking::CosmeticItemInstance::get_ActiveSlot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c538bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"get_ActiveSlot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemInstance.EnableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemInstance::*)(::UnityEngine::GameObject*, bool)>(&::GorillaNetworking::CosmeticItemInstance::EnableItem)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5c538c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"EnableItem", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemInstance.ApplyClippingOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemInstance::*)(bool)>(&::GorillaNetworking::CosmeticItemInstance::ApplyClippingOffsets)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5c5399c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"ApplyClippingOffsets", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemInstance.DisableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemInstance::*)(::GlobalNamespace::CosmeticsController_CosmeticSlots)>(&::GorillaNetworking::CosmeticItemInstance::DisableItem)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5c53d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"DisableItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemInstance.EnableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemInstance::*)(::GlobalNamespace::CosmeticsController_CosmeticSlots, ::GlobalNamespace::VRRig*)>(&::GorillaNetworking::CosmeticItemInstance::EnableItem)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x5c5404c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"EnableItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemInstance.ToggleRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemInstance::*)(bool)>(&::GorillaNetworking::CosmeticItemInstance::ToggleRenderers)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c5453c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"ToggleRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemInstance.ToggleParticles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemInstance::*)(bool)>(&::GorillaNetworking::CosmeticItemInstance::ToggleParticles)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5c545d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"ToggleParticles", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CosmeticItemInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CosmeticItemInstance::*)()>(&::GorillaNetworking::CosmeticItemInstance::_ctor)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5c53508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_leftObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_leftObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftObjects;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set_leftObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_rightObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_rightObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightObjects;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set_rightObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objects;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set_objects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_holdableObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdableObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_holdableObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holdableObjects;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set_holdableObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holdableObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_allRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allRenderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_allRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allRenderers;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set_allRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allRenderers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_allParticles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allParticles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>* const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_allParticles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allParticles;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set_allParticles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::ParticleSystem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allParticles = value;
}
constexpr ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_clippingOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clippingOffsets;
}
constexpr ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_clippingOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clippingOffsets;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set_clippingOffsets(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clippingOffsets = value;
}
constexpr bool& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_isHoldableItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHoldableItem;
}
constexpr bool const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_isHoldableItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHoldableItem;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set_isHoldableItem(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHoldableItem = value;
}
constexpr ::StringW& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_dbgname()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbgname;
}
constexpr ::StringW const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get_dbgname() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dbgname;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set_dbgname(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dbgname = value;
}
constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get__bodyDockPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyDockPositions;
}
constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get__bodyDockPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyDockPositions;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set__bodyDockPositions(::UnityW<::GlobalNamespace::BodyDockPositions>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyDockPositions = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get__anchorOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchorOverrides;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get__anchorOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchorOverrides;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set__anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anchorOverrides = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get__activeSlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeSlot;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& GorillaNetworking::CosmeticItemInstance::__cordl_internal_get__activeSlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeSlot;
}
constexpr void GorillaNetworking::CosmeticItemInstance::__cordl_internal_set__activeSlot(::GlobalNamespace::CosmeticsController_CosmeticSlots  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeSlot = value;
}
inline ::GlobalNamespace::CosmeticsController_CosmeticSlots GorillaNetworking::CosmeticItemInstance::get_ActiveSlot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"get_ActiveSlot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CosmeticsController_CosmeticSlots>(this, ___internal_method);
}
inline void GorillaNetworking::CosmeticItemInstance::EnableItem(::UnityEngine::GameObject*  obj, bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"EnableItem", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, enable);
}
inline void GorillaNetworking::CosmeticItemInstance::ApplyClippingOffsets(bool  itemEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"ApplyClippingOffsets", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemEnabled);
}
inline void GorillaNetworking::CosmeticItemInstance::DisableItem(::GlobalNamespace::CosmeticsController_CosmeticSlots  cosmeticSlot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"DisableItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticSlot);
}
inline void GorillaNetworking::CosmeticItemInstance::EnableItem(::GlobalNamespace::CosmeticsController_CosmeticSlots  cosmeticSlot, ::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"EnableItem", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticSlots>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cosmeticSlot, rig);
}
inline void GorillaNetworking::CosmeticItemInstance::ToggleRenderers(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"ToggleRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline void GorillaNetworking::CosmeticItemInstance::ToggleParticles(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {"ToggleParticles", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enabled);
}
inline void GorillaNetworking::CosmeticItemInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CosmeticItemInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CosmeticItemInstance* GorillaNetworking::CosmeticItemInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CosmeticItemInstance*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CosmeticItemInstance::CosmeticItemInstance()   {
}
