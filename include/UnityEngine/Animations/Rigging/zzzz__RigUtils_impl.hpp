#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/RigUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IAnimationJobBinder_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IAnimationJobData_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigConstraint_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__IRigLayer_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__PropertyDescriptor_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__Property_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigUtils_RigSyncSceneToStreamData_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__RigUtils_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__Rig_def.hpp"
#include "UnityEngine/Animations/Rigging/zzzz__SyncableProperties_def.hpp"
#include "UnityEngine/Animations/zzzz__IAnimationJob_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.GetConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> (*)(::UnityEngine::Animations::Rigging::Rig*)>(&::UnityEngine::Animations::Rigging::RigUtils::GetConstraints)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xae7abb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"GetConstraints", {}, {::i2c::type_of<::UnityEngine::Animations::Rigging::Rig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.GetSyncableRigTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (*)(::UnityEngine::Animator*)>(&::UnityEngine::Animations::Rigging::RigUtils::GetSyncableRigTransforms)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xae7b2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"GetSyncableRigTransforms", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.ExtractTransformType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Animator*, ::System::Reflection::FieldInfo*, ::System::Object*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*)>(&::UnityEngine::Animations::Rigging::RigUtils::ExtractTransformType)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0xae7b3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractTransformType", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.ExtractPropertyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*, ::StringW)>(&::UnityEngine::Animations::Rigging::RigUtils::ExtractPropertyType)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xae7ba18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractPropertyType", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.ExtractWeightedTransforms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Animator*, ::System::Reflection::FieldInfo*, ::System::Object*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*)>(&::UnityEngine::Animations::Rigging::RigUtils::ExtractWeightedTransforms)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0xae7bbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractWeightedTransforms", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.ExtractNestedPropertyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Animator*, ::System::Reflection::FieldInfo*, ::System::Object*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*, ::StringW)>(&::UnityEngine::Animations::Rigging::RigUtils::ExtractNestedPropertyType)> {
  constexpr static std::size_t size = 0x5c4;
  constexpr static std::size_t addrs = 0xae7c4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractNestedPropertyType", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.ExtractAllSyncableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Animator*, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::SyncableProperties>*>)>(&::UnityEngine::Animations::Rigging::RigUtils::ExtractAllSyncableData)> {
  constexpr static std::size_t size = 0xe58;
  constexpr static std::size_t addrs = 0xae7ca74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractAllSyncableData", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::SyncableProperties>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.CreateAnimationJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Animations::IAnimationJob*> (*)(::UnityEngine::Animator*, ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>)>(&::UnityEngine::Animations::Rigging::RigUtils::CreateAnimationJobs)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xae7add4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"CreateAnimationJobs", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.DestroyAnimationJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>, ::ArrayW<::UnityEngine::Animations::IAnimationJob*>)>(&::UnityEngine::Animations::Rigging::RigUtils::DestroyAnimationJobs)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xae7b10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"DestroyAnimationJobs", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Animations::IAnimationJob*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.CreateSyncSceneToStreamData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::Rigging::IAnimationJobData* (*)(::UnityEngine::Animator*, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*)>(&::UnityEngine::Animations::Rigging::RigUtils::CreateSyncSceneToStreamData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xae7d8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"CreateSyncSceneToStreamData", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils.get_syncSceneToStreamBinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Animations::Rigging::IAnimationJobBinder* (*)()>(&::UnityEngine::Animations::Rigging::RigUtils::get_syncSceneToStreamBinder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae7dc5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"get_syncSceneToStreamBinder", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::Rigging::RigUtils::setStaticF_s_SupportedPropertyTypeToDescriptor(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Animations::Rigging::PropertyDescriptor>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Animations::Rigging::PropertyDescriptor>*, "s_SupportedPropertyTypeToDescriptor", ::UnityEngine::Animations::Rigging::RigUtils*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Animations::Rigging::PropertyDescriptor>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Animations::Rigging::PropertyDescriptor>* UnityEngine::Animations::Rigging::RigUtils::getStaticF_s_SupportedPropertyTypeToDescriptor()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Animations::Rigging::PropertyDescriptor>*, "s_SupportedPropertyTypeToDescriptor", ::UnityEngine::Animations::Rigging::RigUtils*>();
}
inline void UnityEngine::Animations::Rigging::RigUtils::setStaticF__syncSceneToStreamBinder_k__BackingField(::UnityEngine::Animations::Rigging::IAnimationJobBinder*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::Rigging::IAnimationJobBinder*, "<syncSceneToStreamBinder>k__BackingField", ::UnityEngine::Animations::Rigging::RigUtils*>(std::forward<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(value));
}
inline ::UnityEngine::Animations::Rigging::IAnimationJobBinder* UnityEngine::Animations::Rigging::RigUtils::getStaticF__syncSceneToStreamBinder_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::Rigging::IAnimationJobBinder*, "<syncSceneToStreamBinder>k__BackingField", ::UnityEngine::Animations::Rigging::RigUtils*>();
}
inline ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*> UnityEngine::Animations::Rigging::RigUtils::GetConstraints(::UnityEngine::Animations::Rigging::Rig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"GetConstraints", {}, {::i2c::type_of<::UnityEngine::Animations::Rigging::Rig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>>(nullptr, ___internal_method, rig);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> UnityEngine::Animations::Rigging::RigUtils::GetSyncableRigTransforms(::UnityEngine::Animator*  animator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"GetSyncableRigTransforms", {}, {::i2c::type_of<::UnityEngine::Animator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(nullptr, ___internal_method, animator);
}
inline bool UnityEngine::Animations::Rigging::RigUtils::ExtractTransformType(::UnityEngine::Animator*  animator, ::System::Reflection::FieldInfo*  field, ::System::Object*  data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  syncableTransforms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractTransformType", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, animator, field, data, syncableTransforms);
}
inline bool UnityEngine::Animations::Rigging::RigUtils::ExtractPropertyType(::System::Reflection::FieldInfo*  field, ::System::Object*  data, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*  syncableProperties, ::StringW  namePrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractPropertyType", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, field, data, syncableProperties, namePrefix);
}
inline bool UnityEngine::Animations::Rigging::RigUtils::ExtractWeightedTransforms(::UnityEngine::Animator*  animator, ::System::Reflection::FieldInfo*  field, ::System::Object*  data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  syncableTransforms, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*  syncableProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractWeightedTransforms", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, animator, field, data, syncableTransforms, syncableProperties);
}
inline bool UnityEngine::Animations::Rigging::RigUtils::ExtractNestedPropertyType(::UnityEngine::Animator*  animator, ::System::Reflection::FieldInfo*  field, ::System::Object*  data, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  syncableTransforms, ::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*  syncableProperties, ::StringW  namePrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractNestedPropertyType", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::Property>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, animator, field, data, syncableTransforms, syncableProperties, namePrefix);
}
inline void UnityEngine::Animations::Rigging::RigUtils::ExtractAllSyncableData(::UnityEngine::Animator*  animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers, ::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>  syncableTransforms, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::SyncableProperties>*>  syncableProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"ExtractAllSyncableData", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Animations::Rigging::SyncableProperties>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animator, layers, syncableTransforms, syncableProperties);
}
inline ::ArrayW<::UnityEngine::Animations::IAnimationJob*> UnityEngine::Animations::Rigging::RigUtils::CreateAnimationJobs(::UnityEngine::Animator*  animator, ::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  constraints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"CreateAnimationJobs", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Animations::IAnimationJob*>>(nullptr, ___internal_method, animator, constraints);
}
inline void UnityEngine::Animations::Rigging::RigUtils::DestroyAnimationJobs(::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>  constraints, ::ArrayW<::UnityEngine::Animations::IAnimationJob*>  jobs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"DestroyAnimationJobs", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Animations::Rigging::IRigConstraint*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Animations::IAnimationJob*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, constraints, jobs);
}
inline ::UnityEngine::Animations::Rigging::IAnimationJobData* UnityEngine::Animations::Rigging::RigUtils::CreateSyncSceneToStreamData(::UnityEngine::Animator*  animator, ::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*  layers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"CreateSyncSceneToStreamData", {}, {::i2c::type_of<::UnityEngine::Animator*>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::UnityEngine::Animations::Rigging::IRigLayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::Rigging::IAnimationJobData*>(nullptr, ___internal_method, animator, layers);
}
inline ::UnityEngine::Animations::Rigging::IAnimationJobBinder* UnityEngine::Animations::Rigging::RigUtils::get_syncSceneToStreamBinder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils*>(),
                        {"get_syncSceneToStreamBinder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Animations::Rigging::IAnimationJobBinder*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigUtils::RigUtils()   {
}
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Animations::Rigging::RigUtils___c::*)()>(&::UnityEngine::Animations::Rigging::RigUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7e218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Animations::Rigging::RigUtils___c._ExtractNestedPropertyType_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Animations::Rigging::RigUtils___c::*)(::System::Reflection::FieldInfo*)>(&::UnityEngine::Animations::Rigging::RigUtils___c::_ExtractNestedPropertyType_b__6_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xae7e220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils___c*>(),
                        {"<ExtractNestedPropertyType>b__6_0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Animations::Rigging::RigUtils___c::setStaticF___9(::UnityEngine::Animations::Rigging::RigUtils___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Animations::Rigging::RigUtils___c*, "<>9", ::UnityEngine::Animations::Rigging::RigUtils___c*>(std::forward<::UnityEngine::Animations::Rigging::RigUtils___c*>(value));
}
inline ::UnityEngine::Animations::Rigging::RigUtils___c* UnityEngine::Animations::Rigging::RigUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Animations::Rigging::RigUtils___c*, "<>9", ::UnityEngine::Animations::Rigging::RigUtils___c*>();
}
inline void UnityEngine::Animations::Rigging::RigUtils___c::setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__6_0", ::UnityEngine::Animations::Rigging::RigUtils___c*>(std::forward<::System::Func_2<::System::Reflection::FieldInfo*,bool>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*,bool>* UnityEngine::Animations::Rigging::RigUtils___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*,bool>*, "<>9__6_0", ::UnityEngine::Animations::Rigging::RigUtils___c*>();
}
inline void UnityEngine::Animations::Rigging::RigUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Animations::Rigging::RigUtils___c::_ExtractNestedPropertyType_b__6_0(::System::Reflection::FieldInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Animations::Rigging::RigUtils___c*>(),
                        {"<ExtractNestedPropertyType>b__6_0", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, info);
}
inline ::UnityEngine::Animations::Rigging::RigUtils___c* UnityEngine::Animations::Rigging::RigUtils___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Animations::Rigging::RigUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Animations::Rigging::RigUtils___c::RigUtils___c()   {
}
