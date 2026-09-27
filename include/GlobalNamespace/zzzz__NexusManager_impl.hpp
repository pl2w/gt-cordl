#pragma once
// IWYU pragma private; include "GlobalNamespace/NexusManager.hpp"
#include "GlobalNamespace/zzzz__Member_impl.hpp"
#include "GlobalNamespace/zzzz__NexusManager_Environment_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NexusManager_def.hpp"
#include "GlobalNamespace/zzzz__Member_def.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
#include "GlobalNamespace/zzzz__NexusManager_Environment_def.hpp"
#include "GlobalNamespace/zzzz__NexusManager_GetMembersRequest_def.hpp"
#include "GlobalNamespace/zzzz__NexusManager__VerifyCreatorCodeJIT_d__15_def.hpp"
#include "GlobalNamespace/zzzz__NexusManager__VerifyCreatorCode_d__14_def.hpp"
#include "GlobalNamespace/zzzz__NexusManager_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NexusManager.get_CurrentEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NexusManager_Environment (::GlobalNamespace::NexusManager::*)()>(&::GlobalNamespace::NexusManager::get_CurrentEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5776fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"get_CurrentEnvironment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusManager::*)()>(&::GlobalNamespace::NexusManager::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5776ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusManager::*)()>(&::GlobalNamespace::NexusManager::Start)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x57770c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager.VerifyCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::Member>* (::GlobalNamespace::NexusManager::*)(::StringW, ::StringW, ::GlobalNamespace::NexusGroupId*)>(&::GlobalNamespace::NexusManager::VerifyCreatorCode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5777168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"VerifyCreatorCode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NexusGroupId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager.VerifyCreatorCodeJIT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NexusManager::*)(::StringW, ::StringW)>(&::GlobalNamespace::NexusManager::VerifyCreatorCodeJIT)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x57772a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"VerifyCreatorCodeJIT", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusManager::*)()>(&::GlobalNamespace::NexusManager::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57773c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NexusManager_Environment& GlobalNamespace::NexusManager::__cordl_internal_get_environment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environment;
}
constexpr ::GlobalNamespace::NexusManager_Environment const& GlobalNamespace::NexusManager::__cordl_internal_get_environment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___environment;
}
constexpr void GlobalNamespace::NexusManager::__cordl_internal_set_environment(::GlobalNamespace::NexusManager_Environment  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___environment = value;
}
constexpr ::ArrayW<::GlobalNamespace::Member>& GlobalNamespace::NexusManager::__cordl_internal_get_validatedMembers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatedMembers;
}
constexpr ::ArrayW<::GlobalNamespace::Member> const& GlobalNamespace::NexusManager::__cordl_internal_get_validatedMembers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validatedMembers;
}
constexpr void GlobalNamespace::NexusManager::__cordl_internal_set_validatedMembers(::ArrayW<::GlobalNamespace::Member>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validatedMembers = value;
}
inline void GlobalNamespace::NexusManager::setStaticF_instance(::UnityW<::GlobalNamespace::NexusManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::NexusManager>, "instance", ::GlobalNamespace::NexusManager*>(std::forward<::UnityW<::GlobalNamespace::NexusManager>>(value));
}
inline ::UnityW<::GlobalNamespace::NexusManager> GlobalNamespace::NexusManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::NexusManager>, "instance", ::GlobalNamespace::NexusManager*>();
}
inline ::GlobalNamespace::NexusManager_Environment GlobalNamespace::NexusManager::get_CurrentEnvironment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"get_CurrentEnvironment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NexusManager_Environment>(this, ___internal_method);
}
inline void GlobalNamespace::NexusManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NexusManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::Member>* GlobalNamespace::NexusManager::VerifyCreatorCode(::StringW  terminalId, ::StringW  code, ::GlobalNamespace::NexusGroupId*  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"VerifyCreatorCode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::NexusGroupId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::Member>*>(this, ___internal_method, terminalId, code, id);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NexusManager::VerifyCreatorCodeJIT(::StringW  memberCode, ::StringW  groupCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {"VerifyCreatorCodeJIT", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, memberCode, groupCode);
}
inline void GlobalNamespace::NexusManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NexusManager* GlobalNamespace::NexusManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NexusManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NexusManager::NexusManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::NexusManager_MemberCode.get_memberCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::NexusManager_MemberCode::*)()>(&::GlobalNamespace::NexusManager_MemberCode::get_memberCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57773d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {"get_memberCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager_MemberCode.set_memberCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusManager_MemberCode::*)(::StringW)>(&::GlobalNamespace::NexusManager_MemberCode::set_memberCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57773d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {"set_memberCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager_MemberCode.get_groupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NexusGroupId> (::GlobalNamespace::NexusManager_MemberCode::*)()>(&::GlobalNamespace::NexusManager_MemberCode::get_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57773e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {"get_groupId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager_MemberCode.set_groupId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusManager_MemberCode::*)(::GlobalNamespace::NexusGroupId*)>(&::GlobalNamespace::NexusManager_MemberCode::set_groupId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57773e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {"set_groupId", {}, {::i2c::type_of<::GlobalNamespace::NexusGroupId*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NexusManager_MemberCode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NexusManager_MemberCode::*)()>(&::GlobalNamespace::NexusManager_MemberCode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57773f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::NexusManager_MemberCode::__cordl_internal_get__memberCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memberCode_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::NexusManager_MemberCode::__cordl_internal_get__memberCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____memberCode_k__BackingField;
}
constexpr void GlobalNamespace::NexusManager_MemberCode::__cordl_internal_set__memberCode_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____memberCode_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::NexusGroupId>& GlobalNamespace::NexusManager_MemberCode::__cordl_internal_get__groupId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupId_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::NexusGroupId> const& GlobalNamespace::NexusManager_MemberCode::__cordl_internal_get__groupId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groupId_k__BackingField;
}
constexpr void GlobalNamespace::NexusManager_MemberCode::__cordl_internal_set__groupId_k__BackingField(::UnityW<::GlobalNamespace::NexusGroupId>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groupId_k__BackingField = value;
}
inline ::StringW GlobalNamespace::NexusManager_MemberCode::get_memberCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {"get_memberCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::NexusManager_MemberCode::set_memberCode(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {"set_memberCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::NexusGroupId> GlobalNamespace::NexusManager_MemberCode::get_groupId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {"get_groupId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NexusGroupId>>(this, ___internal_method);
}
inline void GlobalNamespace::NexusManager_MemberCode::set_groupId(::GlobalNamespace::NexusGroupId*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {"set_groupId", {}, {::i2c::type_of<::GlobalNamespace::NexusGroupId*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::NexusManager_MemberCode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NexusManager_MemberCode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NexusManager_MemberCode* GlobalNamespace::NexusManager_MemberCode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NexusManager_MemberCode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NexusManager_MemberCode::NexusManager_MemberCode()   {
}
