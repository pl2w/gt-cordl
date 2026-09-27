#pragma once
// IWYU pragma private; include "GlobalNamespace/CreatorCodes.hpp"
#include "GlobalNamespace/zzzz__Member_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CreatorCodes_def.hpp"
#include "GlobalNamespace/zzzz__CreatorCodes_CreatorCodeStatus_def.hpp"
#include "GlobalNamespace/zzzz__CreatorCodes__CheckValidationCoroutineJIT_d__27_def.hpp"
#include "GlobalNamespace/zzzz__CreatorCodes_def.hpp"
#include "GlobalNamespace/zzzz__NexusGroupId_def.hpp"
#include "GlobalNamespace/zzzz__NexusManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.getCurrentCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::CreatorCodes::getCurrentCreatorCode)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x574c7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"getCurrentCreatorCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.getCurrentCreatorCodeStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CreatorCodes_CreatorCodeStatus (*)(::StringW)>(&::GlobalNamespace::CreatorCodes::getCurrentCreatorCodeStatus)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x574c8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"getCurrentCreatorCodeStatus", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.add_OnCreatorCodeChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::CreatorCodes::add_OnCreatorCodeChangedEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x574c9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"add_OnCreatorCodeChangedEvent", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.remove_OnCreatorCodeChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::CreatorCodes::remove_OnCreatorCodeChangedEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x574cad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"remove_OnCreatorCodeChangedEvent", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.add_InitializedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::CreatorCodes::add_InitializedEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x574cbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"add_InitializedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.remove_InitializedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::CreatorCodes::remove_InitializedEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x574cca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"remove_InitializedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.add_OnCreatorCodeValidEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*)>(&::GlobalNamespace::CreatorCodes::add_OnCreatorCodeValidEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x574cd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"add_OnCreatorCodeValidEvent", {}, {::i2c::type_of<::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.remove_OnCreatorCodeValidEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*)>(&::GlobalNamespace::CreatorCodes::remove_OnCreatorCodeValidEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x574ce74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"remove_OnCreatorCodeValidEvent", {}, {::i2c::type_of<::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.add_OnCreatorCodeFailureEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::CreatorCodes::add_OnCreatorCodeFailureEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x574cf68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"add_OnCreatorCodeFailureEvent", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.remove_OnCreatorCodeFailureEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::CreatorCodes::remove_OnCreatorCodeFailureEvent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x574d05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"remove_OnCreatorCodeFailureEvent", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CreatorCodes::Initialize)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x574d150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.DeleteCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::CreatorCodes::DeleteCharacter)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x574d68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"DeleteCharacter", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.AppendKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::GlobalNamespace::CreatorCodes::AppendKey)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x574d8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"AppendKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.ResetCreatorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::CreatorCodes::ResetCreatorCode)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x574db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"ResetCreatorCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.CheckValidationCoroutineJIT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::NexusManager_MemberCode*>* (*)(::StringW, ::StringW, ::ArrayW<::GlobalNamespace::NexusGroupId*>)>(&::GlobalNamespace::CreatorCodes::CheckValidationCoroutineJIT)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x574dd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"CheckValidationCoroutineJIT", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::NexusGroupId*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.SaveData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CreatorCodes::SaveData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x574dccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"SaveData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes.LoadData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::CreatorCodes::LoadData)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x574d27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"LoadData", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CreatorCodes::setStaticF_data(::GlobalNamespace::CreatorCodes_CreatorCodesData*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::CreatorCodes_CreatorCodesData*, "data", ::GlobalNamespace::CreatorCodes*>(std::forward<::GlobalNamespace::CreatorCodes_CreatorCodesData*>(value));
}
inline ::GlobalNamespace::CreatorCodes_CreatorCodesData* GlobalNamespace::CreatorCodes::getStaticF_data()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::CreatorCodes_CreatorCodesData*, "data", ::GlobalNamespace::CreatorCodes*>();
}
inline void GlobalNamespace::CreatorCodes::setStaticF_ValidatedCreatorCode(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::NexusManager_MemberCode*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::NexusManager_MemberCode*>*, "ValidatedCreatorCode", ::GlobalNamespace::CreatorCodes*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::NexusManager_MemberCode*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::NexusManager_MemberCode*>* GlobalNamespace::CreatorCodes::getStaticF_ValidatedCreatorCode()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::NexusManager_MemberCode*>*, "ValidatedCreatorCode", ::GlobalNamespace::CreatorCodes*>();
}
inline void GlobalNamespace::CreatorCodes::setStaticF_creatorCodeStatus(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CreatorCodes_CreatorCodeStatus>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CreatorCodes_CreatorCodeStatus>*, "creatorCodeStatus", ::GlobalNamespace::CreatorCodes*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CreatorCodes_CreatorCodeStatus>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CreatorCodes_CreatorCodeStatus>* GlobalNamespace::CreatorCodes::getStaticF_creatorCodeStatus()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::CreatorCodes_CreatorCodeStatus>*, "creatorCodeStatus", ::GlobalNamespace::CreatorCodes*>();
}
inline void GlobalNamespace::CreatorCodes::setStaticF_OnCreatorCodeChangedEvent(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "OnCreatorCodeChangedEvent", ::GlobalNamespace::CreatorCodes*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::CreatorCodes::getStaticF_OnCreatorCodeChangedEvent()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "OnCreatorCodeChangedEvent", ::GlobalNamespace::CreatorCodes*>();
}
inline void GlobalNamespace::CreatorCodes::setStaticF_InitializedEvent(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "InitializedEvent", ::GlobalNamespace::CreatorCodes*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::CreatorCodes::getStaticF_InitializedEvent()  {
return ::cordl_internals::getStaticField<::System::Action*, "InitializedEvent", ::GlobalNamespace::CreatorCodes*>();
}
inline void GlobalNamespace::CreatorCodes::setStaticF_OnCreatorCodeValidEvent(::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*, "OnCreatorCodeValidEvent", ::GlobalNamespace::CreatorCodes*>(std::forward<::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*>(value));
}
inline ::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>* GlobalNamespace::CreatorCodes::getStaticF_OnCreatorCodeValidEvent()  {
return ::cordl_internals::getStaticField<::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*, "OnCreatorCodeValidEvent", ::GlobalNamespace::CreatorCodes*>();
}
inline void GlobalNamespace::CreatorCodes::setStaticF_OnCreatorCodeFailureEvent(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "OnCreatorCodeFailureEvent", ::GlobalNamespace::CreatorCodes*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::CreatorCodes::getStaticF_OnCreatorCodeFailureEvent()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "OnCreatorCodeFailureEvent", ::GlobalNamespace::CreatorCodes*>();
}
inline void GlobalNamespace::CreatorCodes::setStaticF_Intialized(bool  value)  {
::cordl_internals::setStaticField<bool, "Intialized", ::GlobalNamespace::CreatorCodes*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::CreatorCodes::getStaticF_Intialized()  {
return ::cordl_internals::getStaticField<bool, "Intialized", ::GlobalNamespace::CreatorCodes*>();
}
inline void GlobalNamespace::CreatorCodes::setStaticF_supportedMember(::GlobalNamespace::Member  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::Member, "supportedMember", ::GlobalNamespace::CreatorCodes*>(std::forward<::GlobalNamespace::Member>(value));
}
inline ::GlobalNamespace::Member GlobalNamespace::CreatorCodes::getStaticF_supportedMember()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::Member, "supportedMember", ::GlobalNamespace::CreatorCodes*>();
}
inline ::StringW GlobalNamespace::CreatorCodes::getCurrentCreatorCode(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"getCurrentCreatorCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, id);
}
inline ::GlobalNamespace::CreatorCodes_CreatorCodeStatus GlobalNamespace::CreatorCodes::getCurrentCreatorCodeStatus(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"getCurrentCreatorCodeStatus", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreatorCodes_CreatorCodeStatus>(nullptr, ___internal_method, id);
}
inline void GlobalNamespace::CreatorCodes::add_OnCreatorCodeChangedEvent(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"add_OnCreatorCodeChangedEvent", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CreatorCodes::remove_OnCreatorCodeChangedEvent(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"remove_OnCreatorCodeChangedEvent", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CreatorCodes::add_InitializedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"add_InitializedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CreatorCodes::remove_InitializedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"remove_InitializedEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CreatorCodes::add_OnCreatorCodeValidEvent(::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"add_OnCreatorCodeValidEvent", {}, {::i2c::type_of<::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CreatorCodes::remove_OnCreatorCodeValidEvent(::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"remove_OnCreatorCodeValidEvent", {}, {::i2c::type_of<::System::Action_3<::StringW,::StringW,::UnityW<::GlobalNamespace::NexusGroupId>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CreatorCodes::add_OnCreatorCodeFailureEvent(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"add_OnCreatorCodeFailureEvent", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CreatorCodes::remove_OnCreatorCodeFailureEvent(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"remove_OnCreatorCodeFailureEvent", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::CreatorCodes::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CreatorCodes::DeleteCharacter(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"DeleteCharacter", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
inline void GlobalNamespace::CreatorCodes::AppendKey(::StringW  id, ::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"AppendKey", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id, input);
}
inline void GlobalNamespace::CreatorCodes::ResetCreatorCode(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"ResetCreatorCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::NexusManager_MemberCode*>* GlobalNamespace::CreatorCodes::CheckValidationCoroutineJIT(::StringW  terminalId, ::StringW  code, ::ArrayW<::GlobalNamespace::NexusGroupId*>  group)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"CheckValidationCoroutineJIT", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::NexusGroupId*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::NexusManager_MemberCode*>*>(nullptr, ___internal_method, terminalId, code, group);
}
inline void GlobalNamespace::CreatorCodes::SaveData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"SaveData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CreatorCodes::LoadData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes*>(),
                        {"LoadData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreatorCodes::CreatorCodes()   {
}
//  Writing Method size for method: ::GlobalNamespace::CreatorCodes_CreatorCodesData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreatorCodes_CreatorCodesData::*)()>(&::GlobalNamespace::CreatorCodes_CreatorCodesData::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x574df40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes_CreatorCodesData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& GlobalNamespace::CreatorCodes_CreatorCodesData::__cordl_internal_get_currentCreatorCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCreatorCode;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& GlobalNamespace::CreatorCodes_CreatorCodesData::__cordl_internal_get_currentCreatorCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCreatorCode;
}
constexpr void GlobalNamespace::CreatorCodes_CreatorCodesData::__cordl_internal_set_currentCreatorCode(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCreatorCode = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::DateTime>*& GlobalNamespace::CreatorCodes_CreatorCodesData::__cordl_internal_get_codeFirstUsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeFirstUsedTime;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::DateTime>* const& GlobalNamespace::CreatorCodes_CreatorCodesData::__cordl_internal_get_codeFirstUsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___codeFirstUsedTime;
}
constexpr void GlobalNamespace::CreatorCodes_CreatorCodesData::__cordl_internal_set_codeFirstUsedTime(::System::Collections::Generic::Dictionary_2<::StringW,::System::DateTime>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___codeFirstUsedTime = value;
}
inline void GlobalNamespace::CreatorCodes_CreatorCodesData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreatorCodes_CreatorCodesData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreatorCodes_CreatorCodesData* GlobalNamespace::CreatorCodes_CreatorCodesData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreatorCodes_CreatorCodesData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreatorCodes_CreatorCodesData::CreatorCodes_CreatorCodesData()   {
}
