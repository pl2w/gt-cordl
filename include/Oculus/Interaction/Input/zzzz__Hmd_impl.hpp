#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Hmd.hpp"
#include "Oculus/Interaction/Input/zzzz__DataModifier_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__Hmd_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HmdDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Hmd_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::Hmd.add_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hmd::*)(::System::Action*)>(&::Oculus::Interaction::Input::Hmd::add_WhenUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa5131ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                        {"add_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hmd.remove_WhenUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hmd::*)(::System::Action*)>(&::Oculus::Interaction::Input::Hmd::remove_WhenUpdated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa513248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                        {"remove_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hmd.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hmd::*)(::Oculus::Interaction::Input::HmdDataAsset*)>(&::Oculus::Interaction::Input::Hmd::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa5132e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hmd.MarkInputDataRequiresUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hmd::*)()>(&::Oculus::Interaction::Input::Hmd::MarkInputDataRequiresUpdate)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa5132e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hmd.TryGetRootPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::Hmd::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::Hmd::TryGetRootPose)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa51336c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                        {"TryGetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hmd._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hmd::*)()>(&::Oculus::Interaction::Input::Hmd::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa5134f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Oculus::Interaction::Input::Hmd::__cordl_internal_get_WhenUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUpdated;
}
constexpr ::System::Action* const& Oculus::Interaction::Input::Hmd::__cordl_internal_get_WhenUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenUpdated;
}
constexpr void Oculus::Interaction::Input::Hmd::__cordl_internal_set_WhenUpdated(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenUpdated = value;
}
inline void Oculus::Interaction::Input::Hmd::add_WhenUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                        {"add_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::Hmd::remove_WhenUpdated(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                        {"remove_WhenUpdated", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::Hmd::Apply(::Oculus::Interaction::Input::HmdDataAsset*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::Hmd::MarkInputDataRequiresUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Input::Hmd::TryGetRootPose(::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                        {"TryGetRootPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::Input::Hmd::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Hmd* Oculus::Interaction::Input::Hmd::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Hmd*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IHmd"
constexpr  Oculus::Interaction::Input::Hmd::operator ::Oculus::Interaction::Input::IHmd*() noexcept {
return static_cast<::Oculus::Interaction::Input::IHmd*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IHmd"
constexpr ::Oculus::Interaction::Input::IHmd* Oculus::Interaction::Input::Hmd::i___Oculus__Interaction__Input__IHmd() noexcept {
return static_cast<::Oculus::Interaction::Input::IHmd*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Hmd::Hmd()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Input::Hmd___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hmd___c::*)()>(&::Oculus::Interaction::Input::Hmd___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa513688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::Hmd___c.__ctor_b__6_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::Hmd___c::*)()>(&::Oculus::Interaction::Input::Hmd___c::__ctor_b__6_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa513690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd___c*>(),
                        {"<.ctor>b__6_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Input::Hmd___c::setStaticF___9(::Oculus::Interaction::Input::Hmd___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Input::Hmd___c*, "<>9", ::Oculus::Interaction::Input::Hmd___c*>(std::forward<::Oculus::Interaction::Input::Hmd___c*>(value));
}
inline ::Oculus::Interaction::Input::Hmd___c* Oculus::Interaction::Input::Hmd___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Input::Hmd___c*, "<>9", ::Oculus::Interaction::Input::Hmd___c*>();
}
inline void Oculus::Interaction::Input::Hmd___c::setStaticF___9__6_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__6_0", ::Oculus::Interaction::Input::Hmd___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Oculus::Interaction::Input::Hmd___c::getStaticF___9__6_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__6_0", ::Oculus::Interaction::Input::Hmd___c*>();
}
inline void Oculus::Interaction::Input::Hmd___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::Hmd___c::__ctor_b__6_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::Hmd___c*>(),
                        {"<.ctor>b__6_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::Hmd___c* Oculus::Interaction::Input::Hmd___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::Hmd___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Hmd___c::Hmd___c()   {
}
