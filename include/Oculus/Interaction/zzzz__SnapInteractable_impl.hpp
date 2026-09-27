#pragma once
// IWYU pragma private; include "Oculus/Interaction/SnapInteractable.hpp"
#include "Oculus/Interaction/zzzz__Interactable_2_impl.hpp"
#include "Oculus/Interaction/zzzz__SnapInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__CollisionInteractionRegistry_2_def.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IRigidbodyRef_def.hpp"
#include "Oculus/Interaction/zzzz__ISnapPoseDelegate_def.hpp"
#include "Oculus/Interaction/zzzz__SnapInteractor_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.get_Rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::SnapInteractable::*)()>(&::Oculus::Interaction::SnapInteractable::get_Rigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa461a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.get_SnapPoseDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::ISnapPoseDelegate* (::Oculus::Interaction::SnapInteractable::*)()>(&::Oculus::Interaction::SnapInteractable::get_SnapPoseDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa461a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"get_SnapPoseDelegate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.set_SnapPoseDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::ISnapPoseDelegate*)>(&::Oculus::Interaction::SnapInteractable::set_SnapPoseDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa461a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"set_SnapPoseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::ISnapPoseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.get_MovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovementProvider* (::Oculus::Interaction::SnapInteractable::*)()>(&::Oculus::Interaction::SnapInteractable::get_MovementProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa461a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"get_MovementProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.set_MovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&::Oculus::Interaction::SnapInteractable::set_MovementProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa461a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"set_MovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)()>(&::Oculus::Interaction::SnapInteractable::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa461a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)()>(&::Oculus::Interaction::SnapInteractable::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa461a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)()>(&::Oculus::Interaction::SnapInteractable::Start)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xa461b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.InteractorAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::SnapInteractor*)>(&::Oculus::Interaction::SnapInteractable::InteractorAdded)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa461d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.InteractorRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::SnapInteractor*)>(&::Oculus::Interaction::SnapInteractable::InteractorRemoved)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa461ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.SelectingInteractorAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::SnapInteractor*)>(&::Oculus::Interaction::SnapInteractable::SelectingInteractorAdded)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa461ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.SelectingInteractorRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::SnapInteractor*)>(&::Oculus::Interaction::SnapInteractable::SelectingInteractorRemoved)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa462144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.InteractorHoverUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::SnapInteractor*)>(&::Oculus::Interaction::SnapInteractable::InteractorHoverUpdated)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa462254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InteractorHoverUpdated", {}, {::i2c::type_of<::Oculus::Interaction::SnapInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.PoseForInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::SnapInteractor*, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::SnapInteractable::PoseForInteractor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa462374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"PoseForInteractor", {}, {::i2c::type_of<::Oculus::Interaction::SnapInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.GenerateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::SnapInteractable::*)(::by_ref<::UnityEngine::Pose>, ::Oculus::Interaction::SnapInteractor*)>(&::Oculus::Interaction::SnapInteractable::GenerateMovement)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa4624dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::SnapInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.InjectAllSnapInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::SnapInteractable::InjectAllSnapInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4626e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InjectAllSnapInteractable", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.InjectRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::SnapInteractable::InjectRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4626ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.InjectOptionalMovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&::Oculus::Interaction::SnapInteractable::InjectOptionalMovementProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4626f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InjectOptionalMovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable.InjectOptionalSnapPoseDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)(::Oculus::Interaction::ISnapPoseDelegate*)>(&::Oculus::Interaction::SnapInteractable::InjectOptionalSnapPoseDelegate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4627c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InjectOptionalSnapPoseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::ISnapPoseDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)()>(&::Oculus::Interaction::SnapInteractable::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa462894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::SnapInteractable._Start_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::SnapInteractable::*)()>(&::Oculus::Interaction::SnapInteractable::_Start_b__16_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa462900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"<Start>b__16_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::SnapInteractable::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::SnapInteractable::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::SnapInteractable::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::SnapInteractable::__cordl_internal_get__snapPoseDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapPoseDelegate;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::SnapInteractable::__cordl_internal_get__snapPoseDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapPoseDelegate;
}
constexpr void Oculus::Interaction::SnapInteractable::__cordl_internal_set__snapPoseDelegate(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapPoseDelegate = value;
}
constexpr ::Oculus::Interaction::ISnapPoseDelegate*& Oculus::Interaction::SnapInteractable::__cordl_internal_get__SnapPoseDelegate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SnapPoseDelegate_k__BackingField;
}
constexpr ::Oculus::Interaction::ISnapPoseDelegate* const& Oculus::Interaction::SnapInteractable::__cordl_internal_get__SnapPoseDelegate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SnapPoseDelegate_k__BackingField;
}
constexpr void Oculus::Interaction::SnapInteractable::__cordl_internal_set__SnapPoseDelegate_k__BackingField(::Oculus::Interaction::ISnapPoseDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SnapPoseDelegate_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::SnapInteractable::__cordl_internal_get__movementProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::SnapInteractable::__cordl_internal_get__movementProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementProvider;
}
constexpr void Oculus::Interaction::SnapInteractable::__cordl_internal_set__movementProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movementProvider = value;
}
constexpr ::Oculus::Interaction::IMovementProvider*& Oculus::Interaction::SnapInteractable::__cordl_internal_get__MovementProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementProvider_k__BackingField;
}
constexpr ::Oculus::Interaction::IMovementProvider* const& Oculus::Interaction::SnapInteractable::__cordl_internal_get__MovementProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementProvider_k__BackingField;
}
constexpr void Oculus::Interaction::SnapInteractable::__cordl_internal_set__MovementProvider_k__BackingField(::Oculus::Interaction::IMovementProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementProvider_k__BackingField = value;
}
inline void Oculus::Interaction::SnapInteractable::setStaticF__registry(::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>>*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>>*, "_registry", ::Oculus::Interaction::SnapInteractable*>(std::forward<::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>>*>(value));
}
inline ::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>>* Oculus::Interaction::SnapInteractable::getStaticF__registry()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::SnapInteractor>,::UnityW<::Oculus::Interaction::SnapInteractable>>*, "_registry", ::Oculus::Interaction::SnapInteractable*>();
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::SnapInteractable::get_Rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::Oculus::Interaction::ISnapPoseDelegate* Oculus::Interaction::SnapInteractable::get_SnapPoseDelegate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"get_SnapPoseDelegate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::ISnapPoseDelegate*>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractable::set_SnapPoseDelegate(::Oculus::Interaction::ISnapPoseDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"set_SnapPoseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::ISnapPoseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IMovementProvider* Oculus::Interaction::SnapInteractable::get_MovementProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"get_MovementProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovementProvider*>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractable::set_MovementProvider(::Oculus::Interaction::IMovementProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"set_MovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::SnapInteractable::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractable::InteractorAdded(::Oculus::Interaction::SnapInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::SnapInteractable::InteractorRemoved(::Oculus::Interaction::SnapInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::SnapInteractable::SelectingInteractorAdded(::Oculus::Interaction::SnapInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::SnapInteractable::SelectingInteractorRemoved(::Oculus::Interaction::SnapInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void Oculus::Interaction::SnapInteractable::InteractorHoverUpdated(::Oculus::Interaction::SnapInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InteractorHoverUpdated", {}, {::i2c::type_of<::Oculus::Interaction::SnapInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline bool Oculus::Interaction::SnapInteractable::PoseForInteractor(::Oculus::Interaction::SnapInteractor*  interactor, ::by_ref<::UnityEngine::Pose>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"PoseForInteractor", {}, {::i2c::type_of<::Oculus::Interaction::SnapInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, result);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::SnapInteractable::GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  from, ::Oculus::Interaction::SnapInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::Oculus::Interaction::SnapInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method, from, interactor);
}
inline void Oculus::Interaction::SnapInteractable::InjectAllSnapInteractable(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InjectAllSnapInteractable", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::SnapInteractable::InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::SnapInteractable::InjectOptionalMovementProvider(::Oculus::Interaction::IMovementProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InjectOptionalMovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void Oculus::Interaction::SnapInteractable::InjectOptionalSnapPoseDelegate(::Oculus::Interaction::ISnapPoseDelegate*  snapPoseDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"InjectOptionalSnapPoseDelegate", {}, {::i2c::type_of<::Oculus::Interaction::ISnapPoseDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapPoseDelegate);
}
inline void Oculus::Interaction::SnapInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::SnapInteractable::_Start_b__16_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::SnapInteractable*>(),
                        {"<Start>b__16_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::SnapInteractable* Oculus::Interaction::SnapInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::SnapInteractable*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr  Oculus::Interaction::SnapInteractable::operator ::Oculus::Interaction::IRigidbodyRef*() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* Oculus::Interaction::SnapInteractable::i___Oculus__Interaction__IRigidbodyRef() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::SnapInteractable::SnapInteractable()   {
}
