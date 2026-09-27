#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/SyntheticControllerInHand.hpp"
#include "Oculus/Interaction/Input/zzzz__Controller_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__SyntheticControllerInHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerDataAsset_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource`1_UpdateModeFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IDataSource_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.get_RawHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Input::SyntheticControllerInHand::*)()>(&::Oculus::Interaction::Input::SyntheticControllerInHand::get_RawHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa506c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"get_RawHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.set_RawHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::SyntheticControllerInHand::set_RawHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa506c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"set_RawHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.get_SyntheticHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::Input::SyntheticControllerInHand::*)()>(&::Oculus::Interaction::Input::SyntheticControllerInHand::get_SyntheticHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa506ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"get_SyntheticHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.set_SyntheticHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::SyntheticControllerInHand::set_SyntheticHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa506ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"set_SyntheticHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)()>(&::Oculus::Interaction::Input::SyntheticControllerInHand::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa506cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)()>(&::Oculus::Interaction::Input::SyntheticControllerInHand::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa506d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)()>(&::Oculus::Interaction::Input::SyntheticControllerInHand::LateUpdate)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa506e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)(::Oculus::Interaction::Input::ControllerDataAsset*)>(&::Oculus::Interaction::Input::SyntheticControllerInHand::Apply)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa506fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                    {::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.UpdateOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)(::Oculus::Interaction::Input::ControllerDataAsset*)>(&::Oculus::Interaction::Input::SyntheticControllerInHand::UpdateOffsets)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa506f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"UpdateOffsets", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.ApplyOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)(::Oculus::Interaction::Input::ControllerDataAsset*)>(&::Oculus::Interaction::Input::SyntheticControllerInHand::ApplyOffsets)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa506fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"ApplyOffsets", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.TryGetTrackingRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::SyntheticControllerInHand::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::ControllerDataAsset*, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::Input::SyntheticControllerInHand::TryGetTrackingRoot)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa507024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"TryGetTrackingRoot", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.InjectAllSyntheticControllerInHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>, ::Oculus::Interaction::Input::IDataSource*, ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*, bool)>(&::Oculus::Interaction::Input::SyntheticControllerInHand::InjectAllSyntheticControllerInHand)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa5071d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"InjectAllSyntheticControllerInHand", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.InjectOptionalRawHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::SyntheticControllerInHand::InjectOptionalRawHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa5071d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"InjectOptionalRawHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand.InjectOptionalSyntheticHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::Input::SyntheticControllerInHand::InjectOptionalSyntheticHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa5072a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"InjectOptionalSyntheticHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)()>(&::Oculus::Interaction::Input::SyntheticControllerInHand::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa507374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::SyntheticControllerInHand._Start_b__13_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::SyntheticControllerInHand::*)()>(&::Oculus::Interaction::Input::SyntheticControllerInHand::_Start_b__13_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa50740c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"<Start>b__13_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__rawHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawHand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__rawHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rawHand;
}
constexpr void Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_set__rawHand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rawHand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__RawHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RawHand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__RawHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RawHand_k__BackingField;
}
constexpr void Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_set__RawHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RawHand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__syntheticHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syntheticHand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__syntheticHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syntheticHand;
}
constexpr void Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_set__syntheticHand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syntheticHand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__SyntheticHand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SyntheticHand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__SyntheticHand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SyntheticHand_k__BackingField;
}
constexpr void Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_set__SyntheticHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SyntheticHand_k__BackingField = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__handToController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handToController;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__handToController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handToController;
}
constexpr void Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_set__handToController(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handToController = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__rootToPointer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootToPointer;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_get__rootToPointer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rootToPointer;
}
constexpr void Oculus::Interaction::Input::SyntheticControllerInHand::__cordl_internal_set__rootToPointer(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rootToPointer = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Input::SyntheticControllerInHand::get_RawHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"get_RawHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::set_RawHand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"set_RawHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::Input::SyntheticControllerInHand::get_SyntheticHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"get_SyntheticHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::set_SyntheticHand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"set_SyntheticHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::Apply(::Oculus::Interaction::Input::ControllerDataAsset*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::UpdateOffsets(::Oculus::Interaction::Input::ControllerDataAsset*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"UpdateOffsets", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::ApplyOffsets(::Oculus::Interaction::Input::ControllerDataAsset*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"ApplyOffsets", {}, {::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline bool Oculus::Interaction::Input::SyntheticControllerInHand::TryGetTrackingRoot(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::ControllerDataAsset*  controller, ::by_ref<::UnityEngine::Pose>  root)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"TryGetTrackingRoot", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::ControllerDataAsset*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hand, controller, root);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::InjectAllSyntheticControllerInHand(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*  modifyDataFromSource, bool  applyModifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"InjectAllSyntheticControllerInHand", {}, {::i2c::type_of<::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource*>(), ::i2c::type_of<::Oculus::Interaction::Input::IDataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updateMode, updateAfter, modifyDataFromSource, applyModifier);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::InjectOptionalRawHand(::Oculus::Interaction::Input::IHand*  rawHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"InjectOptionalRawHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawHand);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::InjectOptionalSyntheticHand(::Oculus::Interaction::Input::IHand*  syntheticHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"InjectOptionalSyntheticHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syntheticHand);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::SyntheticControllerInHand::_Start_b__13_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::SyntheticControllerInHand*>(),
                        {"<Start>b__13_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::SyntheticControllerInHand* Oculus::Interaction::Input::SyntheticControllerInHand::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::SyntheticControllerInHand*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::SyntheticControllerInHand::SyntheticControllerInHand()   {
}
