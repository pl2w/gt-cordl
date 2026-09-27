#pragma once
// IWYU pragma private; include "GlobalNamespace/SnowballMaker.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourPostTick_impl.hpp"
#include "GlobalNamespace/zzzz__SnowballThrowable_impl.hpp"
#include "GlobalNamespace/zzzz__SnowballMaker_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__SnowballThrowable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.get_leftHandInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SnowballMaker> (*)()>(&::GlobalNamespace::SnowballMaker::get_leftHandInstance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e030bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"get_leftHandInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.set_leftHandInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SnowballMaker*)>(&::GlobalNamespace::SnowballMaker::set_leftHandInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e03104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"set_leftHandInstance", {}, {::i2c::type_of<::GlobalNamespace::SnowballMaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.get_rightHandInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SnowballMaker> (*)()>(&::GlobalNamespace::SnowballMaker::get_rightHandInstance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5e0315c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"get_rightHandInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.set_rightHandInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SnowballMaker*)>(&::GlobalNamespace::SnowballMaker::set_rightHandInstance)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e031a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"set_rightHandInstance", {}, {::i2c::type_of<::GlobalNamespace::SnowballMaker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.get_snowballs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>> (::GlobalNamespace::SnowballMaker::*)()>(&::GlobalNamespace::SnowballMaker::get_snowballs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e031f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"get_snowballs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.set_snowballs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballMaker::*)(::ArrayW<::GlobalNamespace::SnowballThrowable*>)>(&::GlobalNamespace::SnowballMaker::set_snowballs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e031fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"set_snowballs", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SnowballThrowable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballMaker::*)()>(&::GlobalNamespace::SnowballMaker::Awake)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x5e03204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballMaker::*)()>(&::GlobalNamespace::SnowballMaker::Start)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5e034c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.SetupThrowables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballMaker::*)(::ArrayW<::GlobalNamespace::SnowballThrowable*>)>(&::GlobalNamespace::SnowballMaker::SetupThrowables)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5e035dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"SetupThrowables", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SnowballThrowable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballMaker::*)()>(&::GlobalNamespace::SnowballMaker::PostTick)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x5e03764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                    {::i2c::class_of<::GlobalNamespace::SnowballMaker*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.TryCreateSnowball
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SnowballMaker::*)(int32_t, ::by_ref<::GlobalNamespace::SnowballThrowable*>)>(&::GlobalNamespace::SnowballMaker::TryCreateSnowball)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5e0278c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"TryCreateSnowball", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SnowballThrowable*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker.InitializeSnowballFromMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballMaker::*)(int32_t)>(&::GlobalNamespace::SnowballMaker::InitializeSnowballFromMatIndex)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e03e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"InitializeSnowballFromMatIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SnowballMaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SnowballMaker::*)()>(&::GlobalNamespace::SnowballMaker::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5e03f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SnowballMaker::__cordl_internal_get_isLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr bool const& GlobalNamespace::SnowballMaker::__cordl_internal_get_isLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLeftHand;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_isLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLeftHand = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>>& GlobalNamespace::SnowballMaker::__cordl_internal_get__snowballs_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snowballs_k__BackingField;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>> const& GlobalNamespace::SnowballMaker::__cordl_internal_get__snowballs_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snowballs_k__BackingField;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set__snowballs_k__BackingField(::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snowballs_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::SnowballMaker::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::SnowballMaker::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr float_t& GlobalNamespace::SnowballMaker::__cordl_internal_get_snowballCreationCooldownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballCreationCooldownTime;
}
constexpr float_t const& GlobalNamespace::SnowballMaker::__cordl_internal_get_snowballCreationCooldownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballCreationCooldownTime;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_snowballCreationCooldownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowballCreationCooldownTime = value;
}
constexpr float_t& GlobalNamespace::SnowballMaker::__cordl_internal_get_lastGroundContactTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGroundContactTime;
}
constexpr float_t const& GlobalNamespace::SnowballMaker::__cordl_internal_get_lastGroundContactTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastGroundContactTime;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_lastGroundContactTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastGroundContactTime = value;
}
constexpr bool& GlobalNamespace::SnowballMaker::__cordl_internal_get_requiresFreshMaterialContact()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiresFreshMaterialContact;
}
constexpr bool const& GlobalNamespace::SnowballMaker::__cordl_internal_get_requiresFreshMaterialContact() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiresFreshMaterialContact;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_requiresFreshMaterialContact(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiresFreshMaterialContact = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SnowballMaker::__cordl_internal_get_handTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SnowballMaker::__cordl_internal_get_handTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handTransform;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_handTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handTransform = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*& GlobalNamespace::SnowballMaker::__cordl_internal_get_matSnowballLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matSnowballLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>* const& GlobalNamespace::SnowballMaker::__cordl_internal_get_matSnowballLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___matSnowballLookup;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_matSnowballLookup(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___matSnowballLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*& GlobalNamespace::SnowballMaker::__cordl_internal_get_snowballByThrowableIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballByThrowableIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>* const& GlobalNamespace::SnowballMaker::__cordl_internal_get_snowballByThrowableIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballByThrowableIndex;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_snowballByThrowableIndex(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::SnowballThrowable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowballByThrowableIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*& GlobalNamespace::SnowballMaker::__cordl_internal_get_snowballPlayfabIdByThrowableIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballPlayfabIdByThrowableIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* const& GlobalNamespace::SnowballMaker::__cordl_internal_get_snowballPlayfabIdByThrowableIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballPlayfabIdByThrowableIndex;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_snowballPlayfabIdByThrowableIndex(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowballPlayfabIdByThrowableIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*& GlobalNamespace::SnowballMaker::__cordl_internal_get_snowballPlayfabIdByMaterialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballPlayfabIdByMaterialIndex;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* const& GlobalNamespace::SnowballMaker::__cordl_internal_get_snowballPlayfabIdByMaterialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snowballPlayfabIdByMaterialIndex;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_snowballPlayfabIdByMaterialIndex(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snowballPlayfabIdByMaterialIndex = value;
}
constexpr bool& GlobalNamespace::SnowballMaker::__cordl_internal_get_m_hasGrowingSnowball()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasGrowingSnowball;
}
constexpr bool const& GlobalNamespace::SnowballMaker::__cordl_internal_get_m_hasGrowingSnowball() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_hasGrowingSnowball;
}
constexpr void GlobalNamespace::SnowballMaker::__cordl_internal_set_m_hasGrowingSnowball(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_hasGrowingSnowball = value;
}
inline void GlobalNamespace::SnowballMaker::setStaticF__leftHandInstance_k__BackingField(::UnityW<::GlobalNamespace::SnowballMaker>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SnowballMaker>, "<leftHandInstance>k__BackingField", ::GlobalNamespace::SnowballMaker*>(std::forward<::UnityW<::GlobalNamespace::SnowballMaker>>(value));
}
inline ::UnityW<::GlobalNamespace::SnowballMaker> GlobalNamespace::SnowballMaker::getStaticF__leftHandInstance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SnowballMaker>, "<leftHandInstance>k__BackingField", ::GlobalNamespace::SnowballMaker*>();
}
inline void GlobalNamespace::SnowballMaker::setStaticF__rightHandInstance_k__BackingField(::UnityW<::GlobalNamespace::SnowballMaker>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::SnowballMaker>, "<rightHandInstance>k__BackingField", ::GlobalNamespace::SnowballMaker*>(std::forward<::UnityW<::GlobalNamespace::SnowballMaker>>(value));
}
inline ::UnityW<::GlobalNamespace::SnowballMaker> GlobalNamespace::SnowballMaker::getStaticF__rightHandInstance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::SnowballMaker>, "<rightHandInstance>k__BackingField", ::GlobalNamespace::SnowballMaker*>();
}
inline ::UnityW<::GlobalNamespace::SnowballMaker> GlobalNamespace::SnowballMaker::get_leftHandInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"get_leftHandInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SnowballMaker>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SnowballMaker::set_leftHandInstance(::GlobalNamespace::SnowballMaker*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"set_leftHandInstance", {}, {::i2c::type_of<::GlobalNamespace::SnowballMaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SnowballMaker> GlobalNamespace::SnowballMaker::get_rightHandInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"get_rightHandInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SnowballMaker>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SnowballMaker::set_rightHandInstance(::GlobalNamespace::SnowballMaker*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"set_rightHandInstance", {}, {::i2c::type_of<::GlobalNamespace::SnowballMaker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>> GlobalNamespace::SnowballMaker::get_snowballs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"get_snowballs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::SnowballThrowable>>>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballMaker::set_snowballs(::ArrayW<::GlobalNamespace::SnowballThrowable*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"set_snowballs", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SnowballThrowable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SnowballMaker::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballMaker::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SnowballMaker::SetupThrowables(::ArrayW<::GlobalNamespace::SnowballThrowable*>  newThrowables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"SetupThrowables", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::SnowballThrowable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newThrowables);
}
inline void GlobalNamespace::SnowballMaker::PostTick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SnowballMaker*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SnowballMaker::TryCreateSnowball(int32_t  materialIndex, ::by_ref<::GlobalNamespace::SnowballThrowable*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"TryCreateSnowball", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SnowballThrowable*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, materialIndex, result);
}
inline void GlobalNamespace::SnowballMaker::InitializeSnowballFromMatIndex(int32_t  matIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {"InitializeSnowballFromMatIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, matIndex);
}
inline void GlobalNamespace::SnowballMaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SnowballMaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SnowballMaker* GlobalNamespace::SnowballMaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SnowballMaker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SnowballMaker::SnowballMaker()   {
}
