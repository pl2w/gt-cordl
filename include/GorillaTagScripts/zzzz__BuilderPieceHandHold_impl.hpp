#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPieceHandHold.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPieceHandHold_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__IGorillaGrabable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::Initialize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b80f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.IsHandHoldMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::IsHandHoldMoving)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b80f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"IsHandHoldMoving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.MomentaryGrabOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::MomentaryGrabOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.CanBeGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderPieceHandHold::*)(::GlobalNamespace::GorillaGrabber*)>(&::GorillaTagScripts::BuilderPieceHandHold::CanBeGrabbed)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5b80fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                    {::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)(::GlobalNamespace::GorillaGrabber*, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaTagScripts::BuilderPieceHandHold::OnGrabbed)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5b81004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.OnGrabReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)(::GlobalNamespace::GorillaGrabber*)>(&::GorillaTagScripts::BuilderPieceHandHold::OnGrabReleased)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5b811b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)(bool)>(&::GorillaTagScripts::BuilderPieceHandHold::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b81270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::Tick)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b81278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.OnPieceCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)(int32_t, int32_t)>(&::GorillaTagScripts::BuilderPieceHandHold::OnPieceCreate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b8143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.OnPieceDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::OnPieceDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b81440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.OnPiecePlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::OnPiecePlacementDeserialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b81444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.OnPieceActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::OnPieceActivate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b81448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.OnPieceDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::OnPieceDeactivate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5b814e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5b8165c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::BuilderPieceHandHold.GorillaLocomotion_Gameplay_IGorillaGrabable_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::BuilderPieceHandHold::*)()>(&::GorillaTagScripts::BuilderPieceHandHold::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b816f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_initialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr bool const& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_initialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialized;
}
constexpr void GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_set_initialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialized = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_myCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_myCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myCollider;
}
constexpr void GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_set_myCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myCollider = value;
}
constexpr bool& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_forceMomentary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceMomentary;
}
constexpr bool const& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_forceMomentary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceMomentary;
}
constexpr void GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_set_forceMomentary(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceMomentary = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_myPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_myPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myPiece;
}
constexpr void GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myPiece = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_activeGrabbers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeGrabbers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>* const& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_activeGrabbers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeGrabbers;
}
constexpr void GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_set_activeGrabbers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaGrabber>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeGrabbers = value;
}
constexpr bool& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_isGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrabbed;
}
constexpr bool const& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get_isGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrabbed;
}
constexpr void GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_set_isGrabbed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGrabbed = value;
}
constexpr bool& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GorillaTagScripts::BuilderPieceHandHold::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GorillaTagScripts::BuilderPieceHandHold::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderPieceHandHold::IsHandHoldMoving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"IsHandHoldMoving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderPieceHandHold::MomentaryGrabOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"MomentaryGrabOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::BuilderPieceHandHold::CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabber);
}
inline void GorillaTagScripts::BuilderPieceHandHold::OnGrabbed(::GlobalNamespace::GorillaGrabber*  grabber, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber, grabbedTransform, localGrabbedPosition);
}
inline void GorillaTagScripts::BuilderPieceHandHold::OnGrabReleased(::GlobalNamespace::GorillaGrabber*  grabber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnGrabReleased", {}, {::i2c::type_of<::GlobalNamespace::GorillaGrabber*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber);
}
inline bool GorillaTagScripts::BuilderPieceHandHold::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPieceHandHold::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::BuilderPieceHandHold::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPieceHandHold::OnPieceCreate(int32_t  pieceType, int32_t  pieceId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPieceCreate", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pieceType, pieceId);
}
inline void GorillaTagScripts::BuilderPieceHandHold::OnPieceDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPieceDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPieceHandHold::OnPiecePlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPiecePlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPieceHandHold::OnPieceActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPieceActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPieceHandHold::OnPieceDeactivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"OnPieceDeactivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::BuilderPieceHandHold::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GorillaTagScripts::BuilderPieceHandHold::GorillaLocomotion_Gameplay_IGorillaGrabable_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::BuilderPieceHandHold*>(),
                        {"GorillaLocomotion.Gameplay.IGorillaGrabable.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GorillaTagScripts::BuilderPieceHandHold* GorillaTagScripts::BuilderPieceHandHold::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::BuilderPieceHandHold*>());
}
/// @brief Convert operator to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr  GorillaTagScripts::BuilderPieceHandHold::operator ::GorillaLocomotion::Gameplay::IGorillaGrabable*() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaLocomotion::Gameplay::IGorillaGrabable"
constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* GorillaTagScripts::BuilderPieceHandHold::i___GorillaLocomotion__Gameplay__IGorillaGrabable() noexcept {
return static_cast<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr  GorillaTagScripts::BuilderPieceHandHold::operator ::GlobalNamespace::IBuilderPieceComponent*() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* GorillaTagScripts::BuilderPieceHandHold::i___GlobalNamespace__IBuilderPieceComponent() noexcept {
return static_cast<::GlobalNamespace::IBuilderPieceComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTagScripts::BuilderPieceHandHold::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTagScripts::BuilderPieceHandHold::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::BuilderPieceHandHold::BuilderPieceHandHold()   {
}
