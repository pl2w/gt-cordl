#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScenePlane.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_def.hpp"
#include "GlobalNamespace/zzzz__IOVRSceneComponent_def.hpp"
#include "GlobalNamespace/zzzz__OVRSceneAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_GetBoundaryJob_def.hpp"
#include "GlobalNamespace/zzzz__OVRScenePlane_GetBoundaryLengthJob_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6381d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Width", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.set_Width
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)(float_t)>(&::GlobalNamespace::OVRScenePlane::set_Width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6381d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_Width", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6381e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.set_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)(float_t)>(&::GlobalNamespace::OVRScenePlane::set_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6381e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_Height", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6381f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.set_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)(::UnityEngine::Vector2)>(&::GlobalNamespace::OVRScenePlane::set_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6381f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_Offset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_Dimensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_Dimensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa638200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Dimensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_Boundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_Boundary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa638208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Boundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_ScaleChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_ScaleChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa638210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_ScaleChildren", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.set_ScaleChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)(bool)>(&::GlobalNamespace::OVRScenePlane::set_ScaleChildren)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa638218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_ScaleChildren", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.get_OffsetChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::get_OffsetChildren)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa638384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_OffsetChildren", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.set_OffsetChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)(bool)>(&::GlobalNamespace::OVRScenePlane::set_OffsetChildren)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa63838c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_OffsetChildren", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.SetChildScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::SetChildScale)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa638240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"SetChildScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.SetChildOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::SetChildOffset)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa6383b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"SetChildOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::UpdateTransform)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa6314c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa6384e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6385c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.IOVRSceneComponent_Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::IOVRSceneComponent_Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6385cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"IOVRSceneComponent.Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.ScheduleGetLengthJob
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::ScheduleGetLengthJob)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa6385d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"ScheduleGetLengthJob", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.RequestBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::RequestBoundary)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa631644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"RequestBoundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::Update)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0xa63874c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::OnDisable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa638db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRScenePlane._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRScenePlane::*)()>(&::GlobalNamespace::OVRScenePlane::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa638e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Width_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Width_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Width_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Width_k__BackingField;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__Width_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Width_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Height_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Height_k__BackingField;
}
constexpr float_t const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Height_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Height_k__BackingField;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__Height_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Height_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Offset_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__Offset_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Offset_k__BackingField;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__Offset_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Offset_k__BackingField = value;
}
constexpr bool& GlobalNamespace::OVRScenePlane::__cordl_internal_get__scaleChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleChildren;
}
constexpr bool const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__scaleChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleChildren;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__scaleChildren(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleChildren = value;
}
constexpr bool& GlobalNamespace::OVRScenePlane::__cordl_internal_get__offsetChildren()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetChildren;
}
constexpr bool const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__offsetChildren() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offsetChildren;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__offsetChildren(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offsetChildren = value;
}
constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobHandle;
}
constexpr ::System::Nullable_1<::Unity::Jobs::JobHandle> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jobHandle;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__jobHandle(::System::Nullable_1<::Unity::Jobs::JobHandle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jobHandle = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__previousBoundary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousBoundary;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__previousBoundary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousBoundary;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__previousBoundary(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousBoundary = value;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundaryLength;
}
constexpr ::Unity::Collections::NativeArray_1<int32_t> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundaryLength;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__boundaryLength(::Unity::Collections::NativeArray_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boundaryLength = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundaryBuffer;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundaryBuffer;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__boundaryBuffer(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boundaryBuffer = value;
}
constexpr bool& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundaryRequested;
}
constexpr bool const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundaryRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundaryRequested;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__boundaryRequested(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boundaryRequested = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor>& GlobalNamespace::OVRScenePlane::__cordl_internal_get__sceneAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchor;
}
constexpr ::UnityW<::GlobalNamespace::OVRSceneAnchor> const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__sceneAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneAnchor;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__sceneAnchor(::UnityW<::GlobalNamespace::OVRSceneAnchor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sceneAnchor = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundary;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& GlobalNamespace::OVRScenePlane::__cordl_internal_get__boundary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundary;
}
constexpr void GlobalNamespace::OVRScenePlane::__cordl_internal_set__boundary(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boundary = value;
}
inline float_t GlobalNamespace::OVRScenePlane::get_Width()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Width", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::set_Width(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_Width", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::OVRScenePlane::get_Height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::set_Height(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_Height", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRScenePlane::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::set_Offset(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_Offset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRScenePlane::get_Dimensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Dimensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>* GlobalNamespace::OVRScenePlane::get_Boundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_Boundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRScenePlane::get_ScaleChildren()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_ScaleChildren", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::set_ScaleChildren(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_ScaleChildren", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRScenePlane::get_OffsetChildren()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"get_OffsetChildren", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::set_OffsetChildren(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"set_OffsetChildren", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVRScenePlane::SetChildScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"SetChildScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::SetChildOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"SetChildOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::IOVRSceneComponent_Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"IOVRSceneComponent.Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::ScheduleGetLengthJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"ScheduleGetLengthJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::RequestBoundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"RequestBoundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRScenePlane::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRScenePlane*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRScenePlane* GlobalNamespace::OVRScenePlane::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRScenePlane*>());
}
/// @brief Convert operator to "::GlobalNamespace::IOVRSceneComponent"
constexpr  GlobalNamespace::OVRScenePlane::operator ::GlobalNamespace::IOVRSceneComponent*() noexcept {
return static_cast<::GlobalNamespace::IOVRSceneComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IOVRSceneComponent"
constexpr ::GlobalNamespace::IOVRSceneComponent* GlobalNamespace::OVRScenePlane::i___GlobalNamespace__IOVRSceneComponent() noexcept {
return static_cast<::GlobalNamespace::IOVRSceneComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRScenePlane::OVRScenePlane()   {
}
