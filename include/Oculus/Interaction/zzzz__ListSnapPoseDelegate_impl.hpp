#pragma once
// IWYU pragma private; include "Oculus/Interaction/ListSnapPoseDelegate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__ListSnapPoseDelegate_def.hpp"
#include "Oculus/Interaction/zzzz__ISnapPoseDelegate_def.hpp"
#include "Oculus/Interaction/zzzz__ListLayoutEase_def.hpp"
#include "Oculus/Interaction/zzzz__ListLayout_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListSnapPoseDelegate::*)()>(&::Oculus::Interaction::ListSnapPoseDelegate::Start)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa460ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListSnapPoseDelegate::*)()>(&::Oculus::Interaction::ListSnapPoseDelegate::Update)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa460efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.SizeForId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ListSnapPoseDelegate::*)(int32_t)>(&::Oculus::Interaction::ListSnapPoseDelegate::SizeForId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa460f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.FloatForPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ListSnapPoseDelegate::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::ListSnapPoseDelegate::FloatForPose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa460f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.PoseForFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::ListSnapPoseDelegate::*)(float_t)>(&::Oculus::Interaction::ListSnapPoseDelegate::PoseForFloat)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa460f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.TrackElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListSnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::ListSnapPoseDelegate::TrackElement)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa46100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"TrackElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.UntrackElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListSnapPoseDelegate::*)(int32_t)>(&::Oculus::Interaction::ListSnapPoseDelegate::UntrackElement)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa46109c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"UntrackElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.SnapElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListSnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::ListSnapPoseDelegate::SnapElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4610b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"SnapElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.UnsnapElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListSnapPoseDelegate::*)(int32_t)>(&::Oculus::Interaction::ListSnapPoseDelegate::UnsnapElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa461108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"UnsnapElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.MoveTrackedElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListSnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::ListSnapPoseDelegate::MoveTrackedElement)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa461160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"MoveTrackedElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.SnapPoseForElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ListSnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::ListSnapPoseDelegate::SnapPoseForElement)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa4611bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"SnapPoseForElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate.get_Size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::ListSnapPoseDelegate::*)()>(&::Oculus::Interaction::ListSnapPoseDelegate::get_Size)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4612d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"get_Size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ListSnapPoseDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ListSnapPoseDelegate::*)()>(&::Oculus::Interaction::ListSnapPoseDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4612f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_get__snappedIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappedIds;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_get__snappedIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappedIds;
}
constexpr void Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_set__snappedIds(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snappedIds = value;
}
constexpr ::Oculus::Interaction::ListLayout*& Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_get__layout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layout;
}
constexpr ::Oculus::Interaction::ListLayout* const& Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_get__layout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layout;
}
constexpr void Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_set__layout(::Oculus::Interaction::ListLayout*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layout = value;
}
constexpr ::Oculus::Interaction::ListLayoutEase*& Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_get__layoutEase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutEase;
}
constexpr ::Oculus::Interaction::ListLayoutEase* const& Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_get__layoutEase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layoutEase;
}
constexpr void Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_set__layoutEase(::Oculus::Interaction::ListLayoutEase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layoutEase = value;
}
constexpr float_t& Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_get__defaultSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSize;
}
constexpr float_t const& Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_get__defaultSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSize;
}
constexpr void Oculus::Interaction::ListSnapPoseDelegate::__cordl_internal_set__defaultSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultSize = value;
}
inline void Oculus::Interaction::ListSnapPoseDelegate::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::ListSnapPoseDelegate::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::ListSnapPoseDelegate::SizeForId(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, id);
}
inline float_t Oculus::Interaction::ListSnapPoseDelegate::FloatForPose(::UnityEngine::Pose  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, pose);
}
inline ::UnityEngine::Pose Oculus::Interaction::ListSnapPoseDelegate::PoseForFloat(float_t  position)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, position);
}
inline void Oculus::Interaction::ListSnapPoseDelegate::TrackElement(int32_t  id, ::UnityEngine::Pose  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"TrackElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, p);
}
inline void Oculus::Interaction::ListSnapPoseDelegate::UntrackElement(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"UntrackElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::ListSnapPoseDelegate::SnapElement(int32_t  id, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"SnapElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, pose);
}
inline void Oculus::Interaction::ListSnapPoseDelegate::UnsnapElement(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"UnsnapElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::ListSnapPoseDelegate::MoveTrackedElement(int32_t  id, ::UnityEngine::Pose  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"MoveTrackedElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, p);
}
inline bool Oculus::Interaction::ListSnapPoseDelegate::SnapPoseForElement(int32_t  id, ::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"SnapPoseForElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, pose, result);
}
inline float_t Oculus::Interaction::ListSnapPoseDelegate::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::ListSnapPoseDelegate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ListSnapPoseDelegate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ListSnapPoseDelegate* Oculus::Interaction::ListSnapPoseDelegate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ListSnapPoseDelegate*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr  Oculus::Interaction::ListSnapPoseDelegate::operator ::Oculus::Interaction::ISnapPoseDelegate*() noexcept {
return static_cast<::Oculus::Interaction::ISnapPoseDelegate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr ::Oculus::Interaction::ISnapPoseDelegate* Oculus::Interaction::ListSnapPoseDelegate::i___Oculus__Interaction__ISnapPoseDelegate() noexcept {
return static_cast<::Oculus::Interaction::ISnapPoseDelegate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ListSnapPoseDelegate::ListSnapPoseDelegate()   {
}
