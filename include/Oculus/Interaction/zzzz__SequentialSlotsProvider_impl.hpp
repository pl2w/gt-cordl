#pragma once
// IWYU pragma private; include "Oculus/Interaction/SequentialSlotsProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__SequentialSlotsProvider_def.hpp"
#include "Oculus/Interaction/zzzz__ISnapPoseDelegate_def.hpp"
#include "Oculus/Interaction/zzzz__SequentialSlotsProvider___c__DisplayClass14_0_def.hpp"
#include "Oculus/Interaction/zzzz__SequentialSlotsProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)()>(&::Oculus::Interaction::SequentialSlotsProvider::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa461300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.TrackElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::SequentialSlotsProvider::TrackElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa461394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"TrackElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.UntrackElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t)>(&::Oculus::Interaction::SequentialSlotsProvider::UntrackElement)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4615f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"UntrackElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.SnapElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::SequentialSlotsProvider::SnapElement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa461738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"SnapElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.UnsnapElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t)>(&::Oculus::Interaction::SequentialSlotsProvider::UnsnapElement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46173c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"UnsnapElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.MoveTrackedElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::SequentialSlotsProvider::MoveTrackedElement)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa461740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"MoveTrackedElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.TryFindIndexForInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t, ::by_ref<int32_t>)>(&::Oculus::Interaction::SequentialSlotsProvider::TryFindIndexForInteractor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa461644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"TryFindIndexForInteractor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.SnapPoseForElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t, ::UnityEngine::Pose, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::SequentialSlotsProvider::SnapPoseForElement)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa4617f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"SnapPoseForElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.TryOccupySlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t)>(&::Oculus::Interaction::SequentialSlotsProvider::TryOccupySlot)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa46150c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"TryOccupySlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.IsSlotFree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t)>(&::Oculus::Interaction::SequentialSlotsProvider::IsSlotFree)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa46190c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"IsSlotFree", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.FindBestSlotIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::SequentialSlotsProvider::*)(::by_ref<::UnityEngine::Vector3>, bool)>(&::Oculus::Interaction::SequentialSlotsProvider::FindBestSlotIndex)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa4613f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"FindBestSlotIndex", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.PushSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t, int32_t)>(&::Oculus::Interaction::SequentialSlotsProvider::PushSlots)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa461944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"PushSlots", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.SwapSlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)(int32_t, int32_t)>(&::Oculus::Interaction::SequentialSlotsProvider::SwapSlot)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4619b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"SwapSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.InjectAllSequentialSlotsProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*)>(&::Oculus::Interaction::SequentialSlotsProvider::InjectAllSequentialSlotsProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4619f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"InjectAllSequentialSlotsProvider", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider.InjectSlots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*)>(&::Oculus::Interaction::SequentialSlotsProvider::InjectSlots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4619fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"InjectSlots", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider::*)()>(&::Oculus::Interaction::SequentialSlotsProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa461a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider._PushSlots_g__Next_14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::by_ref<::GlobalNamespace::SequentialSlotsProvider___c__DisplayClass14_0>)>(&::Oculus::Interaction::SequentialSlotsProvider::_PushSlots_g__Next_14_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa46199c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"<PushSlots>g__Next|14_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SequentialSlotsProvider___c__DisplayClass14_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& Oculus::Interaction::SequentialSlotsProvider::__cordl_internal_get__slots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slots;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& Oculus::Interaction::SequentialSlotsProvider::__cordl_internal_get__slots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slots;
}
constexpr void Oculus::Interaction::SequentialSlotsProvider::__cordl_internal_set__slots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slots = value;
}
constexpr ::ArrayW<int32_t>& Oculus::Interaction::SequentialSlotsProvider::__cordl_internal_get__slotInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slotInteractors;
}
constexpr ::ArrayW<int32_t> const& Oculus::Interaction::SequentialSlotsProvider::__cordl_internal_get__slotInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slotInteractors;
}
constexpr void Oculus::Interaction::SequentialSlotsProvider::__cordl_internal_set__slotInteractors(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slotInteractors = value;
}
constexpr bool& Oculus::Interaction::SequentialSlotsProvider::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::SequentialSlotsProvider::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::SequentialSlotsProvider::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline void Oculus::Interaction::SequentialSlotsProvider::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SequentialSlotsProvider::TrackElement(int32_t  id, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"TrackElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, pose);
}
inline void Oculus::Interaction::SequentialSlotsProvider::UntrackElement(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"UntrackElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::SequentialSlotsProvider::SnapElement(int32_t  id, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"SnapElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, pose);
}
inline void Oculus::Interaction::SequentialSlotsProvider::UnsnapElement(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"UnsnapElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::SequentialSlotsProvider::MoveTrackedElement(int32_t  id, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"MoveTrackedElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, pose);
}
inline bool Oculus::Interaction::SequentialSlotsProvider::TryFindIndexForInteractor(int32_t  id, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"TryFindIndexForInteractor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, index);
}
inline bool Oculus::Interaction::SequentialSlotsProvider::SnapPoseForElement(int32_t  id, ::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"SnapPoseForElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, pose, result);
}
inline bool Oculus::Interaction::SequentialSlotsProvider::TryOccupySlot(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"TryOccupySlot", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline bool Oculus::Interaction::SequentialSlotsProvider::IsSlotFree(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"IsSlotFree", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index);
}
inline int32_t Oculus::Interaction::SequentialSlotsProvider::FindBestSlotIndex(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  target, bool  freeOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"FindBestSlotIndex", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, target, freeOnly);
}
inline void Oculus::Interaction::SequentialSlotsProvider::PushSlots(int32_t  index, int32_t  freeSlot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"PushSlots", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, freeSlot);
}
inline void Oculus::Interaction::SequentialSlotsProvider::SwapSlot(int32_t  index, int32_t  freeSlot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"SwapSlot", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, freeSlot);
}
inline void Oculus::Interaction::SequentialSlotsProvider::InjectAllSequentialSlotsProvider(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  slots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"InjectAllSequentialSlotsProvider", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slots);
}
inline void Oculus::Interaction::SequentialSlotsProvider::InjectSlots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  slots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"InjectSlots", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slots);
}
inline void Oculus::Interaction::SequentialSlotsProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::SequentialSlotsProvider::_PushSlots_g__Next_14_0(int32_t  value, ::by_ref<::GlobalNamespace::SequentialSlotsProvider___c__DisplayClass14_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider*>(),
                        {"<PushSlots>g__Next|14_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SequentialSlotsProvider___c__DisplayClass14_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, _cordl_fixed_empty_name_whitespace);
}
inline ::Oculus::Interaction::SequentialSlotsProvider* Oculus::Interaction::SequentialSlotsProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SequentialSlotsProvider*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr  Oculus::Interaction::SequentialSlotsProvider::operator ::Oculus::Interaction::ISnapPoseDelegate*() noexcept {
return static_cast<::Oculus::Interaction::ISnapPoseDelegate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr ::Oculus::Interaction::ISnapPoseDelegate* Oculus::Interaction::SequentialSlotsProvider::i___Oculus__Interaction__ISnapPoseDelegate() noexcept {
return static_cast<::Oculus::Interaction::ISnapPoseDelegate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SequentialSlotsProvider::SequentialSlotsProvider()   {
}
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::*)()>(&::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4617e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0._TryFindIndexForInteractor_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::*)(int32_t)>(&::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::_TryFindIndexForInteractor_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa461a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0*>(),
                        {"<TryFindIndexForInteractor>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
inline void Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::_TryFindIndexForInteractor_b__0(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0*>(),
                        {"<TryFindIndexForInteractor>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i);
}
inline ::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0* Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SequentialSlotsProvider___c__DisplayClass9_0::SequentialSlotsProvider___c__DisplayClass9_0()   {
}
