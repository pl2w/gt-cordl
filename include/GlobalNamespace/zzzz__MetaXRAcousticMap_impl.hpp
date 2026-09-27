#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMap.hpp"
#include "Meta/XR/Acoustics/zzzz__AcousticMapFlags_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMap_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMap__LoadMapFromMemory_d__36_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMap_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticSceneGroup_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray`1_ReadOnly_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.get_StaticOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::get_StaticOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ea6cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_StaticOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.set_StaticOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)(bool)>(&::GlobalNamespace::MetaXRAcousticMap::set_StaticOnly)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9ea6cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_StaticOnly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.get_NoFloating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::get_NoFloating)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ea6cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_NoFloating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.set_NoFloating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)(bool)>(&::GlobalNamespace::MetaXRAcousticMap::set_NoFloating)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ea6cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_NoFloating", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.get_Diffraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::get_Diffraction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ea6cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_Diffraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.set_Diffraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)(bool)>(&::GlobalNamespace::MetaXRAcousticMap::set_Diffraction)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ea6d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_Diffraction", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.get_GravityVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::get_GravityVector)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ea6d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_GravityVector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.set_GravityVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::MetaXRAcousticMap::set_GravityVector)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9ea6d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_GravityVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.get_RelativeFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::get_RelativeFilePath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea6e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_RelativeFilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.get_AbsoluteFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::get_AbsoluteFilePath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9ea6e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_AbsoluteFilePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.set_AbsoluteFilePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)(::StringW)>(&::GlobalNamespace::MetaXRAcousticMap::set_AbsoluteFilePath)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x9ea6ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_AbsoluteFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::Start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea76ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.StartInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)(bool)>(&::GlobalNamespace::MetaXRAcousticMap::StartInternal)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x9ea7244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"StartInternal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.LoadMapAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MetaXRAcousticMap::*)(::StringW)>(&::GlobalNamespace::MetaXRAcousticMap::LoadMapAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9ea76b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"LoadMapAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.LoadMapFromMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>)>(&::GlobalNamespace::MetaXRAcousticMap::LoadMapFromMemory)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9ea785c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"LoadMapFromMemory", {}, {::i2c::type_of<::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ea791c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.DestroyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::DestroyInternal)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9ea7070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"DestroyInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9ea7920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::OnDisable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9ea7a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::LateUpdate)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9ea7ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap.ApplyTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::ApplyTransform)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9ea773c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"ApplyTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap::*)()>(&::GlobalNamespace::MetaXRAcousticMap::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9ea7c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticSceneGroup>& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_SceneGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneGroup;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticSceneGroup> const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_SceneGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SceneGroup;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_SceneGroup(::UnityW<::GlobalNamespace::MetaXRAcousticSceneGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SceneGroup = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_customPointsEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customPointsEnabled;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_customPointsEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customPointsEnabled;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_customPointsEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customPointsEnabled = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_IsLoaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLoaded;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_IsLoaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLoaded;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_IsLoaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsLoaded = value;
}
constexpr ::Meta::XR::Acoustics::AcousticMapFlags& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr ::Meta::XR::Acoustics::AcousticMapFlags const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Flags;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_Flags(::Meta::XR::Acoustics::AcousticMapFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Flags = value;
}
constexpr uint32_t& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_ReflectionCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflectionCount;
}
constexpr uint32_t const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_ReflectionCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReflectionCount;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_ReflectionCount(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReflectionCount = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_MinSpacing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinSpacing;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_MinSpacing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinSpacing;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_MinSpacing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinSpacing = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_MaxSpacing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxSpacing;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_MaxSpacing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxSpacing;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_MaxSpacing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxSpacing = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_HeadHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeadHeight;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_HeadHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HeadHeight;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_HeadHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HeadHeight = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_MaxHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxHeight;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_MaxHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxHeight;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_MaxHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxHeight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_gravityVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_gravityVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityVector;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_gravityVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityVector = value;
}
constexpr ::StringW& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_relativeFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativeFilePath;
}
constexpr ::StringW const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_relativeFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___relativeFilePath;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_relativeFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___relativeFilePath = value;
}
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_mapHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapHandle;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_mapHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mapHandle;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_mapHandle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mapHandle = value;
}
constexpr ::System::Action*& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_delayedEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedEnable;
}
constexpr ::System::Action* const& GlobalNamespace::MetaXRAcousticMap::__cordl_internal_get_delayedEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedEnable;
}
constexpr void GlobalNamespace::MetaXRAcousticMap::__cordl_internal_set_delayedEnable(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayedEnable = value;
}
inline bool GlobalNamespace::MetaXRAcousticMap::get_StaticOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_StaticOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::set_StaticOnly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_StaticOnly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MetaXRAcousticMap::get_NoFloating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_NoFloating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::set_NoFloating(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_NoFloating", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MetaXRAcousticMap::get_Diffraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_Diffraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::set_Diffraction(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_Diffraction", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MetaXRAcousticMap::get_GravityVector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_GravityVector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::set_GravityVector(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_GravityVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MetaXRAcousticMap::get_RelativeFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_RelativeFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MetaXRAcousticMap::get_AbsoluteFilePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"get_AbsoluteFilePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::set_AbsoluteFilePath(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"set_AbsoluteFilePath", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MetaXRAcousticMap::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::StartInternal(bool  autoLoad)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"StartInternal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autoLoad);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MetaXRAcousticMap::LoadMapAsync(::StringW  streamingAssetsSubPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"LoadMapAsync", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, streamingAssetsSubPath);
}
inline void GlobalNamespace::MetaXRAcousticMap::LoadMapFromMemory(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"LoadMapFromMemory", {}, {::i2c::type_of<::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMap::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::DestroyInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"DestroyInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::ApplyTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {"ApplyTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticMap* GlobalNamespace::MetaXRAcousticMap::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticMap*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMap::MetaXRAcousticMap()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::*)(int32_t)>(&::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ea7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::*)()>(&::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9ea8038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::*)()>(&::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::MoveNext)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x9ea803c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::*)()>(&::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea83a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::*)()>(&::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ea83ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::*)()>(&::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea83e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::StringW& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get_streamingAssetsSubPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamingAssetsSubPath;
}
constexpr ::StringW const& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get_streamingAssetsSubPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___streamingAssetsSubPath;
}
constexpr void GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_set_streamingAssetsSubPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___streamingAssetsSubPath = value;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMap>& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMap> const& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MetaXRAcousticMap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get__startTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr float_t const& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get__startTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__2;
}
constexpr void GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_set__startTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__2 = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequest*& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get__unityWebRequest_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityWebRequest_5__3;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_get__unityWebRequest_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unityWebRequest_5__3;
}
constexpr void GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::__cordl_internal_set__unityWebRequest_5__3(::UnityEngine::Networking::UnityWebRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unityWebRequest_5__3 = value;
}
inline void GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35* GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMap__LoadMapAsync_d__35::MetaXRAcousticMap__LoadMapAsync_d__35()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::*)()>(&::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea7c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0._LoadMapFromMemory_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::*)()>(&::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::_LoadMapFromMemory_b__0)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9ea7c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*>(),
                        {"<LoadMapFromMemory>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0._LoadMapFromMemory_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::*)()>(&::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::_LoadMapFromMemory_b__1)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9ea7ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*>(),
                        {"<LoadMapFromMemory>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>& GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t> const& GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::__cordl_internal_set_data(::GlobalNamespace::NativeArray_1_ReadOnly<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMap>& GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMap> const& GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MetaXRAcousticMap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::__cordl_internal_get_result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::__cordl_internal_get_result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___result;
}
constexpr void GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::__cordl_internal_set_result(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___result = value;
}
inline void GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::_LoadMapFromMemory_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*>(),
                        {"<LoadMapFromMemory>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::_LoadMapFromMemory_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*>(),
                        {"<LoadMapFromMemory>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0* GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMap___c__DisplayClass36_0::MetaXRAcousticMap___c__DisplayClass36_0()   {
}
