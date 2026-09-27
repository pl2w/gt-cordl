#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPatrolPath.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRPatrolPath_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRPatrolPath.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPatrolPath::*)()>(&::GlobalNamespace::GRPatrolPath::Awake)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x589fd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPatrolPath*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPatrolPath.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPatrolPath::*)()>(&::GlobalNamespace::GRPatrolPath::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x589fef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPatrolPath*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRPatrolPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRPatrolPath::*)()>(&::GlobalNamespace::GRPatrolPath::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a024c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPatrolPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GRPatrolPath::__cordl_internal_get_patrolNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolNodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GRPatrolPath::__cordl_internal_get_patrolNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolNodes;
}
constexpr void GlobalNamespace::GRPatrolPath::__cordl_internal_set_patrolNodes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolNodes = value;
}
constexpr int32_t& GlobalNamespace::GRPatrolPath::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::GRPatrolPath::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::GRPatrolPath::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
inline void GlobalNamespace::GRPatrolPath::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPatrolPath*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPatrolPath::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPatrolPath*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRPatrolPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRPatrolPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRPatrolPath* GlobalNamespace::GRPatrolPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRPatrolPath*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPatrolPath::GRPatrolPath()   {
}
