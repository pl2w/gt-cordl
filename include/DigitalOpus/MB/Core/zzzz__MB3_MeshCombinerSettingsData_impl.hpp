#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_MeshCombinerSettingsData.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_OutputOptions_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshCombineAPIType_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshPivotLocation_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_RenderType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB3_MeshCombinerSettingsData_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__IAssignToMeshCustomizer_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_OutputOptions_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_IMeshBakerSettings_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshCombineAPIType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_MeshPivotLocation_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_RenderType_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_renderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_RenderType (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_renderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d863e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_renderType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(::DigitalOpus::MB::Core::MB_RenderType)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_renderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d863f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_outputOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_OutputOptions (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_outputOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d863f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_outputOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(::DigitalOpus::MB::Core::MB2_OutputOptions)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_outputOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_lightmapOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB2_LightmapOptions (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_lightmapOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_lightmapOption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(::DigitalOpus::MB::Core::MB2_LightmapOptions)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_lightmapOption)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doNorm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doNorm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doNorm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doNorm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doTan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doTan)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doTan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doTan)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doCol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doCol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doCol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doCol)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doUV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doUV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doUV3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doUV3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV3)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doUV4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doUV4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV4)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doUV5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doUV5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV5)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doUV6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doUV6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV6)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doUV7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doUV7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV7)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d864a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doUV8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d864a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doUV8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d864b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_doBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doBlendShapes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d864b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_doBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doBlendShapes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d864c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_pivotLocationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_MeshPivotLocation (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_pivotLocationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d864c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_pivotLocationType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(::DigitalOpus::MB::Core::MB_MeshPivotLocation)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_pivotLocationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d864d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_pivotLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_pivotLocation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d864d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_pivotLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(::UnityEngine::Vector3)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_pivotLocation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d864e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 81}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_clearBuffersAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_clearBuffersAfterBake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d864f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_clearBuffersAfterBake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_clearBuffersAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_clearBuffersAfterBake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d864f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_clearBuffersAfterBake", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_optimizeAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_optimizeAfterBake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_optimizeAfterBake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_optimizeAfterBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_optimizeAfterBake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_optimizeAfterBake", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_uv2UnwrappingParamsHardAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_uv2UnwrappingParamsHardAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_uv2UnwrappingParamsHardAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_uv2UnwrappingParamsHardAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(float_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_uv2UnwrappingParamsHardAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_uv2UnwrappingParamsHardAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_uv2UnwrappingParamsPackMargin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_uv2UnwrappingParamsPackMargin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_uv2UnwrappingParamsPackMargin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_uv2UnwrappingParamsPackMargin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(float_t)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_uv2UnwrappingParamsPackMargin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_uv2UnwrappingParamsPackMargin", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_smrNoExtraBonesWhenCombiningMeshRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_smrNoExtraBonesWhenCombiningMeshRenderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_smrNoExtraBonesWhenCombiningMeshRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_smrNoExtraBonesWhenCombiningMeshRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_smrNoExtraBonesWhenCombiningMeshRenderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_smrNoExtraBonesWhenCombiningMeshRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_smrMergeBlendShapesWithSameNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_smrMergeBlendShapesWithSameNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_smrMergeBlendShapesWithSameNames", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_smrMergeBlendShapesWithSameNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(bool)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_smrMergeBlendShapesWithSameNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_smrMergeBlendShapesWithSameNames", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_assignToMeshCustomizer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::IAssignToMeshCustomizer* (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_assignToMeshCustomizer)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9d86550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_assignToMeshCustomizer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_assignToMeshCustomizer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(::DigitalOpus::MB::Core::IAssignToMeshCustomizer*)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_assignToMeshCustomizer)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9d865dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_assignToMeshCustomizer", {}, {::i2c::type_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.get_meshAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::DigitalOpus::MB::Core::MB_MeshCombineAPIType (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_meshAPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d8668c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_meshAPI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData.set_meshAPI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)(::DigitalOpus::MB::Core::MB_MeshCombineAPIType)>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_meshAPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d86694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_meshAPI", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshCombineAPIType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::*)()>(&::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d8669c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::DigitalOpus::MB::Core::MB_RenderType& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__renderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderType;
}
constexpr ::DigitalOpus::MB::Core::MB_RenderType const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__renderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderType;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__renderType(::DigitalOpus::MB::Core::MB_RenderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderType = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_OutputOptions& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__outputOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputOption;
}
constexpr ::DigitalOpus::MB::Core::MB2_OutputOptions const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__outputOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputOption;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputOption = value;
}
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__lightmapOption()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lightmapOption;
}
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__lightmapOption() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lightmapOption;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lightmapOption = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doNorm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doNorm;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doNorm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doNorm;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doNorm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doNorm = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doTan()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doTan;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doTan() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doTan;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doTan(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doTan = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doCol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doCol;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doCol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doCol;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doCol(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doCol = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doUV(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV3;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV3;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doUV3(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV3 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV4;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV4;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doUV4(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV4 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV5()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV5;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV5() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV5;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doUV5(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV5 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV6()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV6;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV6() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV6;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doUV6(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV6 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV7()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV7;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV7() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV7;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doUV7(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV7 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV8()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV8;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doUV8() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doUV8;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doUV8(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doUV8 = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doBlendShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doBlendShapes;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__doBlendShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doBlendShapes;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__doBlendShapes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doBlendShapes = value;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__pivotLocationType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotLocationType;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshPivotLocation const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__pivotLocationType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotLocationType;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pivotLocationType = value;
}
constexpr ::UnityEngine::Vector3& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__pivotLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotLocation;
}
constexpr ::UnityEngine::Vector3 const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__pivotLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pivotLocation;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__pivotLocation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pivotLocation = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__clearBuffersAfterBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearBuffersAfterBake;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__clearBuffersAfterBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearBuffersAfterBake;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__clearBuffersAfterBake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clearBuffersAfterBake = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__optimizeAfterBake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizeAfterBake;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__optimizeAfterBake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimizeAfterBake;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__optimizeAfterBake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optimizeAfterBake = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__uv2UnwrappingParamsHardAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv2UnwrappingParamsHardAngle;
}
constexpr float_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__uv2UnwrappingParamsHardAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv2UnwrappingParamsHardAngle;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__uv2UnwrappingParamsHardAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uv2UnwrappingParamsHardAngle = value;
}
constexpr float_t& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__uv2UnwrappingParamsPackMargin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv2UnwrappingParamsPackMargin;
}
constexpr float_t const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__uv2UnwrappingParamsPackMargin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uv2UnwrappingParamsPackMargin;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__uv2UnwrappingParamsPackMargin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uv2UnwrappingParamsPackMargin = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smrNoExtraBonesWhenCombiningMeshRenderers;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__smrNoExtraBonesWhenCombiningMeshRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smrNoExtraBonesWhenCombiningMeshRenderers;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__smrNoExtraBonesWhenCombiningMeshRenderers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smrNoExtraBonesWhenCombiningMeshRenderers = value;
}
constexpr bool& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__smrMergeBlendShapesWithSameNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smrMergeBlendShapesWithSameNames;
}
constexpr bool const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__smrMergeBlendShapesWithSameNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smrMergeBlendShapesWithSameNames;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__smrMergeBlendShapesWithSameNames(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smrMergeBlendShapesWithSameNames = value;
}
constexpr ::UnityW<::UnityEngine::Object>& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__assignToMeshCustomizer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assignToMeshCustomizer;
}
constexpr ::UnityW<::UnityEngine::Object> const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__assignToMeshCustomizer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assignToMeshCustomizer;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__assignToMeshCustomizer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____assignToMeshCustomizer = value;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshCombineAPIType& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__meshAPItoUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshAPItoUse;
}
constexpr ::DigitalOpus::MB::Core::MB_MeshCombineAPIType const& DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_get__meshAPItoUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshAPItoUse;
}
constexpr void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::__cordl_internal_set__meshAPItoUse(::DigitalOpus::MB::Core::MB_MeshCombineAPIType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshAPItoUse = value;
}
inline ::DigitalOpus::MB::Core::MB_RenderType DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_renderType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_RenderType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_renderType(::DigitalOpus::MB::Core::MB_RenderType  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB2_OutputOptions DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_outputOption()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_OutputOptions>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_outputOption(::DigitalOpus::MB::Core::MB2_OutputOptions  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB2_LightmapOptions DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_lightmapOption()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB2_LightmapOptions>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_lightmapOption(::DigitalOpus::MB::Core::MB2_LightmapOptions  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doNorm()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doNorm(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doTan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doTan(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doCol()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doCol(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV3()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV3(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV4()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV4(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV5()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV5(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV6()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV6(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV7()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV7(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doUV8()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doUV8(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_doBlendShapes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_doBlendShapes(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB_MeshPivotLocation DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_pivotLocationType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_MeshPivotLocation>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_pivotLocationType(::DigitalOpus::MB::Core::MB_MeshPivotLocation  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_pivotLocation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_pivotLocation(::UnityEngine::Vector3  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(), 81}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_clearBuffersAfterBake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_clearBuffersAfterBake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_clearBuffersAfterBake(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_clearBuffersAfterBake", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_optimizeAfterBake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_optimizeAfterBake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_optimizeAfterBake(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_optimizeAfterBake", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_uv2UnwrappingParamsHardAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_uv2UnwrappingParamsHardAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_uv2UnwrappingParamsHardAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_uv2UnwrappingParamsHardAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_uv2UnwrappingParamsPackMargin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_uv2UnwrappingParamsPackMargin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_uv2UnwrappingParamsPackMargin(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_uv2UnwrappingParamsPackMargin", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_smrNoExtraBonesWhenCombiningMeshRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_smrNoExtraBonesWhenCombiningMeshRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_smrNoExtraBonesWhenCombiningMeshRenderers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_smrNoExtraBonesWhenCombiningMeshRenderers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_smrMergeBlendShapesWithSameNames()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_smrMergeBlendShapesWithSameNames", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_smrMergeBlendShapesWithSameNames(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_smrMergeBlendShapesWithSameNames", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::IAssignToMeshCustomizer* DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_assignToMeshCustomizer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_assignToMeshCustomizer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_assignToMeshCustomizer(::DigitalOpus::MB::Core::IAssignToMeshCustomizer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_assignToMeshCustomizer", {}, {::i2c::type_of<::DigitalOpus::MB::Core::IAssignToMeshCustomizer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::DigitalOpus::MB::Core::MB_MeshCombineAPIType DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::get_meshAPI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"get_meshAPI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::MB_MeshCombineAPIType>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::set_meshAPI(::DigitalOpus::MB::Core::MB_MeshCombineAPIType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {"set_meshAPI", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB_MeshCombineAPIType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData* DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MB_IMeshBakerSettings"
constexpr  DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::operator ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MB_IMeshBakerSettings"
constexpr ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::i___DigitalOpus__MB__Core__MB_IMeshBakerSettings() noexcept {
return static_cast<::DigitalOpus::MB::Core::MB_IMeshBakerSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB3_MeshCombinerSettingsData::MB3_MeshCombinerSettingsData()   {
}
