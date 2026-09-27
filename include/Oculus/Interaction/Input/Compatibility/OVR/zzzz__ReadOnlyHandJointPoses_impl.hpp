#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/ReadOnlyHandJointPoses.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__ReadOnlyHandJointPoses_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__ReadOnlyHandJointPoses_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::*)(::ArrayW<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa5166a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>* (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::GetEnumerator)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa5166d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa516764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses* (*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::get_Empty)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa516768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::get_Count)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa5167c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::*)(int32_t)>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::get_Item)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa5167d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::UnityEngine::Pose> (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::*)(::Oculus::Interaction::Input::Compatibility::OVR::HandJointId)>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::get_Item)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa516818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"get_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::__cordl_internal_get__poses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poses;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::__cordl_internal_get__poses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poses;
}
constexpr void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::__cordl_internal_set__poses(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poses = value;
}
inline void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::setStaticF__Empty_k__BackingField(::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*, "<Empty>k__BackingField", ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(std::forward<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(value));
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::getStaticF__Empty_k__BackingField()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*, "<Empty>k__BackingField", ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>();
}
inline void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::_ctor(::ArrayW<::UnityEngine::Pose>  poses)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poses);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(nullptr, ___internal_method);
}
inline int32_t Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, index);
}
inline ::by_ref<::UnityEngine::Pose> Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::get_Item(::Oculus::Interaction::Input::Compatibility::OVR::HandJointId  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(),
                        {"get_Item", {}, {::i2c::type_of<::Oculus::Interaction::Input::Compatibility::OVR::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::UnityEngine::Pose>>(this, ___internal_method, index);
}
inline ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::New_ctor(::ArrayW<::UnityEngine::Pose>  poses)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*>(poses));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>"
constexpr  Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::operator ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Pose_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Pose>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>"
constexpr  Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::i___System__Collections__Generic__IEnumerable_1___UnityEngine__Pose_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Pose>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>"
constexpr  Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::operator ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>*() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Pose_() noexcept {
return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Pose>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses::ReadOnlyHandJointPoses()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::*)(int32_t)>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa51673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa516930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::MoveNext)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa516934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2.System_Collections_Generic_IEnumerator_UnityEngine_Pose__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::System_Collections_Generic_IEnumerator_UnityEngine_Pose__get_Current)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa516a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa516a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::*)()>(&::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa516a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_set___2__current(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses* const& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_set___4__this(::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_set___7__wrap1(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
constexpr int32_t& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr int32_t const& Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
constexpr void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::__cordl_internal_set___7__wrap2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
inline void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::System_Collections_Generic_IEnumerator_UnityEngine_Pose__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"System.Collections.Generic.IEnumerator<UnityEngine.Pose>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>"
constexpr  Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::i___System__Collections__Generic__IEnumerator_1___UnityEngine__Pose_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Pose>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::ReadOnlyHandJointPoses__GetEnumerator_d__2::ReadOnlyHandJointPoses__GetEnumerator_d__2()   {
}
