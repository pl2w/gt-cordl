#pragma once
// IWYU pragma private; include "PerformanceSystems/TimeSliceControllerAsset.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "PerformanceSystems/zzzz__TimeSliceControllerAsset_def.hpp"
#include "PerformanceSystems/zzzz__ITimeSlice_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.get_ReferenceTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::PerformanceSystems::TimeSliceControllerAsset::*)()>(&::PerformanceSystems::TimeSliceControllerAsset::get_ReferenceTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b714bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"get_ReferenceTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.RemovePendingObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)()>(&::PerformanceSystems::TimeSliceControllerAsset::RemovePendingObjects)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b714c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"RemovePendingObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.AddPendingObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)()>(&::PerformanceSystems::TimeSliceControllerAsset::AddPendingObjects)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x5b71538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"AddPendingObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.UpdateCurrentSliceObjects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)()>(&::PerformanceSystems::TimeSliceControllerAsset::UpdateCurrentSliceObjects)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5b71750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"UpdateCurrentSliceObjects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.SetRefTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)(::UnityEngine::Transform*)>(&::PerformanceSystems::TimeSliceControllerAsset::SetRefTransform)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5b71918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"SetRefTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.AddTimeSliceBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)(::PerformanceSystems::ITimeSlice*)>(&::PerformanceSystems::TimeSliceControllerAsset::AddTimeSliceBehaviour)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5b712c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"AddTimeSliceBehaviour", {}, {::i2c::type_of<::PerformanceSystems::ITimeSlice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.RemoveTimeSliceBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)(::PerformanceSystems::ITimeSlice*)>(&::PerformanceSystems::TimeSliceControllerAsset::RemoveTimeSliceBehaviour)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5b7136c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"RemoveTimeSliceBehaviour", {}, {::i2c::type_of<::PerformanceSystems::ITimeSlice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)()>(&::PerformanceSystems::TimeSliceControllerAsset::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b719a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.InitializeReferenceTransformWithMainCam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)()>(&::PerformanceSystems::TimeSliceControllerAsset::InitializeReferenceTransformWithMainCam)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5b719fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"InitializeReferenceTransformWithMainCam", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)()>(&::PerformanceSystems::TimeSliceControllerAsset::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b71ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset.ClearAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)()>(&::PerformanceSystems::TimeSliceControllerAsset::ClearAsset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5b71ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"ClearAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PerformanceSystems::TimeSliceControllerAsset._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PerformanceSystems::TimeSliceControllerAsset::*)()>(&::PerformanceSystems::TimeSliceControllerAsset::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b71b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PerformanceSystems::ITimeSlice*>*& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__currentTimeSliceBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTimeSliceBehaviours;
}
constexpr ::System::Collections::Generic::List_1<::PerformanceSystems::ITimeSlice*>* const& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__currentTimeSliceBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTimeSliceBehaviours;
}
constexpr void PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_set__currentTimeSliceBehaviours(::System::Collections::Generic::List_1<::PerformanceSystems::ITimeSlice*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTimeSliceBehaviours = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__timeSliceBehavioursToAdd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceBehavioursToAdd;
}
constexpr ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>* const& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__timeSliceBehavioursToAdd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceBehavioursToAdd;
}
constexpr void PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_set__timeSliceBehavioursToAdd(::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSliceBehavioursToAdd = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__timeSliceBehavioursToRemove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceBehavioursToRemove;
}
constexpr ::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>* const& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__timeSliceBehavioursToRemove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSliceBehavioursToRemove;
}
constexpr void PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_set__timeSliceBehavioursToRemove(::System::Collections::Generic::HashSet_1<::PerformanceSystems::ITimeSlice*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSliceBehavioursToRemove = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__referenceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__referenceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceTransform;
}
constexpr void PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_set__referenceTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____referenceTransform = value;
}
constexpr int32_t& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__timeSlices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSlices;
}
constexpr int32_t const& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__timeSlices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSlices;
}
constexpr void PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_set__timeSlices(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSlices = value;
}
constexpr int32_t& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__currentSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSlice;
}
constexpr int32_t const& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__currentSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSlice;
}
constexpr void PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_set__currentSlice(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSlice = value;
}
constexpr bool& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr bool const& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr void PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_set__isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActive = value;
}
constexpr int32_t& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__sliceSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliceSize;
}
constexpr int32_t const& PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_get__sliceSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sliceSize;
}
constexpr void PerformanceSystems::TimeSliceControllerAsset::__cordl_internal_set__sliceSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sliceSize = value;
}
inline ::UnityW<::UnityEngine::Transform> PerformanceSystems::TimeSliceControllerAsset::get_ReferenceTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"get_ReferenceTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerAsset::RemovePendingObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"RemovePendingObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerAsset::AddPendingObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"AddPendingObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerAsset::UpdateCurrentSliceObjects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"UpdateCurrentSliceObjects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerAsset::SetRefTransform(::UnityEngine::Transform*  refTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"SetRefTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, refTransform);
}
inline void PerformanceSystems::TimeSliceControllerAsset::AddTimeSliceBehaviour(::PerformanceSystems::ITimeSlice*  timeSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"AddTimeSliceBehaviour", {}, {::i2c::type_of<::PerformanceSystems::ITimeSlice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSlice);
}
inline void PerformanceSystems::TimeSliceControllerAsset::RemoveTimeSliceBehaviour(::PerformanceSystems::ITimeSlice*  timeSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"RemoveTimeSliceBehaviour", {}, {::i2c::type_of<::PerformanceSystems::ITimeSlice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeSlice);
}
inline void PerformanceSystems::TimeSliceControllerAsset::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerAsset::InitializeReferenceTransformWithMainCam()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"InitializeReferenceTransformWithMainCam", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerAsset::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerAsset::ClearAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {"ClearAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PerformanceSystems::TimeSliceControllerAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PerformanceSystems::TimeSliceControllerAsset*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PerformanceSystems::TimeSliceControllerAsset* PerformanceSystems::TimeSliceControllerAsset::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PerformanceSystems::TimeSliceControllerAsset*>());
}
// Ctor Parameters []
constexpr ::PerformanceSystems::TimeSliceControllerAsset::TimeSliceControllerAsset()   {
}
