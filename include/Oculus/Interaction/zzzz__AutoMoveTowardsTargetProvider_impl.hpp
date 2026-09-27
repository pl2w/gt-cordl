#pragma once
// IWYU pragma private; include "Oculus/Interaction/AutoMoveTowardsTargetProvider.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__AutoMoveTowardsTargetProvider_def.hpp"
#include "Oculus/Interaction/zzzz__AutoMoveTowardsTarget_def.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IPointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.get_TravellingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseTravelData (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)()>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::get_TravellingData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa472970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"get_TravellingData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.set_TravellingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)(::Oculus::Interaction::PoseTravelData)>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::set_TravellingData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa47297c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"set_TravellingData", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.get_PointableElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IPointableElement* (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)()>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::get_PointableElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa472990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"get_PointableElement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.set_PointableElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)(::Oculus::Interaction::IPointableElement*)>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::set_PointableElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa472998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"set_PointableElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)()>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4729a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)()>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4729f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)()>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::LateUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa472a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.CreateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)()>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::CreateMovement)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa472b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.HandleAborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)(::Oculus::Interaction::AutoMoveTowardsTarget*)>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::HandleAborted)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa472e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"HandleAborted", {}, {::i2c::type_of<::Oculus::Interaction::AutoMoveTowardsTarget*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.InjectAllAutoMoveTowardsTargetProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)(::Oculus::Interaction::IPointableElement*)>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::InjectAllAutoMoveTowardsTargetProvider)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa472ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"InjectAllAutoMoveTowardsTargetProvider", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider.InjectPointableElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)(::Oculus::Interaction::IPointableElement*)>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::InjectPointableElement)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa472ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"InjectPointableElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::AutoMoveTowardsTargetProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::AutoMoveTowardsTargetProvider::*)()>(&::Oculus::Interaction::AutoMoveTowardsTargetProvider::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa4730c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::PoseTravelData& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__travellingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travellingData;
}
constexpr ::Oculus::Interaction::PoseTravelData const& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__travellingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travellingData;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_set__travellingData(::Oculus::Interaction::PoseTravelData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____travellingData = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__pointableElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointableElement;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__pointableElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointableElement;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_set__pointableElement(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointableElement = value;
}
constexpr ::Oculus::Interaction::IPointableElement*& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__PointableElement_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointableElement_k__BackingField;
}
constexpr ::Oculus::Interaction::IPointableElement* const& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__PointableElement_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointableElement_k__BackingField;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_set__PointableElement_k__BackingField(::Oculus::Interaction::IPointableElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PointableElement_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__movers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movers;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::AutoMoveTowardsTarget*>* const& Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_get__movers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movers;
}
constexpr void Oculus::Interaction::AutoMoveTowardsTargetProvider::__cordl_internal_set__movers(::System::Collections::Generic::List_1<::Oculus::Interaction::AutoMoveTowardsTarget*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movers = value;
}
inline ::Oculus::Interaction::PoseTravelData Oculus::Interaction::AutoMoveTowardsTargetProvider::get_TravellingData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"get_TravellingData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseTravelData>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTargetProvider::set_TravellingData(::Oculus::Interaction::PoseTravelData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"set_TravellingData", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IPointableElement* Oculus::Interaction::AutoMoveTowardsTargetProvider::get_PointableElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"get_PointableElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IPointableElement*>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTargetProvider::set_PointableElement(::Oculus::Interaction::IPointableElement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"set_PointableElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::AutoMoveTowardsTargetProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTargetProvider::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTargetProvider::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::AutoMoveTowardsTargetProvider::CreateMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"CreateMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method);
}
inline void Oculus::Interaction::AutoMoveTowardsTargetProvider::HandleAborted(::Oculus::Interaction::AutoMoveTowardsTarget*  mover)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"HandleAborted", {}, {::i2c::type_of<::Oculus::Interaction::AutoMoveTowardsTarget*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mover);
}
inline void Oculus::Interaction::AutoMoveTowardsTargetProvider::InjectAllAutoMoveTowardsTargetProvider(::Oculus::Interaction::IPointableElement*  pointableElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"InjectAllAutoMoveTowardsTargetProvider", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointableElement);
}
inline void Oculus::Interaction::AutoMoveTowardsTargetProvider::InjectPointableElement(::Oculus::Interaction::IPointableElement*  pointableElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {"InjectPointableElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointableElement);
}
inline void Oculus::Interaction::AutoMoveTowardsTargetProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::AutoMoveTowardsTargetProvider* Oculus::Interaction::AutoMoveTowardsTargetProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::AutoMoveTowardsTargetProvider*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IMovementProvider"
constexpr  Oculus::Interaction::AutoMoveTowardsTargetProvider::operator ::Oculus::Interaction::IMovementProvider*() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovementProvider"
constexpr ::Oculus::Interaction::IMovementProvider* Oculus::Interaction::AutoMoveTowardsTargetProvider::i___Oculus__Interaction__IMovementProvider() noexcept {
return static_cast<::Oculus::Interaction::IMovementProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::AutoMoveTowardsTargetProvider::AutoMoveTowardsTargetProvider()   {
}
