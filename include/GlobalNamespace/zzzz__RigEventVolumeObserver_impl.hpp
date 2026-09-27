#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventVolumeObserver.hpp"
#include "GlobalNamespace/zzzz__RigEventVolumeObserver_RigEventVolumeObserverGameObject_Comparison_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_Text_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RigEventVolumeObserver_def.hpp"
#include "GlobalNamespace/zzzz__RigEventVolumeObserver_RigEventVolumeObserverGameObject_Comparison_def.hpp"
#include "GlobalNamespace/zzzz__RigEventVolumeObserver_def.hpp"
#include "GlobalNamespace/zzzz__RigEventVolume_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeObserver.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeObserver::*)()>(&::GlobalNamespace::RigEventVolumeObserver::Awake)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57440dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeObserver.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeObserver::*)()>(&::GlobalNamespace::RigEventVolumeObserver::OnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x57441d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeObserver.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeObserver::*)()>(&::GlobalNamespace::RigEventVolumeObserver::OnDisable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5744368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeObserver.Observed_OnCountChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeObserver::*)()>(&::GlobalNamespace::RigEventVolumeObserver::Observed_OnCountChanged)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5744264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"Observed_OnCountChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeObserver.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RigEventVolumeObserver::*)(::StringW)>(&::GlobalNamespace::RigEventVolumeObserver::Format)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x574441c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"Format", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeObserver._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeObserver::*)()>(&::GlobalNamespace::RigEventVolumeObserver::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57444a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RigEventVolume>& GlobalNamespace::RigEventVolumeObserver::__cordl_internal_get_observed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observed;
}
constexpr ::UnityW<::GlobalNamespace::RigEventVolume> const& GlobalNamespace::RigEventVolumeObserver::__cordl_internal_get_observed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___observed;
}
constexpr void GlobalNamespace::RigEventVolumeObserver::__cordl_internal_set_observed(::UnityW<::GlobalNamespace::RigEventVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___observed = value;
}
constexpr ::ArrayW<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>& GlobalNamespace::RigEventVolumeObserver::__cordl_internal_get_gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr ::ArrayW<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*> const& GlobalNamespace::RigEventVolumeObserver::__cordl_internal_get_gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr void GlobalNamespace::RigEventVolumeObserver::__cordl_internal_set_gameObjects(::ArrayW<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjects = value;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>>& GlobalNamespace::RigEventVolumeObserver::__cordl_internal_get_tMP_Texts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tMP_Texts;
}
constexpr ::ArrayW<::UnityW<::TMPro::TMP_Text>> const& GlobalNamespace::RigEventVolumeObserver::__cordl_internal_get_tMP_Texts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tMP_Texts;
}
constexpr void GlobalNamespace::RigEventVolumeObserver::__cordl_internal_set_tMP_Texts(::ArrayW<::UnityW<::TMPro::TMP_Text>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tMP_Texts = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::RigEventVolumeObserver::__cordl_internal_get_formats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formats;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::RigEventVolumeObserver::__cordl_internal_get_formats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___formats;
}
constexpr void GlobalNamespace::RigEventVolumeObserver::__cordl_internal_set_formats(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___formats = value;
}
inline void GlobalNamespace::RigEventVolumeObserver::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventVolumeObserver::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventVolumeObserver::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RigEventVolumeObserver::Observed_OnCountChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"Observed_OnCountChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RigEventVolumeObserver::Format(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {"Format", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, s);
}
inline void GlobalNamespace::RigEventVolumeObserver::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigEventVolumeObserver* GlobalNamespace::RigEventVolumeObserver::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigEventVolumeObserver*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigEventVolumeObserver::RigEventVolumeObserver()   {
}
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::*)(::GlobalNamespace::RigEventVolume*)>(&::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::Check)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x574452c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>(),
                        {"Check", {}, {::i2c::type_of<::GlobalNamespace::RigEventVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject.ApplyActiveState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::*)(::GlobalNamespace::RigEventVolume*)>(&::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::ApplyActiveState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57443f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>(),
                        {"ApplyActiveState", {}, {::i2c::type_of<::GlobalNamespace::RigEventVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::*)()>(&::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5744620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::__cordl_internal_get_gameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::__cordl_internal_get_gameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObject;
}
constexpr void GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::__cordl_internal_set_gameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObject = value;
}
constexpr ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison& GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::__cordl_internal_get_comparison()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparison;
}
constexpr ::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison const& GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::__cordl_internal_get_comparison() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparison;
}
constexpr void GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::__cordl_internal_set_comparison(::GlobalNamespace::RigEventVolumeObserverGameObject_RigEventVolumeObserver_Comparison  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparison = value;
}
constexpr int32_t& GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr int32_t const& GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::__cordl_internal_set_value(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline bool GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::Check(::GlobalNamespace::RigEventVolume*  rev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>(),
                        {"Check", {}, {::i2c::type_of<::GlobalNamespace::RigEventVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rev);
}
inline void GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::ApplyActiveState(::GlobalNamespace::RigEventVolume*  rev)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>(),
                        {"ApplyActiveState", {}, {::i2c::type_of<::GlobalNamespace::RigEventVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rev);
}
inline void GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject* GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigEventVolumeObserver_RigEventVolumeObserverGameObject::RigEventVolumeObserver_RigEventVolumeObserverGameObject()   {
}
