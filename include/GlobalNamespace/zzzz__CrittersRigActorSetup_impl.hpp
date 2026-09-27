#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersRigActorSetup.hpp"
#include "GlobalNamespace/zzzz__CrittersRigActorSetup_RigActor_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersRigActorSetup_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "GlobalNamespace/zzzz__CrittersRigActorSetup_RigActor_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersRigActorSetup.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRigActorSetup::*)()>(&::GlobalNamespace::CrittersRigActorSetup::OnEnable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56f4080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRigActorSetup.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRigActorSetup::*)()>(&::GlobalNamespace::CrittersRigActorSetup::OnDisable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x56f4088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRigActorSetup.RefreshActorForIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CrittersActor> (::GlobalNamespace::CrittersRigActorSetup::*)(int32_t)>(&::GlobalNamespace::CrittersRigActorSetup::RefreshActorForIndex)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x56f40f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {"RefreshActorForIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRigActorSetup.CheckUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRigActorSetup::*)(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>, bool)>(&::GlobalNamespace::CrittersRigActorSetup::CheckUpdate)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x56f42bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {"CheckUpdate", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersRigActorSetup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersRigActorSetup::*)()>(&::GlobalNamespace::CrittersRigActorSetup::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56f44d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::CrittersRigActorSetup_RigActor>& GlobalNamespace::CrittersRigActorSetup::__cordl_internal_get_rigActors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigActors;
}
constexpr ::ArrayW<::GlobalNamespace::CrittersRigActorSetup_RigActor> const& GlobalNamespace::CrittersRigActorSetup::__cordl_internal_get_rigActors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigActors;
}
constexpr void GlobalNamespace::CrittersRigActorSetup::__cordl_internal_set_rigActors(::ArrayW<::GlobalNamespace::CrittersRigActorSetup_RigActor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigActors = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& GlobalNamespace::CrittersRigActorSetup::__cordl_internal_get_rigActorData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigActorData;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& GlobalNamespace::CrittersRigActorSetup::__cordl_internal_get_rigActorData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigActorData;
}
constexpr void GlobalNamespace::CrittersRigActorSetup::__cordl_internal_set_rigActorData(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigActorData = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::CrittersRigActorSetup::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::CrittersRigActorSetup::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void GlobalNamespace::CrittersRigActorSetup::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
inline void GlobalNamespace::CrittersRigActorSetup::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersRigActorSetup::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::CrittersActor> GlobalNamespace::CrittersRigActorSetup::RefreshActorForIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {"RefreshActorForIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CrittersActor>>(this, ___internal_method, index);
}
inline void GlobalNamespace::CrittersRigActorSetup::CheckUpdate(::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>  refActorData, bool  forceCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {"CheckUpdate", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::System::Object*>*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refActorData, forceCheck);
}
inline void GlobalNamespace::CrittersRigActorSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersRigActorSetup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersRigActorSetup* GlobalNamespace::CrittersRigActorSetup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersRigActorSetup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersRigActorSetup::CrittersRigActorSetup()   {
}
