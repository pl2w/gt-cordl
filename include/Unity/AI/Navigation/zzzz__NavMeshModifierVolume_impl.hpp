#pragma once
// IWYU pragma private; include "Unity/AI/Navigation/NavMeshModifierVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/AI/Navigation/zzzz__NavMeshModifierVolume_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.get_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::AI::Navigation::NavMeshModifierVolume::*)()>(&::Unity::AI::Navigation::NavMeshModifierVolume::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae740e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"get_size", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.set_size
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshModifierVolume::*)(::UnityEngine::Vector3)>(&::Unity::AI::Navigation::NavMeshModifierVolume::set_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae740f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.get_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::AI::Navigation::NavMeshModifierVolume::*)()>(&::Unity::AI::Navigation::NavMeshModifierVolume::get_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae740fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"get_center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.set_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshModifierVolume::*)(::UnityEngine::Vector3)>(&::Unity::AI::Navigation::NavMeshModifierVolume::set_center)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xae74108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.get_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::AI::Navigation::NavMeshModifierVolume::*)()>(&::Unity::AI::Navigation::NavMeshModifierVolume::get_area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae74114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"get_area", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.set_area
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshModifierVolume::*)(int32_t)>(&::Unity::AI::Navigation::NavMeshModifierVolume::set_area)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae7411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.get_activeModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>* (*)()>(&::Unity::AI::Navigation::NavMeshModifierVolume::get_activeModifiers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae74124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"get_activeModifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.ClearNavMeshModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::AI::Navigation::NavMeshModifierVolume::ClearNavMeshModifiers)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xae7417c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"ClearNavMeshModifiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshModifierVolume::*)()>(&::Unity::AI::Navigation::NavMeshModifierVolume::OnEnable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xae74214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshModifierVolume::*)()>(&::Unity::AI::Navigation::NavMeshModifierVolume::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xae74338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume.AffectsAgentType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::AI::Navigation::NavMeshModifierVolume::*)(int32_t)>(&::Unity::AI::Navigation::NavMeshModifierVolume::AffectsAgentType)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae743b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"AffectsAgentType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::AI::Navigation::NavMeshModifierVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::AI::Navigation::NavMeshModifierVolume::*)()>(&::Unity::AI::Navigation::NavMeshModifierVolume::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xae74470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint8_t& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_SerializedVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedVersion;
}
constexpr uint8_t const& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_SerializedVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SerializedVersion;
}
constexpr void Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_set_m_SerializedVersion(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SerializedVersion = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_Size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_Size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Size;
}
constexpr void Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_set_m_Size(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Size = value;
}
constexpr ::UnityEngine::Vector3& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr ::UnityEngine::Vector3 const& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Center;
}
constexpr void Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_set_m_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Center = value;
}
constexpr int32_t& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_Area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Area;
}
constexpr int32_t const& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_Area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Area;
}
constexpr void Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_set_m_Area(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Area = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_AffectedAgents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffectedAgents;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_get_m_AffectedAgents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffectedAgents;
}
constexpr void Unity::AI::Navigation::NavMeshModifierVolume::__cordl_internal_set_m_AffectedAgents(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AffectedAgents = value;
}
inline void Unity::AI::Navigation::NavMeshModifierVolume::setStaticF_s_NavMeshModifiers(::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*, "s_NavMeshModifiers", ::Unity::AI::Navigation::NavMeshModifierVolume*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>* Unity::AI::Navigation::NavMeshModifierVolume::getStaticF_s_NavMeshModifiers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*, "s_NavMeshModifiers", ::Unity::AI::Navigation::NavMeshModifierVolume*>();
}
inline ::UnityEngine::Vector3 Unity::AI::Navigation::NavMeshModifierVolume::get_size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"get_size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshModifierVolume::set_size(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"set_size", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::AI::Navigation::NavMeshModifierVolume::get_center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"get_center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshModifierVolume::set_center(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"set_center", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Unity::AI::Navigation::NavMeshModifierVolume::get_area()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"get_area", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshModifierVolume::set_area(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"set_area", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>* Unity::AI::Navigation::NavMeshModifierVolume::get_activeModifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"get_activeModifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Unity::AI::Navigation::NavMeshModifierVolume>>*>(nullptr, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshModifierVolume::ClearNavMeshModifiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"ClearNavMeshModifiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshModifierVolume::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::AI::Navigation::NavMeshModifierVolume::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::AI::Navigation::NavMeshModifierVolume::AffectsAgentType(int32_t  agentTypeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {"AffectsAgentType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, agentTypeID);
}
inline void Unity::AI::Navigation::NavMeshModifierVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::AI::Navigation::NavMeshModifierVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::AI::Navigation::NavMeshModifierVolume* Unity::AI::Navigation::NavMeshModifierVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::AI::Navigation::NavMeshModifierVolume*>());
}
// Ctor Parameters []
constexpr ::Unity::AI::Navigation::NavMeshModifierVolume::NavMeshModifierVolume()   {
}
