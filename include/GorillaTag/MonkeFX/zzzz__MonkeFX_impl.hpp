#pragma once
// IWYU pragma private; include "GorillaTag/MonkeFX/MonkeFX.hpp"
#include "GlobalNamespace/zzzz__VRRig_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GorillaTag/MonkeFX/zzzz__MonkeFX_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GorillaTag/MonkeFX/zzzz__MonkeFXSettingsSO_def.hpp"
#include "GorillaTag/MonkeFX/zzzz__MonkeFX_ElementsRange_def.hpp"
#include "GorillaTag/zzzz__GTLogErrorLimiter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.InitBonesArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::MonkeFX::MonkeFX::InitBonesArray)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x5d42778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"InitBonesArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.UpdateBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::MonkeFX::MonkeFX::UpdateBones)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d42eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"UpdateBones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.UpdateBone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::MonkeFX::MonkeFX::UpdateBone)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d42eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"UpdateBone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::MonkeFX::MonkeFXSettingsSO*)>(&::GorillaTag::MonkeFX::MonkeFX::Register)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x5d42eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::MonkeFX::MonkeFXSettingsSO*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.GetScaleToFitInBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Mesh*)>(&::GorillaTag::MonkeFX::MonkeFX::GetScaleToFitInBounds)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d43330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"GetScaleToFitInBounds", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.Pack0To1Floats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GorillaTag::MonkeFX::MonkeFX::Pack0To1Floats)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d43390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"Pack0To1Floats", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::MonkeFX::MonkeFX* (*)()>(&::GorillaTag::MonkeFX::MonkeFX::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d433cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTag::MonkeFX::MonkeFX*)>(&::GorillaTag::MonkeFX::MonkeFX::set_instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d43424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"set_instance", {}, {::i2c::type_of<::GorillaTag::MonkeFX::MonkeFX*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.get_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTag::MonkeFX::MonkeFX::get_hasInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d43484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"get_hasInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.set_hasInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTag::MonkeFX::MonkeFX::set_hasInstance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d434dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.EnsureInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::MonkeFX::MonkeFX::EnsureInstance)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5d43204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"EnsureInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.OnAfterFirstSceneLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::MonkeFX::MonkeFX::OnAfterFirstSceneLoaded)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d4371c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"OnAfterFirstSceneLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.ITickSystemPost_PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::MonkeFX::MonkeFX::*)()>(&::GorillaTag::MonkeFX::MonkeFX::ITickSystemPost_PostTick)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5d437ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.ITickSystemPost_get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::MonkeFX::MonkeFX::*)()>(&::GorillaTag::MonkeFX::MonkeFX::ITickSystemPost_get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4386c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.ITickSystemPost_set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::MonkeFX::MonkeFX::*)(bool)>(&::GorillaTag::MonkeFX::MonkeFX::ITickSystemPost_set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d43874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.PauseTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::MonkeFX::MonkeFX::PauseTick)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d4387c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"PauseTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX.ResumeTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::MonkeFX::MonkeFX::ResumeTick)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5d439f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"ResumeTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::MonkeFX::MonkeFX._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::MonkeFX::MonkeFX::*)()>(&::GorillaTag::MonkeFX::MonkeFX::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5d4353c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__settingsSOs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsSOs;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>* const& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__settingsSOs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settingsSOs;
}
constexpr void GorillaTag::MonkeFX::MonkeFX::__cordl_internal_set__settingsSOs(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settingsSOs = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__srcMeshInst_to_meshId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcMeshInst_to_meshId;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__srcMeshInst_to_meshId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcMeshInst_to_meshId;
}
constexpr void GorillaTag::MonkeFX::MonkeFX::__cordl_internal_set__srcMeshInst_to_meshId(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____srcMeshInst_to_meshId = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__srcMeshId_to_sourceMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcMeshId_to_sourceMesh;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* const& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__srcMeshId_to_sourceMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcMeshId_to_sourceMesh;
}
constexpr void GorillaTag::MonkeFX::MonkeFX::__cordl_internal_set__srcMeshId_to_sourceMesh(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____srcMeshId_to_sourceMesh = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeFX_ElementsRange>*& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__srcMeshId_to_elemRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcMeshId_to_elemRange;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeFX_ElementsRange>* const& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__srcMeshId_to_elemRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____srcMeshId_to_elemRange;
}
constexpr void GorillaTag::MonkeFX::MonkeFX::__cordl_internal_set__srcMeshId_to_elemRange(::System::Collections::Generic::List_1<::GlobalNamespace::MonkeFX_ElementsRange>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____srcMeshId_to_elemRange = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*>*& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__meshId_to_settingsUsers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshId_to_settingsUsers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*>* const& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__meshId_to_settingsUsers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshId_to_settingsUsers;
}
constexpr void GorillaTag::MonkeFX::MonkeFX::__cordl_internal_set__meshId_to_settingsUsers(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::GorillaTag::MonkeFX::MonkeFXSettingsSO>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshId_to_settingsUsers = value;
}
constexpr bool& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::MonkeFX::MonkeFX::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr void GorillaTag::MonkeFX::MonkeFX::__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemPost_PostTickRunning_k__BackingField = value;
}
inline void GorillaTag::MonkeFX::MonkeFX::setStaticF__boneNames(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_boneNames", ::GorillaTag::MonkeFX::MonkeFX*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GorillaTag::MonkeFX::MonkeFX::getStaticF__boneNames()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_boneNames", ::GorillaTag::MonkeFX::MonkeFX*>();
}
inline void GorillaTag::MonkeFX::MonkeFX::setStaticF__rigs(::ArrayW<::UnityW<::GlobalNamespace::VRRig>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::GlobalNamespace::VRRig>>, "_rigs", ::GorillaTag::MonkeFX::MonkeFX*>(std::forward<::ArrayW<::UnityW<::GlobalNamespace::VRRig>>>(value));
}
inline ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> GorillaTag::MonkeFX::MonkeFX::getStaticF__rigs()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::GlobalNamespace::VRRig>>, "_rigs", ::GorillaTag::MonkeFX::MonkeFX*>();
}
inline void GorillaTag::MonkeFX::MonkeFX::setStaticF__bones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Transform>>, "_bones", ::GorillaTag::MonkeFX::MonkeFX*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Transform>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> GorillaTag::MonkeFX::MonkeFX::getStaticF__bones()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Transform>>, "_bones", ::GorillaTag::MonkeFX::MonkeFX*>();
}
inline void GorillaTag::MonkeFX::MonkeFX::setStaticF__rigsHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_rigsHash", ::GorillaTag::MonkeFX::MonkeFX*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTag::MonkeFX::MonkeFX::getStaticF__rigsHash()  {
return ::cordl_internals::getStaticField<int32_t, "_rigsHash", ::GorillaTag::MonkeFX::MonkeFX*>();
}
inline void GorillaTag::MonkeFX::MonkeFX::setStaticF__errorLog_nullVRRigFromVRRigCache(::GorillaTag::GTLogErrorLimiter*  value)  {
::cordl_internals::setStaticField<::GorillaTag::GTLogErrorLimiter*, "_errorLog_nullVRRigFromVRRigCache", ::GorillaTag::MonkeFX::MonkeFX*>(std::forward<::GorillaTag::GTLogErrorLimiter*>(value));
}
inline ::GorillaTag::GTLogErrorLimiter* GorillaTag::MonkeFX::MonkeFX::getStaticF__errorLog_nullVRRigFromVRRigCache()  {
return ::cordl_internals::getStaticField<::GorillaTag::GTLogErrorLimiter*, "_errorLog_nullVRRigFromVRRigCache", ::GorillaTag::MonkeFX::MonkeFX*>();
}
inline void GorillaTag::MonkeFX::MonkeFX::setStaticF__errorLog_nullMainSkin(::GorillaTag::GTLogErrorLimiter*  value)  {
::cordl_internals::setStaticField<::GorillaTag::GTLogErrorLimiter*, "_errorLog_nullMainSkin", ::GorillaTag::MonkeFX::MonkeFX*>(std::forward<::GorillaTag::GTLogErrorLimiter*>(value));
}
inline ::GorillaTag::GTLogErrorLimiter* GorillaTag::MonkeFX::MonkeFX::getStaticF__errorLog_nullMainSkin()  {
return ::cordl_internals::getStaticField<::GorillaTag::GTLogErrorLimiter*, "_errorLog_nullMainSkin", ::GorillaTag::MonkeFX::MonkeFX*>();
}
inline void GorillaTag::MonkeFX::MonkeFX::setStaticF__errorLog_nullBone(::GorillaTag::GTLogErrorLimiter*  value)  {
::cordl_internals::setStaticField<::GorillaTag::GTLogErrorLimiter*, "_errorLog_nullBone", ::GorillaTag::MonkeFX::MonkeFX*>(std::forward<::GorillaTag::GTLogErrorLimiter*>(value));
}
inline ::GorillaTag::GTLogErrorLimiter* GorillaTag::MonkeFX::MonkeFX::getStaticF__errorLog_nullBone()  {
return ::cordl_internals::getStaticField<::GorillaTag::GTLogErrorLimiter*, "_errorLog_nullBone", ::GorillaTag::MonkeFX::MonkeFX*>();
}
inline void GorillaTag::MonkeFX::MonkeFX::setStaticF__instance_k__BackingField(::GorillaTag::MonkeFX::MonkeFX*  value)  {
::cordl_internals::setStaticField<::GorillaTag::MonkeFX::MonkeFX*, "<instance>k__BackingField", ::GorillaTag::MonkeFX::MonkeFX*>(std::forward<::GorillaTag::MonkeFX::MonkeFX*>(value));
}
inline ::GorillaTag::MonkeFX::MonkeFX* GorillaTag::MonkeFX::MonkeFX::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::GorillaTag::MonkeFX::MonkeFX*, "<instance>k__BackingField", ::GorillaTag::MonkeFX::MonkeFX*>();
}
inline void GorillaTag::MonkeFX::MonkeFX::setStaticF__hasInstance_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<hasInstance>k__BackingField", ::GorillaTag::MonkeFX::MonkeFX*>(std::forward<bool>(value));
}
inline bool GorillaTag::MonkeFX::MonkeFX::getStaticF__hasInstance_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<hasInstance>k__BackingField", ::GorillaTag::MonkeFX::MonkeFX*>();
}
inline void GorillaTag::MonkeFX::MonkeFX::InitBonesArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"InitBonesArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::UpdateBones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"UpdateBones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::UpdateBone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"UpdateBone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::Register(::GorillaTag::MonkeFX::MonkeFXSettingsSO*  settingsSO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"Register", {}, {::i2c::type_of<::GorillaTag::MonkeFX::MonkeFXSettingsSO*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settingsSO);
}
inline float_t GorillaTag::MonkeFX::MonkeFX::GetScaleToFitInBounds(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"GetScaleToFitInBounds", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, mesh);
}
inline float_t GorillaTag::MonkeFX::MonkeFX::Pack0To1Floats(float_t  x, float_t  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"Pack0To1Floats", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, y);
}
inline ::GorillaTag::MonkeFX::MonkeFX* GorillaTag::MonkeFX::MonkeFX::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::MonkeFX::MonkeFX*>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::set_instance(::GorillaTag::MonkeFX::MonkeFX*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"set_instance", {}, {::i2c::type_of<::GorillaTag::MonkeFX::MonkeFX*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GorillaTag::MonkeFX::MonkeFX::get_hasInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"get_hasInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::set_hasInstance(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"set_hasInstance", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTag::MonkeFX::MonkeFX::EnsureInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"EnsureInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::OnAfterFirstSceneLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"OnAfterFirstSceneLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::ITickSystemPost_PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::MonkeFX::MonkeFX::ITickSystemPost_get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::ITickSystemPost_set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::MonkeFX::MonkeFX::PauseTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"PauseTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::ResumeTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {"ResumeTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTag::MonkeFX::MonkeFX::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::MonkeFX::MonkeFX*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::MonkeFX::MonkeFX* GorillaTag::MonkeFX::MonkeFX::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::MonkeFX::MonkeFX*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GorillaTag::MonkeFX::MonkeFX::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GorillaTag::MonkeFX::MonkeFX::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::MonkeFX::MonkeFX::MonkeFX()   {
}
