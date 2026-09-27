#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshModifierVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshModifierVolume_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshModifierVolume::*)()>(&::UnityEngine::AI::NavMeshModifierVolume::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36b2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.set_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshModifierVolume::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshModifierVolume::set_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36b2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.get_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshModifierVolume::*)()>(&::UnityEngine::AI::NavMeshModifierVolume::get_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36b2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"get_center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.set_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshModifierVolume::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshModifierVolume::set_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa36b2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.get_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::AI::NavMeshModifierVolume::*)()>(&::UnityEngine::AI::NavMeshModifierVolume::get_area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"get_area", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.set_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshModifierVolume::*)(int32_t)>(&::UnityEngine::AI::NavMeshModifierVolume::set_area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa36b300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.get_activeModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>* (*)()>(&::UnityEngine::AI::NavMeshModifierVolume::get_activeModifiers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa36b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"get_activeModifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshModifierVolume::*)()>(&::UnityEngine::AI::NavMeshModifierVolume::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa36b360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshModifierVolume::*)()>(&::UnityEngine::AI::NavMeshModifierVolume::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa36b484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume.AffectsAgentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshModifierVolume::*)(int32_t)>(&::UnityEngine::AI::NavMeshModifierVolume::AffectsAgentType)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa36b504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"AffectsAgentType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshModifierVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshModifierVolume::*)()>(&::UnityEngine::AI::NavMeshModifierVolume::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa36b5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_get_m_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_get_m_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr void UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_set_m_Size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Size = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_get_m_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_get_m_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr void UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_set_m_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Center = value;
}
constexpr int32_t& UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_get_m_Area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Area;
}
constexpr int32_t const& UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_get_m_Area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Area;
}
constexpr void UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_set_m_Area(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Area = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_get_m_AffectedAgents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffectedAgents;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_get_m_AffectedAgents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffectedAgents;
}
constexpr void UnityEngine::AI::NavMeshModifierVolume::__cordl_internal_set_m_AffectedAgents(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AffectedAgents = value;
}
inline void UnityEngine::AI::NavMeshModifierVolume::setStaticF_s_NavMeshModifiers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*, "s_NavMeshModifiers", ::UnityEngine::AI::NavMeshModifierVolume*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>* UnityEngine::AI::NavMeshModifierVolume::getStaticF_s_NavMeshModifiers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*, "s_NavMeshModifiers", ::UnityEngine::AI::NavMeshModifierVolume*>();
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshModifierVolume::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshModifierVolume::set_size(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshModifierVolume::get_center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"get_center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshModifierVolume::set_center(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::AI::NavMeshModifierVolume::get_area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"get_area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshModifierVolume::set_area(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>* UnityEngine::AI::NavMeshModifierVolume::get_activeModifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"get_activeModifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AI::NavMeshModifierVolume>>*>(nullptr, ___internal_method);
}
inline void UnityEngine::AI::NavMeshModifierVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshModifierVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AI::NavMeshModifierVolume::AffectsAgentType(int32_t  agentTypeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {"AffectsAgentType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, agentTypeID);
}
inline void UnityEngine::AI::NavMeshModifierVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshModifierVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshModifierVolume* UnityEngine::AI::NavMeshModifierVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AI::NavMeshModifierVolume*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshModifierVolume::NavMeshModifierVolume()   {
}
