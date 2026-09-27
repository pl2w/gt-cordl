#pragma once
// IWYU pragma private; include "GlobalNamespace/BSPZoneData.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BSPZoneData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BSPZoneData.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BSPZoneData::*)()>(&::GlobalNamespace::BSPZoneData::get_Priority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b49b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPZoneData*>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPZoneData.get_ZoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BSPZoneData::*)()>(&::GlobalNamespace::BSPZoneData::get_ZoneName)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b49b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPZoneData*>(),
                        {"get_ZoneName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BSPZoneData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BSPZoneData::*)()>(&::GlobalNamespace::BSPZoneData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b49b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPZoneData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BSPZoneData::__cordl_internal_get_priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr int32_t const& GlobalNamespace::BSPZoneData::__cordl_internal_get_priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr void GlobalNamespace::BSPZoneData::__cordl_internal_set_priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priority = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::BoxCollider>>*& GlobalNamespace::BSPZoneData::__cordl_internal_get_boxList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boxList;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::BoxCollider>>* const& GlobalNamespace::BSPZoneData::__cordl_internal_get_boxList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boxList;
}
constexpr void GlobalNamespace::BSPZoneData::__cordl_internal_set_boxList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::BoxCollider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boxList = value;
}
inline int32_t GlobalNamespace::BSPZoneData::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPZoneData*>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BSPZoneData::get_ZoneName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPZoneData*>(),
                        {"get_ZoneName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BSPZoneData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BSPZoneData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BSPZoneData* GlobalNamespace::BSPZoneData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BSPZoneData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BSPZoneData::BSPZoneData()   {
}
