#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersBag.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersAttachPoint_AnchoredLocationTypes_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "GlobalNamespace/zzzz__CrittersBag_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "GlobalNamespace/zzzz__CrittersActor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrittersBag.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBag::*)()>(&::GlobalNamespace::CrittersBag::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x55fb684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBag.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBag::*)(bool)>(&::GlobalNamespace::CrittersBag::OnHover)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x55fb744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBag.CleanupActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBag::*)()>(&::GlobalNamespace::CrittersBag::CleanupActor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x55fb8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBag.GlobalGrabbedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBag::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersBag::GlobalGrabbedBy)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x55fb9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBag.GrabbedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBag::*)(::GlobalNamespace::CrittersActor*, bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, bool)>(&::GlobalNamespace::CrittersBag::GrabbedBy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fbb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBag.Released
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBag::*)(bool, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::CrittersBag::Released)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x55fbb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                    {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBag.AddStoredObjectCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBag::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersBag::AddStoredObjectCollider)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x55fc0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                        {"AddStoredObjectCollider", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBag.RemoveStoredObjectCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBag::*)(::GlobalNamespace::CrittersActor*, bool)>(&::GlobalNamespace::CrittersBag::RemoveStoredObjectCollider)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x55fc4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                        {"RemoveStoredObjectCollider", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBag.IsActorValidStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CrittersBag::*)(::GlobalNamespace::CrittersActor*)>(&::GlobalNamespace::CrittersBag::IsActorValidStore)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x55fc5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                        {"IsActorValidStore", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrittersBag._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrittersBag::*)()>(&::GlobalNamespace::CrittersBag::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55fc668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::CrittersBag::__cordl_internal_get_audioSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSrc;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::CrittersBag::__cordl_internal_get_audioSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSrc;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_audioSrc(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSrc = value;
}
constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes& GlobalNamespace::CrittersBag::__cordl_internal_get_anchorLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorLocation;
}
constexpr ::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes const& GlobalNamespace::CrittersBag::__cordl_internal_get_anchorLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorLocation;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_anchorLocation(::GlobalNamespace::CrittersAttachPoint_AnchoredLocationTypes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorLocation = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::CrittersBag::__cordl_internal_get_attachableCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachableCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::CrittersBag::__cordl_internal_get_attachableCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachableCollider;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_attachableCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachableCollider = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::CrittersBag::__cordl_internal_get_dropCube()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropCube;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::CrittersBag::__cordl_internal_get_dropCube() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropCube;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_dropCube(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropCube = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GlobalNamespace::CrittersBag::__cordl_internal_get_overlapColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GlobalNamespace::CrittersBag::__cordl_internal_get_overlapColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapColliders;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapColliders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::CrittersBag::__cordl_internal_get_attachDisableColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachDisableColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::CrittersBag::__cordl_internal_get_attachDisableColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachDisableColliders;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_attachDisableColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachDisableColliders = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::CrittersBag::__cordl_internal_get_attachedColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedColliders;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::CrittersBag::__cordl_internal_get_attachedColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedColliders;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_attachedColliders(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachedColliders = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersBag::__cordl_internal_get_attachSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersBag::__cordl_internal_get_attachSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachSound;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_attachSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersBag::__cordl_internal_get_detachSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersBag::__cordl_internal_get_detachSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detachSound;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_detachSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detachSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersBag::__cordl_internal_get_equipSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equipSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersBag::__cordl_internal_get_equipSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equipSound;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_equipSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equipSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::CrittersBag::__cordl_internal_get_unequipSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unequipSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::CrittersBag::__cordl_internal_get_unequipSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unequipSound;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_unequipSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unequipSound = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*& GlobalNamespace::CrittersBag::__cordl_internal_get_blockAttachTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockAttachTypes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>* const& GlobalNamespace::CrittersBag::__cordl_internal_get_blockAttachTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blockAttachTypes;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_blockAttachTypes(::System::Collections::Generic::List_1<::GlobalNamespace::CrittersActor_CrittersActorType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blockAttachTypes = value;
}
constexpr bool& GlobalNamespace::CrittersBag::__cordl_internal_get_isAttachedToPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAttachedToPlayer;
}
constexpr bool const& GlobalNamespace::CrittersBag::__cordl_internal_get_isAttachedToPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isAttachedToPlayer;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_isAttachedToPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isAttachedToPlayer = value;
}
constexpr bool& GlobalNamespace::CrittersBag::__cordl_internal_get_attachedToLocalPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedToLocalPlayer;
}
constexpr bool const& GlobalNamespace::CrittersBag::__cordl_internal_get_attachedToLocalPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachedToLocalPlayer;
}
constexpr void GlobalNamespace::CrittersBag::__cordl_internal_set_attachedToLocalPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachedToLocalPlayer = value;
}
inline void GlobalNamespace::CrittersBag::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersBag::OnHover(bool  isLeft)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft);
}
inline void GlobalNamespace::CrittersBag::CleanupActor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrittersBag::GlobalGrabbedBy(::GlobalNamespace::CrittersActor*  grabbedBy)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbedBy);
}
inline void GlobalNamespace::CrittersBag::GrabbedBy(::GlobalNamespace::CrittersActor*  grabbedBy, bool  positionOverride, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset, bool  disableGrabbing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbedBy, positionOverride, localRotation, localOffset, disableGrabbing);
}
inline void GlobalNamespace::CrittersBag::Released(bool  keepWorldPosition, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::UnityEngine::Vector3  impulse, ::UnityEngine::Vector3  impulseRotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CrittersBag*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keepWorldPosition, rotation, position, impulse, impulseRotation);
}
inline void GlobalNamespace::CrittersBag::AddStoredObjectCollider(::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                        {"AddStoredObjectCollider", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actor);
}
inline void GlobalNamespace::CrittersBag::RemoveStoredObjectCollider(::GlobalNamespace::CrittersActor*  actor, bool  playSound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                        {"RemoveStoredObjectCollider", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actor, playSound);
}
inline bool GlobalNamespace::CrittersBag::IsActorValidStore(::GlobalNamespace::CrittersActor*  actor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                        {"IsActorValidStore", {}, {::i2c::type_of<::GlobalNamespace::CrittersActor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actor);
}
inline void GlobalNamespace::CrittersBag::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CrittersBag*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrittersBag* GlobalNamespace::CrittersBag::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrittersBag*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrittersBag::CrittersBag()   {
}
