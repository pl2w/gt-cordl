#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResource.hpp"
#include "GlobalNamespace/zzzz__SIResource_LimitedDepositType_impl.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIResource_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_LimitedDepositType_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCategoryCost_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCost_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIResource.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)()>(&::GlobalNamespace::SIResource::Awake)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5ae5a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)()>(&::GlobalNamespace::SIResource::SliceUpdate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5ae5c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.SetLastGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)()>(&::GlobalNamespace::SIResource::SetLastGrabbed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5ae5cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"SetLastGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)()>(&::GlobalNamespace::SIResource::OnEnable)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5ae5da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                    {::i2c::class_of<::GlobalNamespace::SIResource*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)()>(&::GlobalNamespace::SIResource::OnDisable)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5ae6024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.GrabInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)()>(&::GlobalNamespace::SIResource::GrabInitialization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae62c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"GrabInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.ReleaseInitialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)()>(&::GlobalNamespace::SIResource::ReleaseInitialization)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ae62d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"ReleaseInitialization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.CanDeposit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIResource::*)()>(&::GlobalNamespace::SIResource::CanDeposit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ae62f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                    {::i2c::class_of<::GlobalNamespace::SIResource*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.HandleDepositLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIResource::HandleDepositLocal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ae63cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                    {::i2c::class_of<::GlobalNamespace::SIResource*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.HandleDepositAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)(::GlobalNamespace::SIPlayer*)>(&::GlobalNamespace::SIResource::HandleDepositAuth)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ae63d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                    {::i2c::class_of<::GlobalNamespace::SIResource*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.HandleOnDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::SIResource::HandleOnDestroyed)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ae63dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"HandleOnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.GetSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* (*)(::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>)>(&::GlobalNamespace::SIResource::GetSum)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x5ae64e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"GetSum", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.GetMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* (*)(::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>)>(&::GlobalNamespace::SIResource::GetMax)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5ae696c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"GetMax", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.CategoryCostsMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResource::CategoryCostsMatch)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ae70cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"CategoryCostsMatch", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.CostsAreEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*, bool)>(&::GlobalNamespace::SIResource::CostsAreEqual)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5ae73c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"CostsAreEqual", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.GenerateCostsFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::SIResource_ResourceCost> (*)(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*)>(&::GlobalNamespace::SIResource::GenerateCostsFrom)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5ae78e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"GenerateCostsFrom", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource.PrintCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SIResource_ResourceCost>*)>(&::GlobalNamespace::SIResource::PrintCost)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5ae7b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"PrintCost", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResource::*)()>(&::GlobalNamespace::SIResource::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ae7bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIPlayer>& GlobalNamespace::SIResource::__cordl_internal_get_lastPlayerHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayerHeld;
}
constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& GlobalNamespace::SIResource::__cordl_internal_get_lastPlayerHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayerHeld;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_lastPlayerHeld(::UnityW<::GlobalNamespace::SIPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlayerHeld = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::SIResource::__cordl_internal_get_myGameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myGameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::SIResource::__cordl_internal_get_myGameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myGameEntity;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_myGameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myGameEntity = value;
}
constexpr ::GlobalNamespace::SIResource_ResourceType& GlobalNamespace::SIResource::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::SIResource_ResourceType const& GlobalNamespace::SIResource::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_type(::GlobalNamespace::SIResource_ResourceType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::GlobalNamespace::SIResource_LimitedDepositType& GlobalNamespace::SIResource::__cordl_internal_get_limitedDepositType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitedDepositType;
}
constexpr ::GlobalNamespace::SIResource_LimitedDepositType const& GlobalNamespace::SIResource::__cordl_internal_get_limitedDepositType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___limitedDepositType;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_limitedDepositType(::GlobalNamespace::SIResource_LimitedDepositType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___limitedDepositType = value;
}
constexpr bool& GlobalNamespace::SIResource::__cordl_internal_get_localDeposited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localDeposited;
}
constexpr bool const& GlobalNamespace::SIResource::__cordl_internal_get_localDeposited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localDeposited;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_localDeposited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localDeposited = value;
}
constexpr bool& GlobalNamespace::SIResource::__cordl_internal_get_localEverGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localEverGrabbed;
}
constexpr bool const& GlobalNamespace::SIResource::__cordl_internal_get_localEverGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localEverGrabbed;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_localEverGrabbed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localEverGrabbed = value;
}
constexpr float_t& GlobalNamespace::SIResource::__cordl_internal_get_spawnPitchVariance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPitchVariance;
}
constexpr float_t const& GlobalNamespace::SIResource::__cordl_internal_get_spawnPitchVariance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPitchVariance;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_spawnPitchVariance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPitchVariance = value;
}
constexpr float_t& GlobalNamespace::SIResource::__cordl_internal_get_sleepTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepTime;
}
constexpr float_t const& GlobalNamespace::SIResource::__cordl_internal_get_sleepTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepTime;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_sleepTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepTime = value;
}
constexpr bool& GlobalNamespace::SIResource::__cordl_internal_get_shouldSleep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldSleep;
}
constexpr bool const& GlobalNamespace::SIResource::__cordl_internal_get_shouldSleep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldSleep;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_shouldSleep(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldSleep = value;
}
constexpr bool& GlobalNamespace::SIResource::__cordl_internal_get_isSleeping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSleeping;
}
constexpr bool const& GlobalNamespace::SIResource::__cordl_internal_get_isSleeping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSleeping;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_isSleeping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSleeping = value;
}
constexpr float_t& GlobalNamespace::SIResource::__cordl_internal_get_timeReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeReleased;
}
constexpr float_t const& GlobalNamespace::SIResource::__cordl_internal_get_timeReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeReleased;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set_timeReleased(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeReleased = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::SIResource::__cordl_internal_get__rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::SIResource::__cordl_internal_get__rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rb;
}
constexpr void GlobalNamespace::SIResource::__cordl_internal_set__rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rb = value;
}
inline void GlobalNamespace::SIResource::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResource::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResource::SetLastGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"SetLastGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResource::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIResource*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResource::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResource::GrabInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"GrabInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResource::ReleaseInitialization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"ReleaseInitialization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SIResource::CanDeposit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIResource*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIResource::HandleDepositLocal(::GlobalNamespace::SIPlayer*  depositingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIResource*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depositingPlayer);
}
inline void GlobalNamespace::SIResource::HandleDepositAuth(::GlobalNamespace::SIPlayer*  depositingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SIResource*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, depositingPlayer);
}
inline void GlobalNamespace::SIResource::HandleOnDestroyed(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"HandleOnDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* GlobalNamespace::SIResource::GetSum(/* [ParamArray] */ ::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>  costs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"GetSum", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(nullptr, ___internal_method, costs);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>* GlobalNamespace::SIResource::GetMax(/* [ParamArray] */ ::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>  costs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"GetMax", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::SIResource_ResourceCost>*>(nullptr, ___internal_method, costs);
}
inline bool GlobalNamespace::SIResource::CategoryCostsMatch(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost1, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"CategoryCostsMatch", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cost1, cost2);
}
inline bool GlobalNamespace::SIResource::CostsAreEqual(::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost1, ::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*  cost2, bool  matchOrder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"CostsAreEqual", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::SIResource_ResourceCost>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cost1, cost2, matchOrder);
}
inline ::ArrayW<::GlobalNamespace::SIResource_ResourceCost> GlobalNamespace::SIResource::GenerateCostsFrom(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*  costDictionary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"GenerateCostsFrom", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SIResource_ResourceType,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::SIResource_ResourceCost>>(nullptr, ___internal_method, costDictionary);
}
inline ::StringW GlobalNamespace::SIResource::PrintCost(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SIResource_ResourceCost>*  costs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {"PrintCost", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SIResource_ResourceCost>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, costs);
}
inline void GlobalNamespace::SIResource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIResource* GlobalNamespace::SIResource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIResource*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::SIResource::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::SIResource::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResource::SIResource()   {
}
