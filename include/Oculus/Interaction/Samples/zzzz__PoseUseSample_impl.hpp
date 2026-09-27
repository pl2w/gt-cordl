#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/PoseUseSample.hpp"
#include "Oculus/Interaction/zzzz__ActiveStateSelector_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__PoseUseSample_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "Oculus/Interaction/Samples/zzzz__PoseUseSample_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample.get_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHmd* (::Oculus::Interaction::Samples::PoseUseSample::*)()>(&::Oculus::Interaction::Samples::PoseUseSample::get_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {"get_Hmd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample.set_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PoseUseSample::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::Samples::PoseUseSample::set_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PoseUseSample::*)()>(&::Oculus::Interaction::Samples::PoseUseSample::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa43d638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PoseUseSample::*)()>(&::Oculus::Interaction::Samples::PoseUseSample::Start)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xa43d690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample.ShowVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PoseUseSample::*)(int32_t)>(&::Oculus::Interaction::Samples::PoseUseSample::ShowVisuals)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0xa43d9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {"ShowVisuals", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample.HideVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PoseUseSample::*)(int32_t)>(&::Oculus::Interaction::Samples::PoseUseSample::HideVisuals)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa43de44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {"HideVisuals", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PoseUseSample::*)()>(&::Oculus::Interaction::Samples::PoseUseSample::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43de8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__Hmd_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__Hmd_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr void Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hmd_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::ActiveStateSelector>>& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__poses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poses;
}
constexpr ::ArrayW<::UnityW<::Oculus::Interaction::ActiveStateSelector>> const& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__poses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poses;
}
constexpr void Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_set__poses(::ArrayW<::UnityW<::Oculus::Interaction::ActiveStateSelector>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poses = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__onSelectIcons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSelectIcons;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__onSelectIcons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSelectIcons;
}
constexpr void Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_set__onSelectIcons(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSelectIcons = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__poseActiveVisualPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseActiveVisualPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__poseActiveVisualPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseActiveVisualPrefab;
}
constexpr void Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_set__poseActiveVisualPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseActiveVisualPrefab = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__poseActiveVisuals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseActiveVisuals;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_get__poseActiveVisuals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____poseActiveVisuals;
}
constexpr void Oculus::Interaction::Samples::PoseUseSample::__cordl_internal_set__poseActiveVisuals(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____poseActiveVisuals = value;
}
inline ::Oculus::Interaction::Input::IHmd* Oculus::Interaction::Samples::PoseUseSample::get_Hmd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {"get_Hmd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHmd*>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PoseUseSample::set_Hmd(::Oculus::Interaction::Input::IHmd*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Samples::PoseUseSample::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PoseUseSample::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PoseUseSample::ShowVisuals(int32_t  poseNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {"ShowVisuals", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseNumber);
}
inline void Oculus::Interaction::Samples::PoseUseSample::HideVisuals(int32_t  poseNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {"HideVisuals", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseNumber);
}
inline void Oculus::Interaction::Samples::PoseUseSample::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::PoseUseSample* Oculus::Interaction::Samples::PoseUseSample::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::PoseUseSample*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::PoseUseSample::PoseUseSample()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::*)()>(&::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0._Start_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::*)()>(&::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::_Start_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa43de94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0*>(),
                        {"<Start>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0._Start_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::*)()>(&::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::_Start_b__1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa43deb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0*>(),
                        {"<Start>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::__cordl_internal_get_poseNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseNumber;
}
constexpr int32_t const& Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::__cordl_internal_get_poseNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poseNumber;
}
constexpr void Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::__cordl_internal_set_poseNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poseNumber = value;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::PoseUseSample>& Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::Samples::PoseUseSample> const& Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::Samples::PoseUseSample>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::_Start_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0*>(),
                        {"<Start>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::_Start_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0*>(),
                        {"<Start>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0* Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::PoseUseSample___c__DisplayClass10_0::PoseUseSample___c__DisplayClass10_0()   {
}
