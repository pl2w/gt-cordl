#pragma once
// IWYU pragma private; include "Oculus/Interaction/ColliderGroup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__ColliderGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ColliderGroup.get_Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::Oculus::Interaction::ColliderGroup::*)()>(&::Oculus::Interaction::ColliderGroup::get_Bounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa400798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ColliderGroup*>(),
                        {"get_Bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ColliderGroup.get_Colliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* (::Oculus::Interaction::ColliderGroup::*)()>(&::Oculus::Interaction::ColliderGroup::get_Colliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4007a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ColliderGroup*>(),
                        {"get_Colliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ColliderGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ColliderGroup::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, ::UnityEngine::Collider*)>(&::Oculus::Interaction::ColliderGroup::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4007a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ColliderGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& Oculus::Interaction::ColliderGroup::__cordl_internal_get__boundsCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundsCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Oculus::Interaction::ColliderGroup::__cordl_internal_get__boundsCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundsCollider;
}
constexpr void Oculus::Interaction::ColliderGroup::__cordl_internal_set__boundsCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boundsCollider = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& Oculus::Interaction::ColliderGroup::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& Oculus::Interaction::ColliderGroup::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void Oculus::Interaction::ColliderGroup::__cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliders = value;
}
inline ::UnityW<::UnityEngine::Collider> Oculus::Interaction::ColliderGroup::get_Bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ColliderGroup*>(),
                        {"get_Bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* Oculus::Interaction::ColliderGroup::get_Colliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ColliderGroup*>(),
                        {"get_Colliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(this, ___internal_method);
}
inline void Oculus::Interaction::ColliderGroup::_ctor(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders, ::UnityEngine::Collider*  boundsCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ColliderGroup*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colliders, boundsCollider);
}
inline ::Oculus::Interaction::ColliderGroup* Oculus::Interaction::ColliderGroup::New_ctor(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders, ::UnityEngine::Collider*  boundsCollider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ColliderGroup*>(colliders, boundsCollider));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ColliderGroup::ColliderGroup()   {
}
