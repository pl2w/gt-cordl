#pragma once
// IWYU pragma private; include "Oculus/Interaction/SurfaceSnapPoseDelegate.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__SurfaceSnapPoseDelegate_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "Oculus/Interaction/zzzz__ISnapPoseDelegate_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)()>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4640b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)()>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46417c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.TrackElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::TrackElement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa464180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"TrackElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.UntrackElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(int32_t)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::UntrackElement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa464184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"UntrackElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.ComputeWorldSurfacePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(::UnityEngine::Pose, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::ComputeWorldSurfacePose)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa464188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"ComputeWorldSurfacePose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.ComputeLocalSurfacePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(::UnityEngine::Pose, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::ComputeLocalSurfacePose)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa464350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"ComputeLocalSurfacePose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.SnapElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::SnapElement)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4645d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"SnapElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.UnsnapElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(int32_t)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::UnsnapElement)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4646a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"UnsnapElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.MoveTrackedElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::MoveTrackedElement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4646fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"MoveTrackedElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.SnapPoseForElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::SnapPoseForElement)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa464700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"SnapPoseForElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.InjectAllSurfaceSnapPoseDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::InjectAllSurfaceSnapPoseDelegate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa46497c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"InjectAllSurfaceSnapPoseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate.InjectSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::InjectSurface)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa464980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"InjectSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SurfaceSnapPoseDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SurfaceSnapPoseDelegate::*)()>(&::Oculus::Interaction::SurfaceSnapPoseDelegate::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa464a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::SurfaceSnapPoseDelegate::__cordl_internal_get__surface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surface;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::SurfaceSnapPoseDelegate::__cordl_internal_get__surface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surface;
}
constexpr void Oculus::Interaction::SurfaceSnapPoseDelegate::__cordl_internal_set__surface(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____surface = value;
}
constexpr ::Oculus::Interaction::Surfaces::ISurface*& Oculus::Interaction::SurfaceSnapPoseDelegate::__cordl_internal_get_Surface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Surface;
}
constexpr ::Oculus::Interaction::Surfaces::ISurface* const& Oculus::Interaction::SurfaceSnapPoseDelegate::__cordl_internal_get_Surface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Surface;
}
constexpr void Oculus::Interaction::SurfaceSnapPoseDelegate::__cordl_internal_set_Surface(::Oculus::Interaction::Surfaces::ISurface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Surface = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Pose>*& Oculus::Interaction::SurfaceSnapPoseDelegate::__cordl_internal_get__snappedPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappedPoses;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Pose>* const& Oculus::Interaction::SurfaceSnapPoseDelegate::__cordl_internal_get__snappedPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappedPoses;
}
constexpr void Oculus::Interaction::SurfaceSnapPoseDelegate::__cordl_internal_set__snappedPoses(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Pose>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snappedPoses = value;
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::TrackElement(int32_t  id, ::UnityEngine::Pose  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"TrackElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, p);
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::UntrackElement(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"UntrackElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline bool Oculus::Interaction::SurfaceSnapPoseDelegate::ComputeWorldSurfacePose(::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"ComputeWorldSurfacePose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose, result);
}
inline bool Oculus::Interaction::SurfaceSnapPoseDelegate::ComputeLocalSurfacePose(::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"ComputeLocalSurfacePose", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose, result);
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::SnapElement(int32_t  id, ::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"SnapElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, pose);
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::UnsnapElement(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"UnsnapElement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::MoveTrackedElement(int32_t  id, ::UnityEngine::Pose  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"MoveTrackedElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, p);
}
inline bool Oculus::Interaction::SurfaceSnapPoseDelegate::SnapPoseForElement(int32_t  id, ::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"SnapPoseForElement", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, pose, result);
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::InjectAllSurfaceSnapPoseDelegate(::Oculus::Interaction::Surfaces::ISurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"InjectAllSurfaceSnapPoseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface);
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::InjectSurface(::Oculus::Interaction::Surfaces::ISurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {"InjectSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface);
}
inline void Oculus::Interaction::SurfaceSnapPoseDelegate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SurfaceSnapPoseDelegate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::SurfaceSnapPoseDelegate* Oculus::Interaction::SurfaceSnapPoseDelegate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SurfaceSnapPoseDelegate*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr  Oculus::Interaction::SurfaceSnapPoseDelegate::operator ::Oculus::Interaction::ISnapPoseDelegate*() noexcept {
return static_cast<::Oculus::Interaction::ISnapPoseDelegate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ISnapPoseDelegate"
constexpr ::Oculus::Interaction::ISnapPoseDelegate* Oculus::Interaction::SurfaceSnapPoseDelegate::i___Oculus__Interaction__ISnapPoseDelegate() noexcept {
return static_cast<::Oculus::Interaction::ISnapPoseDelegate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SurfaceSnapPoseDelegate::SurfaceSnapPoseDelegate()   {
}
