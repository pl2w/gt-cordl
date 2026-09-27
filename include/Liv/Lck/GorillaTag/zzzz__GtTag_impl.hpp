#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTag.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTagType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTag_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTagType_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTag.TryGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Liv::Lck::GorillaTag::GtTagType, ::by_ref<::UnityEngine::Transform*>)>(&::Liv::Lck::GorillaTag::GtTag::TryGetTransform)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d2f220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {"TryGetTransform", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtTagType>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTag.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTag::*)()>(&::Liv::Lck::GorillaTag::GtTag::Awake)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d2f57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTag.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTag::*)()>(&::Liv::Lck::GorillaTag::GtTag::OnEnable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9d2f588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTag.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTag::*)()>(&::Liv::Lck::GorillaTag::GtTag::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9d2f620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::GtTag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::GtTag::*)()>(&::Liv::Lck::GorillaTag::GtTag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d2f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::GorillaTag::GtTagType& Liv::Lck::GorillaTag::GtTag::__cordl_internal_get_gtTagType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gtTagType;
}
constexpr ::Liv::Lck::GorillaTag::GtTagType const& Liv::Lck::GorillaTag::GtTag::__cordl_internal_get_gtTagType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gtTagType;
}
constexpr void Liv::Lck::GorillaTag::GtTag::__cordl_internal_set_gtTagType(::Liv::Lck::GorillaTag::GtTagType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gtTagType = value;
}
inline void Liv::Lck::GorillaTag::GtTag::setStaticF__cache(::System::Collections::Generic::Dictionary_2<::Liv::Lck::GorillaTag::GtTagType,::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Liv::Lck::GorillaTag::GtTagType,::UnityW<::UnityEngine::Transform>>*, "_cache", ::Liv::Lck::GorillaTag::GtTag*>(std::forward<::System::Collections::Generic::Dictionary_2<::Liv::Lck::GorillaTag::GtTagType,::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Liv::Lck::GorillaTag::GtTagType,::UnityW<::UnityEngine::Transform>>* Liv::Lck::GorillaTag::GtTag::getStaticF__cache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Liv::Lck::GorillaTag::GtTagType,::UnityW<::UnityEngine::Transform>>*, "_cache", ::Liv::Lck::GorillaTag::GtTag*>();
}
inline bool Liv::Lck::GorillaTag::GtTag::TryGetTransform(::Liv::Lck::GorillaTag::GtTagType  gtTagType, ::by_ref<::UnityEngine::Transform*>  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {"TryGetTransform", {}, {::i2c::type_of<::Liv::Lck::GorillaTag::GtTagType>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, gtTagType, transform);
}
inline void Liv::Lck::GorillaTag::GtTag::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTag::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTag::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::GtTag::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::GtTag*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::GorillaTag::GtTag* Liv::Lck::GorillaTag::GtTag::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::GtTag*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::GtTag::GtTag()   {
}
