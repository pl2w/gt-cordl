#pragma once
// IWYU pragma private; include "GorillaTag/GuidedRefs/GuidedRefHub.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefReceiverMono_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefTargetMono_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefHub_def.hpp"
#include "GorillaTag/GuidedRefs/Internal/zzzz__RelayInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefHubIdSO_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefHub_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefReceiverArrayInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefReceiverFieldInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTargetIdSO_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefTryResolveInfo_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefMonoBehaviour_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefObject_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__IGuidedRefReceiverMono_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__RegisteredReceiverFieldInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefHub::*)()>(&::GorillaTag::GuidedRefs::GuidedRefHub::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d44040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefHub::*)()>(&::GorillaTag::GuidedRefs::GuidedRefHub::OnDestroy)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5d4435c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.GuidedRefInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefHub::*)()>(&::GorillaTag::GuidedRefs::GuidedRefHub::GuidedRefInitialize)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5d44044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GuidedRefInitialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.IsInstanceIDRegisteredWithAnyHub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GorillaTag::GuidedRefs::GuidedRefHub::IsInstanceIDRegisteredWithAnyHub)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d44634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"IsInstanceIDRegisteredWithAnyHub", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.RegisterReceiverField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefHub::*)(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo, ::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*)>(&::GorillaTag::GuidedRefs::GuidedRefHub::RegisterReceiverField)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5d446b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"RegisterReceiverField", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>(), ::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.GetOrAddRelayInfoByTargetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::GuidedRefs::Internal::RelayInfo* (::GorillaTag::GuidedRefs::GuidedRefHub::*)(::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*)>(&::GorillaTag::GuidedRefs::GuidedRefHub::GetOrAddRelayInfoByTargetId)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5d44abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GetOrAddRelayInfoByTargetId", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.GetHubsThatHaveRegisteredInstId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>* (*)(int32_t)>(&::GorillaTag::GuidedRefs::GuidedRefHub::GetHubsThatHaveRegisteredInstId)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d44998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GetHubsThatHaveRegisteredInstId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.ResolveReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::GuidedRefs::Internal::RelayInfo*)>(&::GorillaTag::GuidedRefs::GuidedRefHub::ResolveReferences)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5d44cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"ResolveReferences", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::Internal::RelayInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.GetFieldNameByID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::GorillaTag::GuidedRefs::GuidedRefHub::GetFieldNameByID)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d450f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GetFieldNameByID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::GuidedRefs::GuidedRefHub::*)()>(&::GorillaTag::GuidedRefs::GuidedRefHub::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d45134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaTag::GuidedRefs::GuidedRefHub::*)()>(&::GorillaTag::GuidedRefs::GuidedRefHub::GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d453e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GuidedRefs::GuidedRefHub.GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::GuidedRefs::GuidedRefHub::*)()>(&::GorillaTag::GuidedRefs::GuidedRefHub::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d453f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::GuidedRefs::GuidedRefHub::__cordl_internal_get_isRootInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRootInstance;
}
constexpr bool const& GorillaTag::GuidedRefs::GuidedRefHub::__cordl_internal_get_isRootInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRootInstance;
}
constexpr void GorillaTag::GuidedRefs::GuidedRefHub::__cordl_internal_set_isRootInstance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRootInstance = value;
}
constexpr ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>& GorillaTag::GuidedRefs::GuidedRefHub::__cordl_internal_get_hubId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hubId;
}
constexpr ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO> const& GorillaTag::GuidedRefs::GuidedRefHub::__cordl_internal_get_hubId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hubId;
}
constexpr void GorillaTag::GuidedRefs::GuidedRefHub::__cordl_internal_set_hubId(::UnityW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hubId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>,::GorillaTag::GuidedRefs::Internal::RelayInfo*>*& GorillaTag::GuidedRefs::GuidedRefHub::__cordl_internal_get_lookupRelayInfoByTargetId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookupRelayInfoByTargetId;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>,::GorillaTag::GuidedRefs::Internal::RelayInfo*>* const& GorillaTag::GuidedRefs::GuidedRefHub::__cordl_internal_get_lookupRelayInfoByTargetId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookupRelayInfoByTargetId;
}
constexpr void GorillaTag::GuidedRefs::GuidedRefHub::__cordl_internal_set_lookupRelayInfoByTargetId(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>,::GorillaTag::GuidedRefs::Internal::RelayInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookupRelayInfoByTargetId = value;
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::setStaticF_rootInstance(::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>, "rootInstance", ::GorillaTag::GuidedRefs::GuidedRefHub*>(std::forward<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>(value));
}
inline ::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub> GorillaTag::GuidedRefs::GuidedRefHub::getStaticF_rootInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>, "rootInstance", ::GorillaTag::GuidedRefs::GuidedRefHub*>();
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::setStaticF_hasRootInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasRootInstance", ::GorillaTag::GuidedRefs::GuidedRefHub*>(std::forward<bool>(value));
}
inline bool GorillaTag::GuidedRefs::GuidedRefHub::getStaticF_hasRootInstance()  {
return ::cordl_internals::getStaticField<bool, "hasRootInstance", ::GorillaTag::GuidedRefs::GuidedRefHub*>();
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::setStaticF_static_relayInfo_to_targetId(::System::Collections::Generic::Dictionary_2<::GorillaTag::GuidedRefs::Internal::RelayInfo*,::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GorillaTag::GuidedRefs::Internal::RelayInfo*,::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>*, "static_relayInfo_to_targetId", ::GorillaTag::GuidedRefs::GuidedRefHub*>(std::forward<::System::Collections::Generic::Dictionary_2<::GorillaTag::GuidedRefs::Internal::RelayInfo*,::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GorillaTag::GuidedRefs::Internal::RelayInfo*,::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>* GorillaTag::GuidedRefs::GuidedRefHub::getStaticF_static_relayInfo_to_targetId()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GorillaTag::GuidedRefs::Internal::RelayInfo*,::UnityW<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO>>*, "static_relayInfo_to_targetId", ::GorillaTag::GuidedRefs::GuidedRefHub*>();
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::setStaticF_globalLookupHubsThatHaveRegisteredInstId(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>*, "globalLookupHubsThatHaveRegisteredInstId", ::GorillaTag::GuidedRefs::GuidedRefHub*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>* GorillaTag::GuidedRefs::GuidedRefHub::getStaticF_globalLookupHubsThatHaveRegisteredInstId()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>*, "globalLookupHubsThatHaveRegisteredInstId", ::GorillaTag::GuidedRefs::GuidedRefHub*>();
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::setStaticF_globalLookupRefInstIDsByHub(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>,::System::Collections::Generic::List_1<int32_t>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>,::System::Collections::Generic::List_1<int32_t>*>*, "globalLookupRefInstIDsByHub", ::GorillaTag::GuidedRefs::GuidedRefHub*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>,::System::Collections::Generic::List_1<int32_t>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>,::System::Collections::Generic::List_1<int32_t>*>* GorillaTag::GuidedRefs::GuidedRefHub::getStaticF_globalLookupRefInstIDsByHub()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>,::System::Collections::Generic::List_1<int32_t>*>*, "globalLookupRefInstIDsByHub", ::GorillaTag::GuidedRefs::GuidedRefHub*>();
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::setStaticF_globalHubsTransientList(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*, "globalHubsTransientList", ::GorillaTag::GuidedRefs::GuidedRefHub*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>* GorillaTag::GuidedRefs::GuidedRefHub::getStaticF_globalHubsTransientList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*, "globalHubsTransientList", ::GorillaTag::GuidedRefs::GuidedRefHub*>();
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::setStaticF_kReceiversWaitingToFullyResolve(::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*, "kReceiversWaitingToFullyResolve", ::GorillaTag::GuidedRefs::GuidedRefHub*>(std::forward<::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>* GorillaTag::GuidedRefs::GuidedRefHub::getStaticF_kReceiversWaitingToFullyResolve()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*, "kReceiversWaitingToFullyResolve", ::GorillaTag::GuidedRefs::GuidedRefHub*>();
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::setStaticF_kReceiversFullyRegistered(::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*, "kReceiversFullyRegistered", ::GorillaTag::GuidedRefs::GuidedRefHub*>(std::forward<::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>* GorillaTag::GuidedRefs::GuidedRefHub::getStaticF_kReceiversFullyRegistered()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>*, "kReceiversFullyRegistered", ::GorillaTag::GuidedRefs::GuidedRefHub*>();
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::GuidedRefInitialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GuidedRefInitialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::GuidedRefs::GuidedRefHub::IsInstanceIDRegisteredWithAnyHub(int32_t  instanceID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"IsInstanceIDRegisteredWithAnyHub", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, instanceID);
}
template<typename TIGuidedRefTargetMono>
requires(::cordl_internals::type_constraint<TIGuidedRefTargetMono, ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>)
inline void GorillaTag::GuidedRefs::GuidedRefHub::RegisterTarget_Internal(TIGuidedRefTargetMono  targetMono)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"RegisterTarget_Internal", {::i2c::class_of<TIGuidedRefTargetMono>()}, {::i2c::type_of<TIGuidedRefTargetMono>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefTargetMono>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetMono);
}
template<typename TIGuidedRefTargetMono>
requires(::cordl_internals::type_constraint<TIGuidedRefTargetMono, ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>)
inline void GorillaTag::GuidedRefs::GuidedRefHub::RegisterTarget(TIGuidedRefTargetMono  targetMono, ::ArrayW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO*>  hubIds, ::UnityEngine::Component*  debugCaller)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"RegisterTarget", {::i2c::class_of<TIGuidedRefTargetMono>()}, {::i2c::type_of<TIGuidedRefTargetMono>(), ::i2c::type_of<::ArrayW<::GorillaTag::GuidedRefs::GuidedRefHubIdSO*>>(), ::i2c::type_of<::UnityEngine::Component*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefTargetMono>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetMono, hubIds, debugCaller);
}
template<typename TIGuidedRefTargetMono>
requires(::cordl_internals::type_constraint<TIGuidedRefTargetMono, ::GorillaTag::GuidedRefs::IGuidedRefTargetMono*>)
inline void GorillaTag::GuidedRefs::GuidedRefHub::UnregisterTarget(TIGuidedRefTargetMono  targetMono, bool  destroyed)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"UnregisterTarget", {::i2c::class_of<TIGuidedRefTargetMono>()}, {::i2c::type_of<TIGuidedRefTargetMono>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefTargetMono>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetMono, destroyed);
}
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
inline void GorillaTag::GuidedRefs::GuidedRefHub::ReceiverFullyRegistered(TIGuidedRefReceiverMono  receiverMono)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"ReceiverFullyRegistered", {::i2c::class_of<TIGuidedRefReceiverMono>()}, {::i2c::type_of<TIGuidedRefReceiverMono>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefReceiverMono>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, receiverMono);
}
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
inline void GorillaTag::GuidedRefs::GuidedRefHub::CheckAndNotifyIfReceiverFullyResolved(TIGuidedRefReceiverMono  receiverMono)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"CheckAndNotifyIfReceiverFullyResolved", {::i2c::class_of<TIGuidedRefReceiverMono>()}, {::i2c::type_of<TIGuidedRefReceiverMono>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefReceiverMono>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, receiverMono);
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::RegisterReceiverField(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo  registeredReceiverFieldInfo, ::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*  targetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"RegisterReceiverField", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>(), ::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, registeredReceiverFieldInfo, targetId);
}
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
inline void GorillaTag::GuidedRefs::GuidedRefHub::RegisterReceiverField_Internal(::GorillaTag::GuidedRefs::GuidedRefHubIdSO*  hubId, TIGuidedRefReceiverMono  receiverMono, int32_t  fieldId, ::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*  targetId, int32_t  index)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"RegisterReceiverField_Internal", {::i2c::class_of<TIGuidedRefReceiverMono>()}, {::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefHubIdSO*>(), ::i2c::type_of<TIGuidedRefReceiverMono>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefReceiverMono>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hubId, receiverMono, fieldId, targetId, index);
}
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
inline void GorillaTag::GuidedRefs::GuidedRefHub::RegisterReceiverField(TIGuidedRefReceiverMono  receiverMono, ::StringW  fieldIdName, ::by_ref<::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo>  fieldInfo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"RegisterReceiverField", {::i2c::class_of<TIGuidedRefReceiverMono>()}, {::i2c::type_of<TIGuidedRefReceiverMono>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefReceiverMono>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, receiverMono, fieldIdName, fieldInfo);
}
template<typename TIGuidedRefReceiverMono,typename T>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void GorillaTag::GuidedRefs::GuidedRefHub::RegisterReceiverArray(TIGuidedRefReceiverMono  receiverMono, ::StringW  fieldIdName, ::by_ref<::ArrayW<T>>  receiverArray, ::by_ref<::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo>  arrayInfo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"RegisterReceiverArray", {::i2c::class_of<TIGuidedRefReceiverMono>(), ::i2c::class_of<T>()}, {::i2c::type_of<TIGuidedRefReceiverMono>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<::by_ref<::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefReceiverMono>(), ::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, receiverMono, fieldIdName, receiverArray, arrayInfo);
}
template<typename TIGuidedRefReceiverMono>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*>)
inline void GorillaTag::GuidedRefs::GuidedRefHub::UnregisterReceiver(TIGuidedRefReceiverMono  receiverMono)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"UnregisterReceiver", {::i2c::class_of<TIGuidedRefReceiverMono>()}, {::i2c::type_of<TIGuidedRefReceiverMono>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefReceiverMono>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, receiverMono);
}
inline ::GorillaTag::GuidedRefs::Internal::RelayInfo* GorillaTag::GuidedRefs::GuidedRefHub::GetOrAddRelayInfoByTargetId(::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*  targetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GetOrAddRelayInfoByTargetId", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTargetIdSO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::GuidedRefs::Internal::RelayInfo*>(this, ___internal_method, targetId);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>* GorillaTag::GuidedRefs::GuidedRefHub::GetHubsThatHaveRegisteredInstId(int32_t  instanceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GetHubsThatHaveRegisteredInstId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GorillaTag::GuidedRefs::GuidedRefHub>>*>(nullptr, ___internal_method, instanceId);
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::ResolveReferences(::GorillaTag::GuidedRefs::Internal::RelayInfo*  relayInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"ResolveReferences", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::Internal::RelayInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, relayInfo);
}
template<typename TIGuidedRefReceiverMono,typename T>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline bool GorillaTag::GuidedRefs::GuidedRefHub::TryResolveField(TIGuidedRefReceiverMono  receiverMono, ::by_ref<T>  refReceiverObj, ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  receiverFieldInfo, ::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  tryResolveInfo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"TryResolveField", {::i2c::class_of<TIGuidedRefReceiverMono>(), ::i2c::class_of<T>()}, {::i2c::type_of<TIGuidedRefReceiverMono>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo>(), ::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefReceiverMono>(), ::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, receiverMono, refReceiverObj, receiverFieldInfo, tryResolveInfo);
}
template<typename TIGuidedRefReceiverMono,typename T>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline bool GorillaTag::GuidedRefs::GuidedRefHub::TryResolveArrayItem(TIGuidedRefReceiverMono  receiverMono, ::System::Collections::Generic::IList_1<T>*  receivingArray, ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  receiverArrayInfo, ::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  tryResolveInfo)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"TryResolveArrayItem", {::i2c::class_of<TIGuidedRefReceiverMono>(), ::i2c::class_of<T>()}, {::i2c::type_of<TIGuidedRefReceiverMono>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo>(), ::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefReceiverMono>(), ::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, receiverMono, receivingArray, receiverArrayInfo, tryResolveInfo);
}
template<typename TIGuidedRefReceiverMono,typename T>
requires(::cordl_internals::type_constraint<TIGuidedRefReceiverMono, ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*> && ::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline bool GorillaTag::GuidedRefs::GuidedRefHub::TryResolveArrayItem(TIGuidedRefReceiverMono  receiverMono, ::System::Collections::Generic::IList_1<T>*  receivingArray, ::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo  receiverArrayInfo, ::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  tryResolveInfo, ::by_ref<bool>  arrayResolved)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                    {"TryResolveArrayItem", {::i2c::class_of<TIGuidedRefReceiverMono>(), ::i2c::class_of<T>()}, {::i2c::type_of<TIGuidedRefReceiverMono>(), ::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefReceiverArrayInfo>(), ::i2c::type_of<::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo>(), ::i2c::type_of<::by_ref<bool>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TIGuidedRefReceiverMono>(), ::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, receiverMono, receivingArray, receiverArrayInfo, tryResolveInfo, arrayResolved);
}
inline ::StringW GorillaTag::GuidedRefs::GuidedRefHub::GetFieldNameByID(int32_t  fieldId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GetFieldNameByID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fieldId);
}
inline void GorillaTag::GuidedRefs::GuidedRefHub::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GorillaTag::GuidedRefs::GuidedRefHub::GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline int32_t GorillaTag::GuidedRefs::GuidedRefHub::GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub*>(),
                        {"GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GorillaTag::GuidedRefs::GuidedRefHub* GorillaTag::GuidedRefs::GuidedRefHub::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GuidedRefs::GuidedRefHub*>());
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr  GorillaTag::GuidedRefs::GuidedRefHub::operator ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* GorillaTag::GuidedRefs::GuidedRefHub::i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr  GorillaTag::GuidedRefs::GuidedRefHub::operator ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* GorillaTag::GuidedRefs::GuidedRefHub::i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept {
return static_cast<::GorillaTag::GuidedRefs::IGuidedRefObject*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::GuidedRefs::GuidedRefHub::GuidedRefHub()   {
}
template<typename TIGuidedRefReceiverMono>
constexpr ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*& GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::__cordl_internal_get_iReceiverMono()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iReceiverMono;
}
template<typename TIGuidedRefReceiverMono>
constexpr ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono* const& GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::__cordl_internal_get_iReceiverMono() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iReceiverMono;
}
template<typename TIGuidedRefReceiverMono>
constexpr void GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::__cordl_internal_set_iReceiverMono(::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iReceiverMono = value;
}
template<typename TIGuidedRefReceiverMono>
constexpr ::System::Predicate_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*& GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::__cordl_internal_get___9__0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
template<typename TIGuidedRefReceiverMono>
constexpr ::System::Predicate_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>* const& GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::__cordl_internal_get___9__0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__0;
}
template<typename TIGuidedRefReceiverMono>
constexpr void GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::__cordl_internal_set___9__0(::System::Predicate_1<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__0 = value;
}
template<typename TIGuidedRefReceiverMono>
inline void GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TIGuidedRefReceiverMono>
inline bool GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::_UnregisterReceiver_b__0(::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo  fieldInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>*>(),
                        {"<UnregisterReceiver>b__0", {}, {::i2c::type_of<::GorillaTag::GuidedRefs::RegisteredReceiverFieldInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fieldInfo);
}
template<typename TIGuidedRefReceiverMono>
inline ::GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>* GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>*>());
}
// Ctor Parameters []
template<typename TIGuidedRefReceiverMono>
constexpr ::GorillaTag::GuidedRefs::GuidedRefHub___c__DisplayClass25_0_1<TIGuidedRefReceiverMono>::GuidedRefHub___c__DisplayClass25_0_1()   {
}
