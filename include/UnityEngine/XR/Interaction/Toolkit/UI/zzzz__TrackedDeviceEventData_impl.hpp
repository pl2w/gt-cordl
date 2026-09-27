#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/TrackedDeviceEventData.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceEventData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)(::UnityEngine::EventSystems::EventSystem*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4344c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData.get_rayPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_rayPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4344d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_rayPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData.set_rayPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_rayPoints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4344d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"set_rayPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData.get_rayHitIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_rayHitIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4344e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_rayHitIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData.set_rayHitIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_rayHitIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4344f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"set_rayHitIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData.get_layerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4344f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_layerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData.set_layerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_layerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb434500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"set_layerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData.get_interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_interactor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb434508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_interactor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData.get_pressWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_pressWorldPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4346f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_pressWorldPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData.set_pressWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_pressWorldPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb434708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"set_pressWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_get__rayPoints_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayPoints_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_get__rayPoints_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayPoints_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_set__rayPoints_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayPoints_k__BackingField = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_get__rayHitIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayHitIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_get__rayHitIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rayHitIndex_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_set__rayHitIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rayHitIndex_k__BackingField = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_get__layerMask_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask_k__BackingField;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_get__layerMask_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_set__layerMask_k__BackingField(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerMask_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_get__pressWorldPosition_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressWorldPosition_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_get__pressWorldPosition_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressWorldPosition_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::__cordl_internal_set__pressWorldPosition_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressWorldPosition_k__BackingField = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::EventSystems::EventSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventSystem);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_rayPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_rayPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_rayPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"set_rayPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_rayHitIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_rayHitIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_rayHitIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"set_rayHitIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_layerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_layerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_layerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"set_layerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_interactor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_interactor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::get_pressWorldPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"get_pressWorldPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::set_pressWorldPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(),
                        {"set_pressWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::New_ctor(::UnityEngine::EventSystems::EventSystem*  eventSystem)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>(eventSystem));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData::TrackedDeviceEventData()   {
}
