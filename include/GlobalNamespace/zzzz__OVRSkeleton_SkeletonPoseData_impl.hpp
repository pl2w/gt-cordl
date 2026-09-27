#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeleton_SkeletonPoseData.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSkeleton_SkeletonPoseData_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_RootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Posef (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa677498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_RootPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_RootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(::GlobalNamespace::OVRPlugin_Posef)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa6774ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_RootPose", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Posef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_RootScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6774c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_RootScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_RootScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(float_t)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6774d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_RootScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_BoneRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneRotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6774d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_BoneRotations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_BoneRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneRotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6774e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_BoneRotations", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_IsDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6774e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_IsDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_IsDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(bool)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6774f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_IsDataValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_IsDataHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6774f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_IsDataHighConfidence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_IsDataHighConfidence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(bool)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataHighConfidence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa677500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_IsDataHighConfidence", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_BoneTranslations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneTranslations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa677508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_BoneTranslations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_BoneTranslations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneTranslations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa677510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_BoneTranslations", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.get_SkeletonChangedCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)()>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa677518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_SkeletonChangedCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSkeleton_SkeletonPoseData.set_SkeletonChangedCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSkeleton_SkeletonPoseData::*)(int32_t)>(&::GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_SkeletonChangedCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa677520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_SkeletonChangedCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_Posef GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_RootPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Posef>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootPose(::GlobalNamespace::OVRPlugin_Posef  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_RootPose", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Posef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_RootScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_RootScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_RootScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_RootScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf> GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneRotations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_BoneRotations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneRotations(::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_BoneRotations", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_IsDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_IsDataValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_IsDataHighConfidence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_IsDataHighConfidence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_IsDataHighConfidence(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_IsDataHighConfidence", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_BoneTranslations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_BoneTranslations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_BoneTranslations(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_BoneTranslations", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t GlobalNamespace::OVRSkeleton_SkeletonPoseData::get_SkeletonChangedCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"get_SkeletonChangedCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSkeleton_SkeletonPoseData::set_SkeletonChangedCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSkeleton_SkeletonPoseData>(),
                        {"set_SkeletonChangedCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_RootPose_k__BackingField", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_RootScale_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BoneRotations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_IsDataValid_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_IsDataHighConfidence_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_BoneTranslations_k__BackingField", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SkeletonChangedCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonPoseData::OVRSkeleton_SkeletonPoseData(::GlobalNamespace::OVRPlugin_Posef  _RootPose_k__BackingField, float_t  _RootScale_k__BackingField, ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  _BoneRotations_k__BackingField, bool  _IsDataValid_k__BackingField, bool  _IsDataHighConfidence_k__BackingField, ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  _BoneTranslations_k__BackingField, int32_t  _SkeletonChangedCount_k__BackingField) noexcept  {
this->_RootPose_k__BackingField = _RootPose_k__BackingField;
this->_RootScale_k__BackingField = _RootScale_k__BackingField;
this->_BoneRotations_k__BackingField = _BoneRotations_k__BackingField;
this->_IsDataValid_k__BackingField = _IsDataValid_k__BackingField;
this->_IsDataHighConfidence_k__BackingField = _IsDataHighConfidence_k__BackingField;
this->_BoneTranslations_k__BackingField = _BoneTranslations_k__BackingField;
this->_SkeletonChangedCount_k__BackingField = _SkeletonChangedCount_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSkeleton_SkeletonPoseData::OVRSkeleton_SkeletonPoseData()   {
}
