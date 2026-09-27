#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtColliderTriggerProcessorsGroup.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtColliderTriggerProcessorsGroup_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtColliderTriggerProcessor_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup.SetCurrentTriggerProcessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::*)(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*)>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::SetCurrentTriggerProcessor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d226c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*>(),
                        {"SetCurrentTriggerProcessor", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup.GetCurrentTriggerProcessor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor> (::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::GetCurrentTriggerProcessor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d226c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*>(),
                        {"GetCurrentTriggerProcessor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup.ClearAllTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::ClearAllTriggers)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d226d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*>(),
                        {"ClearAllTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::*)()>(&::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d226dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>& Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::__cordl_internal_get__currentTriggerProcessor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTriggerProcessor;
}
constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor> const& Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::__cordl_internal_get__currentTriggerProcessor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTriggerProcessor;
}
constexpr void Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::__cordl_internal_set__currentTriggerProcessor(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTriggerProcessor = value;
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::SetCurrentTriggerProcessor(::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*  triggerProcessor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*>(),
                        {"SetCurrentTriggerProcessor", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerProcessor);
}
inline ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor> Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::GetCurrentTriggerProcessor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*>(),
                        {"GetCurrentTriggerProcessor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessor>>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::ClearAllTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*>(),
                        {"ClearAllTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup* Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup::GtColliderTriggerProcessorsGroup()   {
}
