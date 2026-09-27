#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsControllerUpdateStand.hpp"
#include "GlobalNamespace/zzzz__HeadModel_impl.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticsControllerUpdateStand_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticsControllerUpdateStand_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticsControllerUpdateStand.ReturnChildWithCosmeticNameMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::CosmeticsControllerUpdateStand::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::CosmeticsControllerUpdateStand::ReturnChildWithCosmeticNameMatch)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x574c014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsControllerUpdateStand*>(),
                        {"ReturnChildWithCosmeticNameMatch", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsControllerUpdateStand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsControllerUpdateStand::*)()>(&::GlobalNamespace::CosmeticsControllerUpdateStand::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574c4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsControllerUpdateStand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_cosmeticsController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsController;
}
constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_cosmeticsController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsController;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_cosmeticsController(::UnityW<::GorillaNetworking::CosmeticsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticsController = value;
}
constexpr bool& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_FailEntitlement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FailEntitlement;
}
constexpr bool const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_FailEntitlement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FailEntitlement;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_FailEntitlement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FailEntitlement = value;
}
constexpr bool& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_PlayerUnlocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerUnlocked;
}
constexpr bool const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_PlayerUnlocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerUnlocked;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_PlayerUnlocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerUnlocked = value;
}
constexpr bool& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_ItemNotGrantedYet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemNotGrantedYet;
}
constexpr bool const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_ItemNotGrantedYet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemNotGrantedYet;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_ItemNotGrantedYet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemNotGrantedYet = value;
}
constexpr bool& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_ItemSuccessfullyGranted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemSuccessfullyGranted;
}
constexpr bool const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_ItemSuccessfullyGranted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemSuccessfullyGranted;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_ItemSuccessfullyGranted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemSuccessfullyGranted = value;
}
constexpr bool& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_AttemptToConsumeEntitlement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttemptToConsumeEntitlement;
}
constexpr bool const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_AttemptToConsumeEntitlement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttemptToConsumeEntitlement;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_AttemptToConsumeEntitlement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttemptToConsumeEntitlement = value;
}
constexpr bool& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_EntitlementSuccessfullyConsumed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntitlementSuccessfullyConsumed;
}
constexpr bool const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_EntitlementSuccessfullyConsumed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntitlementSuccessfullyConsumed;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_EntitlementSuccessfullyConsumed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntitlementSuccessfullyConsumed = value;
}
constexpr bool& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_LockSuccessfullyCleared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockSuccessfullyCleared;
}
constexpr bool const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_LockSuccessfullyCleared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LockSuccessfullyCleared;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_LockSuccessfullyCleared(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LockSuccessfullyCleared = value;
}
constexpr bool& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_RunDebug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunDebug;
}
constexpr bool const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_RunDebug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RunDebug;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_RunDebug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RunDebug = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_textParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_textParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textParent;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_textParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textParent = value;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_outItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outItem;
}
constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_outItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outItem;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_outItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outItem = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::HeadModel>>& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_inventoryHeadModels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventoryHeadModels;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::HeadModel>> const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_inventoryHeadModels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventoryHeadModels;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_inventoryHeadModels(::ArrayW<::UnityW<::GlobalNamespace::HeadModel>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inventoryHeadModels = value;
}
constexpr ::StringW& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_headModelsPrefabPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headModelsPrefabPath;
}
constexpr ::StringW const& GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_get_headModelsPrefabPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headModelsPrefabPath;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand::__cordl_internal_set_headModelsPrefabPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headModelsPrefabPath = value;
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::CosmeticsControllerUpdateStand::ReturnChildWithCosmeticNameMatch(::UnityEngine::Transform*  parentTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsControllerUpdateStand*>(),
                        {"ReturnChildWithCosmeticNameMatch", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method, parentTransform);
}
inline void GlobalNamespace::CosmeticsControllerUpdateStand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsControllerUpdateStand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticsControllerUpdateStand* GlobalNamespace::CosmeticsControllerUpdateStand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticsControllerUpdateStand*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsControllerUpdateStand::CosmeticsControllerUpdateStand()   {
}
//  Writing Method size for method: ::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::*)()>(&::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x574c4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0._ReturnChildWithCosmeticNameMatch_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::*)(::GlobalNamespace::CosmeticsController_CosmeticItem)>(&::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::_ReturnChildWithCosmeticNameMatch_b__0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x574c4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0*>(),
                        {"<ReturnChildWithCosmeticNameMatch>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::__cordl_internal_get_child()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___child;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::__cordl_internal_get_child() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___child;
}
constexpr void GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::__cordl_internal_set_child(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___child = value;
}
inline void GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::_ReturnChildWithCosmeticNameMatch_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0*>(),
                        {"<ReturnChildWithCosmeticNameMatch>b__0", {}, {::i2c::type_of<::GlobalNamespace::CosmeticsController_CosmeticItem>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0* GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0::CosmeticsControllerUpdateStand___c__DisplayClass13_0()   {
}
