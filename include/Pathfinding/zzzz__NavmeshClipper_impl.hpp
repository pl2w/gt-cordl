#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshClipper.hpp"
#include "Pathfinding/zzzz__GraphMask_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "Pathfinding/zzzz__NavmeshClipper_def.hpp"
#include "Pathfinding/Util/zzzz__GraphTransform_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::Pathfinding::NavmeshClipper.AddEnableCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*, ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*)>(&::Pathfinding::NavmeshClipper::AddEnableCallback)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ea7458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                        {"AddEnableCallback", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClipper.RemoveEnableCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*, ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*)>(&::Pathfinding::NavmeshClipper::RemoveEnableCallback)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5ea75e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                        {"RemoveEnableCallback", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClipper.get_allEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>* (*)()>(&::Pathfinding::NavmeshClipper::get_allEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ea7778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                        {"get_allEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClipper.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshClipper::*)()>(&::Pathfinding::NavmeshClipper::OnEnable)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5ea77d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClipper.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshClipper::*)()>(&::Pathfinding::NavmeshClipper::OnDisable)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5ea7904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClipper.NotifyUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshClipper::*)()>(&::Pathfinding::NavmeshClipper::NotifyUpdated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClipper.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Pathfinding::NavmeshClipper::*)(::Pathfinding::Util::GraphTransform*)>(&::Pathfinding::NavmeshClipper::GetBounds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClipper.RequiresUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NavmeshClipper::*)()>(&::Pathfinding::NavmeshClipper::RequiresUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClipper.ForceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshClipper::*)()>(&::Pathfinding::NavmeshClipper::ForceUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                    {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NavmeshClipper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NavmeshClipper::*)()>(&::Pathfinding::NavmeshClipper::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ea73d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::NavmeshClipper::__cordl_internal_get_listIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listIndex;
}
constexpr int32_t const& Pathfinding::NavmeshClipper::__cordl_internal_get_listIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listIndex;
}
constexpr void Pathfinding::NavmeshClipper::__cordl_internal_set_listIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listIndex = value;
}
constexpr ::Pathfinding::GraphMask& Pathfinding::NavmeshClipper::__cordl_internal_get_graphMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphMask;
}
constexpr ::Pathfinding::GraphMask const& Pathfinding::NavmeshClipper::__cordl_internal_get_graphMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphMask;
}
constexpr void Pathfinding::NavmeshClipper::__cordl_internal_set_graphMask(::Pathfinding::GraphMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphMask = value;
}
inline void Pathfinding::NavmeshClipper::setStaticF_OnEnableCallback(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*, "OnEnableCallback", ::Pathfinding::NavmeshClipper*>(std::forward<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>(value));
}
inline ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>* Pathfinding::NavmeshClipper::getStaticF_OnEnableCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*, "OnEnableCallback", ::Pathfinding::NavmeshClipper*>();
}
inline void Pathfinding::NavmeshClipper::setStaticF_OnDisableCallback(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*, "OnDisableCallback", ::Pathfinding::NavmeshClipper*>(std::forward<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>(value));
}
inline ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>* Pathfinding::NavmeshClipper::getStaticF_OnDisableCallback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*, "OnDisableCallback", ::Pathfinding::NavmeshClipper*>();
}
inline void Pathfinding::NavmeshClipper::setStaticF_all(::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>*, "all", ::Pathfinding::NavmeshClipper*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>* Pathfinding::NavmeshClipper::getStaticF_all()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>*, "all", ::Pathfinding::NavmeshClipper*>();
}
inline void Pathfinding::NavmeshClipper::AddEnableCallback(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  onEnable, ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  onDisable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                        {"AddEnableCallback", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onEnable, onDisable);
}
inline void Pathfinding::NavmeshClipper::RemoveEnableCallback(::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  onEnable, ::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*  onDisable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                        {"RemoveEnableCallback", {}, {::i2c::type_of<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>(), ::i2c::type_of<::System::Action_1<::UnityW<::Pathfinding::NavmeshClipper>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onEnable, onDisable);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>* Pathfinding::NavmeshClipper::get_allEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                        {"get_allEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Pathfinding::NavmeshClipper>>*>(nullptr, ___internal_method);
}
inline void Pathfinding::NavmeshClipper::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshClipper::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshClipper::NotifyUpdated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rect Pathfinding::NavmeshClipper::GetBounds(::Pathfinding::Util::GraphTransform*  transform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method, transform);
}
inline bool Pathfinding::NavmeshClipper::RequiresUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::NavmeshClipper::ForceUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NavmeshClipper*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NavmeshClipper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NavmeshClipper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NavmeshClipper* Pathfinding::NavmeshClipper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NavmeshClipper*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NavmeshClipper::NavmeshClipper()   {
}
